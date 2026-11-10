/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302b5a0; name: FUN_0302b5a0
 */


void FUN_0302b5a0(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined1 auStack_88 [64];
  int local_48;
  uint local_44;
  
  *param_1 = (long)&PTR_LAB_042b1668;
  param_1[3] = (long)&PTR_LAB_042b1ae8;
  param_1[4] = (long)&PTR_LAB_042b1d70;
  FUN_0302d36c(param_1[0x114] + 0x28,param_1,&LAB_0302b318,0);
  FUN_0302d42c(param_1[0x113] + 0x28,param_1,&LAB_0302b21c,0);
  FUN_0302d4ec(param_1[0x113] + 0x18,param_1,&LAB_0302b11c,0);
  FUN_0302d5ac(param_1[0x115] + 0x18,param_1,&LAB_0302d66c,0);
  puVar1 = (ulong *)(param_1 + 0xd4);
  FUN_0302d690(puVar1,param_1);
  plVar7 = (long *)param_1[0xa2];
  param_1[0xa2] = 0;
  if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
LAB_0302b660:
    plVar7 = (long *)param_1[0x122];
    if (plVar7 == (long *)0x0) goto LAB_0302b668;
LAB_0302bef8:
    if (plVar7[1] != 0) {
      plVar11 = plVar7 + 2;
      do {
        lVar14 = *plVar11;
        cVar8 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar14 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    param_1[0x122] = 0;
    lVar14 = param_1[0x123];
    if (lVar14 != 0) goto LAB_0302bf24;
LAB_0302b670:
    lVar14 = param_1[0x93];
  }
  else {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302b660;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x122];
    if (plVar7 != (long *)0x0) goto LAB_0302bef8;
LAB_0302b668:
    lVar14 = param_1[0x123];
    if (lVar14 == 0) goto LAB_0302b670;
LAB_0302bf24:
    FUN_030f14e4(lVar14);
    lVar12 = tpidr_el0;
    lVar10 = *(long *)(lVar12 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0x28);
    param_1[0x123] = 0;
    lVar14 = param_1[0x93];
  }
  if (lVar14 != 0) {
    FUN_0310315c();
    lVar14 = param_1[0x93];
    param_1[0x93] = 0;
    if (lVar14 != 0) {
      FUN_03102ec4(lVar14);
      lVar12 = tpidr_el0;
      lVar10 = *(long *)(lVar12 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar10;
      }
      plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0x70);
    }
  }
  local_a0 = (long *)param_1[0x94];
  local_98 = auStack_88;
  local_48 = 0;
  local_90 = 0x8000000800000000;
  uVar6 = (**(code **)(*local_a0 + 0x50))();
  if (7 < (int)uVar6) {
    uVar6 = 8;
  }
  local_44 = uVar6;
  if ((int)(local_90._4_4_ & 0x3fffffff) < (int)uVar6) {
    uVar9 = (local_90._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar2 = uVar6;
    if ((int)uVar6 <= (int)uVar9) {
      uVar2 = uVar9;
    }
    local_98 = (undefined1 *)
               FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,local_98,local_90 & 0xffffffff,
                            (long)&local_90 + 4);
  }
  if ((uint)local_90 == uVar6) {
    lVar14 = param_1[0xa0];
  }
  else {
    local_90 = CONCAT44(local_90._4_4_,uVar6);
    lVar14 = param_1[0xa0];
  }
  if (lVar14 != 0) {
    FUN_0305db4c(lVar14,&local_a0);
    lVar14 = param_1[0xa0];
    if (lVar14 != 0) {
      FUN_0305ce0c(lVar14);
      lVar12 = tpidr_el0;
      lVar10 = *(long *)(lVar12 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar10;
      }
      plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0xbb0);
    }
  }
  plVar7 = (long *)param_1[0x112];
  param_1[0x112] = 0;
  if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
