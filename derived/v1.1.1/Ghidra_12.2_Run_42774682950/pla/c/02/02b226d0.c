/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b226d0; name: FUN_02b226d0
 */


void FUN_02b226d0(long *param_1,long param_2,long param_3,ulong *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  uVar5 = (*(long *)(param_2 + 0xa8) + *(long *)(param_2 + 0xa0)) - 1;
  lVar10 = *(long *)(*(long *)(*(long *)(param_2 + 0x68) + (uVar5 / 0x12) * 8) +
                    (uVar5 % 0x12) * 0xd8);
  uVar5 = *(ulong *)(lVar10 + (long)*(int *)(param_3 + 4) * 0x1b0 + 0x148);
  if (uVar5 != 0) {
    uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar6 = *param_4;
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar8 = uVar5 - 1 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar6 / uVar5;
        }
        uVar8 = uVar6 - uVar8 * uVar5;
      }
    }
    plVar9 = *(long **)(*(long *)(lVar10 + (long)*(int *)(param_3 + 4) * 0x1b0 + 0x140) + uVar8 * 8)
    ;
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar9[1] == uVar6) {
            if (plVar9[2] == uVar6) {
LAB_02b2281c:
              lVar10 = plVar9[6];
              *param_1 = lVar10;
              if (lVar10 != 0) {
                piVar1 = (int *)(lVar10 + 0x50);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = *piVar1 + 1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return;
            }
          }
          else if ((plVar9[1] & uVar5 - 1) != uVar8) break;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar9[1];
          if (uVar7 == uVar6) {
            if (plVar9[2] == uVar6) goto LAB_02b2281c;
          }
          else {
            if (uVar5 <= uVar7) {
              uVar4 = 0;
              if (uVar5 != 0) {
                uVar4 = uVar7 / uVar5;
              }
              uVar7 = uVar7 - uVar4 * uVar5;
            }
            if (uVar7 != uVar8) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  return;
}


