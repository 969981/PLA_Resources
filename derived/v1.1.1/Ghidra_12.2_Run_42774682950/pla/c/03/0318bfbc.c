/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318bfbc; name: FUN_0318bfbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0318bfbc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  void *__dest;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  void *__src;
  
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_042fdfe8;
  param_1[1] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  uVar8 = DAT_0388a148;
  uVar7 = DAT_0388a140;
  uVar6 = _UNK_03889a88;
  uVar10 = _DAT_03889a80;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[7] = 0;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar10;
  param_1[0xf] = uVar8;
  param_1[0xe] = uVar7;
  uVar7 = _UNK_0388a138;
  uVar6 = _DAT_0388a130;
  uVar10 = _DAT_03888d10;
  param_1[0x11] = _UNK_03888d18;
  param_1[0x10] = uVar10;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  *(undefined1 *)(param_1 + 6) = 0;
  lVar12 = param_2[4];
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 8) == 0) {
      param_1[4] = lVar12;
    }
    else {
      plVar9 = (long *)(lVar12 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar9 = (long *)param_1[4];
      param_1[4] = param_2[4];
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar16 = plVar9 + 2;
        do {
          lVar12 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 6) = 0;
  uVar10 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar10;
  uVar10 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar10;
  uVar10 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar10;
  uVar10 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar10;
  uVar10 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar10;
  uVar10 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar10;
  uVar1 = *(uint *)(param_2 + 8);
  if ((int)(*(uint *)((long)param_1 + 0x44) & 0x3fffffff) < (int)uVar1) {
    uVar10 = FUN_0318c720(PTR_PTR_0434a080,uVar1,param_1[7],*(undefined4 *)(param_1 + 8),
                          (long)param_1 + 0x44);
    param_1[7] = uVar10;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < (int)uVar1) {
    lVar12 = param_1[7];
    puVar18 = (undefined8 *)(lVar12 + (long)iVar2 * 0x18);
    *(uint *)(param_1 + 8) = uVar1;
    *puVar18 = 0;
    puVar18[1] = 0;
    *(undefined1 *)(puVar18 + 2) = 1;
    while (puVar5 = puVar18 + 3, puVar5 != (undefined8 *)(lVar12 + (long)(int)uVar1 * 0x18)) {
      *puVar5 = 0;
      puVar18[4] = 0;
      *(undefined1 *)(puVar18 + 5) = 1;
      puVar18 = puVar5;
    }
  }
  else if ((int)uVar1 < iVar2) {
    lVar14 = param_1[7];
    lVar12 = lVar14 + (long)iVar2 * 0x18;
    *(uint *)(param_1 + 8) = uVar1;
    lVar17 = *(long *)(lVar12 + -0x10);
    plVar9 = (long *)(lVar12 + -0x18);
    lVar12 = tpidr_el0;
    if (lVar17 != 0) {
      nn::os::FinalizeMutex((MutexType *)(lVar17 + 8));
      lVar15 = *(long *)(lVar12 + 0x38d490);
      if (lVar15 == 0) {
        lVar15 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar15;
      }
      plVar16 = *(long **)(*(long *)(lVar15 + 8) + 0x58);
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar17,0x38);
    }
    plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 0x18);
    plVar16 = (long *)*plVar9;
    if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
      plVar13 = plVar16 + 2;
      do {
        lVar17 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 + -1 == 0) goto LAB_0318c504;
    }
LAB_0318c48c:
    if (plVar9 != plVar11) {
      while( true ) {
        lVar17 = plVar9[-2];
        plVar9 = plVar9 + -3;
        if (lVar17 != 0) {
          nn::os::FinalizeMutex((MutexType *)(lVar17 + 8));
          lVar14 = *(long *)(lVar12 + 0x38d490);
          if (lVar14 == 0) {
            lVar14 = FUN_0333d16c(0,1);
            *(long *)(lVar12 + 0x38d490) = lVar14;
          }
          plVar16 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
          (**(code **)(*plVar16 + 0x18))(plVar16,lVar17,0x38);
        }
        plVar16 = (long *)*plVar9;
        if ((plVar16 == (long *)0x0) || (plVar16[1] == 0)) break;
        plVar13 = plVar16 + 2;
        do {
          lVar17 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar17 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar17 + -1 != 0) break;
LAB_0318c504:
        (**(code **)(*plVar16 + 0x18))();
        if (plVar9 == plVar11) goto LAB_0318c134;
      }
      goto LAB_0318c48c;
    }
  }