LAB_0302b788:
    lVar14 = param_1[0x121];
  }
  else {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302b788;
    (**(code **)(*plVar7 + 0x18))();
    lVar14 = param_1[0x121];
  }
  if (lVar14 != 0) {
    FUN_0301b094(lVar14);
    lVar12 = tpidr_el0;
    lVar10 = *(long *)(lVar12 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0x640);
  }
  plVar7 = (long *)param_1[0x95];
  plVar11 = (long *)plVar7[2];
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_a0);
    plVar7 = (long *)param_1[0x95];
    plVar11 = (long *)plVar7[2];
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar7 = (long *)param_1[0x95];
    }
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  lVar14 = param_1[0xa1];
  param_1[0x95] = 0;
  if (lVar14 != 0) {
    lVar12 = tpidr_el0;
    lVar10 = *(long *)(lVar12 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0x550);
  }
  if ((long *)param_1[0x96] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x96] + 0x10))();
  }
  lVar14 = param_1[0x92];
  if (lVar14 != 0) {
    *(undefined4 *)(lVar14 + 0x1458) = 0;
    if ((-1 < (int)*(uint *)(lVar14 + 0x145c)) && (*(long *)(lVar14 + 0x1450) != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,*(long *)(lVar14 + 0x1450),
                 ((ulong)*(uint *)(lVar14 + 0x145c) & 0x3fffffff) << 3);
    }
    *(undefined8 *)(lVar14 + 0x1450) = 0;
    *(undefined4 *)(lVar14 + 0x145c) = 0x80000000;
    lVar12 = tpidr_el0;
    lVar10 = *(long *)(lVar12 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0x1480);
  }
  if (local_48 != 0) {
    (**(code **)(*local_a0 + 0x28))(local_a0,local_98);
    local_48 = 0;
  }
  uVar5 = local_90;
  puVar4 = PTR_PTR_0434a080;
  uVar15 = local_90 >> 0x20;
  local_90 = uVar15 << 0x20;
  if (((long)uVar5 < 0) || (local_98 == (undefined1 *)0x0)) {
    plVar7 = (long *)param_1[0x11e];
  }
  else {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_98,(uVar15 & 0x3fffffff) << 3);
    plVar7 = (long *)param_1[0x11e];
  }
  if (plVar7 != (long *)0x0) {
    if (plVar7[1] != 0) {
      plVar11 = plVar7 + 2;
      do {
        lVar14 = *plVar11;
        cVar8 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = lVar14 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))();
      }
    }
    param_1[0x11e] = 0;
  }
  plVar7 = (long *)param_1[0x116];
  param_1[0x116] = 0;
  if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
LAB_0302b934:
    lVar14 = param_1[0xd3];
  }
  else {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302b934;
    (**(code **)(*plVar7 + 0x18))();
    lVar14 = param_1[0xd3];
  }
  if (lVar14 != 0) {
    FUN_03049f28(lVar14);
    lVar12 = tpidr_el0;
    lVar10 = *(long *)(lVar12 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0x5c0);
  }
  if ((long *)param_1[0xfd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xfd] + 8))();
  }
  lVar14 = param_1[0x91];
  if (lVar14 != 0) {
    FUN_03003604(lVar14);
    lVar12 = tpidr_el0;
    lVar10 = *(long *)(lVar12 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0xb8);
  }
  plVar7 = (long *)param_1[0x94];
  param_1[0x94] = 0;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  FUN_032c0f00(param_1 + 0x12d);
  FUN_032c0f00(param_1 + 0x129);
  if ((long *)param_1[0x125] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x125] + 8))();
  }
  plVar7 = (long *)param_1[0x120];
  if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
LAB_0302ba50:
    plVar7 = (long *)param_1[0x11f];
    if (plVar7 == (long *)0x0) goto LAB_0302ba78;
LAB_0302ba58:
    if (plVar7[1] == 0) goto LAB_0302ba78;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302ba78;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x11d];
  }
  else {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302ba50;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x11f];
    if (plVar7 != (long *)0x0) goto LAB_0302ba58;
