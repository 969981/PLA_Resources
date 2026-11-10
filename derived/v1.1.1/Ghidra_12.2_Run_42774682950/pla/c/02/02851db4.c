/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02851db4; name: FUN_02851db4
 */


void FUN_02851db4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  puVar8 = *(undefined1 **)(param_1 + 0x78);
  if (puVar8 != &DAT_cbf29ce484222645) {
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar8 = *(undefined1 **)(param_1 + 0x78);
    }
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar12 == (long *)0x0) {
      lVar10 = plVar11[0x16];
      if (lVar10 != 0) {
        plVar12 = *(long **)(lVar10 + 0x270);
        if (plVar12 != *(long **)(lVar10 + 0x278)) {
          iVar7 = 0;
          do {
            puVar1 = (undefined8 *)PTR_DAT_04379c88;
            if (*plVar12 != 0) {
              puVar1 = (undefined8 *)(*plVar12 + 0x58);
            }
            if ((undefined1 *)*puVar1 == puVar8) goto LAB_02852414;
            plVar12 = plVar12 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar10 + 0x278) != plVar12);
        }
      }
      iVar7 = 0;
LAB_02852414:
      FUN_02c2e33c(plVar11,iVar7,0);
    }
    else {
      plVar3 = plVar12 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar10 = plVar11[0x16];
      if (lVar10 != 0) {
        plVar9 = *(long **)(lVar10 + 0x270);
        if (plVar9 != *(long **)(lVar10 + 0x278)) {
          iVar7 = 0;
          do {
            puVar1 = (undefined8 *)PTR_DAT_04379c88;
            if (*plVar9 != 0) {
              puVar1 = (undefined8 *)(*plVar9 + 0x58);
            }
            if ((undefined1 *)*puVar1 == puVar8) goto LAB_02851ea8;
            plVar9 = plVar9 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar10 + 0x278) != plVar9);
        }
      }
      iVar7 = 0;
LAB_02851ea8:
      FUN_02c2e33c(plVar11,iVar7,plVar12);
      do {
        iVar7 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    lVar13 = *(long *)(param_1 + 8);
    uVar4 = *(undefined8 *)(lVar13 + 0x1c0);
    lVar10 = *(long *)(lVar13 + 0x1c8);
    lVar14 = *(long *)(lVar13 + 0x1b8);
    *(undefined4 *)(lVar14 + 0x124) = 0;
    *(undefined2 *)(lVar14 + 0x128) = 0;
    *(undefined4 *)(lVar14 + 300) = 0;
    *(undefined4 *)(lVar14 + 0x134) = 0;
    FUN_02c33414(lVar14,uVar4);
    if (*(char *)(lVar10 + 0x7c) != '\0') {
      **(undefined2 **)(lVar10 + 0x58) = 0;
      *(undefined2 *)(lVar10 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar14,lVar10,uVar4,0,0);
    FUN_0283ce7c(lVar13,param_1 + 0x168,*(undefined8 *)(lVar13 + 0x1c8),10);
    if (plVar11 == (long *)0x0) {
LAB_02851f4c:
      plVar11 = *(long **)(param_1 + 0x10);
    }
    else {
      plVar12 = plVar11 + 10;
      do {
        iVar7 = (int)*plVar12 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != 0) goto LAB_02851f4c;
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x10);
    }
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = (int)*plVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar10 = *(long *)(param_1 + 0x78);
    plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
    if (plVar12 == (long *)0x0) {
      lVar13 = plVar11[0x16];
      if (lVar13 != 0) {
        plVar12 = *(long **)(lVar13 + 0x270);
        if (plVar12 != *(long **)(lVar13 + 0x278)) {
          iVar7 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar12 != 0) {
              plVar3 = (long *)(*plVar12 + 0x58);
            }
            if (*plVar3 == lVar10) goto LAB_02852478;
            plVar12 = plVar12 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar13 + 0x278) != plVar12);
        }
      }
      iVar7 = 0;
LAB_02852478:
      FUN_02c2e33c(plVar11,iVar7,0);
    }
    else {
      plVar3 = plVar12 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar13 = plVar11[0x16];
      if (lVar13 != 0) {
        plVar9 = *(long **)(lVar13 + 0x270);
        if (plVar9 != *(long **)(lVar13 + 0x278)) {
          iVar7 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar9 != 0) {
              plVar2 = (long *)(*plVar9 + 0x58);
            }
            if (*plVar2 == lVar10) goto LAB_02851fe4;
            plVar9 = plVar9 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar13 + 0x278) != plVar9);
        }
      }
      iVar7 = 0;
