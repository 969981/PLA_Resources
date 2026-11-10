/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03212e60; name: FUN_03212e60
 */


uint FUN_03212e60(long param_1,long param_2,short param_3)

{
  short *psVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  short sVar10;
  short sVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  int iVar22;
  uint *puVar23;
  long lVar24;
  long *plVar25;
  
  lVar16 = tpidr_el0;
  if (*(long *)(lVar16 + 0x38d490) == 0) {
    lVar24 = FUN_0333d16c(0,1);
    *(long *)(lVar16 + 0x38d490) = lVar24;
    lVar24 = *(long *)(lVar24 + 0x10);
  }
  else {
    lVar24 = *(long *)(*(long *)(lVar16 + 0x38d490) + 0x10);
  }
  if (lVar24 != 0) {
    puVar21 = *(undefined8 **)(lVar24 + 8);
    uVar20 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar20 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar20, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = "TthkaiNavigatorUpdateTasks::addTasks";
      uVar17 = nn::os::GetSystemTick();
      puVar21[1] = uVar17;
    }
  }
  puVar9 = PTR_PTR_0434a080;
  puVar23 = (uint *)(param_1 + 0x24);
  uVar19 = *puVar23;
  uVar6 = *(uint *)(param_1 + 0x20);
  uVar2 = uVar6 + 1;
  if ((int)uVar6 < (int)(uVar19 & 0x3fffffff)) {
    lVar12 = *(long *)(param_1 + 0x18);
    uVar19 = uVar6;
  }
  else {
    uVar17 = *(undefined8 *)(param_1 + 0x18);
    if (0x3ffffffe < (int)uVar6) {
      FUN_032bd0a8(uVar2);
      uVar19 = *puVar23;
    }
    uVar19 = (uVar19 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar19) {
      uVar19 = 0x3fffffff;
    }
    uVar18 = uVar2;
    if ((int)uVar2 <= (int)uVar19) {
      uVar18 = uVar19;
    }
    lVar12 = FUN_032bd1d4(puVar9,uVar18,0x18,uVar17,uVar6,puVar23);
    uVar19 = *(uint *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = lVar12;
  }
  puVar21 = (undefined8 *)(lVar12 + (long)(int)uVar19 * 0x18);
  *(uint *)(param_1 + 0x20) = uVar2;
  *(undefined2 *)(puVar21 + 1) = 1;
  *puVar21 = 0;
  *(undefined1 *)((long)puVar21 + 10) = 0x40;
  puVar21[2] = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar12 = *(long *)(lVar16 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar12;
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    plVar13 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x920,0);
    uVar4 = *(undefined4 *)(param_2 + 0x90);
    uVar5 = *(undefined4 *)(param_2 + 0x28);
    plVar13[1] = 0xffffffff;
    plVar15 = plVar13 + 2;
    *plVar15 = 1;
    *plVar13 = (long)&PTR_LAB_042f2a38;
    plVar13[4] = (long)&PTR_LAB_042f2a78;
    plVar13[0xe] = (long)(plVar13 + 0x10);
    plVar13[0xf] = -0x7fffffef00000000;
    plVar13[0x98] = (long)(plVar13 + 0x9a);
    plVar13[0x99] = -0x7fffffef00000000;
    *(undefined4 *)(plVar13 + 0x122) = uVar4;
    FUN_0332bcc0(plVar13 + 6,uVar4,uVar5,1);
    *plVar13 = (long)&PTR_LAB_042f2960;
    plVar13[4] = (long)&PTR_LAB_042f29a8;
    plVar13[0x123] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
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
    sVar10 = FUN_0333b858(param_1,plVar13,*(undefined4 *)(param_2 + 0x90),1,0x40);
    if ((param_3 != -1) && (sVar10 != -1)) {
      uVar19 = *(uint *)(param_1 + 0x334);
      iVar22 = *(int *)(param_1 + 0x330);
      uVar2 = iVar22 + 1;
      if (iVar22 < (int)(uVar19 & 0x3fffffff)) {
        lVar12 = *(long *)(param_1 + 0x328);
      }
      else {
        uVar17 = *(undefined8 *)(param_1 + 0x328);
        if (0x3ffffffe < iVar22) {
          FUN_032bd0a8(uVar2);
          uVar19 = *(uint *)(param_1 + 0x334);
        }
        uVar19 = (uVar19 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar19) {
          uVar19 = 0x3fffffff;
        }
        uVar18 = uVar2;
        if ((int)uVar2 <= (int)uVar19) {
          uVar18 = uVar19;
        }
        lVar12 = FUN_032bd1d4(puVar9,uVar18,4,uVar17,iVar22);
        iVar22 = *(int *)(param_1 + 0x330);
        *(long *)(param_1 + 0x328) = lVar12;
      }
      psVar1 = (short *)(lVar12 + (long)iVar22 * 4);
      *(uint *)(param_1 + 0x330) = uVar2;
      psVar1[1] = sVar10;
      *psVar1 = param_3;
    }
    lVar12 = *(long *)(lVar16 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar12;
    }
    plVar14 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    plVar14 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,0);
    plVar14[1] = 0xffffffff;
    plVar25 = plVar14 + 2;
    *plVar25 = 1;
    *plVar14 = (long)&PTR_LAB_042f2ac0;
    plVar14[4] = (long)&PTR_LAB_042f2b00;
    plVar14[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
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
    sVar11 = FUN_0333b6e8(param_1,plVar14,0x40);
    uVar19 = *(uint *)(param_1 + 0x334);
    iVar22 = *(int *)(param_1 + 0x330);
    uVar2 = iVar22 + 1;
    if (iVar22 < (int)(uVar19 & 0x3fffffff)) {
      lVar12 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar17 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar22) {
        FUN_032bd0a8(uVar2);
        uVar19 = *(uint *)(param_1 + 0x334);
      }
      uVar19 = (uVar19 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar19) {
        uVar19 = 0x3fffffff;
      }
      uVar18 = uVar2;
      if ((int)uVar2 <= (int)uVar19) {
        uVar18 = uVar19;
      }
      lVar12 = FUN_032bd1d4(puVar9,uVar18,4,uVar17,iVar22);
      iVar22 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar12;
    }
    psVar1 = (short *)(lVar12 + (long)iVar22 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = sVar10;
    psVar1[1] = sVar11;
    uVar19 = *(uint *)(param_1 + 0x334);
    iVar22 = *(int *)(param_1 + 0x330);
    uVar2 = iVar22 + 1;
    if (iVar22 < (int)(uVar19 & 0x3fffffff)) {
      lVar12 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar17 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar22) {
        FUN_032bd0a8(uVar2);
        uVar19 = *(uint *)(param_1 + 0x334);
      }
      uVar19 = (uVar19 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar19) {
        uVar19 = 0x3fffffff;
      }
      uVar18 = uVar2;
      if ((int)uVar2 <= (int)uVar19) {
        uVar18 = uVar19;
      }
      lVar12 = FUN_032bd1d4(puVar9,uVar18,4,uVar17,iVar22);
      iVar22 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar12;
    }
    psVar1 = (short *)(lVar12 + (long)iVar22 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = sVar11;
    psVar1[1] = (short)uVar6;
    if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
      do {
        lVar12 = *plVar25;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar8) {
          *plVar25 = lVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14);
      }
    }
    if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
      do {
        lVar12 = *plVar15;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = lVar12 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
        iVar22 = *(int *)(param_2 + 0x38);
        goto joined_r0x0321316c;
      }
    }
  }
  iVar22 = *(int *)(param_2 + 0x38);
