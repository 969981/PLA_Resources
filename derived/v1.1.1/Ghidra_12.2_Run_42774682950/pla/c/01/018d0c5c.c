/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d0c5c; name: FUN_018d0c5c
 */


void FUN_018d0c5c(long param_1,byte param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  uVar3 = *(undefined8 *)PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = uVar3;
  if ((param_2 & 1) == 0) {
    local_50 = 0x877e24252f03cff5;
    pcStack_48 = "SET_STATE_CAUTION_WILD_DMG_END";
    local_40 = 0x1e;
  }
  else {
    local_50 = 0xaf3db4ccf9d4dc0f;
    pcStack_48 = "SET_STATE_CAUTION_WILD_DMG";
    local_40 = 0x1a;
  }
  local_38 = (long *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  FUN_02913338(uVar3,&local_50,&local_d0,0,0,0);
  pcVar1 = local_c8;
  if (local_c8 == (code *)0x0) {
    local_c8 = (code *)0x0;
  }
  else {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar1)(&local_b0);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  *(byte *)(param_1 + 0x6f) = param_2 & 1;
  return;
}


