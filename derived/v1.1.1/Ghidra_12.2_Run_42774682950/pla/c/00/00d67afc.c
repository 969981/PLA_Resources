/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d67afc; name: FUN_00d67afc
 */


void FUN_00d67afc(long *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_50;
  long local_48;
  
  local_48 = param_1[1];
  lVar8 = FUN_00d68c40(&local_50,local_48,&local_48);
  if (lVar8 != 0) {
    lVar14 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_00d67e08;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar9;
    }
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = (long *)param_1[0xb7];
  param_1[0xb7] = 0;
  if (plVar10 != (long *)0x0) {
    lVar14 = plVar10[0xb];
    piVar2 = (int *)(lVar14 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0xb7] = lVar8;
  uVar9 = *(undefined8 *)(param_1[0xd] + 0xb8);
  uVar7 = (**(code **)(*param_1 + 0x98))(param_1);
  FUN_02847068(&local_50,uVar9,uVar7,param_1 + 0xbd,0);
  plVar10 = (long *)param_1[0xb6];
  param_1[0xb6] = 0;
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[0xb6] = local_50;
  plVar10 = (long *)param_1[0xb7];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar9;
      }
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar8 = plVar10[0xb];
      if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar9;
        }
        piVar2 = (int *)(lVar8 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_00d67c70;
      }
    }
LAB_00d67e08:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
LAB_00d67c70:
  plVar11 = *(long **)(local_50 + 0xb0);
  *(long **)(local_50 + 0xb0) = plVar10;
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))();
    }
  }
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  plVar11 = DAT_043abf80;
  lVar14 = DAT_043abf68;
  lVar15 = param_1[0x59];
  plVar10 = *(long **)(lVar15 + 0x148);
  lVar8 = *(long *)(lVar15 + 0x150);
  if (DAT_043abf80 != (long *)0x0) {
    (**(code **)(*DAT_043abf80 + 0x18))(DAT_043abf80);
  }
  plVar6 = plVar10;
  if ((lVar8 != 0) && (*plVar10 != lVar14)) {
    lVar13 = lVar8 * 0x30;
    plVar12 = plVar10 + lVar8 * 6;
    do {
      lVar13 = lVar13 + -0x30;
      plVar6 = plVar12;
      if (lVar13 == 0) break;
      plVar1 = plVar10 + 6;
      plVar10 = plVar10 + 6;
      plVar6 = plVar10;
    } while (*plVar1 != lVar14);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  if ((plVar6 != (long *)(*(long *)(lVar15 + 0x148) + *(long *)(lVar15 + 0x150) * 0x30)) &&
     (lVar8 = plVar6[4], lVar8 != 0)) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  FUN_00d2f768(param_1 + 0x30,0xa0,0x80);
  return;
}