joined_r0x0321316c:
  if (iVar22 != 0) {
    lVar12 = *(long *)(lVar16 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar12;
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    plVar13 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x920,0);
    FUN_03214d58(plVar13,param_2);
    sVar10 = FUN_0333b858(param_1,plVar13,*(undefined4 *)(param_2 + 0x90),1,0x40);
    if ((param_3 != -1) && (sVar10 != -1)) {
      uVar19 = *(uint *)(param_1 + 0x334);
      iVar22 = *(int *)(param_1 + 0x330);
      uVar2 = iVar22 + 1;
      if (iVar22 < (int)(uVar19 & 0x3fffffff)) {
        lVar12 = *(long *)(param_1 + 0x328);
      }
      else {
        uVar17 = *(undefined8 *)(param_1 + 0x328);
        if (0x3ffffffe < iVar22) {
          FUN_032bd0a8(uVar2);
          uVar19 = *(uint *)(param_1 + 0x334);
        }
        uVar19 = (uVar19 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar19) {
          uVar19 = 0x3fffffff;
        }
        uVar18 = uVar2;
        if ((int)uVar2 <= (int)uVar19) {
          uVar18 = uVar19;
        }
        lVar12 = FUN_032bd1d4(puVar9,uVar18,4,uVar17,iVar22,(uint *)(param_1 + 0x334));
        iVar22 = *(int *)(param_1 + 0x330);
        *(long *)(param_1 + 0x328) = lVar12;
      }
      psVar1 = (short *)(lVar12 + (long)iVar22 * 4);
      *(uint *)(param_1 + 0x330) = uVar2;
      psVar1[1] = sVar10;
      *psVar1 = param_3;
    }
    lVar12 = *(long *)(lVar16 + 0x38d490);
    if (lVar12 == 0) {
      lVar12 = FUN_0333d16c(0,1);
      *(long *)(lVar16 + 0x38d490) = lVar12;
    }
    plVar15 = *(long **)(*(long *)(lVar12 + 8) + 0x58);
    plVar15 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x30,0);
    plVar15[1] = 0xffffffff;
    plVar14 = plVar15 + 2;
    *plVar14 = 1;
    *plVar15 = (long)&PTR_LAB_042f2cc0;
    plVar15[4] = (long)&PTR_LAB_042f2d00;
    plVar15[5] = param_2;
    if (*(long *)(param_2 + 8) != 0) {
      plVar25 = (long *)(param_2 + 0x10);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar8) {
          *plVar25 = *plVar25 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    sVar11 = FUN_0333b6e8(param_1,plVar15,0x40);
    uVar19 = *(uint *)(param_1 + 0x334);
    iVar22 = *(int *)(param_1 + 0x330);
    uVar2 = iVar22 + 1;
    puVar23 = (uint *)(param_1 + 0x334);
    if (iVar22 < (int)(uVar19 & 0x3fffffff)) {
      lVar16 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar17 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar22) {
        FUN_032bd0a8(uVar2);
        uVar19 = *puVar23;
      }
      uVar19 = (uVar19 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar19) {
        uVar19 = 0x3fffffff;
      }
      uVar18 = uVar2;
      if ((int)uVar2 <= (int)uVar19) {
        uVar18 = uVar19;
      }
      lVar16 = FUN_032bd1d4(puVar9,uVar18,4,uVar17,iVar22,puVar23);
      iVar22 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar16;
    }
    psVar1 = (short *)(lVar16 + (long)iVar22 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = sVar10;
    psVar1[1] = sVar11;
    uVar19 = *(uint *)(param_1 + 0x334);
    iVar22 = *(int *)(param_1 + 0x330);
    uVar2 = iVar22 + 1;
    if (iVar22 < (int)(uVar19 & 0x3fffffff)) {
      lVar16 = *(long *)(param_1 + 0x328);
    }
    else {
      uVar17 = *(undefined8 *)(param_1 + 0x328);
      if (0x3ffffffe < iVar22) {
        FUN_032bd0a8(uVar2);
        uVar19 = *puVar23;
      }
      uVar19 = (uVar19 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar19) {
        uVar19 = 0x3fffffff;
      }
      uVar18 = uVar2;
      if ((int)uVar2 <= (int)uVar19) {
        uVar18 = uVar19;
      }
      lVar16 = FUN_032bd1d4(puVar9,uVar18,4,uVar17,iVar22,puVar23);
      iVar22 = *(int *)(param_1 + 0x330);
      *(long *)(param_1 + 0x328) = lVar16;
    }
    psVar1 = (short *)(lVar16 + (long)iVar22 * 4);
    *(uint *)(param_1 + 0x330) = uVar2;
    *psVar1 = sVar11;
    psVar1[1] = (short)uVar6;
    if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
      do {
        lVar16 = *plVar14;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *plVar14 = lVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar15 + 0x18))(plVar15);
      }
    }
    if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
      plVar15 = plVar13 + 2;
      do {
        lVar16 = *plVar15;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = lVar16 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar16 + -1 == 0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
    }
  }
  if (lVar24 != 0) {
    puVar21 = *(undefined8 **)(lVar24 + 8);
    uVar20 = (long)puVar21 + 0x17U & 0xfffffffffffffff8;
    if ((uVar20 <= *(ulong *)(lVar24 + 0x10)) &&
       (*(ulong *)(lVar24 + 8) = uVar20, puVar21 != (undefined8 *)0x0)) {
      *puVar21 = &DAT_0390f40e;
      uVar17 = nn::os::GetSystemTick();
      puVar21[1] = uVar17;
    }
  }
  return uVar6 & 0xffff;
}


