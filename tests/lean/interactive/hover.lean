import Lean

example : True := by
  apply True.intro
      --^ textDocument/hover

example : True := by
  simp [True.intro]
      --^ textDocument/hover

example (n : Nat) : True := by
  match n with
  | Nat.zero => _
  --^ textDocument/hover
  | n + 1 => _


/-- My tactic -/
macro "mytac" o:"only"? e:term : tactic => `(exact $e)

example : True := by
  mytac only True.intro
--^ textDocument/hover
      --^ textDocument/hover
           --^ textDocument/hover

/-- My way better tactic -/
macro_rules
  | `(tactic| mytac $[only]? $e:term) =>
    --^ textDocument/hover
                              --^ textDocument/hover
    `(tactic| apply $e:term)
    --^ textDocument/hover
                      --^ textDocument/hover

example : True := by
  mytac only True.intro
--^ textDocument/hover

/-- My ultimate tactic -/
elab_rules : tactic
  | `(tactic| mytac $[only]? $e) => do Lean.Elab.Tactic.evalTactic (← `(tactic| refine $e))

example : True := by
  mytac only True.intro
--^ textDocument/hover


/-- My notation -/
macro (name := myNota) "mynota" e:term : term => pure e
              --^ textDocument/hover

#check mynota 1
     --^ textDocument/hover

/-- My way better notation -/
macro_rules
  | `(mynota $e) => `(2 * $e)

#check mynota 1
     --^ textDocument/hover

-- macro_rules take precedence over elab_rules for term/command, so use new syntax
syntax "mynota'" term : term

/-- My ultimate notation -/
elab_rules : term
  | `(mynota' $e) => `($e * $e) >>= (Lean.Elab.Term.elabTerm · none)

#check mynota' 1
     --^ textDocument/hover

@[inheritDoc]
infix:65 (name := myInfix) " >+< " => Nat.add
                   --^ textDocument/hover
                                     --^ textDocument/hover

#check 1 >+< 2
        --^ textDocument/hover

/-- My command -/
macro "mycmd" e:term : command => do
  let seq ← `(Lean.Parser.Term.doSeq| $e:term)
            --^ textDocument/hover
  `(def hi := Id.run do $seq:doSeq)
                            --^ textDocument/hover

mycmd 1
--^ textDocument/hover

/-- My way better command -/
macro_rules
  | `(mycmd $e) => `(@[inline] def hi := $e)

mycmd 1
--^ textDocument/hover

syntax "mycmd'" ppSpace sepBy1(term, " + ") : command
              --^ textDocument/hover
                      --^ textDocument/hover
                             --^ textDocument/hover

/-- My ultimate command -/
elab_rules : command
  | `(mycmd' $e) => do Lean.Elab.Command.elabCommand (← `(/-- hi -/ @[inline] def hi := $e))

mycmd' 1
--^ textDocument/hover


#check ({ a := })  -- should not show `sorry`
        --^ textDocument/hover

example : True := by
  simp [id True.intro]
      --^ textDocument/hover
        --^ textDocument/hover


example : Id Nat := do
  let mut n := 1
  n := 2
--^ textDocument/hover
  n


opaque foo : Nat

#check _root_.foo
       --^ textDocument/hover

namespace Bar

opaque foo : Nat
     --^ textDocument/hover

#check _root_.foo
       --^ textDocument/hover

def bar := 1
  --^ textDocument/hover

structure Foo := mk ::
        --^ textDocument/hover
               --^ textDocument/hover
  hi : Nat
--^ textDocument/hover

inductive Bar
        --^ textDocument/hover
  | mk : Bar
  --^ textDocument/hover

instance : ToString Nat := ⟨toString⟩
--^ textDocument/hover
instance f : ToString Nat := ⟨toString⟩
       --^ textDocument/hover

example : Type 0 := Nat
        --^ textDocument/hover

def foo.bar : Nat := 1
  --^ textDocument/hover
      --^ textDocument/hover

example : Nat → Nat → Nat :=
  fun x y =>
    --^ textDocument/hover
  --v textDocument/definition
    x
  --^ textDocument/hover

example : Nat → Nat → Nat := by
  intro x y
      --^ textDocument/hover
      --v textDocument/definition
  exact x
      --^ textDocument/hover

def g (n : Nat) : Nat := g 0
termination_by g n => n
decreasing_by have n' := n; admit
                       --^ textDocument/hover

@[inline]
--^ textDocument/hover
def one := 1

example : True ∧ False := by
  constructor
  · constructor
--^ textDocument/hover

example : Nat := Id.run do (← 1)
                          --^ textDocument/hover
