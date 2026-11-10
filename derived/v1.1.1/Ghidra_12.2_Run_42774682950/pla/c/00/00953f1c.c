/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00953f1c; name: FUN_00953f1c
 */


void FUN_00953f1c(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  long *local_a8;
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
  undefined8 uStack_48;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(*(long *)(param_1 + 0xa0) + 0x54) == 1) {
    local_b8 = (code *)0x397c2ec;
    local_c0 = 0xa10e466c1e1549c8;
  }
  else {
    local_b8 = (code *)0x3955e21;
    local_c0 = 0x4a7d8e6bed11b9d8;
  }
  local_b0 = 0x14;
  local_a8 = (long *)0x0;
  FUN_00ab9db4(&local_c0,0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  local_30 = 0xc;
  local_28 = (long *)0x0;
  local_40 = &DAT_a034849ed7eaabe6;
  pcStack_38 = "PM_N_487.bnk";
  uVar3 = *(undefined8 *)PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = uVar3;
  local_50 = 0;
  uStack_48 = 0;
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
  local_a8 = (long *)0x0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  FUN_02912fb8(uVar3,&local_40,0,&local_c0,0);
  pcVar1 = local_b8;
  if (local_b8 == (code *)0x0) {
    local_b8 = (code *)0x0;
  }
  else {
    local_b0 = 0;
    local_a8 = (long *)0x0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar1)(&local_a0);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


