/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d41334; name: FUN_00d41334
 */


void FUN_00d41334(long param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_38;
  
  if (*param_2 == 0) {
    lVar9 = *(long *)(param_1 + 0x2c8);
    if (lVar9 != 0) {
      sVar5 = strlen("UI");
      *(size_t *)(lVar9 + 0x1e0) = sVar5;
      plVar6 = *(long **)(lVar9 + 0x1e8);
      *(undefined1 **)(lVar9 + 0x1d0) = &DAT_121d7307bd58c49b;
      *(undefined **)(lVar9 + 0x1d8) = &DAT_03a81ce8;
      *(undefined8 *)(lVar9 + 0x1e8) = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      lVar7 = *(long *)(lVar9 + 0xf8);
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar9 + 0xf0);
        lVar10 = *(long *)(*(long *)(lVar8 + 0x20) + 0x3d8);
        FUN_02bba5e0(&local_38,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x58) + 0x58) + 0x78),
                     lVar9 + 0x1d0);
        plVar6 = *(long **)(lVar10 + 0x68);
        *(undefined8 *)(lVar10 + 0x68) = 0;
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
        *(undefined8 *)(lVar10 + 0x68) = local_38;
        if (lVar7 != 1) {
          lVar10 = lVar8 + 0x28;
          do {
            lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x3d8);
            FUN_02bba5e0(&local_38,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x58) + 0x58) + 0x78),
                         lVar9 + 0x1d0);
            plVar6 = *(long **)(lVar11 + 0x68);
            *(undefined8 *)(lVar11 + 0x68) = 0;
            if (plVar6 != (long *)0x0) {
              plVar1 = plVar6 + 10;
              do {
                iVar4 = (int)*plVar1 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *(int *)plVar1 = iVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar4 == 0) {
                (**(code **)(*plVar6 + 0x10))();
              }
            }
            lVar10 = lVar10 + 0x28;
            *(undefined8 *)(lVar11 + 0x68) = local_38;
          } while (lVar10 != lVar8 + lVar7 * 0x28);
        }
      }
    }
  }
  else if ((*param_2 == 1) && (lVar9 = *(long *)(param_1 + 0x2c8), lVar9 != 0)) {
    sVar5 = strlen("BGUI");
    *(size_t *)(lVar9 + 0x1e0) = sVar5;
    plVar6 = *(long **)(lVar9 + 0x1e8);
    *(undefined8 *)(lVar9 + 0x1d0) = 0x38c09a86db6c4a00;
    *(undefined **)(lVar9 + 0x1d8) = &DAT_03a81cc8;
    *(undefined8 *)(lVar9 + 0x1e8) = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
    lVar7 = *(long *)(lVar9 + 0xf8);
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar9 + 0xf0);
      lVar10 = *(long *)(*(long *)(lVar8 + 0x20) + 0x3d8);
      FUN_02bba5e0(&local_38,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x58) + 0x58) + 0x78),
                   lVar9 + 0x1d0);
      plVar6 = *(long **)(lVar10 + 0x68);
      *(undefined8 *)(lVar10 + 0x68) = 0;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      *(undefined8 *)(lVar10 + 0x68) = local_38;
      if (lVar7 != 1) {
        lVar10 = lVar8 + 0x28;
        do {
          lVar11 = *(long *)(*(long *)(lVar10 + 0x20) + 0x3d8);
          FUN_02bba5e0(&local_38,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x58) + 0x58) + 0x78),
                       lVar9 + 0x1d0);
          plVar6 = *(long **)(lVar11 + 0x68);
          *(undefined8 *)(lVar11 + 0x68) = 0;
          if (plVar6 != (long *)0x0) {
            plVar1 = plVar6 + 10;
            do {
              iVar4 = (int)*plVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          lVar10 = lVar10 + 0x28;
          *(undefined8 *)(lVar11 + 0x68) = local_38;
        } while (lVar10 != lVar8 + lVar7 * 0x28);
      }
    }
  }
  return;
}


