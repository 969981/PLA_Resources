/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a5080; name: FUN_028a5080
 */


undefined8 FUN_028a5080(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *local_30;
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + 299) == '\0') {
    uVar7 = 0;
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      uVar8 = (**(code **)(**(long **)(param_1 + 0x60) + 0x38))();
      if ((uVar8 & 1) != 0) {
        lVar11 = *(long *)(param_1 + 0x58);
        lVar9 = lVar11 + 0x1a8;
        if (*(char *)(lVar11 + 0x304) != '\0') {
          lVar9 = lVar11 + 0x1f0;
        }
        FUN_00956dac(&local_30,lVar9);
        if (local_30 != (long *)0x0) {
          lVar9 = FUN_00a3e9dc(local_30 + 0x1e,auStack_28);
          if (local_30 != (long *)0x0) {
            lVar11 = local_30[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar3 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_30 + 0x20))();
            }
          }
          if (lVar9 != 0) {
            lVar12 = *(long *)(param_1 + 0x58);
            lVar11 = lVar12 + 0x1a8;
            if (*(char *)(lVar12 + 0x304) != '\0') {
              lVar11 = lVar12 + 0x1f0;
            }
            FUN_00956dac(&local_30,lVar11);
            if (local_30 != (long *)0x0) {
              lVar11 = FUN_00a3e9dc(local_30 + 0x1e,auStack_28);
              if (local_30 != (long *)0x0) {
                lVar12 = local_30[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
                do {
                  iVar3 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar3 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar3 + -1 == 0) {
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*local_30 + 0x20))(local_30);
                }
              }
              if (lVar11 == 0) {
                return 0;
              }
              plVar10 = *(long **)(lVar11 + 0x1f0);
              if (plVar10 == (long *)0x0) {
                return 0;
              }
              plVar2 = plVar10 + 10;
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = (int)*plVar2 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              iVar3 = *(int *)(lVar9 + 0x1f8);
              do {
                iVar6 = (int)*plVar2 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar6;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar10 + 0x10))();
              }
              if (iVar3 == 3) {
                FUN_028a4f78(param_1);
                (**(code **)(**(long **)(param_1 + 0x60) + 0x40))
                          (*(long **)(param_1 + 0x60),param_1);
                *(undefined1 *)(param_1 + 299) = 1;
                return 1;
              }
            }
          }
        }
      }
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}


