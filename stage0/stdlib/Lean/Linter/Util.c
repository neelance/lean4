// Lean compiler output
// Module: Lean.Linter.Util
// Imports: Init Lean.Data.Options Lean.Elab.Command Lean.Server.InfoUtils
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6_(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__3;
static lean_object* l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__2;
uint8_t l___private_Lean_Server_InfoUtils_0__String_beqRange____x40_Lean_Server_InfoUtils___hyg_77_(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_InfoTree_visitM_go___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_zipWith___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_stackMatches___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__6;
static lean_object* l_Lean_Linter_stackMatches___closed__1;
static lean_object* l_Lean_Linter_logLint___closed__5;
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Linter_logLint___closed__3;
LEAN_EXPORT uint8_t l_Lean_Linter_stackMatches___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_logAt___at_Lean_Elab_Command_elabCommand___spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_stackMatches(lean_object*, lean_object*);
static lean_object* l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__3;
static lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2___closed__1;
static lean_object* l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__5;
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__2;
lean_object* l_Lean_Option_register___at_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_6____spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_String_Range_contains(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_all;
static lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__1;
static lean_object* l_Lean_Linter_logLint___closed__4;
uint8_t l_Lean_Elab_Info_contains(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__7;
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterAll(lean_object*, uint8_t);
static lean_object* l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__1;
uint8_t l_List_foldr___at_List_and___spec__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f___rarg___lambda__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_Lean_Linter_logLint___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_stackMatches___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Linter_findSyntaxStack_x3f_go___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterAll___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Linter_logLint___closed__1;
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterValue___boxed(lean_object*, lean_object*);
lean_object* l_Lean_KVMap_findCore(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTRAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Linter_findSyntaxStack_x3f_go___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__3(lean_object*);
static lean_object* _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("linter", 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__1;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("all", 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__2;
x_2 = l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__3;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("enable all linters", 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__7() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 0;
x_2 = l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__5;
x_3 = l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__6;
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__4;
x_3 = l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__7;
x_4 = l_Lean_Option_register___at_Lean_initFn____x40_Lean_PrettyPrinter_Delaborator_Options___hyg_6____spec__1(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterAll(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_Linter_linter_all;
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Lean_KVMap_findCore(x_1, x_4);
lean_dec(x_4);
if (lean_obj_tag(x_5) == 0)
{
return x_2;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_6, 0);
lean_dec(x_6);
return x_7;
}
else
{
lean_dec(x_6);
return x_2;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterAll___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Lean_Linter_getLinterAll(x_1, x_3);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_getLinterValue(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_Linter_getLinterAll(x_2, x_5);
x_7 = l_Lean_KVMap_findCore(x_2, x_3);
lean_dec(x_3);
if (lean_obj_tag(x_7) == 0)
{
return x_6;
}
else
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 1)
{
uint8_t x_9; 
x_9 = lean_ctor_get_uint8(x_8, 0);
lean_dec(x_8);
return x_9;
}
else
{
lean_dec(x_8);
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterValue___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Linter_getLinterValue(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Linter_logLint___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Linter_logLint___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes(" [", 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Linter_logLint___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Linter_logLint___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Linter_logLint___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("]", 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Linter_logLint___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Linter_logLint___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = l_Lean_Linter_logLint___closed__1;
x_9 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
x_10 = l_Lean_Linter_logLint___closed__3;
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
lean_inc(x_7);
x_12 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_12, 0, x_7);
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Lean_Linter_logLint___closed__5;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
lean_inc(x_7);
x_16 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_16, 0, x_7);
lean_ctor_set(x_16, 1, x_15);
x_17 = 1;
x_18 = l_Lean_logAt___at_Lean_Elab_Command_elabCommand___spec__4(x_2, x_16, x_17, x_4, x_5, x_6);
return x_18;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Linter_logLint(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_1 = x_4;
goto _start;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__1(x_7);
lean_ctor_set(x_1, 1, x_10);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__1(x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_1 = x_4;
goto _start;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__2(x_7);
lean_ctor_set(x_1, 1, x_10);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
x_13 = l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__2(x_11);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_Lean_Elab_InfoTree_visitM_go___rarg(x_1, x_2, x_3, x_5, x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__3___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__1(x_6);
x_8 = l_List_filterMap___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__2(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = 0;
x_11 = l_Lean_Elab_Info_contains(x_4, x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = lean_apply_2(x_13, lean_box(0), x_14);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_1, 1);
x_17 = 1;
x_18 = l_Lean_Elab_Info_contains(x_4, x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = lean_apply_2(x_20, lean_box(0), x_21);
return x_22;
}
else
{
if (lean_obj_tag(x_4) == 3)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_4, 0);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_box(0);
lean_inc(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_apply_2(x_25, lean_box(0), x_28);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_2, 0);
lean_inc(x_30);
lean_dec(x_2);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2___closed__1;
x_33 = lean_apply_2(x_31, lean_box(0), x_32);
return x_33;
}
}
}
}
else
{
if (lean_obj_tag(x_4) == 3)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_8);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_8, 0);
x_36 = lean_ctor_get(x_8, 1);
lean_dec(x_36);
x_37 = lean_ctor_get(x_4, 0);
x_38 = lean_ctor_get(x_2, 0);
lean_inc(x_38);
lean_dec(x_2);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
lean_inc(x_37);
lean_ctor_set(x_8, 1, x_35);
lean_ctor_set(x_8, 0, x_37);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_8);
x_41 = lean_apply_2(x_39, lean_box(0), x_40);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_42 = lean_ctor_get(x_8, 0);
lean_inc(x_42);
lean_dec(x_8);
x_43 = lean_ctor_get(x_4, 0);
x_44 = lean_ctor_get(x_2, 0);
lean_inc(x_44);
lean_dec(x_2);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
lean_inc(x_43);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_42);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_apply_2(x_45, lean_box(0), x_47);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_ctor_get(x_8, 0);
lean_inc(x_49);
lean_dec(x_8);
x_50 = lean_ctor_get(x_2, 0);
lean_inc(x_50);
lean_dec(x_2);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_49);
x_53 = lean_apply_2(x_51, lean_box(0), x_52);
return x_53;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2___boxed), 6, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_1);
x_6 = l_Lean_Elab_InfoTree_visitM___at_Lean_Linter_collectMacroExpansions_x3f_go___spec__3___rarg(x_1, x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Linter_collectMacroExpansions_x3f_go___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_List_reverse___rarg(x_13);
lean_ctor_set(x_7, 0, x_16);
x_17 = lean_apply_2(x_15, lean_box(0), x_7);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
lean_dec(x_7);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_List_reverse___rarg(x_18);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_apply_2(x_20, lean_box(0), x_22);
return x_23;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_1);
x_5 = l_Lean_Linter_collectMacroExpansions_x3f_go___rarg(x_1, x_2, x_3);
x_6 = lean_alloc_closure((void*)(l_Lean_Linter_collectMacroExpansions_x3f___rarg___lambda__1), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_collectMacroExpansions_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Linter_collectMacroExpansions_x3f___rarg), 3, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Linter_findSyntaxStack_x3f_go___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_7);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_inc(x_4);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_9);
lean_inc(x_3);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 0, x_11);
x_12 = l_Lean_Syntax_getArg(x_4, x_9);
lean_dec(x_9);
lean_inc(x_2);
lean_inc(x_1);
x_13 = l_Lean_Linter_findSyntaxStack_x3f_go(x_1, x_2, x_6, x_12);
if (lean_obj_tag(x_13) == 0)
{
{
lean_object* _tmp_5 = x_10;
lean_object* _tmp_6 = x_5;
x_6 = _tmp_5;
x_7 = _tmp_6;
}
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_13);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_13, 0);
lean_inc(x_19);
lean_dec(x_13);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_6, 0);
x_25 = lean_ctor_get(x_6, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_6);
lean_inc(x_24);
lean_inc(x_4);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_24);
lean_inc(x_3);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
x_28 = l_Lean_Syntax_getArg(x_4, x_24);
lean_dec(x_24);
lean_inc(x_2);
lean_inc(x_1);
x_29 = l_Lean_Linter_findSyntaxStack_x3f_go(x_1, x_2, x_27, x_28);
if (lean_obj_tag(x_29) == 0)
{
{
lean_object* _tmp_5 = x_25;
lean_object* _tmp_6 = x_5;
x_6 = _tmp_5;
x_7 = _tmp_6;
}
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 x_32 = x_29;
} else {
 lean_dec_ref(x_29);
 x_32 = lean_box(0);
}
if (lean_is_scalar(x_32)) {
 x_33 = lean_alloc_ctor(1, 1, 0);
} else {
 x_33 = x_32;
}
lean_ctor_set(x_33, 0, x_31);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
static lean_object* _init_l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Linter_findSyntaxStack_x3f_go___lambda__1___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__2;
x_2 = lean_box(0);
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_Lean_Syntax_getNumArgs(x_1);
x_7 = l_List_range(x_6);
x_8 = l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__1;
x_9 = l_List_forIn_loop___at_Lean_Linter_findSyntaxStack_x3f_go___spec__1(x_2, x_3, x_4, x_1, x_8, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__3;
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
return x_12;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l___private_Lean_Server_InfoUtils_0__String_beqRange____x40_Lean_Server_InfoUtils___hyg_77_(x_5, x_3);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_box(0);
x_9 = l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2(x_1, x_2, x_3, x_4, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_inc(x_1);
x_10 = l_Lean_Syntax_getKind(x_1);
lean_inc(x_2);
x_11 = l_Lean_Syntax_getKind(x_2);
x_12 = lean_name_eq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2(x_1, x_2, x_3, x_4, x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = 0;
lean_inc(x_4);
x_6 = l_Lean_Syntax_getRange_x3f(x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = l_String_Range_contains(x_8, x_9, x_5);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_box(0);
x_13 = l_Lean_Linter_findSyntaxStack_x3f_go___lambda__3(x_4, x_1, x_2, x_3, x_8, x_12);
return x_13;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_loop___at_Lean_Linter_findSyntaxStack_x3f_go___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_forIn_loop___at_Lean_Linter_findSyntaxStack_x3f_go___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Linter_findSyntaxStack_x3f_go___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f_go___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Linter_findSyntaxStack_x3f_go___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_findSyntaxStack_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 0;
lean_inc(x_2);
x_4 = l_Lean_Syntax_getRange_x3f(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_box(0);
x_8 = l_Lean_Linter_findSyntaxStack_x3f_go(x_2, x_6, x_7, x_1);
return x_8;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_stackMatches___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
lean_dec(x_1);
x_3 = 1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_Lean_Syntax_isOfKind(x_4, x_5);
return x_6;
}
}
}
static lean_object* _init_l_Lean_Linter_stackMatches___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Linter_stackMatches___lambda__1___boxed), 2, 0);
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_Linter_stackMatches(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_lengthTRAux___rarg(x_2, x_3);
x_5 = l_List_lengthTRAux___rarg(x_1, x_3);
x_6 = lean_nat_dec_le(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; 
x_8 = l_Lean_Linter_stackMatches___closed__1;
x_9 = l_List_zipWith___rarg(x_8, x_1, x_2);
x_10 = 1;
x_11 = l_List_foldr___at_List_and___spec__1(x_10, x_9);
lean_dec(x_9);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_stackMatches___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Linter_stackMatches___lambda__1(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_stackMatches___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Linter_stackMatches(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Data_Options(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Server_InfoUtils(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_Util(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Options(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_InfoUtils(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__1 = _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__1();
lean_mark_persistent(l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__1);
l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__2 = _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__2();
lean_mark_persistent(l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__2);
l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__3 = _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__3();
lean_mark_persistent(l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__3);
l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__4 = _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__4();
lean_mark_persistent(l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__4);
l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__5 = _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__5();
lean_mark_persistent(l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__5);
l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__6 = _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__6();
lean_mark_persistent(l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__6);
l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__7 = _init_l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__7();
lean_mark_persistent(l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6____closed__7);
if (builtin) {res = l_Lean_Linter_initFn____x40_Lean_Linter_Util___hyg_6_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_all = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_all);
lean_dec_ref(res);
}l_Lean_Linter_logLint___closed__1 = _init_l_Lean_Linter_logLint___closed__1();
lean_mark_persistent(l_Lean_Linter_logLint___closed__1);
l_Lean_Linter_logLint___closed__2 = _init_l_Lean_Linter_logLint___closed__2();
lean_mark_persistent(l_Lean_Linter_logLint___closed__2);
l_Lean_Linter_logLint___closed__3 = _init_l_Lean_Linter_logLint___closed__3();
lean_mark_persistent(l_Lean_Linter_logLint___closed__3);
l_Lean_Linter_logLint___closed__4 = _init_l_Lean_Linter_logLint___closed__4();
lean_mark_persistent(l_Lean_Linter_logLint___closed__4);
l_Lean_Linter_logLint___closed__5 = _init_l_Lean_Linter_logLint___closed__5();
lean_mark_persistent(l_Lean_Linter_logLint___closed__5);
l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2___closed__1 = _init_l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Linter_collectMacroExpansions_x3f_go___rarg___lambda__2___closed__1);
l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__1 = _init_l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__1);
l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__2 = _init_l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__2);
l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__3 = _init_l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Linter_findSyntaxStack_x3f_go___lambda__2___closed__3);
l_Lean_Linter_stackMatches___closed__1 = _init_l_Lean_Linter_stackMatches___closed__1();
lean_mark_persistent(l_Lean_Linter_stackMatches___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
