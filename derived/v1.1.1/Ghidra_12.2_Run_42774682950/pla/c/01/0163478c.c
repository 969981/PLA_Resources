/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0163478c; name: FUN_0163478c
 */


undefined4 FUN_0163478c(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  
  uVar7 = *(ulong *)(param_1 + 0x60);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    lVar11 = *param_2;
    uVar6 = *(ulong *)(lVar11 + 0x58);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar6;
    }
    else if (uVar6 < uVar7) {
      uVar9 = uVar6;
    }
    else {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar6 / uVar7;
      }
      uVar9 = uVar6 - uVar9 * uVar7;
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x58) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (1 < uVar8) {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar6) {
            if (plVar10[2] == uVar6) goto LAB_01634828;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) {
              return 0;
            }
          }
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        if (plVar10[1] == uVar6) {
          if (plVar10[2] == uVar6) {
LAB_01634828:
            plVar10 = (long *)plVar10[3];
            if (plVar10 != (long *)0x0) {
              plVar1 = plVar10 + 10;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *(int *)plVar1 = (int)*plVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            if (*(int *)(param_1 + 0xc0) != 1) {
              *(undefined4 *)((long)plVar10 + 0x54) = 0;
              (**(code **)(*plVar10 + 0x30))(plVar10);
            }
            iVar5 = (**(code **)(*plVar10 + 0x28))(plVar10,lVar11);
            *(int *)(param_1 + 0xc0) = iVar5;
            if (iVar5 == 1) {
              uVar12 = 1;
            }
            else {
              (**(code **)(*plVar10 + 0x38))(plVar10);
              *(undefined4 *)((long)plVar10 + 0x54) = 0;
              uVar12 = *(undefined4 *)(param_1 + 0xc0);
            }
            plVar1 = plVar10 + 10;
            do {
              iVar5 = (int)*plVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
            return uVar12;
          }
        }
        else if ((plVar10[1] & uVar7 - 1) != uVar9) {
          return 0;
        }
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return 0;
}