LAB_0302ba78:
    plVar7 = (long *)param_1[0x11d];
  }
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 0x11b) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x8dc)) && (param_1[0x11a] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x11a],*(int *)((long)param_1 + 0x8dc) << 2);
  }
  param_1[0x11a] = 0;
  *(undefined4 *)((long)param_1 + 0x8dc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x8c4)) && (param_1[0x117] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,param_1[0x117],*(int *)((long)param_1 + 0x8c4) << 2);
  }
  plVar7 = (long *)param_1[0x116];
  param_1[0x117] = 0;
  *(undefined4 *)((long)param_1 + 0x8c4) = 0x80000000;
  if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
LAB_0302bb0c:
    plVar7 = (long *)param_1[0x115];
    if (plVar7 == (long *)0x0) goto LAB_0302bb34;
LAB_0302bb14:
    if (plVar7[1] == 0) goto LAB_0302bb34;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302bb34;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x114];
    if (plVar7 != (long *)0x0) goto LAB_0302bb3c;
LAB_0302bb5c:
    plVar7 = (long *)param_1[0x113];
    if (plVar7 == (long *)0x0) goto LAB_0302bb84;
LAB_0302bb64:
    if (plVar7[1] == 0) goto LAB_0302bb84;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302bb84;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x112];
    if (plVar7 != (long *)0x0) goto LAB_0302c018;
LAB_0302bb8c:
    uVar15 = param_1[0x110];
  }
  else {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302bb0c;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x115];
    if (plVar7 != (long *)0x0) goto LAB_0302bb14;
LAB_0302bb34:
    plVar7 = (long *)param_1[0x114];
    if (plVar7 == (long *)0x0) goto LAB_0302bb5c;
LAB_0302bb3c:
    if (plVar7[1] == 0) goto LAB_0302bb5c;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302bb5c;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x113];
    if (plVar7 != (long *)0x0) goto LAB_0302bb64;
LAB_0302bb84:
    plVar7 = (long *)param_1[0x112];
    if (plVar7 == (long *)0x0) goto LAB_0302bb8c;
LAB_0302c018:
    if (plVar7[1] == 0) goto LAB_0302bb8c;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302bb8c;
    (**(code **)(*plVar7 + 0x18))();
    uVar15 = param_1[0x110];
  }
  if ((uVar15 & 1) != 0) {
    lVar14 = tpidr_el0;
    lVar12 = *(long *)(lVar14 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar14 + 0x38d490) = lVar12;
    }
    plVar7 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    *(undefined8 *)(uVar15 - 0x11) = 0;
    (**(code **)(*plVar7 + 0x18))
              (plVar7,(undefined8 *)(uVar15 - 0x11),(long)*(int *)(uVar15 - 9) + 0x10);
  }
  FUN_0301de30(param_1 + 0x102);
  plVar7 = (long *)param_1[0xfe];
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  cVar8 = DAT_0444b3c8;
  if (DAT_0444b3c8 == '\0') {
LAB_0302bd9c:
    plVar7 = (long *)param_1[0xca];
    if (plVar7 == (long *)0x0) goto LAB_0302bdc4;
LAB_0302bda4:
    if (plVar7[1] == 0) goto LAB_0302bdc4;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302bdc4;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0xc9];
    if (plVar7 != (long *)0x0) goto LAB_0302c0a4;
LAB_0302bdcc:
    lVar14 = param_1[199];
    if (lVar14 == 0) goto LAB_0302bdd4;
LAB_0302c0d8:
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,lVar14,(long)*(int *)((long)param_1 + 0x634) + 0x30);
    *(undefined4 *)((long)param_1 + 0x634) = 0;
    param_1[199] = 0;
    lVar14 = param_1[0xc5];
    if (lVar14 != 0) goto LAB_0302c100;
LAB_0302bddc:
    plVar7 = (long *)param_1[0xa5];
    if (plVar7 == (long *)0x0) goto LAB_0302c128;
LAB_0302bde4:
    if (plVar7[1] == 0) goto LAB_0302c128;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302c128;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0xa4];
    if (plVar7 != (long *)0x0) goto LAB_0302c130;
