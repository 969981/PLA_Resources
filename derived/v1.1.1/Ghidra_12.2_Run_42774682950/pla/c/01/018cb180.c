/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018cb180; name: FUN_018cb180
 */


void FUN_018cb180(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  long *local_48;
  
  puVar1 = PTR_DAT_04379e40;
  lVar6 = *param_1;
  pcStack_80 = "FIELD";
  local_78 = 5;
  local_88 = lVar6;
  if (lVar6 < 0xa28a3fadc383db8) {
    if (lVar6 == -0x1f7c16258b94961b) {
      local_78 = 4;
      pcStack_80 = "TOWN";
    }
    else if (lVar6 == -0x678cfc2bd6a1e4d3) {
      local_78 = 7;
      pcStack_80 = "DUNGEON";
    }
    else {
      local_88 = -0x5d58438a2c777eb9;
      if (lVar6 == -0xe22df227dde96c5) {
        local_78 = 0xc;
        pcStack_80 = "LOCATION_LOW";
        local_88 = lVar6;
      }
    }
  }
  else if (lVar6 == 0xa28a3fadc383db8) {
    local_78 = 8;
    pcStack_80 = "FACILITY";
  }
  else if (lVar6 == 0x1eb4779ff0a632e3) {
    local_78 = 7;
    pcStack_80 = "VILLAGE";
  }
  else {
    local_88 = -0x5d58438a2c777eb9;
    if (lVar6 == 0x77a8d944f53332d7) {
      local_78 = 0xd;
      pcStack_80 = "LOCATION_HIGH";
      local_88 = lVar6;
    }
  }
  local_70 = (long *)0x0;
  if (((*PTR_DAT_04379e40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379e40);
  }
  puVar3 = PTR_DAT_04379e50;
  puVar2 = PTR_DAT_04379e48;
  uVar5 = *(undefined8 *)PTR_DAT_04379e48;
  *(undefined8 *)PTR_DAT_04379e50 = uVar5;
  FUN_029278b4(auStack_68,uVar5,&local_88);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (((((((int)param_1[5] == param_2) &&
         (auVar7 = FUN_018caa24(), (undefined1 *)*auVar7._0_8_ != &DAT_cbf29ce484222645)) ||
        (((int)param_1[0xf] == param_2 &&
         (auVar7 = FUN_018caa24(), (undefined1 *)*auVar7._0_8_ != &DAT_cbf29ce484222645)))) ||
       (((int)param_1[0x19] == param_2 &&
        (auVar7 = FUN_018caa24(), (undefined1 *)*auVar7._0_8_ != &DAT_cbf29ce484222645)))) ||
      (((int)param_1[0x23] == param_2 &&
       (auVar7 = FUN_018caa24(param_1 + 0x23), (undefined1 *)*auVar7._0_8_ != &DAT_cbf29ce484222645)
       ))) || (((int)param_1[0x2d] == param_2 &&
               (auVar7 = FUN_018caa24(param_1 + 0x2d),
               (undefined1 *)*auVar7._0_8_ != &DAT_cbf29ce484222645)))) {
    if (((*puVar1 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40,auVar7._8_8_,auVar7._0_8_), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar5 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar5;
    FUN_02928520(uVar5,auStack_60,auVar7._0_8_);
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    uVar5 = *(undefined8 *)puVar2;
    *(undefined8 *)puVar3 = uVar5;
    FUN_02928980(uVar5,auStack_60,0,0);
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


