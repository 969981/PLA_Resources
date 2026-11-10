/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065a0e8; name: FUN_0065a0e8
 */


void FUN_0065a0e8(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = *param_2;
  plVar1 = (long *)FUN_00612290();
  puVar3 = (undefined8 *)(param_1 + 2);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plVar1;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar5;
    *puVar3 = uVar2;
    goto LAB_0065a1b4;
  }
  __n = *(ulong *)(param_2 + 4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0065a298 to 0065a29f has its CatchHandler @ 0065a2a0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 6);
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)puVar3 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_0065a1a0;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 2) = uVar4 | 1;
    *(ulong *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
LAB_0065a1a0:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_0065a1b4:
  local_68 = 0;
  uStack_60 = FUN_00612290();
  uStack_58 = 0;
  local_70 = &local_68;
  if (*(char *)(param_2 + 10) == '\0') {
    uVar2 = 0;
    local_90 = &local_88;
    local_78 = 0;
    local_88 = local_68;
    uStack_80 = uStack_60;
  }
  else {
                    /* try { // try from 0065a1d8 to 0065a1df has its CatchHandler @ 0065a2a4 */
    FUN_0065675c(&local_90,param_2 + 0xc);
    uVar2 = local_68;
  }
  FUN_02767254(&local_70,uVar2);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_90;
  *(undefined8 *)(param_1 + 0x10) = uStack_80;
  *(undefined8 *)(param_1 + 0xe) = local_88;
  plVar1 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_78;
  if (local_78 == 0) {
    *(long **)(param_1 + 0xc) = plVar1;
  }
  else {
    *(long **)(*plVar1 + 0x10) = plVar1;
    local_78 = 0;
    local_90 = &local_88;
    local_88 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_02767254(&local_90,local_88);
                    /* try { // try from 0065a274 to 0065a27b has its CatchHandler @ 0065a2b4 */
  FUN_0065902c(param_1 + 0x14,param_3);
  return;
}


