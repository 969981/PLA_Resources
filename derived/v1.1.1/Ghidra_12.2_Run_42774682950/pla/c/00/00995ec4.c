/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00995ec4; name: FUN_00995ec4
 */


void FUN_00995ec4(long *param_1,long param_2,byte *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  
  uVar8 = *(ulong *)(param_2 + 0x70);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    bVar2 = *param_3;
    uVar7 = (ulong)bVar2;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar11 = (int)uVar8 - 1 & uVar7;
    }
    else {
      uVar11 = uVar7;
      if (uVar8 <= uVar7) {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = uVar7 / uVar8;
        }
        uVar11 = uVar7 - uVar11 * uVar8;
      }
    }
    lVar10 = *(long *)(param_2 + 0x68);
    plVar12 = *(long **)(lVar10 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar12[1] == uVar7) {
            if (*(byte *)(plVar12 + 2) == bVar2) {
LAB_00995fc4:
              if (uVar9 < 2) {
                plVar12 = *(long **)(lVar10 + ((int)uVar8 - 1 & uVar7) * 8);
                do {
                  do {
                    plVar12 = (long *)*plVar12;
                  } while (plVar12[1] != uVar7);
                } while (*(byte *)(plVar12 + 2) != bVar2);
              }
              else {
                uVar9 = uVar7;
                if (uVar8 <= uVar7) {
                  uVar9 = 0;
                  if (uVar8 != 0) {
                    uVar9 = uVar7 / uVar8;
                  }
                  uVar9 = uVar7 - uVar9 * uVar8;
                }
                plVar12 = *(long **)(lVar10 + uVar9 * 8);
                do {
                  do {
                    plVar12 = (long *)*plVar12;
                  } while (plVar12[1] != uVar7);
                } while (*(byte *)(plVar12 + 2) != bVar2);
              }
              lVar10 = *(long *)((long)plVar12 + 0x18);
              *param_1 = lVar10;
              if (lVar10 == 0) {
                return;
              }
              lVar10 = *(long *)(lVar10 + 0x58);
              if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar6;
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
              return;
            }
          }
          else if ((plVar12[1] & uVar8 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar12[1];
          if (uVar13 == uVar7) {
            if (*(byte *)(plVar12 + 2) == bVar2) goto LAB_00995fc4;
          }
          else {
            if (uVar8 <= uVar13) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar13 / uVar8;
              }
              uVar13 = uVar13 - uVar5 * uVar8;
            }
            if (uVar13 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


