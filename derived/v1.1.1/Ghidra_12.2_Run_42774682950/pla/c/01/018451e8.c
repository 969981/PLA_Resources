/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018451e8; name: FUN_018451e8
 */


void FUN_018451e8(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = param_1[0xd];
  if (lVar7 == 0) {
    return;
  }
  lVar8 = param_1[0xb];
  if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_018454ec;
  if (*(long *)(lVar8 + 0x10) == 0) {
    uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
    *(undefined8 *)(lVar8 + 0x10) = uVar5;
  }
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((*(long **)(lVar7 + 0x68) != (long *)0x0) && (*(long **)(lVar7 + 0x68) == param_1)) {
    lVar8 = param_1[0x11];
    if (lVar8 == 0) {
      *(undefined8 *)(lVar7 + 0x68) = 0;
      plVar6 = param_1;
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x58);
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_018454ec;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar6 = *(long **)(lVar7 + 0x68);
      *(long *)(lVar7 + 0x68) = lVar8;
      if (plVar6 == (long *)0x0) goto LAB_018452b4;
    }
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
LAB_018452b4:
  lVar7 = param_1[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
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
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*param_1 + 0x20))(param_1);
    lVar7 = param_1[0x10];
    if (lVar7 != 0) goto LAB_018452d8;
LAB_01845340:
    lVar7 = param_1[0x11];
  }
  else {
    lVar7 = param_1[0x10];
    if (lVar7 == 0) goto LAB_01845340;
LAB_018452d8:
    lVar8 = param_1[0x11];
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + 0x58);
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_018454ec;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = *(long **)(lVar7 + 0x88);
    *(long *)(lVar7 + 0x88) = lVar8;
    if (plVar6 == (long *)0x0) goto LAB_01845340;
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_01845340;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    lVar7 = param_1[0x11];
  }
  if (lVar7 != 0) {
    lVar8 = param_1[0x10];
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + 0x58);
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_018454ec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar5;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = *(long **)(lVar7 + 0x80);
    *(long *)(lVar7 + 0x80) = lVar8;
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
  }
  plVar6 = (long *)param_1[0x10];
  param_1[0x10] = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  plVar6 = (long *)param_1[0x11];
  param_1[0x11] = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  plVar6 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x018454a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))();
      return;
    }
  }
  return;
}


