/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ea108; name: FUN_003ea108
 */


void FUN_003ea108(undefined4 *param_1,char *param_2,ulong param_3)

{
  size_t __n;
  void *__src;
  size_t __n_00;
  undefined4 uVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong local_58;
  size_t sStack_50;
  void *local_48;
  
  local_48 = (void *)0x0;
  local_58 = 0;
  sStack_50 = 0;
  __n_00 = strlen(param_2);
  if (0xffffffffffffffef < __n_00) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n_00 < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)__n_00 << 1));
    pvVar3 = (void *)((ulong)&local_58 | 1);
    if (__n_00 != 0) goto LAB_003ea188;
  }
  else {
    uVar4 = __n_00 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_58 = uVar4 | 1;
    sStack_50 = __n_00;
    local_48 = pvVar3;
LAB_003ea188:
    memcpy(pvVar3,param_2,__n_00);
  }
  __src = local_48;
  __n = sStack_50;
  uVar1 = 3;
  if ((param_3 & 1) == 0) {
    uVar1 = 4;
  }
  *(undefined1 *)((long)pvVar3 + __n_00) = 0;
  *param_1 = uVar1;
  puVar2 = (ulong *)(param_1 + 2);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  if ((local_58 & 1) == 0) {
    *(void **)(param_1 + 6) = local_48;
    *(size_t *)(param_1 + 4) = sStack_50;
    *puVar2 = local_58;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined4 **)(param_1 + 8) = param_1 + 10;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    return;
  }
  if (0xffffffffffffffef < sStack_50) {
                    /* try { // try from 003ea290 to 003ea297 has its CatchHandler @ 003ea298 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sStack_50 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 9);
    *(char *)puVar2 = (char)((int)sStack_50 << 1);
    if (sStack_50 == 0) goto LAB_003ea244;
  }
  else {
    uVar4 = sStack_50 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    *(ulong *)(param_1 + 2) = uVar4 | 1;
    *(size_t *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = pvVar3;
  }
  memcpy(pvVar3,__src,__n);
LAB_003ea244:
  *(undefined1 *)((long)pvVar3 + __n) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 10;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return;
}