LAB_0302c150:
    plVar7 = (long *)param_1[0xa2];
    if (plVar7 == (long *)0x0) goto LAB_0302c158;
LAB_0302c274:
    if (plVar7[1] == 0) goto LAB_0302c158;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302c158;
    (**(code **)(*plVar7 + 0x18))();
    lVar14 = param_1[0x99];
  }
  else {
    plVar7 = (long *)(param_1[0xfc] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xfc] & 3U) == 0) {
        param_1[0xfc] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xfc] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xfb] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xfb] & 3U) == 0) {
        param_1[0xfb] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xfb] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xfa] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xfa] & 3U) == 0) {
        param_1[0xfa] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xfa] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf9] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf9] & 3U) == 0) {
        param_1[0xf9] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf9] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf8] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf8] & 3U) == 0) {
        param_1[0xf8] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf8] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf7] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf7] & 3U) == 0) {
        param_1[0xf7] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf7] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf6] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf6] & 3U) == 0) {
        param_1[0xf6] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf6] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf5] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf5] & 3U) == 0) {
        param_1[0xf5] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf5] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf4] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf4] & 3U) == 0) {
        param_1[0xf4] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf4] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf3] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf3] & 3U) == 0) {
        param_1[0xf3] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf3] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf2] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf2] & 3U) == 0) {
        param_1[0xf2] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf2] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf1] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf1] & 3U) == 0) {
        param_1[0xf1] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf1] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xf0] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xf0] & 3U) == 0) {
        param_1[0xf0] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xf0] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xef] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xef] & 3U) == 0) {
        param_1[0xef] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xef] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xee] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xee] & 3U) == 0) {
        param_1[0xee] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xee] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xed] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xed] & 3U) == 0) {
        param_1[0xed] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xed] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xec] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xec] & 3U) == 0) {
        param_1[0xec] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xec] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xeb] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xeb] & 3U) == 0) {
        param_1[0xeb] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xeb] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xea] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xea] & 3U) == 0) {
        param_1[0xea] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xea] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe9] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe9] & 3U) == 0) {
        param_1[0xe9] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe9] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe8] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe8] & 3U) == 0) {
        param_1[0xe8] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe8] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe7] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe7] & 3U) == 0) {
        param_1[0xe7] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe7] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe6] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe6] & 3U) == 0) {
        param_1[0xe6] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe6] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe5] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe5] & 3U) == 0) {
        param_1[0xe5] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe5] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe4] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe4] & 3U) == 0) {
        param_1[0xe4] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe4] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe3] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe3] & 3U) == 0) {
        param_1[0xe3] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe3] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe2] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe2] & 3U) == 0) {
        param_1[0xe2] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe2] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe1] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe1] & 3U) == 0) {
        param_1[0xe1] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe1] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xe0] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xe0] & 3U) == 0) {
        param_1[0xe0] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xe0] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xdf] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xdf] & 3U) == 0) {
        param_1[0xdf] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xdf] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xde] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xde] & 3U) == 0) {
        param_1[0xde] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xde] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xdd] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xdd] & 3U) == 0) {
        param_1[0xdd] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xdd] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xdc] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xdc] & 3U) == 0) {
        param_1[0xdc] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xdc] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xdb] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xdb] & 3U) == 0) {
        param_1[0xdb] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xdb] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xda] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xda] & 3U) == 0) {
        param_1[0xda] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xda] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xd9] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd9] & 3U) == 0) {
        param_1[0xd9] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd9] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xd8] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd8] & 3U) == 0) {
        param_1[0xd8] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd8] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xd7] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd7] & 3U) == 0) {
        param_1[0xd7] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd7] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xd6] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd6] & 3U) == 0) {
        param_1[0xd6] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd6] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(param_1[0xd5] & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((param_1[0xd5] & 3U) == 0) {
        param_1[0xd5] = (ulong)plVar7 | 1;
        do {
          lVar14 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar14 + 8))();
        } while (plVar7 != (long *)0x0);
        param_1[0xd5] = 0;
        cVar8 = DAT_0444b3c8;
      }
      else {
        do {
          plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar11 | 1;
          plVar7 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      if (cVar8 == '\0') goto LAB_0302bd9c;
    }
    plVar7 = (long *)(*puVar1 & 0xfffffffffffffffc);
    if (plVar7 == (long *)0x0) goto LAB_0302bd9c;
    if ((*puVar1 & 3) != 0) {
      do {
        plVar11 = (long *)(plVar7[1] & 0xfffffffffffffffc);
        plVar7[1] = (ulong)plVar11 | 1;
        plVar7 = plVar11;
      } while (plVar11 != (long *)0x0);
      goto LAB_0302bd9c;
    }
    *puVar1 = (ulong)plVar7 | 1;
    do {
      lVar14 = *plVar7;
      plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
      (**(code **)(lVar14 + 8))();
    } while (plVar7 != (long *)0x0);
    *puVar1 = 0;
    plVar7 = (long *)param_1[0xca];
    if (plVar7 != (long *)0x0) goto LAB_0302bda4;
LAB_0302bdc4:
    plVar7 = (long *)param_1[0xc9];
    if (plVar7 == (long *)0x0) goto LAB_0302bdcc;
LAB_0302c0a4:
    if (plVar7[1] == 0) goto LAB_0302bdcc;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302bdcc;
    (**(code **)(*plVar7 + 0x18))();
    lVar14 = param_1[199];
    if (lVar14 != 0) goto LAB_0302c0d8;
LAB_0302bdd4:
    lVar14 = param_1[0xc5];
    if (lVar14 == 0) goto LAB_0302bddc;
LAB_0302c100:
    (**(code **)(*(long *)puVar4 + 0x18))
              (puVar4,lVar14,(long)*(int *)((long)param_1 + 0x624) + 0x30);
    *(undefined4 *)((long)param_1 + 0x624) = 0;
    param_1[0xc5] = 0;
    plVar7 = (long *)param_1[0xa5];
    if (plVar7 != (long *)0x0) goto LAB_0302bde4;
LAB_0302c128:
    plVar7 = (long *)param_1[0xa4];
    if (plVar7 == (long *)0x0) goto LAB_0302c150;
LAB_0302c130:
    if (plVar7[1] == 0) goto LAB_0302c150;
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302c150;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0xa2];
    if (plVar7 != (long *)0x0) goto LAB_0302c274;
