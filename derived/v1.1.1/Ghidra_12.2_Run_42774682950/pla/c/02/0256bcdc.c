/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256bcdc; name: FUN_0256bcdc
 */


void FUN_0256bcdc(long param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *local_58;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    plVar8 = *(long **)(param_1 + 0x478);
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0256c134;
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
    }
    if ((param_2 & 1) == 0) {
      pcVar6 = *(code **)(*plVar8 + 0xa0);
    }
    else {
      pcVar6 = *(code **)(*plVar8 + 0x98);
    }
    (*pcVar6)(plVar8,0);
    lVar10 = plVar8[0xb];
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
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    lVar10 = *(long *)(param_1 + 0x480);
    puVar11 = *(undefined8 **)(lVar10 + 0x240);
    puVar13 = *(undefined8 **)(lVar10 + 0x248);
    if (puVar11 != puVar13) {
      do {
        plVar8 = (long *)*puVar11;
        if (plVar8 != (long *)0x0) {
          lVar10 = plVar8[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0256c134;
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
          lVar10 = plVar8[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0256c134;
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
        }
        if ((param_2 & 1) == 0) {
          pcVar6 = *(code **)(*plVar8 + 0xa0);
        }
        else {
          pcVar6 = *(code **)(*plVar8 + 0x98);
        }
        (*pcVar6)(plVar8,0);
        lVar10 = plVar8[0xb];
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
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        lVar10 = plVar8[0xb];
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
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar13);
      lVar10 = *(long *)(param_1 + 0x480);
    }
    plVar8 = *(long **)(lVar10 + 0x200);
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_0256c134:
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
    }
    if ((param_2 & 1) == 0) {
      pcVar6 = *(code **)(*plVar8 + 0xa0);
    }
    else {
      pcVar6 = *(code **)(*plVar8 + 0x98);
    }
    (*pcVar6)(plVar8,0);
    lVar10 = plVar8[0xb];
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
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x480) + 0x210);
    for (plVar8 = *(long **)(*(long *)(param_1 + 0x480) + 0x208); plVar8 != plVar14;
        plVar8 = plVar8 + 1) {
      puVar13 = *(undefined8 **)(*plVar8 + 0x208);
      for (puVar11 = *(undefined8 **)(*plVar8 + 0x200); puVar11 != puVar13; puVar11 = puVar11 + 1) {
        plVar9 = (long *)*puVar11;
        if (plVar9 != (long *)0x0) {
          lVar10 = plVar9[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0256c134;
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
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_0256c134;
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
        }
        if ((param_2 & 1) == 0) {
          pcVar6 = *(code **)(*plVar9 + 0xa0);
        }
        else {
          pcVar6 = *(code **)(*plVar9 + 0x98);
        }
        (*pcVar6)(plVar9,0);
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
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
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
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0x4f8);
    lVar12 = *(long *)(param_1 + 0x500);
    if (lVar10 != lVar12) {
      do {
        FUN_00ab5ae0(&local_58,lVar10);
        if (local_58 != (long *)0x0) {
          lVar7 = local_58[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
          *(byte *)((long)local_58 + 0x79) = ~param_2 & 1;
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
            (**(code **)(*local_58 + 0x20))();
          }
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar12);
    }
    *(byte *)(param_1 + 0x3b0) = param_2 & 1;
  }
  return;
}


