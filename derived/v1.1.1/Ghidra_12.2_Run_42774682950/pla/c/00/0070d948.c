/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070d948; name: FUN_0070d948
 */


void FUN_0070d948(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  size_t __n;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  FUN_006e8ad0(&local_80,pbVar3);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  puVar1 = PTR_DAT_04373798;
  if (*(undefined **)(param_2 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x20);
  }
  FUN_006d99e0(param_1 + 4,puVar1);
  pbVar3 = *(byte **)(param_2 + 0x18);
  if ((*pbVar3 & 1) == 0) {
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar2 = (long *)FUN_00612290();
  param_1[8] = plVar2;
  __n = strlen((char *)pbVar3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0070daac to 0070dab3 has its CatchHandler @ 0070dab4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x29);
    *(char *)(param_1 + 5) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0070da74;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,1);
    param_1[5] = uVar4 | 1;
    param_1[6] = __n;
    param_1[7] = __dest;
  }
  memcpy(__dest,pbVar3,__n);
LAB_0070da74:
  *(undefined1 *)((long)__dest + __n) = 0;
  puVar1 = PTR_DAT_04376540;
  if (*(undefined **)(param_2 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x28);
  }
  FUN_006fb110(param_1 + 9,puVar1);
  return;
}


