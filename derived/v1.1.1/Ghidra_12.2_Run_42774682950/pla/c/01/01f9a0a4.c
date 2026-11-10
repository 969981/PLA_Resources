/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f9a0a4; name: FUN_01f9a0a4
 */


void FUN_01f9a0a4(long *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar6 = *(ulong *)(param_2 + 0x70);
  if (uVar6 != 0) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & param_3;
    }
    else {
      uVar9 = param_3;
      if (uVar6 <= param_3) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = param_3 / uVar6;
        }
        uVar9 = param_3 - uVar9 * uVar6;
      }
    }
    plVar10 = *(long **)(*(long *)(param_2 + 0x68) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == param_3) {
            if (plVar10[2] == param_3) goto LAB_01f9a1b0;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == param_3) {
            if (plVar10[2] == param_3) {
LAB_01f9a1b0:
              lVar7 = plVar10[3];
              *param_1 = lVar7;
              if (lVar7 == 0) {
                return;
              }
              lVar7 = *(long *)(lVar7 + 0x58);
              if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar7 + 0x10) == 0) {
                uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
                *(undefined8 *)(lVar7 + 0x10) = uVar5;
              }
              piVar1 = (int *)(lVar7 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              return;
            }
          }
          else {
            if (uVar6 <= uVar8) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar4 * uVar6;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


