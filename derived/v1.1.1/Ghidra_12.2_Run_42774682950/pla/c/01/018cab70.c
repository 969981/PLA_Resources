/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018cab70; name: FUN_018cab70
 */


void FUN_018cab70(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  long *local_48;
  
  puVar7 = *(undefined1 **)(param_1 + 0x78);
  if ((puVar7 != &DAT_cbf29ce484222645) && (puVar7 != *(undefined1 **)(param_1 + 0x70))) {
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    uVar5 = *(undefined8 *)PTR_DAT_0437a788;
    *(undefined8 *)PTR_DAT_0437a790 = uVar5;
    lVar6 = FUN_01e65c40(uVar5,(undefined8 *)(param_1 + 0x78));
    puVar1 = PTR_DAT_04379e40;
    lVar8 = *(long *)(lVar6 + 0xf8);
    pcStack_80 = "FIELD";
    local_78 = 5;
    local_88 = lVar8;
    if (lVar8 < 0xa28a3fadc383db8) {
      if (lVar8 == -0x1f7c16258b94961b) {
        local_78 = 4;
        pcStack_80 = "TOWN";
      }
      else if (lVar8 == -0x678cfc2bd6a1e4d3) {
        local_78 = 7;
        pcStack_80 = "DUNGEON";
      }
      else {
        local_88 = -0x5d58438a2c777eb9;
        if (lVar8 == -0xe22df227dde96c5) {
          local_78 = 0xc;
          pcStack_80 = "LOCATION_LOW";
          local_88 = lVar8;
        }
      }
    }
    else if (lVar8 == 0xa28a3fadc383db8) {
      local_78 = 8;
      pcStack_80 = "FACILITY";
    }
    else if (lVar8 == 0x1eb4779ff0a632e3) {
      local_78 = 7;
      pcStack_80 = "VILLAGE";
    }
    else {
      local_88 = -0x5d58438a2c777eb9;
      if (lVar8 == 0x77a8d944f53332d7) {
        local_78 = 0xd;
        pcStack_80 = "LOCATION_HIGH";
        local_88 = lVar8;
      }
    }
    local_70 = (long *)0x0;
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
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
    if ((((*(int *)(lVar6 + 0x124) == param_2) || (*(int *)(lVar6 + 0x174) == param_2)) ||
        (*(int *)(lVar6 + 0x1c4) == param_2)) ||
       ((*(int *)(lVar6 + 0x214) == param_2 || (*(int *)(lVar6 + 0x264) == param_2)))) {
      if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      uVar5 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar5;
      FUN_02928c7c(uVar5,auStack_60,0,0);
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


