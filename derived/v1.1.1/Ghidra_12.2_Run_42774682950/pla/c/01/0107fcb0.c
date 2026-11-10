/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107fcb0; name: FUN_0107fcb0
 */


void FUN_0107fcb0(long param_1)

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
  long *plVar10;
  long lVar11;
  long *local_40;
  long *local_38;
  
  plVar10 = *(long **)(param_1 + 0x90);
  if (plVar10 != *(long **)(param_1 + 0x98)) {
    do {
      plVar9 = (long *)*plVar10;
      if (plVar9 != (long *)0x0) {
        lVar11 = plVar9[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar5;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_40 = plVar10 + 1;
      if (*(char *)((long)plVar9 + 0x121) != '\0') {
        plVar8 = *(long **)(param_1 + 0x98);
        if (local_40 == plVar8) {
          plVar6 = (long *)*plVar10;
          plVar7 = plVar10;
          plVar8 = plVar10;
        }
        else {
          local_38 = plVar10;
          do {
            plVar7 = (long *)*local_38;
            *local_38 = 0;
            if (plVar7 != (long *)0x0) {
              lVar11 = plVar7[0xb];
              piVar1 = (int *)(lVar11 + 0xc);
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
                *(undefined8 *)(lVar11 + 0x18) = 0;
                (**(code **)(*plVar7 + 0x20))();
              }
            }
            lVar11 = *local_40;
            plVar6 = local_40 + 1;
            *local_40 = 0;
            plVar7 = local_38 + 1;
            *local_38 = lVar11;
            local_40 = plVar6;
            local_38 = plVar7;
          } while (plVar6 != plVar8);
          if (*(long **)(param_1 + 0x98) == plVar7) {
            *(long **)(param_1 + 0x98) = plVar7;
            local_40 = plVar10;
            goto joined_r0x0107fe80;
          }
          plVar8 = *(long **)(param_1 + 0x98) + -1;
          plVar6 = (long *)*plVar8;
        }
        if (plVar6 != (long *)0x0) {
          lVar11 = plVar6[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) goto LAB_0107fdcc;
        }
LAB_0107fd68:
        if (plVar8 != plVar7) {
          while( true ) {
            plVar8 = plVar8 + -1;
            plVar6 = (long *)*plVar8;
            if (plVar6 == (long *)0x0) break;
            lVar11 = plVar6[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
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
LAB_0107fdcc:
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
            if (plVar8 == plVar7) goto LAB_0107fd98;
          }
          goto LAB_0107fd68;
        }
LAB_0107fd98:
        *(long **)(param_1 + 0x98) = plVar7;
        local_40 = plVar10;
      }
joined_r0x0107fe80:
      plVar10 = local_40;
      if (plVar9 != (long *)0x0) {
        lVar11 = plVar9[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
        }
      }
    } while (plVar10 != *(long **)(param_1 + 0x98));
  }
  return;
}


