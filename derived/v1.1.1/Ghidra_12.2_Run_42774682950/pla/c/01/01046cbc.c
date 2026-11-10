/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01046cbc; name: FUN_01046cbc
 */


void FUN_01046cbc(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  plVar8 = *(long **)(param_1 + 0x58);
  plVar6 = *(long **)(param_1 + 0x60);
  if (plVar8 == plVar6) {
LAB_01046d88:
    plVar9 = plVar8;
    if (plVar8 != plVar6) {
joined_r0x01046d98:
      while (plVar8 = plVar8 + 1, plVar8 != plVar6) {
        plVar11 = (long *)*plVar8;
        if (plVar11 == (long *)0x0) goto LAB_01046f28;
        lVar10 = plVar11[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_01046f34:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar10 = plVar11[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        plVar7 = (long *)*param_2;
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))(plVar11);
        }
        if (plVar11 != plVar7) goto LAB_01046ed0;
      }
    }
  }
  else {
    do {
      plVar9 = (long *)*plVar8;
      if (plVar9 == (long *)0x0) {
        if (*param_2 == 0) goto LAB_01046d88;
      }
      else {
        lVar10 = plVar9[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_01046f34;
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar10 = plVar9[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        plVar11 = (long *)*param_2;
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
        if (plVar9 == plVar11) goto LAB_01046d88;
      }
      plVar8 = plVar8 + 1;
      plVar9 = plVar6;
    } while (plVar8 != plVar6);
  }
  plVar8 = *(long **)(param_1 + 0x60);
  if ((long)plVar8 - (long)plVar9 == 0) {
    return;
  }
  plVar6 = (long *)((long)plVar9 + ((long)plVar8 - (long)plVar9));
  plVar11 = plVar9;
  if (plVar6 == plVar8) {
    if (plVar8 == plVar9) goto LAB_01046f94;
  }
  else {
    do {
      plVar9 = (long *)*plVar11;
      *plVar11 = 0;
      if (plVar9 != (long *)0x0) {
        lVar10 = plVar9[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))();
        }
      }
      lVar10 = *plVar6;
      plVar7 = plVar6 + 1;
      *plVar6 = 0;
      plVar9 = plVar11 + 1;
      *plVar11 = lVar10;
      plVar6 = plVar7;
      plVar11 = plVar9;
    } while (plVar7 != plVar8);
    plVar8 = *(long **)(param_1 + 0x60);
    if (plVar8 == plVar9) goto LAB_01046f94;
  }
  plVar8 = plVar8 + -1;
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) goto LAB_01046e0c;
  }
LAB_01046de0:
  if (plVar8 != plVar9) {
    while( true ) {
      plVar8 = plVar8 + -1;
      plVar6 = (long *)*plVar8;
      if (plVar6 == (long *)0x0) break;
      lVar10 = plVar6[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 != 0) break;
LAB_01046e0c:
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
      if (plVar8 == plVar9) goto LAB_01046f94;
    }
    goto LAB_01046de0;
  }
LAB_01046f94:
  *(long **)(param_1 + 0x60) = plVar9;
  return;
LAB_01046f28:
  if (*param_2 != 0) {
LAB_01046ed0:
    plVar11 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    lVar10 = *plVar8;
    *plVar8 = 0;
    *plVar9 = lVar10;
    plVar9 = plVar9 + 1;
  }
  goto joined_r0x01046d98;
}


