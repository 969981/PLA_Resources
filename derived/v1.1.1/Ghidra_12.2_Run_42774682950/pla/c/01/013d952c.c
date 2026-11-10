/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d952c; name: FUN_013d952c
 */


void FUN_013d952c(long param_1,undefined8 param_2,ulong param_3,uint param_4,undefined8 param_5,
                 uint param_6,int param_7)

{
  char cVar1;
  bool bVar2;
  undefined2 uVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
  if (lVar7 != 0) {
    plVar6 = *(long **)(lVar7 + 0x270);
    if (plVar6 != *(long **)(lVar7 + 0x278)) {
      iVar5 = 0;
      do {
        plVar12 = (long *)PTR_DAT_04379c88;
        if (*plVar6 != 0) {
          plVar12 = (long *)(*plVar6 + 0x58);
        }
        if (*plVar12 == 0x42f9724254135d22) goto LAB_013d95c8;
        plVar6 = plVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar6);
    }
  }
  iVar5 = 0;
LAB_013d95c8:
  FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar5,*(undefined8 *)(param_1 + 0x28));
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
  if (lVar7 != 0) {
    plVar6 = *(long **)(lVar7 + 0x270);
    if (plVar6 != *(long **)(lVar7 + 0x278)) {
      iVar5 = 0;
      do {
        plVar12 = (long *)PTR_DAT_04379c88;
        if (*plVar6 != 0) {
          plVar12 = (long *)(*plVar6 + 0x58);
        }
        if (*plVar12 == 0x42f96f4254135809) goto LAB_013d9638;
        plVar6 = plVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar6);
    }
  }
  iVar5 = 0;
LAB_013d9638:
  FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar5,*(undefined8 *)(param_1 + 0x30));
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
  if (lVar7 != 0) {
    plVar6 = *(long **)(lVar7 + 0x270);
    if (plVar6 != *(long **)(lVar7 + 0x278)) {
      iVar5 = 0;
      do {
        plVar12 = (long *)PTR_DAT_04379c88;
        if (*plVar6 != 0) {
          plVar12 = (long *)(*plVar6 + 0x58);
        }
        if (*plVar12 == 0x42f5ed425410454c) goto LAB_013d96a8;
        plVar6 = plVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar6);
    }
  }
  iVar5 = 0;
LAB_013d96a8:
  FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar5,*(undefined8 *)(param_1 + 0x38));
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xb0);
  if (lVar7 != 0) {
    plVar6 = *(long **)(lVar7 + 0x270);
    if (plVar6 != *(long **)(lVar7 + 0x278)) {
      iVar5 = 0;
      do {
        plVar12 = (long *)PTR_DAT_04379c88;
        if (*plVar6 != 0) {
          plVar12 = (long *)(*plVar6 + 0x58);
        }
        if (*plVar12 == 0x42f96d42541354a3) goto LAB_013d9718;
        plVar6 = plVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar7 + 0x278) != plVar6);
    }
  }
  iVar5 = 0;
LAB_013d9718:
  FUN_02c2e33c(*(long *)(param_1 + 0x10),iVar5,*(undefined8 *)(param_1 + 0x40));
  lVar7 = *(long *)(param_1 + 8);
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != (long *)0x0) {
    plVar12 = plVar6 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar11 = *(long *)(lVar7 + 0x498);
  iVar5 = 1;
  *(undefined4 *)(lVar7 + 0x490) = 1;
  if (*(char *)(lVar11 + 0x7c) == '\0') {
LAB_013d9778:
    lVar11 = (long)iVar5;
    *(undefined8 *)(lVar7 + 0x4a0) = (&DAT_043eb278)[lVar11 * 6];
    *(undefined8 *)(lVar7 + 0x4a8) = (&DAT_043eb280)[lVar11 * 6];
    *(undefined8 *)(lVar7 + 0x4b0) = (&DAT_043eb288)[lVar11 * 6];
    plVar12 = (long *)(&DAT_043eb290)[lVar11 * 6];
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar4 = *(long **)(lVar7 + 0x4b8);
    *(long **)(lVar7 + 0x4b8) = plVar12;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
  }
  else {
    uVar3 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),plVar6[0xb],*(undefined2 *)(lVar11 + 0x78));
    *(undefined2 *)(lVar11 + 0x7a) = uVar3;
    iVar5 = *(int *)(lVar7 + 0x490);
    if (iVar5 < 0xd) goto LAB_013d9778;
  }
  if (plVar6 == (long *)0x0) {
LAB_013d97d4:
    if ((param_6 & 1) != 0) goto LAB_013d97d8;
LAB_013d9a88:
    uVar9 = 1;
  }
  else {
    plVar12 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar12 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 != 0) goto LAB_013d97d4;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((param_6 & 1) == 0) goto LAB_013d9a88;
