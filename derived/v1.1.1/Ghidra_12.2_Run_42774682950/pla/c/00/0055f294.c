/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055f294; name: FUN_0055f294
 */


void FUN_0055f294(ulong *param_1,uint *param_2)

{
  uint uVar1;
  size_t sVar2;
  char *pcVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  
  if (*(long *)(param_2 + 4) == 0) {
    uVar1 = *param_2;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (0xd < uVar1) {
      uVar1 = 1;
    }
    pcVar3 = (&PTR_s_no_error_04186a58)[uVar1];
    sVar2 = strlen(pcVar3);
    if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar2 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)sVar2 << 1);
      if (sVar2 == 0) goto LAB_0055f440;
    }
    else {
      uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
      param_1[1] = sVar2;
      param_1[2] = (ulong)pvVar4;
      *param_1 = uVar5 | 1;
    }
    memcpy(pvVar4,pcVar3,sVar2);
LAB_0055f440:
    *(undefined1 *)((long)pvVar4 + sVar2) = 0;
    return;
  }
  uStack_50 = 0;
  local_48 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  uVar1 = *param_2;
  if (0xd < uVar1) {
    uVar1 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  pcVar3 = (&PTR_s_no_error_04186a58)[uVar1];
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0055f45c to 0055f463 has its CatchHandler @ 0055f46c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar2 << 1));
    pvVar4 = (void *)((ulong)&local_70 | 1);
    if (sVar2 == 0) goto LAB_0055f398;
  }
  else {
    uVar5 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    local_70 = uVar5 | 1;
    local_68 = sVar2;
    local_60 = pvVar4;
  }
  memcpy(pvVar4,pcVar3,sVar2);
LAB_0055f398:
  *(undefined1 *)((long)pvVar4 + sVar2) = 0;
  if ((local_70 & 1) == 0) {
    sVar2 = local_70 >> 1 & 0x7f;
    pvVar4 = (void *)((long)&local_70 + 1);
  }
  else {
    sVar2 = local_68;
    pvVar4 = local_60;
  }
                    /* try { // try from 0055f3b4 to 0055f3bb has its CatchHandler @ 0055f47c */
  FUN_002e4094(&local_58,pvVar4,sVar2);
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
                    /* try { // try from 0055f3d4 to 0055f3f3 has its CatchHandler @ 0055f4b4 */
  FUN_002e4094(&local_58,&DAT_039403eb,2);
  FUN_002e4094(&local_58,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  param_1[2] = local_48;
  param_1[1] = uStack_50;
  *param_1 = local_58;
  return;
}