LAB_0302c158:
    lVar14 = param_1[0x99];
  }
  if (lVar14 != 0) {
    lVar10 = *(long *)(lVar14 + 8);
    lVar12 = tpidr_el0;
    lVar13 = *(long *)(lVar12 + 0x38d490);
    if (lVar13 == 0) {
      lVar13 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar13;
    }
    plVar7 = *(long **)(*(long *)(lVar13 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0x410);
    while (lVar10 != 0) {
      lVar13 = *(long *)(lVar10 + 8);
      lVar14 = *(long *)(lVar12 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar14;
      }
      plVar7 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar10,0x410);
      lVar10 = lVar13;
    }
  }
  plVar7 = (long *)param_1[0x97];
  if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
LAB_0302c168:
    plVar7 = (long *)param_1[0x94];
  }
  else {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 != 0) goto LAB_0302c168;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x94];
  }
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar11 = plVar7 + 2;
    do {
      lVar14 = *plVar11;
      cVar8 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
      lVar14 = param_1[0x93];
      goto joined_r0x0302c258;
    }
  }
  lVar14 = param_1[0x93];
joined_r0x0302c258:
  if (lVar14 != 0) {
    FUN_03102ec4(lVar14);
    lVar12 = tpidr_el0;
    lVar10 = *(long *)(lVar12 + 0x38d490);
    if (lVar10 == 0) {
      lVar10 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar10;
    }
    plVar7 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,0x70);
  }
  FUN_03014d04(param_1 + 0x28);
  FUN_02fff47c(param_1 + 5);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