LAB_013d97d8:
    lVar7 = *(long *)(param_1 + 8);
    plVar6 = *(long **)(param_1 + 0x30);
    if (plVar6 != (long *)0x0) {
      plVar12 = plVar6 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar11 = *(long *)(lVar7 + 0x4c8);
    iVar5 = 2;
    *(undefined4 *)(lVar7 + 0x4c0) = 2;
    if (*(char *)(lVar11 + 0x7c) == '\0') {
LAB_013d982c:
      lVar11 = (long)iVar5;
      *(undefined8 *)(lVar7 + 0x4d0) = (&DAT_043eb278)[lVar11 * 6];
      *(undefined8 *)(lVar7 + 0x4d8) = (&DAT_043eb280)[lVar11 * 6];
      *(undefined8 *)(lVar7 + 0x4e0) = (&DAT_043eb288)[lVar11 * 6];
      plVar12 = (long *)(&DAT_043eb290)[lVar11 * 6];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      plVar4 = *(long **)(lVar7 + 0x4e8);
      *(long **)(lVar7 + 0x4e8) = plVar12;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    else {
      uVar3 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),plVar6[0xb],*(undefined2 *)(lVar11 + 0x78)
                          );
      *(undefined2 *)(lVar11 + 0x7a) = uVar3;
      iVar5 = *(int *)(lVar7 + 0x4c0);
      if (iVar5 < 0xd) goto LAB_013d982c;
    }
    if (plVar6 != (long *)0x0) {
      plVar12 = plVar6 + 10;
      do {
        lVar7 = *plVar12;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = (int)lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((int)lVar7 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    uVar9 = 2;
  }
  if ((param_7 == 0) && ((param_4 & 1) != 0)) {
    lVar7 = *(long *)(param_1 + 8);
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 != (long *)0x0) {
      plVar12 = plVar6 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    lVar11 = lVar7 + uVar9 * 0x30;
    lVar8 = *(long *)(lVar11 + 0x498);
    iVar5 = 4;
    *(undefined4 *)(lVar11 + 0x490) = 4;
    uVar10 = (ulong)((int)uVar9 + 1);
    if (*(char *)(lVar8 + 0x7c) == '\0') {
LAB_013d99f4:
      lVar11 = (long)iVar5;
      lVar7 = lVar7 + uVar9 * 0x30;
      *(undefined8 *)(lVar7 + 0x4a0) = (&DAT_043eb278)[lVar11 * 6];
      *(undefined8 *)(lVar7 + 0x4a8) = (&DAT_043eb280)[lVar11 * 6];
      *(undefined8 *)(lVar7 + 0x4b0) = (&DAT_043eb288)[lVar11 * 6];
      plVar12 = (long *)(&DAT_043eb290)[lVar11 * 6];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      plVar4 = *(long **)(lVar7 + 0x4b8);
      *(long **)(lVar7 + 0x4b8) = plVar12;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    else {
      uVar3 = FUN_02c30580(*(undefined8 *)(lVar8 + 0x58),plVar6[0xb],*(undefined2 *)(lVar8 + 0x78));
      *(undefined2 *)(lVar8 + 0x7a) = uVar3;
      iVar5 = *(int *)(lVar11 + 0x490);
      if (iVar5 < 0xd) goto LAB_013d99f4;
    }
    uVar9 = uVar10;
    if (plVar6 != (long *)0x0) {
      plVar12 = plVar6 + 10;
      do {
        iVar5 = (int)*plVar12 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *(int *)plVar12 = iVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (param_7 != 0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 8);
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 != (long *)0x0) {
    plVar12 = plVar6 + 10;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar11 = lVar7 + uVar9 * 0x30;
  lVar8 = *(long *)(lVar11 + 0x498);
  iVar5 = 5;
  *(undefined4 *)(lVar11 + 0x490) = 5;
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    uVar3 = FUN_02c30580(*(undefined8 *)(lVar8 + 0x58),plVar6[0xb],*(undefined2 *)(lVar8 + 0x78));
    *(undefined2 *)(lVar8 + 0x7a) = uVar3;
    iVar5 = *(int *)(lVar11 + 0x490);
    if (0xc < iVar5) goto LAB_013d9948;
  }
  lVar11 = (long)iVar5;
  lVar7 = lVar7 + uVar9 * 0x30;
  *(undefined8 *)(lVar7 + 0x4a0) = (&DAT_043eb278)[lVar11 * 6];
  *(undefined8 *)(lVar7 + 0x4a8) = (&DAT_043eb280)[lVar11 * 6];
  *(undefined8 *)(lVar7 + 0x4b0) = (&DAT_043eb288)[lVar11 * 6];
  plVar12 = (long *)(&DAT_043eb290)[lVar11 * 6];
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar4 = *(long **)(lVar7 + 0x4b8);
  *(long **)(lVar7 + 0x4b8) = plVar12;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
LAB_013d9948:
  if (plVar6 != (long *)0x0) {
    plVar12 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar12 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x013d9988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))(plVar6);
      return;
    }
  }
  return;
}


