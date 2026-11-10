/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012201cc; name: FUN_012201cc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012201cc(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined2 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  local_80 = &DAT_e2c06acab97c29c2;
  pcStack_78 = "CommonOptionBar";
  local_70 = 0xf;
  local_68 = (long *)0x0;
  plVar6 = (long *)FUN_00d6adf4(param_1 + 0x180,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar14 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar14 != (long *)0x0) {
    lVar11 = plVar14[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar12 = (long *)plVar14[0xd];
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar11 = plVar14[0xb];
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
    plVar14 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar14 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar14 != (long *)0x0) {
    plVar13 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar13 = (long *)plVar14[0x38];
  if (plVar13 != (long *)0x0) {
    plVar10 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = plVar14 + 10;
  do {
    iVar9 = (int)*plVar10 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *(int *)plVar10 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  FUN_02814e04(plVar6);
  puVar4 = PTR_DAT_04379c88;
  if (param_3 != 0) {
    if (plVar13 == (long *)0x0) {
      uVar15 = 0;
      do {
        lVar11 = plVar12[0x16];
        if (lVar11 != 0) {
          plVar14 = *(long **)(lVar11 + 0x270);
          if (plVar14 != *(long **)(lVar11 + 0x278)) {
            iVar9 = 0;
            do {
              plVar10 = (long *)puVar4;
              if (*plVar14 != 0) {
                plVar10 = (long *)(*plVar14 + 0x58);
              }
              if (*plVar10 == *(long *)(param_2 + uVar15 * 0x10)) goto LAB_012205d4;
              plVar14 = plVar14 + 1;
              iVar9 = iVar9 + 1;
            } while (*(long **)(lVar11 + 0x278) != plVar14);
          }
        }
        iVar9 = 0;
LAB_012205d4:
        FUN_02c2e33c(plVar12,iVar9,0);
        lVar11 = plVar6[uVar15 * 6 + 0x93];
        iVar9 = *(int *)(param_2 + uVar15 * 0x10 + 8);
        *(int *)(plVar6 + uVar15 * 6 + 0x92) = iVar9;
        if (*(char *)(lVar11 + 0x7c) != '\0') {
          uVar5 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),_DAT_00000058,
                               *(undefined2 *)(lVar11 + 0x78));
          *(undefined2 *)(lVar11 + 0x7a) = uVar5;
          iVar9 = (int)plVar6[uVar15 * 6 + 0x92];
        }
        if (iVar9 < 0xd) {
          lVar11 = (long)iVar9;
          plVar6[uVar15 * 6 + 0x94] = (&DAT_043eb278)[lVar11 * 6];
          plVar6[uVar15 * 6 + 0x95] = (&DAT_043eb280)[lVar11 * 6];
          plVar6[uVar15 * 6 + 0x96] = (&DAT_043eb288)[lVar11 * 6];
          plVar14 = (long *)(&DAT_043eb290)[lVar11 * 6];
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
          }
          plVar10 = (long *)plVar6[uVar15 * 6 + 0x97];
          plVar6[uVar15 * 6 + 0x97] = (long)plVar14;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x20))();
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != param_3);
    }
    else {
      uVar15 = 0;
      plVar14 = plVar13 + 10;
      do {
        lVar11 = plVar12[0x16];
        if (lVar11 != 0) {
          plVar10 = *(long **)(lVar11 + 0x270);
          if (plVar10 != *(long **)(lVar11 + 0x278)) {
            iVar9 = 0;
            do {
              plVar8 = (long *)puVar4;
              if (*plVar10 != 0) {
                plVar8 = (long *)(*plVar10 + 0x58);
              }
              if (*plVar8 == *(long *)(param_2 + uVar15 * 0x10)) goto LAB_01220390;
              plVar10 = plVar10 + 1;
              iVar9 = iVar9 + 1;
            } while (*(long **)(lVar11 + 0x278) != plVar10);
          }
        }
        iVar9 = 0;
LAB_01220390:
        FUN_02c2e33c(plVar12,iVar9,plVar13);
        iVar9 = *(int *)(param_2 + uVar15 * 0x10 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *(int *)plVar14 = (int)*plVar14 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar11 = plVar6[uVar15 * 6 + 0x93];
        *(int *)(plVar6 + uVar15 * 6 + 0x92) = iVar9;
        if (*(char *)(lVar11 + 0x7c) != '\0') {
          uVar5 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),plVar13[0xb],
                               *(undefined2 *)(lVar11 + 0x78));
          *(undefined2 *)(lVar11 + 0x7a) = uVar5;
          iVar9 = (int)plVar6[uVar15 * 6 + 0x92];
        }
        if (iVar9 < 0xd) {
          lVar11 = (long)iVar9;
          plVar6[uVar15 * 6 + 0x94] = (&DAT_043eb278)[lVar11 * 6];
          plVar6[uVar15 * 6 + 0x95] = (&DAT_043eb280)[lVar11 * 6];
          plVar6[uVar15 * 6 + 0x96] = (&DAT_043eb288)[lVar11 * 6];
          plVar10 = (long *)(&DAT_043eb290)[lVar11 * 6];
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x18))(plVar10);
          }
          plVar8 = (long *)plVar6[uVar15 * 6 + 0x97];
          plVar6[uVar15 * 6 + 0x97] = (long)plVar10;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x20))();
          }
        }
        do {
          iVar9 = (int)*plVar14 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *(int *)plVar14 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != param_3);
    }
  }
  FUN_02814a44(plVar6,1);
  if (*(char *)((long)plVar6 + 0xa2) != '\0') {
    *(undefined1 *)((long)plVar6 + 0xa2) = 0;
    (**(code **)(*plVar6 + 0x98))(plVar6,0);
  }
  if (plVar13 != (long *)0x0) {
    plVar6 = plVar13 + 10;
    do {
      iVar9 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar6 = plVar12 + 10;
    do {
      iVar9 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return;
}


