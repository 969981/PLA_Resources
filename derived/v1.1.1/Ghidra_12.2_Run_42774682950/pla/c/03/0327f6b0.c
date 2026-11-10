/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327f6b0; name: FUN_0327f6b0
 */


short FUN_0327f6b0(long param_1,long param_2,undefined4 param_3,short param_4)

{
  short *psVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long lVar35;
  uint uVar36;
  undefined8 uVar37;
  uint uVar38;
  long lVar39;
  long *plVar40;
  long *plVar41;
  long *plVar42;
  long *plVar43;
  long *plVar44;
  long *plVar45;
  long *plVar46;
  long *plVar47;
  long *plVar48;
  long *plVar49;
  long *plVar50;
  long *plVar51;
  long *plVar52;
  uint uVar53;
  int iVar54;
  
  lVar35 = tpidr_el0;
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar22 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar22 = (long *)(**(code **)(*plVar22 + 0x10))(plVar22,0x68,0);
  plVar22[1] = 0xffffffff;
  plVar47 = plVar22 + 2;
  *plVar47 = 1;
  *plVar22 = (long)&PTR_LAB_0433a1a8;
  plVar22[3] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar23 = (long *)(param_2 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar8) {
        *plVar23 = *plVar23 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar22[5] = 0;
  *(undefined4 *)(plVar22 + 4) = param_3;
  plVar22[6] = -0x8000000000000000;
  plVar22[7] = 0;
  plVar22[8] = -0x8000000000000000;
  plVar22[9] = 0;
  plVar22[10] = -0x8000000000000000;
  plVar22[0xb] = 0;
  plVar22[0xc] = -0x8000000000000000;
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar23 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar23 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x30,0);
  plVar23[1] = 0xffffffff;
  plVar40 = plVar23 + 2;
  *plVar40 = 1;
  *plVar23 = (long)&PTR_LAB_0433a1f0;
  plVar23[4] = (long)&PTR_LAB_0433a228;
  plVar23[5] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar10 = FUN_0333b6e8(param_1,plVar23,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar24 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar24 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x920,0);
  lVar39 = plVar22[4];
  uVar6 = *(undefined4 *)(plVar22[3] + 0x68);
  plVar24[1] = 0xffffffff;
  plVar41 = plVar24 + 2;
  *plVar41 = 1;
  *plVar24 = (long)&PTR_LAB_0433a8f8;
  plVar24[4] = (long)&PTR_LAB_0433a938;
  plVar24[0xe] = (long)(plVar24 + 0x10);
  plVar24[0xf] = -0x7fffffef00000000;
  plVar24[0x98] = (long)(plVar24 + 0x9a);
  plVar24[0x99] = -0x7fffffef00000000;
  *(int *)(plVar24 + 0x122) = (int)lVar39;
  FUN_0332bcc0(plVar24 + 6,(int)lVar39,uVar6,1);
  *plVar24 = (long)&PTR_LAB_0433a270;
  plVar24[4] = (long)&PTR_LAB_0433a2b0;
  plVar24[0x123] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar11 = FUN_0333b858(param_1,plVar24,param_3,1,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar25 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar25 = (long *)(**(code **)(*plVar25 + 0x10))(plVar25,0x920,0);
  lVar39 = plVar22[4];
  uVar6 = *(undefined4 *)(plVar22[3] + 0x58);
  plVar25[1] = 0xffffffff;
  plVar42 = plVar25 + 2;
  *plVar42 = 1;
  *plVar25 = (long)&PTR_LAB_0433a980;
  plVar25[4] = (long)&PTR_LAB_0433a9c0;
  *(undefined4 *)(plVar25 + 0xf) = 0;
  *(undefined4 *)((long)plVar25 + 0x7c) = 0x80000011;
  plVar25[0xe] = (long)(plVar25 + 0x10);
  plVar25[0x98] = (long)(plVar25 + 0x9a);
  *(undefined4 *)(plVar25 + 0x99) = 0;
  *(undefined4 *)((long)plVar25 + 0x4cc) = 0x80000011;
  *(int *)(plVar25 + 0x122) = (int)lVar39;
  FUN_0332bcc0(plVar25 + 6,(int)lVar39,uVar6,1);
  *plVar25 = (long)&PTR_LAB_0433a2f8;
  plVar25[4] = (long)&PTR_LAB_0433a338;
  plVar25[0x123] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar12 = FUN_0333b858(param_1,plVar25,param_3,1,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar26 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar26 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x920,0);
  lVar39 = plVar22[4];
  uVar6 = *(undefined4 *)(plVar22[3] + 0x78);
  plVar26[1] = 0xffffffff;
  plVar43 = plVar26 + 2;
  *plVar43 = 1;
  *plVar26 = (long)&PTR_LAB_0433aa08;
  plVar26[4] = (long)&PTR_LAB_0433aa48;
  plVar26[0xe] = (long)(plVar26 + 0x10);
  *(undefined4 *)(plVar26 + 0xf) = 0;
  *(undefined4 *)((long)plVar26 + 0x7c) = 0x80000011;
  plVar26[0x98] = (long)(plVar26 + 0x9a);
  *(undefined4 *)(plVar26 + 0x99) = 0;
  *(undefined4 *)((long)plVar26 + 0x4cc) = 0x80000011;
  *(int *)(plVar26 + 0x122) = (int)lVar39;
  FUN_0332bcc0(plVar26 + 6,(int)lVar39,uVar6,1);
  *plVar26 = (long)&PTR_LAB_0433a380;
  plVar26[4] = (long)&PTR_LAB_0433a3c0;
  plVar26[0x123] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar13 = FUN_0333b858(param_1,plVar26,param_3,1,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar27 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar27 = (long *)(**(code **)(*plVar27 + 0x10))(plVar27,0x40,0);
  plVar27[1] = 0xffffffff;
  plVar44 = plVar27 + 2;
  *plVar44 = 1;
  *plVar27 = (long)&PTR_LAB_0433a408;
  plVar27[4] = (long)&PTR_LAB_0433a440;
  plVar27[5] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar27[6] = (long)(plVar22 + 7);
  sVar14 = FUN_0333b6e8(param_1,plVar27,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar28 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar28 = (long *)(**(code **)(*plVar28 + 0x10))(plVar28,0x40,0);
  *plVar28 = (long)&PTR_LAB_0433a408;
  plVar28[1] = 0xffffffff;
  plVar45 = plVar28 + 2;
  *plVar45 = 1;
  plVar28[4] = (long)&PTR_LAB_0433a440;
  plVar28[5] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar28[6] = (long)(plVar22 + 5);
  sVar15 = FUN_0333b6e8(param_1,plVar28,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar29 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar29 = (long *)(**(code **)(*plVar29 + 0x10))(plVar29,0x40,0);
  *plVar29 = (long)&PTR_LAB_0433a408;
  plVar29[1] = 0xffffffff;
  plVar46 = plVar29 + 2;
  *plVar46 = 1;
  plVar29[4] = (long)&PTR_LAB_0433a440;
  plVar29[5] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar29[6] = (long)(plVar22 + 9);
  sVar16 = FUN_0333b6e8(param_1,plVar29,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar30 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar30 = (long *)(**(code **)(*plVar30 + 0x10))(plVar30,0x30,0);
  plVar30[1] = 0xffffffff;
  plVar51 = plVar30 + 2;
  *plVar51 = 1;
  *plVar30 = (long)&PTR_LAB_0433a488;
  plVar30[4] = (long)&PTR_LAB_0433a4c0;
  plVar30[5] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar17 = FUN_0333b6e8(param_1,plVar30,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar31 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar31 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x30,0);
  plVar31[1] = 0xffffffff;
  plVar48 = plVar31 + 2;
  *plVar48 = 1;
  *plVar31 = (long)&PTR_LAB_0433a508;
  plVar31[4] = (long)&PTR_LAB_0433a540;
  plVar31[5] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar18 = FUN_0333b6e8(param_1,plVar31,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar32 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar32 = (long *)(**(code **)(*plVar32 + 0x10))(plVar32,0x920,0);
  lVar39 = plVar22[4];
  uVar6 = *(undefined4 *)(plVar22[3] + 0x68);
  plVar50 = plVar32 + 2;
  *plVar50 = 1;
  *plVar32 = (long)&PTR_LAB_0433aa90;
  plVar32[1] = 0xffffffff;
  plVar32[4] = (long)&PTR_LAB_0433aad0;
  plVar32[0xe] = (long)(plVar32 + 0x10);
  *(undefined4 *)(plVar32 + 0xf) = 0;
  *(undefined4 *)((long)plVar32 + 0x7c) = 0x80000011;
  plVar32[0x98] = (long)(plVar32 + 0x9a);
  *(undefined4 *)(plVar32 + 0x99) = 0;
  *(undefined4 *)((long)plVar32 + 0x4cc) = 0x80000011;
  *(int *)(plVar32 + 0x122) = (int)lVar39;
  FUN_0332bcc0(plVar32 + 6,(int)lVar39,uVar6,1);
  *plVar32 = (long)&PTR_LAB_0433a588;
  plVar32[4] = (long)&PTR_LAB_0433a5c8;
  plVar32[0x123] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar19 = FUN_0333b858(param_1,plVar32,param_3,1,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar33 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar33 = (long *)(**(code **)(*plVar33 + 0x10))(plVar33,0x920,0);
  uVar6 = *(undefined4 *)(plVar22[3] + 0x68);
  lVar39 = plVar22[4];
  plVar52 = plVar33 + 2;
  *plVar52 = 1;
  *plVar33 = (long)&PTR_LAB_0433ab18;
  plVar33[1] = 0xffffffff;
  plVar33[4] = (long)&PTR_LAB_0433ab58;
  plVar33[0xe] = (long)(plVar33 + 0x10);
  *(undefined4 *)(plVar33 + 0xf) = 0;
  *(undefined4 *)((long)plVar33 + 0x7c) = 0x80000011;
  plVar33[0x98] = (long)(plVar33 + 0x9a);
  *(undefined4 *)(plVar33 + 0x99) = 0;
  *(undefined4 *)((long)plVar33 + 0x4cc) = 0x80000011;
  *(int *)(plVar33 + 0x122) = (int)lVar39;
  FUN_0332bcc0(plVar33 + 6,(int)lVar39,uVar6,1);
  *plVar33 = (long)&PTR_LAB_0433a610;
  plVar33[4] = (long)&PTR_LAB_0433a650;
  plVar33[0x123] = (long)plVar22;
  if (plVar22[1] != 0) {
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = *plVar47 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar20 = FUN_0333b858(param_1,plVar33,param_3,1,0x40);
  lVar39 = *(long *)(lVar35 + 0x38d490);
  if (lVar39 == 0) {
    lVar39 = FUN_0333d16c(0,1);
    *(long *)(lVar35 + 0x38d490) = lVar39;
  }
  plVar34 = *(long **)(*(long *)(lVar39 + 8) + 0x58);
  plVar34 = (long *)(**(code **)(*plVar34 + 0x10))(plVar34,0x30,0);
  plVar34[1] = 0xffffffff;
  plVar49 = plVar34 + 2;
  *plVar49 = 1;
  *plVar34 = (long)&PTR_LAB_0433a698;
  plVar34[4] = (long)&PTR_LAB_0433a6d0;
  plVar34[5] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar3 = (long *)(param_2 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = *plVar3 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar21 = FUN_0333b6e8(param_1,plVar34,0x40);
  puVar9 = PTR_PTR_0434a080;
  if ((param_4 != -1) && (sVar10 != -1)) {
    iVar54 = *(int *)(param_1 + 0x330);
    uVar2 = iVar54 + 1;
    uVar38 = *(uint *)(param_1 + 0x334);
    if (iVar54 < (int)(uVar38 & 0x3fffffff)) {
      lVar35 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar37 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar54) {
        FUN_032bd0a8(uVar2);
        uVar38 = *(uint *)(param_1 + 0x334);
      }
      uVar38 = (uVar38 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar38) {
        uVar38 = 0x3fffffff;
      }
      uVar53 = uVar2;
      if ((int)uVar2 <= (int)uVar38) {
        uVar53 = uVar38;
      }
      lVar35 = FUN_032bd1d4(puVar9,uVar53,4,uVar37,iVar54);
      *(long *)(param_1 + 0x328) = lVar35;
      iVar54 = *(int *)(param_1 + 0x330);
    }
    psVar1 = (short *)(lVar35 + (long)iVar54 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = param_4;
    psVar1[1] = sVar10;
  }
  uVar38 = *(uint *)(param_1 + 0x334);
  uVar53 = *(uint *)(param_1 + 0x330);
  plVar3 = (long *)(param_1 + 0x328);
  puVar4 = (uint *)(param_1 + 0x330);
  uVar2 = uVar53 + 1;
  puVar5 = (uint *)(param_1 + 0x334);
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar10;
  psVar1[1] = sVar11;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar10;
  psVar1[1] = sVar12;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar10;
  psVar1[1] = sVar13;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar11;
  psVar1[1] = sVar18;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar11;
  psVar1[1] = sVar17;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar12;
  psVar1[1] = sVar14;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar12;
  psVar1[1] = sVar15;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar13;
  psVar1[1] = sVar16;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar14;
  psVar1[1] = sVar17;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar15;
  psVar1[1] = sVar17;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar16;
  psVar1[1] = sVar18;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar15;
  psVar1[1] = sVar18;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar17;
  psVar1[1] = sVar19;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar18;
  psVar1[1] = sVar19;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar19;
  psVar1[1] = sVar20;
  uVar38 = *puVar5;
  uVar53 = *puVar4;
  uVar2 = uVar53 + 1;
  if ((int)uVar53 < (int)(uVar38 & 0x3fffffff)) {
    lVar35 = *plVar3;
  }
  else {
    lVar35 = *plVar3;
    if (0x3ffffffe < (int)uVar53) {
      FUN_032bd0a8(uVar2);
      uVar38 = *puVar5;
    }
    uVar38 = (uVar38 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar38) {
      uVar38 = 0x3fffffff;
    }
    uVar36 = uVar2;
    if ((int)uVar2 <= (int)uVar38) {
      uVar36 = uVar38;
    }
    lVar35 = FUN_032bd1d4(puVar9,uVar36,4,lVar35,uVar53);
    *plVar3 = lVar35;
    uVar53 = *puVar4;
  }
  psVar1 = (short *)(lVar35 + (long)(int)uVar53 * 4);
  *puVar4 = uVar2;
  *psVar1 = sVar20;
  psVar1[1] = sVar21;
  if ((plVar34 != (long *)0x0) && (plVar34[1] != 0)) {
    do {
      lVar35 = *plVar49;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar8) {
        *plVar49 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar34 + 0x18))(plVar34);
    }
  }
  if ((plVar33 != (long *)0x0) && (plVar33[1] != 0)) {
    do {
      lVar35 = *plVar52;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar52,0x10);
      if (bVar8) {
        *plVar52 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar33 + 0x18))(plVar33);
    }
  }
  if ((plVar32 != (long *)0x0) && (plVar32[1] != 0)) {
    do {
      lVar35 = *plVar50;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar50,0x10);
      if (bVar8) {
        *plVar50 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  if ((plVar31 != (long *)0x0) && (plVar31[1] != 0)) {
    do {
      lVar35 = *plVar48;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar48,0x10);
      if (bVar8) {
        *plVar48 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar31 + 0x18))(plVar31);
    }
  }
  if ((plVar30 != (long *)0x0) && (plVar30[1] != 0)) {
    do {
      lVar35 = *plVar51;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar51,0x10);
      if (bVar8) {
        *plVar51 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar30 + 0x18))(plVar30);
    }
  }
  if (plVar29[1] != 0) {
    do {
      lVar35 = *plVar46;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar46,0x10);
      if (bVar8) {
        *plVar46 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar29 + 0x18))();
    }
  }
  if (plVar28[1] != 0) {
    do {
      lVar35 = *plVar45;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar45,0x10);
      if (bVar8) {
        *plVar45 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar28 + 0x18))();
    }
  }
  if (plVar27[1] != 0) {
    do {
      lVar35 = *plVar44;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar44,0x10);
      if (bVar8) {
        *plVar44 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar27 + 0x18))();
    }
  }
  if ((plVar26 != (long *)0x0) && (plVar26[1] != 0)) {
    do {
      lVar35 = *plVar43;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar43,0x10);
      if (bVar8) {
        *plVar43 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar26 + 0x18))(plVar26);
    }
  }
  if ((plVar25 != (long *)0x0) && (plVar25[1] != 0)) {
    do {
      lVar35 = *plVar42;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar42,0x10);
      if (bVar8) {
        *plVar42 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar25 + 0x18))(plVar25);
    }
  }
  if ((plVar24 != (long *)0x0) && (plVar24[1] != 0)) {
    do {
      lVar35 = *plVar41;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar8) {
        *plVar41 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  if ((plVar23 != (long *)0x0) && (plVar23[1] != 0)) {
    do {
      lVar35 = *plVar40;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar8) {
        *plVar40 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
      lVar35 = plVar22[1];
      goto joined_r0x0328052c;
    }
  }
  lVar35 = plVar22[1];
joined_r0x0328052c:
  if (lVar35 != 0) {
    do {
      lVar35 = *plVar47;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar47,0x10);
      if (bVar8) {
        *plVar47 = lVar35 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar35 + -1 == 0) {
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  return sVar21;
}


