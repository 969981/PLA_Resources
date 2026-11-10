/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320f310; name: FUN_0320f310
 */


/* WARNING: Type propagation algorithm not settling */

short FUN_0320f310(long param_1,long param_2,short param_3)

{
  short *psVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  short sVar10;
  short sVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  int iVar26;
  long *plVar27;
  
  lVar20 = tpidr_el0;
  lVar19 = *(long *)(lVar20 + 0x38d490);
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar19;
    lVar24 = *(long *)(lVar19 + 0x10);
  }
  else {
    lVar24 = *(long *)(lVar19 + 0x10);
  }
  if (lVar24 != 0) {
    puVar5 = *(undefined8 **)(lVar24 + 8);
    uVar21 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar21 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar21, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "TthkaiPathRequestsTasks::addPathRequestTasks";
      uVar15 = nn::os::GetSystemTick();
      puVar5[1] = uVar15;
      lVar19 = *(long *)(lVar20 + 0x38d490);
    }
  }
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar19;
  }
  plVar12 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
  plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x40,0);
  plVar12[1] = 0xffffffff;
  plVar22 = plVar12 + 2;
  *plVar22 = 1;
  *plVar12 = (long)&PTR_LAB_042f24f0;
  plVar12[4] = (long)&PTR_LAB_042f2530;
  plVar12[5] = 0;
  plVar12[6] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar13 = (long *)(param_2 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar8) {
        *plVar13 = *plVar13 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar10 = FUN_0333b6e8(param_1,plVar12,0x40);
  if ((param_3 != -1) && (sVar10 != -1)) {
    uVar18 = *(uint *)(param_1 + 0x334);
    iVar26 = *(int *)(param_1 + 0x330);
    uVar2 = iVar26 + 1;
    if (iVar26 < (int)(uVar18 & 0x3fffffff)) {
      lVar19 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar26) {
        FUN_032bd0a8(uVar2);
        uVar18 = *(uint *)(param_1 + 0x334);
      }
      uVar18 = (uVar18 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar18) {
        uVar18 = 0x3fffffff;
      }
      uVar17 = uVar2;
      if ((int)uVar2 <= (int)uVar18) {
        uVar17 = uVar18;
      }
      lVar19 = FUN_032bd1d4(PTR_PTR_0434a080,uVar17,4,uVar15,iVar26);
      iVar26 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar19;
    }
    psVar1 = (short *)(lVar19 + (long)iVar26 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = param_3;
    psVar1[1] = sVar10;
  }
  lVar19 = *(long *)(lVar20 + 0x38d490);
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar19;
  }
  plVar13 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
  plVar13 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x940,0);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  plVar13[1] = 0xffffffff;
  plVar23 = plVar13 + 2;
  *plVar23 = 1;
  plVar13[0x99] = -0x7fffffef00000000;
  *(undefined4 *)(plVar13 + 0x122) = uVar6;
  plVar13[0xe] = (long)(plVar13 + 0x10);
  plVar13[0xf] = -0x7fffffef00000000;
  *plVar13 = (long)&PTR_LAB_042f27b8;
  plVar13[0x98] = (long)(plVar13 + 0x9a);
  plVar13[4] = (long)&PTR_LAB_042f2800;
  plVar13[0x123] = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar14 = (long *)(param_2 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *plVar14 = *plVar14 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  nn::os::InitializeMutex((MutexType *)(plVar13 + 0x124),true,0);
  sVar11 = FUN_0333b858(param_1,plVar13,*(undefined4 *)(param_2 + 0x18),1,0x40);
  puVar9 = PTR_PTR_0434a080;
  puVar3 = (uint *)(param_1 + 0x334);
  uVar18 = *(uint *)(param_1 + 0x334);
  iVar26 = *(int *)(param_1 + 0x330);
  uVar2 = iVar26 + 1;
  if (iVar26 < (int)(uVar18 & 0x3fffffff)) {
    lVar19 = *(long *)(param_1 + 0x328);
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 0x328);
    if (0x3ffffffe < iVar26) {
      FUN_032bd0a8(uVar2);
      uVar18 = *puVar3;
    }
    uVar18 = (uVar18 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar18) {
      uVar18 = 0x3fffffff;
    }
    uVar17 = uVar2;
    if ((int)uVar2 <= (int)uVar18) {
      uVar17 = uVar18;
    }
    lVar19 = FUN_032bd1d4(puVar9,uVar17,4,uVar15,iVar26,puVar3);
    iVar26 = *(int *)(param_1 + 0x330);
    *(long *)(param_1 + 0x328) = lVar19;
  }
  psVar1 = (short *)(lVar19 + (long)iVar26 * 4);
  *(uint *)(param_1 + 0x330) = uVar2;
  *psVar1 = sVar10;
  psVar1[1] = sVar11;
  plVar12[5] = (long)plVar13;
  lVar19 = *(long *)(lVar20 + 0x38d490);
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar19;
  }
  plVar14 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,0);
  plVar14[1] = 0xffffffff;
  plVar25 = plVar14 + 2;
  *plVar25 = 1;
  *plVar14 = (long)&PTR_LAB_042f2590;
  plVar14[4] = (long)&PTR_LAB_042f25d0;
  plVar14[5] = param_2;
  if (*(long *)(param_2 + 8) != 0) {
    plVar16 = (long *)(param_2 + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar8) {
        *plVar16 = *plVar16 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  sVar10 = FUN_0333b6e8(param_1,plVar14,0x40);
  uVar18 = *(uint *)(param_1 + 0x334);
  iVar26 = *(int *)(param_1 + 0x330);
  uVar2 = iVar26 + 1;
  if (iVar26 < (int)(uVar18 & 0x3fffffff)) {
    lVar19 = *(long *)(param_1 + 0x328);
  }
  else {
    uVar15 = *(undefined8 *)(param_1 + 0x328);
    if (0x3ffffffe < iVar26) {
      FUN_032bd0a8(uVar2);
      uVar18 = *puVar3;
    }
    uVar18 = (uVar18 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar18) {
      uVar18 = 0x3fffffff;
    }
    uVar17 = uVar2;
    if ((int)uVar2 <= (int)uVar18) {
      uVar17 = uVar18;
    }
    lVar19 = FUN_032bd1d4(puVar9,uVar17,4,uVar15,iVar26,puVar3);
    iVar26 = *(int *)(param_1 + 0x330);
    *(long *)(param_1 + 0x328) = lVar19;
  }
  psVar1 = (short *)(lVar19 + (long)iVar26 * 4);
  *(uint *)(param_1 + 0x330) = uVar2;
  psVar1[1] = sVar10;
  *psVar1 = sVar11;
  if (*(char *)(param_2 + 0x70) == '\0') {
    lVar19 = *(long *)(lVar20 + 0x38d490);
    if (lVar19 == 0) {
      lVar19 = FUN_0333d16c(0,1);
      *(long *)(lVar20 + 0x38d490) = lVar19;
    }
    plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
    plVar16 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x30,0);
    plVar16[1] = 0xffffffff;
    plVar27 = plVar16 + 2;
    *plVar27 = 1;
    *plVar16 = (long)&PTR_LAB_042f2630;
    plVar16[4] = (long)&PTR_LAB_042f2670;
    plVar16[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar4 = (long *)(param_2 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar8) {
          *plVar4 = *plVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    sVar11 = FUN_0333b6e8(param_1,plVar16,0x40);
    iVar26 = *(int *)(param_1 + 0x330);
    uVar2 = iVar26 + 1;
    uVar18 = *(uint *)(param_1 + 0x334);
    if (iVar26 < (int)(uVar18 & 0x3fffffff)) {
      lVar20 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar26) {
        FUN_032bd0a8(uVar2);
        uVar18 = *puVar3;
      }
      uVar18 = (uVar18 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar18) {
        uVar18 = 0x3fffffff;
      }
      uVar17 = uVar2;
      if ((int)uVar2 <= (int)uVar18) {
        uVar17 = uVar18;
      }
      lVar20 = FUN_032bd1d4(puVar9,uVar17,4,uVar15,iVar26,puVar3);
      iVar26 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar20;
    }
    *(uint *)(param_1 + 0x330) = uVar2;
    psVar1 = (short *)(lVar20 + (long)iVar26 * 4);
    *psVar1 = sVar10;
    psVar1[1] = sVar11;
    sVar10 = sVar11;
    if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
      do {
        lVar20 = *plVar27;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar8) {
          *plVar27 = lVar20 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar20 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
  if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
    do {
      lVar20 = *plVar25;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar8) {
        *plVar25 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
    do {
      lVar20 = *plVar23;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar8) {
        *plVar23 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      lVar20 = plVar12[1];
      goto joined_r0x0320f728;
    }
  }
  lVar20 = plVar12[1];
joined_r0x0320f728:
  if (lVar20 != 0) {
    do {
      lVar20 = *plVar22;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar8) {
        *plVar22 = lVar20 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  if (lVar24 != 0) {
    puVar5 = *(undefined8 **)(lVar24 + 8);
    uVar21 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar21 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar21, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_0390f40e;
      uVar15 = nn::os::GetSystemTick();
      puVar5[1] = uVar15;
    }
  }
  return sVar10;
}


