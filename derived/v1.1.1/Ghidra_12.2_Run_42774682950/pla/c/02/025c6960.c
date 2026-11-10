/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c6960; name: FUN_025c6960
 */


void FUN_025c6960(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  
  plVar4 = param_1 + 1;
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      FUN_025c4f64(plVar4);
    }
    *plVar4 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,0x10);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xb8))();
    }
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      FUN_025c4f64(plVar4);
    }
    uVar6 = param_2 - 1;
    param_1[1] = param_2;
    *(undefined8 *)*param_1 = 0;
    if ((uVar6 != 0) && (*(undefined8 *)(*param_1 + 8) = 0, param_2 != 2)) {
      uVar8 = 2;
      do {
        *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (param_2 != uVar8);
    }
    plVar4 = (long *)param_1[6];
    if (plVar4 != (long *)0x0) {
      uVar8 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar5 = plVar4[1];
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar5 = uVar5 & uVar6;
      }
      else if (param_2 <= uVar5) {
        uVar1 = 0;
        if (param_2 != 0) {
          uVar1 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar1 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 6;
      plVar7 = (long *)*plVar4;
      if (plVar7 != (long *)0x0) {
        if (uVar8 < 2) {
          do {
            uVar8 = plVar7[1] & uVar6;
            if (uVar8 != uVar5) {
              plVar10 = plVar7;
              if (*(long *)(*param_1 + uVar8 * 8) == 0) {
                *(long **)(*param_1 + uVar8 * 8) = plVar4;
                uVar5 = uVar8;
              }
              else {
                do {
                  plVar9 = plVar10;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar7[2] == plVar10[2]);
                *plVar4 = (long)plVar10;
                *plVar9 = **(long **)(*param_1 + uVar8 * 8);
                **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
                plVar7 = plVar4;
              }
            }
            plVar10 = (long *)*plVar7;
            plVar4 = plVar7;
            plVar7 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar6 = plVar7[1];
            if (param_2 <= uVar6) {
              uVar8 = 0;
              if (param_2 != 0) {
                uVar8 = uVar6 / param_2;
              }
              uVar6 = uVar6 - uVar8 * param_2;
            }
            if (uVar6 != uVar5) {
              plVar10 = plVar7;
              if (*(long *)(*param_1 + uVar6 * 8) == 0) {
                *(long **)(*param_1 + uVar6 * 8) = plVar4;
                uVar5 = uVar6;
              }
              else {
                do {
                  plVar9 = plVar10;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar7[2] == plVar10[2]);
                *plVar4 = (long)plVar10;
                *plVar9 = **(long **)(*param_1 + uVar6 * 8);
                **(undefined8 **)(*param_1 + uVar6 * 8) = plVar7;
                plVar7 = plVar4;
              }
            }
            plVar10 = (long *)*plVar7;
            plVar4 = plVar7;
            plVar7 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
  return;
}


