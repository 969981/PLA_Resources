/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a0de4; name: FUN_011a0de4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a0de4(long param_1,long param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined2 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  local_80 = &DAT_e2c06acab97c29c2;
  pcStack_78 = "CommonOptionBar";
  local_70 = 0xf;
  local_68 = (long *)0x0;
  lVar6 = FUN_00d6adf4(param_1 + 0x180,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar15 = *(long **)(*(long *)(*(long *)(param_1 + 0x68) + 0xb0) + 0x18);
  if (plVar15 != (long *)0x0) {
    lVar12 = plVar15[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar13 = (long *)plVar15[0xd];
  if (plVar13 != (long *)0x0) {
    plVar14 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar12 = plVar15[0xb];
  piVar1 = (int *)(lVar12 + 0xc);
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
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
    plVar15 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar15 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar14 = (long *)plVar15[0x38];
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar10 = plVar15 + 10;
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
    (**(code **)(*plVar15 + 0x10))();
  }
  lVar12 = *(long *)(lVar6 + 0x498);
  *(undefined4 *)(lVar6 + 0x490) = 0xd;
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  lVar12 = *(long *)(lVar6 + 0x4c8);
  *(undefined4 *)(lVar6 + 0x4c0) = 0xd;
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  lVar12 = *(long *)(lVar6 + 0x4f8);
  *(undefined4 *)(lVar6 + 0x4f0) = 0xd;
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  lVar12 = *(long *)(lVar6 + 0x528);
  *(undefined4 *)(lVar6 + 0x520) = 0xd;
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  *(undefined4 *)(lVar6 + 0x550) = 0xd;
  lVar12 = *(long *)(lVar6 + 0x558);
  if (*(char *)(lVar12 + 0x7c) != '\0') {
    **(undefined2 **)(lVar12 + 0x58) = 0;
    *(undefined2 *)(lVar12 + 0x7a) = 0;
  }
  puVar4 = PTR_DAT_04379c88;
  plVar15 = plVar14 + 10;
  if (plVar14 == (long *)0x0) {
    uVar16 = 0;
    do {
      lVar12 = plVar13[0x16];
      if (lVar12 != 0) {
        plVar10 = *(long **)(lVar12 + 0x270);
        if (plVar10 != *(long **)(lVar12 + 0x278)) {
          iVar9 = 0;
          do {
            plVar8 = (long *)puVar4;
            if (*plVar10 != 0) {
              plVar8 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar8 == *(long *)(param_2 + uVar16 * 0x10)) goto LAB_011a124c;
            plVar10 = plVar10 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar12 + 0x278) != plVar10);
        }
      }
      iVar9 = 0;
LAB_011a124c:
      FUN_02c2e33c(plVar13,iVar9,0);
      lVar12 = lVar6 + (uVar16 & 0xffffffff) * 0x30;
      iVar9 = *(int *)(param_2 + uVar16 * 0x10 + 8);
      lVar11 = *(long *)(lVar12 + 0x498);
      *(int *)(lVar12 + 0x490) = iVar9;
      if (*(char *)(lVar11 + 0x7c) != '\0') {
        uVar5 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),_DAT_00000058,
                             *(undefined2 *)(lVar11 + 0x78));
        *(undefined2 *)(lVar11 + 0x7a) = uVar5;
        iVar9 = *(int *)(lVar12 + 0x490);
      }
      if (iVar9 < 0xd) {
        lVar12 = (long)iVar9;
        lVar11 = lVar6 + (uVar16 & 0xffffffff) * 0x30;
        *(undefined8 *)(lVar11 + 0x4a0) = (&DAT_043eb278)[lVar12 * 6];
        *(undefined8 *)(lVar11 + 0x4a8) = (&DAT_043eb280)[lVar12 * 6];
        *(undefined8 *)(lVar11 + 0x4b0) = (&DAT_043eb288)[lVar12 * 6];
        plVar10 = (long *)(&DAT_043eb290)[lVar12 * 6];
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
        plVar8 = *(long **)(lVar11 + 0x4b8);
        *(long **)(lVar11 + 0x4b8) = plVar10;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))();
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != (param_3 & 0xffffffff));
  }
  else {
    uVar16 = 0;
    do {
      lVar12 = plVar13[0x16];
      if (lVar12 != 0) {
        plVar10 = *(long **)(lVar12 + 0x270);
        if (plVar10 != *(long **)(lVar12 + 0x278)) {
          iVar9 = 0;
          do {
            plVar8 = (long *)puVar4;
            if (*plVar10 != 0) {
              plVar8 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar8 == *(long *)(param_2 + uVar16 * 0x10)) goto LAB_011a102c;
            plVar10 = plVar10 + 1;
            iVar9 = iVar9 + 1;
          } while (*(long **)(lVar12 + 0x278) != plVar10);
        }
      }
      iVar9 = 0;
LAB_011a102c:
      FUN_02c2e33c(plVar13,iVar9,plVar14);
      iVar9 = *(int *)(param_2 + uVar16 * 0x10 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar12 = lVar6 + (uVar16 & 0xffffffff) * 0x30;
      lVar11 = *(long *)(lVar12 + 0x498);
      *(int *)(lVar12 + 0x490) = iVar9;
      if (*(char *)(lVar11 + 0x7c) != '\0') {
        uVar5 = FUN_02c30580(*(undefined8 *)(lVar11 + 0x58),plVar14[0xb],
                             *(undefined2 *)(lVar11 + 0x78));
        *(undefined2 *)(lVar11 + 0x7a) = uVar5;
        iVar9 = *(int *)(lVar12 + 0x490);
      }
      if (iVar9 < 0xd) {
        lVar12 = (long)iVar9;
        lVar11 = lVar6 + (uVar16 & 0xffffffff) * 0x30;
        *(undefined8 *)(lVar11 + 0x4a0) = (&DAT_043eb278)[lVar12 * 6];
        *(undefined8 *)(lVar11 + 0x4a8) = (&DAT_043eb280)[lVar12 * 6];
        *(undefined8 *)(lVar11 + 0x4b0) = (&DAT_043eb288)[lVar12 * 6];
        plVar10 = (long *)(&DAT_043eb290)[lVar12 * 6];
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
        plVar8 = *(long **)(lVar11 + 0x4b8);
        *(long **)(lVar11 + 0x4b8) = plVar10;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))();
        }
      }
      do {
        iVar9 = (int)*plVar15 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar3) {
          *(int *)plVar15 = iVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != (param_3 & 0xffffffff));
  }
  FUN_02814a44(lVar6,1);
  if (plVar14 != (long *)0x0) {
    do {
      iVar9 = (int)*plVar15 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (plVar13 != (long *)0x0) {
    plVar15 = plVar13 + 10;
    do {
      iVar9 = (int)*plVar15 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *(int *)plVar15 = iVar9;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