LAB_0318c134:
  if (0 < (int)uVar1) {
    plVar9 = (long *)param_2[7];
    if (*plVar9 != 0) {
      plVar13 = (long *)param_1[7];
      *(undefined1 *)(plVar13 + 2) = 0;
      plVar11 = (long *)*plVar13;
      plVar16 = (long *)*plVar9;
      if (plVar11 != plVar16) {
        if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
          plVar16 = plVar16 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = *plVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar11 = (long *)*plVar13;
          plVar16 = (long *)*plVar9;
        }
        *plVar13 = (long)plVar16;
        if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
          plVar16 = plVar11 + 2;
          do {
            lVar12 = *plVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar11 + 0x18))();
          }
        }
      }
      *(undefined1 *)(plVar9 + 2) = 0;
    }
    if (uVar1 != 1) {
      uVar19 = 1;
      do {
        lVar12 = param_2[7];
        plVar9 = (long *)(lVar12 + uVar19 * 0x18);
        if (*plVar9 != 0) {
          plVar13 = (long *)(param_1[7] + uVar19 * 0x18);
          *(undefined1 *)(plVar13 + 2) = 0;
          plVar11 = (long *)*plVar13;
          plVar16 = (long *)*plVar9;
          if (plVar11 != plVar16) {
            if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
              plVar16 = plVar16 + 2;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar4) {
                  *plVar16 = *plVar16 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              plVar11 = (long *)*plVar13;
              plVar16 = (long *)*plVar9;
            }
            *plVar13 = (long)plVar16;
            if ((plVar11 != (long *)0x0) && (plVar11[1] != 0)) {
              plVar9 = plVar11 + 2;
              do {
                lVar17 = *plVar9;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar4) {
                  *plVar9 = lVar17 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar17 + -1 == 0) {
                (**(code **)(*plVar11 + 0x18))();
              }
            }
          }
          *(undefined1 *)(lVar12 + uVar19 * 0x18 + 0x10) = 0;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar1);
    }
  }
  if (param_2 != param_1) {
    iVar2 = *(int *)(param_2 + 10);
    __src = (void *)param_2[9];
    __dest = (void *)param_1[9];
    if ((int)(*(uint *)((long)param_1 + 0x54) & 0x3fffffff) < iVar2) {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar2,4,__dest,*(undefined4 *)(param_1 + 10),
                                    (long)param_1 + 0x54);
      param_1[9] = __dest;
    }
    memcpy(__dest,__src,(long)iVar2 << 2);
    *(int *)(param_1 + 10) = iVar2;
  }
  lVar12 = param_2[0x18];
  if (lVar12 != 0) {
    lVar17 = tpidr_el0;
    lVar14 = *(long *)(lVar17 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar17 + 0x38d490) = lVar14;
    }
    plVar9 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
    puVar18 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x28,0);
    plVar9 = *(long **)(lVar12 + 0x18);
    *puVar18 = &PTR_LAB_042f5f88;
    puVar18[1] = 0xffffffff;
    puVar18[2] = 1;
    puVar18[3] = plVar9;
    if (plVar9 == (long *)0x0) {
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = plVar9;
      if (plVar9[1] != 0) {
        plVar9 = plVar9 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar16 = (long *)puVar18[3];
      }
      plVar9 = plVar16;
    }
    puVar18[4] = param_1;
    (**(code **)(*plVar9 + 0x48))(plVar16,*(undefined8 *)(param_1[4] + 0x68));
    plVar9 = (long *)param_1[0x18];
    param_1[0x18] = puVar18;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar16 = plVar9 + 2;
      do {
        lVar12 = *plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *plVar16 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0318c3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x18))();
        return;
      }
    }
  }
  return;
}


