/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00874624; name: FUN_00874624
 */


undefined8 FUN_00874624(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char *__s;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  void *pvVar5;
  ulong local_b8;
  size_t sStack_b0;
  void *local_a8;
  ulong local_a0;
  size_t local_98;
  void *local_90;
  ulong local_88;
  size_t sStack_80;
  void *local_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  if ((*(char *)(param_1 + 0x738) == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    return 0;
  }
  local_88 = CONCAT44(local_88._4_4_,6);
  pcVar3 = (char *)(param_1 + 0x738);
  local_70 = FUN_007ec6e4(param_1 + 0x80);
  local_48 = (undefined8 *)FUN_008764d0(&local_88,&local_70);
  FUN_0060bd68(param_2,&local_48);
  puVar1 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_002e2ea0(PTR_LAB_04373088,puVar1);
  }
  local_70 = CONCAT44(local_70._4_4_,0x14);
  local_50 = (undefined8 *)FUN_008765d0(&local_70,pcVar3);
  FUN_0060bd68(param_2,&local_50);
  puVar1 = local_50;
  local_50 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_002e2ea0(PTR_LAB_04373088,puVar1);
  }
  local_70 = CONCAT44(local_70._4_4_,0x15);
  local_58 = (undefined8 *)FUN_008765d0(&local_70,param_1 + 0x778);
  FUN_0060bd68(param_2,&local_58);
  puVar1 = local_58;
  local_58 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_002e2ea0(PTR_LAB_04373088,puVar1);
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  __s = (char *)FUN_007ec6e4(param_1 + 0x80);
  local_88 = 0;
  sStack_80 = 0;
  local_78 = (void *)0x0;
  sVar2 = strlen(__s);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_88 | 1);
    if (sVar2 != 0) goto LAB_008747d4;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_88 = uVar4 | 1;
    sStack_80 = sVar2;
    local_78 = pvVar5;
LAB_008747d4:
    memcpy(pvVar5,__s,sVar2);
  }
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  local_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_a0 | 1);
    if (sVar2 != 0) goto LAB_0087484c;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_a0 = uVar4 | 1;
    local_98 = sVar2;
    local_90 = pvVar5;
LAB_0087484c:
    memcpy(pvVar5,pcVar3,sVar2);
  }
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  pcVar3 = (char *)FUN_007ec6e4(param_1 + 0x2b0);
  local_b8 = 0;
  sStack_b0 = 0;
  local_a8 = (void *)0x0;
  sVar2 = strlen(pcVar3);
  if (0xffffffffffffffef < sVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar2 < 0x17) {
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar2 << 1));
    pvVar5 = (void *)((ulong)&local_b8 | 1);
    if (sVar2 == 0) goto LAB_008748dc;
  }
  else {
    uVar4 = sVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
    local_b8 = uVar4 | 1;
    sStack_b0 = sVar2;
    local_a8 = pvVar5;
  }
  memcpy(pvVar5,pcVar3,sVar2);
LAB_008748dc:
  *(undefined1 *)((long)pvVar5 + sVar2) = 0;
  FUN_0060e9a0(&local_88,&local_a0,&local_b8,&local_70);
  if ((local_b8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_a8);
  }
  if ((local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
  if ((local_88 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_78);
  }
  FUN_0060c138(param_2,&local_70);
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  return 1;
}


