/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d89e58; name: FUN_00d89e58
 */


undefined8 FUN_00d89e58(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  plVar7 = *(long **)(param_1 + 0x70);
  *(bool *)(param_1 + 0x80) = plVar7 != (long *)0x0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  if (plVar7 == (long *)0x0) {
    uVar5 = 2;
  }
  else {
    while( true ) {
      iVar4 = *(int *)((long)plVar7 + 0x74);
      uVar10 = *(undefined8 *)(param_1 + 0x68);
      if (iVar4 != 1) break;
LAB_00d89eac:
      iVar4 = (**(code **)(*plVar7 + 0x50))(plVar7,uVar10);
      if (iVar4 != 3) {
        if (iVar4 != 1) {
          return 0;
        }
        (**(code **)(*plVar7 + 0x58))(plVar7,uVar10);
        *(undefined4 *)((long)plVar7 + 0x74) = 2;
        goto LAB_00d89f3c;
      }
      plVar7 = *(long **)(param_1 + 0x70);
      if (plVar7 == (long *)0x0) {
        return 2;
      }
    }
    if (iVar4 == 0) {
      uVar6 = (**(code **)(*plVar7 + 0x40))(plVar7,uVar10);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      (**(code **)(*plVar7 + 0x48))(plVar7,uVar10);
      *(undefined4 *)((long)plVar7 + 0x74) = 1;
      goto LAB_00d89eac;
    }
    if (iVar4 != 2) {
      return 0;
    }
LAB_00d89f3c:
    if (*(long *)(param_1 + 0x78) == 0) {
      plVar7 = *(long **)(param_1 + 0x70);
      plVar8 = (long *)plVar7[0xd];
      if (plVar8 != (long *)0x0) {
        lVar11 = plVar8[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_00d8a160:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
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
        lVar11 = plVar8[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        lVar11 = *(long *)(param_1 + 0x70);
        lVar9 = *(long *)(lVar11 + 0x68);
        if (lVar9 != 0) {
          lVar11 = *(long *)(lVar9 + 0x58);
          if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_00d8a160;
          if (*(long *)(lVar11 + 0x10) == 0) {
            uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
            *(undefined8 *)(lVar11 + 0x10) = uVar10;
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
          lVar11 = *(long *)(param_1 + 0x70);
        }
        plVar7 = *(long **)(lVar11 + 0x68);
        *(undefined8 *)(lVar11 + 0x68) = 0;
        if (plVar7 != (long *)0x0) {
          lVar11 = plVar7[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar4 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))();
          }
        }
        plVar7 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = 0;
        if (plVar7 == (long *)0x0) {
          *(long *)(param_1 + 0x70) = lVar9;
          return 0;
        }
        lVar11 = plVar7[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
        plVar7 = *(long **)(param_1 + 0x70);
        *(long *)(param_1 + 0x70) = lVar9;
        if (plVar7 == (long *)0x0) {
          return 0;
        }
        lVar11 = plVar7[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 1) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
          return 0;
        }
        return 0;
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (plVar7 != (long *)0x0) {
        lVar11 = plVar7[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      uVar5 = 1;
      *(undefined1 *)(param_1 + 0x81) = 1;
    }
    else {
      plVar7 = *(long **)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
      if (plVar7 != (long *)0x0) {
        lVar11 = plVar7[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))();
        }
      }
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = uVar10;
    }
  }
  return uVar5;
}


