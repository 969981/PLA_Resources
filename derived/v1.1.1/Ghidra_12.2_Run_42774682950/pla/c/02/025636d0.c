/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025636d0; name: FUN_025636d0
 */


void FUN_025636d0(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_48;
  
  FUN_009c69bc(&local_48);
  FUN_01f6311c(param_2 & 1,&local_48);
  if (local_48 != (long *)0x0) {
    lVar10 = local_48[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
      lVar10 = *(long *)(param_1 + 0x510);
      goto joined_r0x02563768;
    }
  }
  lVar10 = *(long *)(param_1 + 0x510);
joined_r0x02563768:
  if (lVar10 != 0) {
    FUN_02566fd8(&local_58);
    plVar9 = local_58;
    if (local_58 != (long *)0x0) {
      plVar7 = (long *)FUN_02c0bc24(local_58);
      puVar11 = (undefined8 *)*plVar7;
      puVar12 = (undefined8 *)plVar7[1];
      if (puVar11 != puVar12) {
        do {
          plVar9 = (long *)*puVar11;
          if (plVar9 == (long *)0x0) {
            local_60 = (long *)0x0;
          }
          else {
            lVar10 = plVar9[0xb];
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02563ab4;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar8;
            }
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            lVar10 = plVar9[0xb];
            local_60 = plVar9;
            if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02563ab4;
            if (*(long *)(lVar10 + 0x10) == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
              *(undefined8 *)(lVar10 + 0x10) = uVar8;
            }
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          FUN_01f6311c(param_2 & 1,&local_60);
          if (local_60 != (long *)0x0) {
            lVar10 = local_60[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*local_60 + 0x20))();
            }
          }
          if (plVar9 != (long *)0x0) {
            lVar10 = plVar9[0xb];
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar2 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar2 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*plVar9 + 0x20))(plVar9);
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar12);
        plVar9 = local_58;
      }
      local_68 = (long *)plVar9[0x40];
      if (local_68 != (long *)0x0) {
        lVar10 = local_68[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_02563ab4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      FUN_01f6311c(param_2 & 1,&local_68);
      if (local_68 != (long *)0x0) {
        lVar10 = local_68[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      puVar11 = (undefined8 *)local_58[0x41];
      puVar12 = (undefined8 *)local_58[0x42];
      if (puVar11 != puVar12) {
        do {
          plVar9 = (long *)FUN_02c2454c(*puVar11);
          puVar4 = (undefined8 *)plVar9[1];
          for (puVar3 = (undefined8 *)*plVar9; puVar3 != puVar4; puVar3 = puVar3 + 1) {
            plVar9 = (long *)*puVar3;
            if (plVar9 == (long *)0x0) {
              local_70 = (long *)0x0;
            }
            else {
              lVar10 = plVar9[0xb];
              if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02563ab4;
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar8;
              }
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              lVar10 = plVar9[0xb];
              local_70 = plVar9;
              if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_02563ab4;
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar8;
              }
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            FUN_01f6311c(param_2 & 1,&local_70);
            if (local_70 != (long *)0x0) {
              lVar10 = local_70[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar2 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar2 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*local_70 + 0x20))();
              }
            }
            if (plVar9 != (long *)0x0) {
              lVar10 = plVar9[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                iVar2 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar2 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar2 + -1 == 0) {
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar9 + 0x20))(plVar9);
              }
            }
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar12);
      }
      if (local_58 != (long *)0x0) {
        lVar10 = local_58[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
    }
  }
  return;
}


