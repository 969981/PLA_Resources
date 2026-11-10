/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7f978; name: FUN_01b7f978
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01b7f978(undefined8 param_1,long param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 local_580;
  char *local_578;
  undefined8 local_570;
  long *local_568;
  long *local_560;
  char *local_558;
  undefined8 local_550;
  long *local_548;
  undefined8 *local_540;
  char *pcStack_538;
  undefined8 local_530;
  long *local_528;
  undefined8 uStack_520;
  long *local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined4 local_500;
  undefined8 *local_4f8;
  undefined8 uStack_4f0;
  undefined8 *local_4e8;
  char *pcStack_4e0;
  undefined1 *local_4d8;
  long *local_4d0;
  undefined8 local_4c8;
  long *local_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 local_4b0;
  uint local_4ac;
  undefined4 local_4a8;
  undefined8 *local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  char *pcStack_488;
  undefined8 local_480;
  long *local_478;
  undefined4 local_470;
  undefined8 local_460;
  undefined8 local_458;
  undefined1 local_450;
  undefined1 *local_440;
  code *local_438;
  undefined1 *local_430;
  undefined1 *puStack_428;
  undefined1 auStack_420 [96];
  undefined8 local_3c0;
  code *local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [96];
  char local_340;
  undefined8 local_33c;
  char local_330;
  char local_310;
  char local_290;
  char local_250;
  char local_1c0;
  char local_180;
  char local_f0;
  char local_b0;
  long *local_90;
  long *local_70 [2];
  
  if (*param_3 != 3) {
    if (*param_3 != 0) {
      return;
    }
    if (param_3[0x3c] != 5) {
      if (param_3[0x3c] == 0x27) {
        FUN_01b78a38(param_2,param_3);
        return;
      }
      return;
    }
  }
  if (*(char *)(param_2 + 0x638) == '\0') {
    *(undefined8 *)(param_2 + 0x5d8) = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_2 + 0x5d0) = *(undefined8 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 0x638) = 1;
    *(undefined4 *)(param_2 + 0x5f8) = 2;
  }
  FUN_01b6ea8c(param_2,param_3);
  if (param_3[0x3c] == 0x18) {
    FUN_01b6eaf4(param_2,param_3);
  }
  FUN_01b6eaec(param_2,param_3);
  local_340 = '\0';
  local_330 = '\0';
  local_b0 = '\0';
  local_490 = 0x9cc25eca263a157d;
  pcStack_488 = "Bibiridama";
  local_480 = 10;
  local_478 = (long *)0x0;
  local_470 = 0x1d;
  local_440 = (undefined1 *)0x0;
  local_438 = (code *)0x0;
  local_430 = (undefined1 *)0x0;
  puStack_428 = (undefined1 *)0x0;
  local_3b0 = 0;
  uStack_3a8 = 0;
  local_3c0 = 0;
  local_3b8 = (code *)0x0;
  local_458 = *(undefined8 *)(param_3 + 6);
  local_460 = *(undefined8 *)(param_3 + 4);
  local_450 = 0;
  local_540 = (undefined8 *)0xda80426ba19412ee;
  pcStack_538 = "bibiri_frame";
  local_4e8 = (undefined8 *)&DAT_27e3c7e98334479c;
  pcStack_4e0 = "throwable_after_hit";
  local_4d8 = (undefined1 *)0x13;
  local_4d0 = (long *)0x0;
  local_530 = 0xc;
  local_528 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar13 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar13;
  FUN_00d7d9e4(&local_560,uVar13,&local_4e8);
  if (local_560 == (long *)0x0) {
    uVar16 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_00d78f50(local_560,&local_540);
    uVar16 = (ulong)uVar11;
    if (local_560 != (long *)0x0) {
      plVar17 = local_560 + 10;
      do {
        iVar12 = (int)*plVar17 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar12;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*local_560 + 0x10))();
      }
    }
  }
  if (local_340 == '\0') {
    local_33c = uVar16 | 0x100000000;
    local_340 = '\x01';
  }
  else {
    uVar8 = (uint)local_33c._4_4_ >> 8;
    local_33c._5_3_ = (undefined3)uVar8;
    local_33c._0_5_ = CONCAT14(1,uVar11);
  }
  if (local_528 != (long *)0x0) {
    (**(code **)(*local_528 + 0x20))();
  }
  if (local_4d0 != (long *)0x0) {
    (**(code **)(*local_4d0 + 0x20))();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x3ec);
  uVar3 = *(undefined4 *)(param_2 + 0x3f0);
  plVar17 = *(long **)(param_2 + 0x458);
  if (plVar17 == (long *)0x0) {
    plVar18 = *(long **)(param_2 + 0x478);
  }
  else {
    (**(code **)(*plVar17 + 0x18))(plVar17);
    plVar18 = *(long **)(param_2 + 0x478);
  }
  if (plVar18 == (long *)0x0) {
    plVar22 = *(long **)(param_2 + 0x498);
  }
  else {
    (**(code **)(*plVar18 + 0x18))(plVar18);
    plVar22 = *(long **)(param_2 + 0x498);
  }
  if (plVar22 == (long *)0x0) {
    plVar19 = *(long **)(param_2 + 0x4b8);
  }
  else {
    (**(code **)(*plVar22 + 0x18))(plVar22);
    plVar19 = *(long **)(param_2 + 0x4b8);
  }
  if (plVar19 == (long *)0x0) {
    plVar21 = *(long **)(param_2 + 0x4d8);
  }
  else {
    (**(code **)(*plVar19 + 0x18))(plVar19);
    plVar21 = *(long **)(param_2 + 0x4d8);
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x18))(plVar21);
  }
  plVar14 = *(long **)(param_2 + 0x4f8);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))();
  }
  local_4ac = local_4ac & 0xffffff00;
  local_4e8 = (undefined8 *)0x0;
  pcStack_4e0 = (char *)0x0;
  local_4d8 = &DAT_cbf29ce484222645;
  local_4d0 = (long *)&DAT_03996322;
  local_4c8 = 0;
  local_4c0 = (long *)0x0;
  local_4a0 = (undefined8 *)0x0;
  uStack_498 = 0;
  FUN_00b64344(&local_4e8,param_2 + 0x2a0);
  local_4d8 = *(undefined1 **)(param_2 + 0x480);
  local_4d0 = *(long **)(param_2 + 0x488);
  local_4c8 = *(undefined8 *)(param_2 + 0x490);
  plVar20 = *(long **)(param_2 + 0x498);
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  if (local_4c0 != (long *)0x0) {
    lVar15 = *local_4c0;
    local_4c0 = plVar20;
    (**(code **)(lVar15 + 0x20))();
    plVar20 = local_4c0;
  }
  local_4c0 = plVar20;
  local_4b8 = FUN_01b75988(param_2);
  uStack_4b4 = uVar2;
  local_4b0 = uVar3;
  FUN_01b75988(param_2);
  local_540 = (undefined8 *)0x0;
  pcStack_538 = (char *)0x0;
  FUN_00b64344(&local_540,&local_4e8);
  local_530 = local_4d8;
  local_518 = local_4c0;
  local_528 = local_4d0;
  uStack_520 = local_4c8;
  if (local_4c0 != (long *)0x0) {
    (**(code **)(*local_4c0 + 0x18))();
  }
  local_500 = local_4a8;
  local_510 = CONCAT44(uStack_4b4,local_4b8);
  uStack_508 = CONCAT44(local_4ac,local_4b0);
  local_4f8 = (undefined8 *)0x0;
  uStack_4f0 = 0;
  FUN_01b6a890(&local_4f8,&local_4a0);
  pcVar10 = local_438;
  if (local_438 != (code *)0x0) {
    local_430 = (undefined1 *)0x0;
    puStack_428 = (undefined1 *)0x0;
    local_440 = (undefined1 *)0x0;
    local_438 = (code *)0x0;
    (*pcVar10)(auStack_420);
  }
  local_440 = &LAB_01b827c0;
  local_438 = FUN_01b82890;
  local_430 = &LAB_01b82b94;
  puStack_428 = &LAB_01b82b98;
  FUN_01b82b9c(&local_3c0,&local_540);
  FUN_01b7847c(param_2,param_3,&local_490);
  local_558 = "throwable_after_hit";
  local_568 = (long *)0x0;
  local_560 = (long *)&DAT_27e3c7e98334479c;
  local_550 = 0x13;
  local_548 = (long *)0x0;
  local_578 = "bibiri_frame";
  local_580 = 0xda80426ba19412ee;
  local_570 = 0xc;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar13 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar13;
  FUN_00d7d9e4(local_70,uVar13,&local_560);
  if (local_70[0] == (long *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = FUN_00d78f50(local_70[0],&local_580);
    if (local_70[0] != (long *)0x0) {
      plVar20 = local_70[0] + 10;
      do {
        iVar6 = (int)*plVar20 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *(int *)plVar20 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
    }
  }
  if (local_568 != (long *)0x0) {
    (**(code **)(*local_568 + 0x20))();
  }
  if (local_548 != (long *)0x0) {
    (**(code **)(*local_548 + 0x20))();
  }
  FUN_01b780b4((float)iVar12 / 30.0,param_2,param_3);
  FUN_01b6ec48(param_2);
  puVar9 = local_4f8;
  if (local_4f8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_4f8 + 1);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      local_4f8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_560 = (long *)*puVar9;
      FUN_02a44274(lVar15 + 0xd8,&local_560);
    }
  }
  if (local_518 != (long *)0x0) {
    (**(code **)(*local_518 + 0x20))();
  }
  puVar9 = local_540;
  if (local_540 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_540 + 1);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      local_540[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_560 = (long *)*puVar9;
      FUN_02a44274(lVar15 + 0xd8,&local_560);
    }
  }
  puVar9 = local_4a0;
  if (local_4a0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_4a0 + 1);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      local_4a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_540 = (undefined8 *)*puVar9;
      FUN_02a44274(lVar15 + 0xd8,&local_540);
    }
  }
  if (local_4c0 != (long *)0x0) {
    (**(code **)(*local_4c0 + 0x20))();
  }
  puVar9 = local_4e8;
  if (local_4e8 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_4e8 + 1);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      local_4e8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_540 = (undefined8 *)*puVar9;
      FUN_02a44274(lVar15 + 0xd8,&local_540);
    }
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x20))(plVar21);
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))(plVar18);
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if (local_b0 != '\0') {
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    local_b0 = '\0';
  }
  pcVar10 = local_3b8;
  if (local_330 != '\0') {
    if (local_180 != '\0') {
      if (local_f0 != '\0') {
        local_f0 = '\0';
      }
      local_180 = '\0';
    }
    if (local_250 != '\0') {
      if (local_1c0 != '\0') {
        local_1c0 = '\0';
      }
      local_250 = '\0';
    }
    if (local_310 != '\0') {
      if (local_290 != '\0') {
        local_290 = '\0';
      }
      local_310 = '\0';
    }
  }
  local_340 = '\0';
  local_330 = '\0';
  bVar5 = local_3b8 != (code *)0x0;
  local_3b8 = (code *)0x0;
  pcVar7 = local_438;
  if (bVar5) {
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_3c0 = 0;
    local_3b8 = (code *)0x0;
    (*pcVar10)(auStack_3a0);
    pcVar7 = local_438;
  }
  local_438 = (code *)0x0;
  if (pcVar7 != (code *)0x0) {
    local_430 = (undefined1 *)0x0;
    puStack_428 = (undefined1 *)0x0;
    local_440 = (undefined1 *)0x0;
    local_438 = (code *)0x0;
    (*pcVar7)(auStack_420);
  }
  if (local_478 != (long *)0x0) {
    (**(code **)(*local_478 + 0x20))();
  }
  return;
}


