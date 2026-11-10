/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033503cc; name: FUN_033503cc
 */


void FUN_033503cc(undefined2 param_1,long *param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,undefined4 param_7,long param_8,long param_9,
                 undefined2 *param_10,undefined2 *param_11,long param_12,long *param_13,
                 long *param_14,long *param_15)

{
  undefined2 *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  uint uVar18;
  long *plVar19;
  undefined8 uVar20;
  long local_b0;
  
  lVar15 = tpidr_el0;
  lVar14 = *(long *)(lVar15 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar15 + 0x38d490) = lVar14;
  }
  plVar7 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x38,0);
  plVar7[1] = 0xffffffff;
  plVar16 = plVar7 + 2;
  *plVar16 = 1;
  *plVar7 = (long)&PTR_LAB_04363bb8;
  lVar14 = *param_2;
  plVar7[3] = (long)&PTR_LAB_04363b68;
  plVar7[4] = 0;
  plVar7[5] = lVar14;
  plVar7[6] = (long)param_2;
  if (((param_13 == (long *)0x0) || (param_14 == (long *)0x0)) || (param_15 == (long *)0x0)) {
    lVar14 = *(long *)(lVar15 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar15 + 0x38d490) = lVar14;
    }
    plVar8 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x60,0);
    plVar8[1] = 0xffffffff;
    plVar19 = plVar8 + 2;
    *plVar19 = 1;
    plVar8[4] = (long)&PTR_LAB_04363ce8;
    plVar8[5] = param_8;
    plVar8[6] = param_4;
    *plVar8 = (long)&PTR_LAB_04363cb8;
    plVar8[7] = param_3;
    plVar8[8] = (long)plVar7;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *plVar8 = (long)&PTR_LAB_04363c00;
    plVar8[4] = (long)&PTR_LAB_04363c40;
    *(undefined4 *)(plVar8 + 10) = param_6;
    plVar8[9] = param_12;
    plVar8[0xb] = param_5;
    uVar5 = FUN_0333b6e8(param_9,plVar8,param_7);
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      do {
        lVar14 = *plVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *plVar19 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
    puVar9 = PTR_PTR_0434a080;
    puVar2 = (uint *)(param_9 + 0x334);
    uVar13 = *(uint *)(param_9 + 0x334);
    iVar17 = *(int *)(param_9 + 0x330);
    uVar18 = iVar17 + 1;
    if (iVar17 < (int)(uVar13 & 0x3fffffff)) {
      lVar14 = *(long *)(param_9 + 0x328);
    }
    else {
      uVar20 = *(undefined8 *)(param_9 + 0x328);
      if (0x3ffffffe < iVar17) {
        FUN_032bd0a8(uVar18);
        uVar13 = *puVar2;
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar11 = uVar18;
      if ((int)uVar18 <= (int)uVar13) {
        uVar11 = uVar13;
      }
      lVar14 = FUN_032bd1d4(puVar9,uVar11,4,uVar20,iVar17,puVar2);
      iVar17 = *(int *)(param_9 + 0x330);
      *(long *)(param_9 + 0x328) = lVar14;
    }
    puVar1 = (undefined2 *)(lVar14 + (long)iVar17 * 4);
    *(uint *)(param_9 + 0x330) = uVar18;
    *puVar1 = param_1;
    puVar1[1] = uVar5;
    lVar14 = *(long *)(lVar15 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar15 + 0x38d490) = lVar14;
    }
    plVar8 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x50,0);
    *plVar8 = (long)&PTR_LAB_04363cb8;
    plVar8[1] = 0xffffffff;
    plVar19 = plVar8 + 2;
    *plVar19 = 1;
    plVar8[4] = (long)&PTR_LAB_04363ce8;
    plVar8[5] = param_8;
    plVar8[6] = param_4;
    plVar8[7] = param_3;
    plVar8[8] = (long)plVar7;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar8[9] = param_12;
    *plVar8 = (long)&PTR_LAB_04363d30;
    plVar8[4] = (long)&PTR_LAB_04363d70;
    uVar6 = FUN_0333b858(param_9,plVar8,param_6,1,param_7);
    *param_10 = uVar6;
    if (plVar8 != (long *)0x0) {
      if (plVar8[1] != 0) {
        do {
          lVar14 = *plVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
      uVar6 = *param_10;
    }
    uVar13 = *(uint *)(param_9 + 0x334);
    iVar17 = *(int *)(param_9 + 0x330);
    uVar18 = iVar17 + 1;
    if (iVar17 < (int)(uVar13 & 0x3fffffff)) {
      lVar14 = *(long *)(param_9 + 0x328);
    }
    else {
      uVar20 = *(undefined8 *)(param_9 + 0x328);
      if (0x3ffffffe < iVar17) {
        FUN_032bd0a8(uVar18);
        uVar13 = *puVar2;
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar11 = uVar18;
      if ((int)uVar18 <= (int)uVar13) {
        uVar11 = uVar13;
      }
      lVar14 = FUN_032bd1d4(puVar9,uVar11,4,uVar20,iVar17,puVar2);
      iVar17 = *(int *)(param_9 + 0x330);
      *(long *)(param_9 + 0x328) = lVar14;
    }
    puVar1 = (undefined2 *)(lVar14 + (long)iVar17 * 4);
    *(uint *)(param_9 + 0x330) = uVar18;
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    lVar14 = *(long *)(lVar15 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar15 + 0x38d490) = lVar14;
    }
    plVar8 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,0x60,0);
    *plVar8 = (long)&PTR_LAB_04363cb8;
    plVar8[1] = 0xffffffff;
    plVar19 = plVar8 + 2;
    *plVar19 = 1;
    plVar8[4] = (long)&PTR_LAB_04363ce8;
    plVar8[5] = param_8;
    plVar8[6] = param_4;
    plVar8[7] = param_3;
    plVar8[8] = (long)plVar7;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = *plVar16 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *plVar8 = (long)&PTR_LAB_04363dd0;
    plVar8[4] = (long)&PTR_LAB_04363e10;
    plVar8[9] = param_12;
    plVar8[10] = param_5;
    uVar5 = FUN_0333b6e8(param_9,plVar8,param_7);
    *param_11 = uVar5;
    if (plVar8 != (long *)0x0) {
      if (plVar8[1] != 0) {
        do {
          lVar15 = *plVar19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar4) {
            *plVar19 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
      }
      uVar5 = *param_11;
    }
    uVar13 = *(uint *)(param_9 + 0x334);
    iVar17 = *(int *)(param_9 + 0x330);
    uVar6 = *param_10;
    uVar18 = iVar17 + 1;
    if ((int)(uVar13 & 0x3fffffff) <= iVar17) {
      uVar20 = *(undefined8 *)(param_9 + 0x328);
      if (0x3ffffffe < iVar17) {
        FUN_032bd0a8(uVar18);
        uVar13 = *puVar2;
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar11 = uVar18;
      if ((int)uVar18 <= (int)uVar13) {
        uVar11 = uVar13;
      }
      goto LAB_03350974;
    }
  }
  else {
    lVar14 = *param_13;
    if (lVar14 == 0) {
      lVar14 = *(long *)(lVar15 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar15 + 0x38d490) = lVar14;
      }
      plVar8 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      puVar12 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x60,0);
      puVar12[1] = 0xffffffff;
      puVar12[2] = 1;
      puVar12[4] = &PTR_LAB_04363ce8;
      puVar12[5] = param_8;
      puVar12[6] = param_4;
      *puVar12 = &PTR_LAB_04363cb8;
      puVar12[7] = param_3;
      puVar12[8] = plVar7;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar12[9] = param_12;
      *puVar12 = &PTR_LAB_04363c00;
      puVar12[4] = &PTR_LAB_04363c40;
      puVar12[0xb] = param_5;
      *(undefined4 *)(puVar12 + 10) = param_6;
      plVar8 = (long *)*param_13;
      puVar10 = (undefined8 *)0x0;
      if (puVar12 != (undefined8 *)0x0) {
        puVar10 = puVar12 + 4;
      }
      *param_13 = (long)puVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    else {
      *(undefined4 *)(lVar14 + 0x30) = param_6;
      *(long *)(lVar14 + 0x38) = param_5;
    }
    uVar5 = FUN_0333b4f8(param_9,*param_13,param_7);
    puVar9 = PTR_PTR_0434a080;
    iVar17 = *(int *)(param_9 + 0x330);
    uVar18 = iVar17 + 1;
    uVar13 = *(uint *)(param_9 + 0x334);
    if (iVar17 < (int)(uVar13 & 0x3fffffff)) {
      lVar14 = *(long *)(param_9 + 0x328);
    }
    else {
      uVar20 = *(undefined8 *)(param_9 + 0x328);
      if (0x3ffffffe < iVar17) {
        FUN_032bd0a8(uVar18);
        uVar13 = *(uint *)(param_9 + 0x334);
      }
      local_b0 = param_9 + 0x334;
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar11 = uVar18;
      if ((int)uVar18 <= (int)uVar13) {
        uVar11 = uVar13;
      }
      lVar14 = FUN_032bd1d4(puVar9,uVar11,4,uVar20,iVar17,local_b0);
      iVar17 = *(int *)(param_9 + 0x330);
      *(long *)(param_9 + 0x328) = lVar14;
    }
    puVar1 = (undefined2 *)(lVar14 + (long)iVar17 * 4);
    *(uint *)(param_9 + 0x330) = uVar18;
    *puVar1 = param_1;
    puVar1[1] = uVar5;
    puVar12 = (undefined8 *)*param_14;
    if (puVar12 == (undefined8 *)0x0) {
      lVar14 = *(long *)(lVar15 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar15 + 0x38d490) = lVar14;
      }
      plVar8 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x50,0);
      puVar10[1] = 0xffffffff;
      puVar10[2] = 1;
      puVar10[4] = &PTR_LAB_04363ce8;
      puVar10[5] = param_8;
      puVar10[6] = param_4;
      *puVar10 = &PTR_LAB_04363cb8;
      puVar10[7] = param_3;
      puVar10[8] = plVar7;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar10[9] = param_12;
      *puVar10 = &PTR_LAB_04363d30;
      puVar10[4] = &PTR_LAB_04363d70;
      plVar8 = (long *)*param_14;
      puVar12 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        puVar12 = puVar10 + 4;
      }
      *param_14 = (long)puVar12;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x10))();
        puVar12 = (undefined8 *)*param_14;
      }
    }
    uVar6 = FUN_0333b5e8(param_9,puVar12,param_6,1,param_7);
    *param_10 = uVar6;
    uVar13 = *(uint *)(param_9 + 0x334);
    iVar17 = *(int *)(param_9 + 0x330);
    uVar18 = iVar17 + 1;
    if (iVar17 < (int)(uVar13 & 0x3fffffff)) {
      lVar14 = *(long *)(param_9 + 0x328);
    }
    else {
      uVar20 = *(undefined8 *)(param_9 + 0x328);
      if (0x3ffffffe < iVar17) {
        FUN_032bd0a8(uVar18);
        uVar13 = *(uint *)(param_9 + 0x334);
      }
      local_b0 = param_9 + 0x334;
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar11 = uVar18;
      if ((int)uVar18 <= (int)uVar13) {
        uVar11 = uVar13;
      }
      lVar14 = FUN_032bd1d4(puVar9,uVar11,4,uVar20,iVar17,local_b0);
      iVar17 = *(int *)(param_9 + 0x330);
      *(long *)(param_9 + 0x328) = lVar14;
    }
    puVar1 = (undefined2 *)(lVar14 + (long)iVar17 * 4);
    *(uint *)(param_9 + 0x330) = uVar18;
    puVar1[1] = uVar6;
    *puVar1 = uVar5;
    if (*param_15 == 0) {
      lVar14 = *(long *)(lVar15 + 0x38d490);
      if (lVar14 == 0) {
        lVar14 = FUN_0333d16c(0,1);
        *(long *)(lVar15 + 0x38d490) = lVar14;
      }
      plVar8 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
      puVar12 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x60,0);
      puVar12[1] = 0xffffffff;
      puVar12[2] = 1;
      puVar12[4] = &PTR_LAB_04363ce8;
      puVar12[5] = param_8;
      puVar12[6] = param_4;
      *puVar12 = &PTR_LAB_04363cb8;
      puVar12[7] = param_3;
      puVar12[8] = plVar7;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *puVar12 = &PTR_LAB_04363dd0;
      puVar12[4] = &PTR_LAB_04363e10;
      puVar12[9] = param_12;
      puVar12[10] = param_5;
      plVar8 = (long *)*param_15;
      puVar10 = (undefined8 *)0x0;
      if (puVar12 != (undefined8 *)0x0) {
        puVar10 = puVar12 + 4;
      }
      *param_15 = (long)puVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    else {
      *(long *)(*param_15 + 0x30) = param_5;
    }
    uVar5 = FUN_0333b4f8(param_9,*param_15,param_7);
    *param_11 = uVar5;
    iVar17 = *(int *)(param_9 + 0x330);
    uVar6 = *param_10;
    uVar13 = *(uint *)(param_9 + 0x334);
    uVar18 = iVar17 + 1;
    if ((int)(uVar13 & 0x3fffffff) <= iVar17) {
      uVar20 = *(undefined8 *)(param_9 + 0x328);
      if (0x3ffffffe < iVar17) {
        FUN_032bd0a8(uVar18);
        uVar13 = *(uint *)(param_9 + 0x334);
      }
      uVar13 = (uVar13 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar13) {
        uVar13 = 0x3fffffff;
      }
      uVar11 = uVar18;
      if ((int)uVar18 <= (int)uVar13) {
        uVar11 = uVar13;
      }
LAB_03350974:
      lVar15 = FUN_032bd1d4(puVar9,uVar11,4,uVar20,iVar17,param_9 + 0x334);
      iVar17 = *(int *)(param_9 + 0x330);
      *(long *)(param_9 + 0x328) = lVar15;
      goto LAB_033507f8;
    }
  }
  lVar15 = *(long *)(param_9 + 0x328);
LAB_033507f8:
  puVar1 = (undefined2 *)(lVar15 + (long)iVar17 * 4);
  *(uint *)(param_9 + 0x330) = uVar18;
  *puVar1 = uVar6;
  puVar1[1] = uVar5;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    do {
      lVar15 = *plVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
      return;
    }
  }
  return;
}


