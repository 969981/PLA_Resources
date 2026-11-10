/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009540a4; name: FUN_009540a4
 */


void FUN_009540a4(long param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_c0;
  code *local_b8;
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
  undefined8 uStack_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(char *)(*(long *)(param_1 + 0xa0) + 0x215) == '\0') {
    iVar1 = *(int *)(*(long *)(param_1 + 0xa0) + 0x54);
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    uVar4 = *(undefined8 *)PTR_DAT_04379c30;
    *(undefined8 *)PTR_DAT_04379c38 = uVar4;
    if (iVar1 == 1) {
      local_40 = 0x4177245393d7cd0b;
      pcStack_38 = "SET_STATE_BOSS06_END";
    }
    else {
      local_40 = 0xeaaf8c5362a5310b;
      pcStack_38 = "SET_STATE_BOSS06_OFF";
    }
    local_30 = 0x14;
    local_28 = (long *)0x0;
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
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    FUN_02913338(uVar4,&local_40,&local_c0,0,0,0);
    pcVar2 = local_b8;
    if (local_b8 == (code *)0x0) {
      local_b8 = (code *)0x0;
    }
    else {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar2)(&local_a0);
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


