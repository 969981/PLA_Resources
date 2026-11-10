/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028354b0; name: FUN_028354b0
 */


ulong FUN_028354b0(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_a0;
  code *local_98;
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
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (**(char **)(param_1 + 8) == '\0') {
    uVar4 = 0;
  }
  else {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28,param_1), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    local_30 = 0;
    uStack_28 = 0;
    uVar3 = *(undefined8 *)PTR_DAT_04379c30;
    local_40 = 0;
    uStack_38 = 0;
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
    local_98 = (code *)0x0;
    uVar4 = FUN_02913338(uVar3,param_1,&local_a0,0,0,0);
    pcVar1 = local_98;
    if (local_98 != (code *)0x0) {
      uVar4 = uVar4 & 0xffffffff;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      local_98 = (code *)0x0;
      (*pcVar1)(&local_80);
    }
  }
  return uVar4;
}


