/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059d43c; name: FUN_0059d43c
 */


long FUN_0059d43c(char *param_1,undefined8 *param_2,ulong *param_3)

{
  long lVar1;
  size_t sVar2;
  char *__s;
  void *pvVar3;
  ulong uVar4;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong local_70;
  size_t local_68;
  void *local_60;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0xc0);
  if (lVar1 == 0) {
    return 0;
  }
  local_50 = 0;
  local_48 = (void *)0x0;
  local_58 = 0;
  sVar2 = strlen(param_1);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)sVar2 << 1));
    pvVar3 = (void *)((ulong)&local_58 | 1);
    if (sVar2 != 0) goto LAB_0059d4d8;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_58 = uVar4 | 1;
    local_50 = sVar2;
    local_48 = pvVar3;
LAB_0059d4d8:
    memcpy(pvVar3,param_1,sVar2);
  }
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  __s = (char *)*param_2;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0059d614 to 0059d61b has its CatchHandler @ 0059d61c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar2 << 1));
    pvVar3 = (void *)((ulong)&local_70 | 1);
    if (sVar2 == 0) goto LAB_0059d564;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_70 = uVar4 | 1;
    local_68 = sVar2;
    local_60 = pvVar3;
  }
  memcpy(pvVar3,__s,sVar2);
LAB_0059d564:
  *(undefined1 *)((long)pvVar3 + sVar2) = 0;
  uStack_88 = param_3[1];
  local_90 = *param_3;
  local_80 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
                    /* try { // try from 0059d580 to 0059d593 has its CatchHandler @ 0059d62c */
  FUN_003e7704(lVar1,&local_58,&local_70,&local_90);
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  return lVar1;
}