LAB_02851fe4:
      FUN_02c2e33c(plVar11,iVar7,plVar12);
      do {
        iVar7 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    lVar13 = *(long *)(param_1 + 8);
    uVar4 = *(undefined8 *)(lVar13 + 0x1c0);
    lVar10 = *(long *)(lVar13 + 0x1c8);
    lVar14 = *(long *)(lVar13 + 0x1b8);
    *(undefined4 *)(lVar14 + 0x124) = 0;
    *(undefined2 *)(lVar14 + 0x128) = 0;
    *(undefined4 *)(lVar14 + 300) = 0;
    *(undefined4 *)(lVar14 + 0x134) = 0;
    FUN_02c33414(lVar14,uVar4);
    if (*(char *)(lVar10 + 0x7c) != '\0') {
      **(undefined2 **)(lVar10 + 0x58) = 0;
      *(undefined2 *)(lVar10 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar14,lVar10,uVar4,0,0);
    FUN_0283ce7c(lVar13,param_1 + 0x1c8,*(undefined8 *)(lVar13 + 0x1c8),10);
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 10;
      do {
        iVar7 = (int)*plVar12 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *(int *)plVar12 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  puVar8 = *(undefined1 **)(param_1 + 0x80);
  if (puVar8 == &DAT_cbf29ce484222645) {
    return;
  }
  plVar11 = *(long **)(param_1 + 0x10);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar8 = *(undefined1 **)(param_1 + 0x80);
  }
  plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar12 == (long *)0x0) {
    lVar10 = plVar11[0x16];
    if (lVar10 != 0) {
      plVar12 = *(long **)(lVar10 + 0x270);
      if (plVar12 != *(long **)(lVar10 + 0x278)) {
        iVar7 = 0;
        do {
          puVar1 = (undefined8 *)PTR_DAT_04379c88;
          if (*plVar12 != 0) {
            puVar1 = (undefined8 *)(*plVar12 + 0x58);
          }
          if ((undefined1 *)*puVar1 == puVar8) goto LAB_028524dc;
          plVar12 = plVar12 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar12);
      }
    }
    iVar7 = 0;
LAB_028524dc:
    FUN_02c2e33c(plVar11,iVar7,0);
  }
  else {
    plVar3 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar10 = plVar11[0x16];
    if (lVar10 != 0) {
      plVar9 = *(long **)(lVar10 + 0x270);
      if (plVar9 != *(long **)(lVar10 + 0x278)) {
        iVar7 = 0;
        do {
          puVar1 = (undefined8 *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            puVar1 = (undefined8 *)(*plVar9 + 0x58);
          }
          if ((undefined1 *)*puVar1 == puVar8) goto LAB_02852134;
          plVar9 = plVar9 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar10 + 0x278) != plVar9);
      }
    }
    iVar7 = 0;
LAB_02852134:
    FUN_02c2e33c(plVar11,iVar7,plVar12);
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  lVar13 = *(long *)(param_1 + 8);
  uVar4 = *(undefined8 *)(lVar13 + 0x1c0);
  lVar10 = *(long *)(lVar13 + 0x1c8);
  lVar14 = *(long *)(lVar13 + 0x1b8);
  *(undefined4 *)(lVar14 + 0x124) = 0;
  *(undefined2 *)(lVar14 + 0x128) = 0;
  *(undefined4 *)(lVar14 + 300) = 0;
  *(undefined4 *)(lVar14 + 0x134) = 0;
  FUN_02c33414(lVar14,uVar4);
  if (*(char *)(lVar10 + 0x7c) != '\0') {
    **(undefined2 **)(lVar10 + 0x58) = 0;
    *(undefined2 *)(lVar10 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar14,lVar10,uVar4,0,0);
  FUN_0283ce7c(lVar13,param_1 + 0x228,*(undefined8 *)(lVar13 + 0x1c8),10);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar11 = *(long **)(param_1 + 0x10);
      goto joined_r0x028521dc;
    }
  }
  plVar11 = *(long **)(param_1 + 0x10);
joined_r0x028521dc:
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lVar10 = *(long *)(param_1 + 0x80);
  plVar12 = *(long **)(*(long *)(param_1 + 8) + 0x1c0);
  if (plVar12 == (long *)0x0) {
    lVar13 = plVar11[0x16];
    if (lVar13 != 0) {
      plVar12 = *(long **)(lVar13 + 0x270);
      if (plVar12 != *(long **)(lVar13 + 0x278)) {
        iVar7 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar12 != 0) {
            plVar3 = (long *)(*plVar12 + 0x58);
          }
          if (*plVar3 == lVar10) goto LAB_02852540;
          plVar12 = plVar12 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar13 + 0x278) != plVar12);
      }
    }
    iVar7 = 0;
LAB_02852540:
    FUN_02c2e33c(plVar11,iVar7,0);
  }
  else {
    plVar3 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar13 = plVar11[0x16];
    if (lVar13 != 0) {
      plVar9 = *(long **)(lVar13 + 0x270);
      if (plVar9 != *(long **)(lVar13 + 0x278)) {
        iVar7 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar9 != 0) {
            plVar2 = (long *)(*plVar9 + 0x58);
          }
          if (*plVar2 == lVar10) goto LAB_02852270;
          plVar9 = plVar9 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar13 + 0x278) != plVar9);
      }
    }
    iVar7 = 0;
LAB_02852270:
    FUN_02c2e33c(plVar11,iVar7,plVar12);
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  lVar13 = *(long *)(param_1 + 8);
  uVar4 = *(undefined8 *)(lVar13 + 0x1c0);
  lVar10 = *(long *)(lVar13 + 0x1c8);
  lVar14 = *(long *)(lVar13 + 0x1b8);
  *(undefined4 *)(lVar14 + 0x124) = 0;
  *(undefined2 *)(lVar14 + 0x128) = 0;
  *(undefined4 *)(lVar14 + 300) = 0;
  *(undefined4 *)(lVar14 + 0x134) = 0;
  FUN_02c33414(lVar14,uVar4);
  if (*(char *)(lVar10 + 0x7c) != '\0') {
    **(undefined2 **)(lVar10 + 0x58) = 0;
    *(undefined2 *)(lVar10 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar14,lVar10,uVar4,0,0);
  FUN_0283ce7c(lVar13,param_1 + 0x288,*(undefined8 *)(lVar13 + 0x1c8),10);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02852334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x10))(plVar11);
      return;
    }
  }
  return;
}


