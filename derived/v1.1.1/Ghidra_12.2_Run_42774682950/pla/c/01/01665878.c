/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01665878; name: FUN_01665878
 */


void FUN_01665878(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar10 = param_1[1];
  if (param_2 <= uVar10) {
    if (param_2 < uVar10) {
      uVar2 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar10 < 3) ||
         (uVar5 = uVar10 - (uVar10 >> 1 & 0x5555555555555555),
         uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333),
         1 < (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar2 = std::__next_prime(uVar2);
      }
      else if (1 < uVar2) {
        uVar2 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar2 - 1) & 0x3f);
      }
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
      if (uVar2 < uVar10) {
        param_2 = uVar2;
        goto LAB_016658d4;
      }
    }
    return;
  }
LAB_016658d4:
  plVar6 = param_1 + 1;
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_01665330(plVar6);
    }
    *plVar6 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xb8))();
    }
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      FUN_01665330(plVar6);
    }
    uVar10 = param_2 - 1;
    param_1[1] = param_2;
    *(undefined8 *)*param_1 = 0;
    if ((((uVar10 != 0) && (*(undefined8 *)(*param_1 + 8) = 0, param_2 != 2)) &&
        (*(undefined8 *)(*param_1 + 0x10) = 0, param_2 != 3)) &&
       ((*(undefined8 *)(*param_1 + 0x18) = 0, param_2 != 4 &&
        (*(undefined8 *)(*param_1 + 0x20) = 0, param_2 != 5)))) {
      uVar2 = 5;
      do {
        *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
        uVar2 = uVar2 + 1;
      } while (param_2 != uVar2);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar2 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
      uVar5 = plVar6[1];
      uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar2 < 2) {
        uVar5 = uVar5 & uVar10;
      }
      else if (param_2 <= uVar5) {
        uVar1 = 0;
        if (param_2 != 0) {
          uVar1 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar1 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 6;
      plVar7 = (long *)*plVar6;
      if (plVar7 != (long *)0x0) {
        if (uVar2 < 2) {
          do {
            uVar2 = plVar7[1] & uVar10;
            if (uVar2 != uVar5) {
              plVar9 = plVar7;
              if (*(long *)(*param_1 + uVar2 * 8) == 0) {
                *(long **)(*param_1 + uVar2 * 8) = plVar6;
                uVar5 = uVar2;
              }
              else {
                do {
                  plVar8 = plVar9;
                  plVar9 = (long *)*plVar8;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar7[2] == plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar8 = **(long **)(*param_1 + uVar2 * 8);
                **(undefined8 **)(*param_1 + uVar2 * 8) = plVar7;
                plVar7 = plVar6;
              }
            }
            plVar9 = (long *)*plVar7;
            plVar6 = plVar7;
            plVar7 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar7[1];
            if (param_2 <= uVar10) {
              uVar2 = 0;
              if (param_2 != 0) {
                uVar2 = uVar10 / param_2;
              }
              uVar10 = uVar10 - uVar2 * param_2;
            }
            if (uVar10 != uVar5) {
              plVar9 = plVar7;
              if (*(long *)(*param_1 + uVar10 * 8) == 0) {
                *(long **)(*param_1 + uVar10 * 8) = plVar6;
                uVar5 = uVar10;
              }
              else {
                do {
                  plVar8 = plVar9;
                  plVar9 = (long *)*plVar8;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar7[2] == plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar8 = **(long **)(*param_1 + uVar10 * 8);
                **(undefined8 **)(*param_1 + uVar10 * 8) = plVar7;
                plVar7 = plVar6;
              }
            }
            plVar9 = (long *)*plVar7;
            plVar6 = plVar7;
            plVar7 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


