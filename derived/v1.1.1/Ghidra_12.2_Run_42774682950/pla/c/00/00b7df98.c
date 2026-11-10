/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b7df98; name: FUN_00b7df98
 */


void FUN_00b7df98(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar4 = param_1[1];
  uVar10 = param_2;
  if (param_2 <= uVar4) {
    if (param_2 < uVar4) {
      uVar10 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar4 < 3) ||
         (uVar9 = uVar4 - (uVar4 >> 1 & 0x5555555555555555),
         uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333),
         1 < (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar10 = std::__next_prime(uVar10);
      }
      else if (1 < uVar10) {
        uVar10 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar10 - 1) & 0x3f);
      }
      if (uVar10 <= param_2) {
        uVar10 = param_2;
      }
      if (uVar10 < uVar4) goto LAB_00b7dfc4;
    }
    return;
  }
LAB_00b7dfc4:
  plVar5 = param_1 + 1;
  if (uVar10 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      FUN_00b7e304(plVar5);
    }
    *plVar5 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar10 << 3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xb8))();
    }
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      FUN_00b7e304(plVar5);
    }
    uVar4 = uVar10 - 1;
    param_1[1] = uVar10;
    *(undefined8 *)*param_1 = 0;
    if ((uVar4 != 0) && (*(undefined8 *)(*param_1 + 8) = 0, uVar10 != 2)) {
      uVar9 = 2;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
    plVar5 = (long *)param_1[6];
    if (plVar5 != (long *)0x0) {
      uVar9 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar6 = plVar5[1];
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar10 <= uVar6) {
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar6 / uVar10;
        }
        uVar6 = uVar6 - uVar1 * uVar10;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 6;
      plVar7 = (long *)*plVar5;
      if (plVar7 != (long *)0x0) {
        if (uVar9 < 2) {
          do {
            uVar10 = plVar7[1] & uVar4;
            if (uVar10 != uVar6) {
              plVar8 = plVar7;
              if (*(long *)(*param_1 + uVar10 * 8) == 0) {
                *(long **)(*param_1 + uVar10 * 8) = plVar5;
                uVar6 = uVar10;
              }
              else {
                do {
                  plVar11 = plVar8;
                  plVar8 = (long *)*plVar11;
                  if (plVar8 == (long *)0x0) break;
                } while (plVar7[2] == plVar8[2]);
                *plVar5 = (long)plVar8;
                *plVar11 = **(long **)(*param_1 + uVar10 * 8);
                **(undefined8 **)(*param_1 + uVar10 * 8) = plVar7;
                plVar7 = plVar5;
              }
            }
            plVar8 = (long *)*plVar7;
            plVar5 = plVar7;
            plVar7 = plVar8;
          } while (plVar8 != (long *)0x0);
        }
        else {
          do {
            uVar4 = plVar7[1];
            if (uVar10 <= uVar4) {
              uVar9 = 0;
              if (uVar10 != 0) {
                uVar9 = uVar4 / uVar10;
              }
              uVar4 = uVar4 - uVar9 * uVar10;
            }
            if (uVar4 != uVar6) {
              if (*(long *)(*param_1 + uVar4 * 8) == 0) {
                *(long **)(*param_1 + uVar4 * 8) = plVar5;
                uVar6 = uVar4;
              }
              else {
                plVar8 = plVar7;
                do {
                  plVar11 = plVar8;
                  plVar8 = (long *)*plVar11;
                  if (plVar8 == (long *)0x0) break;
                } while (plVar7[2] == plVar8[2]);
                *plVar5 = (long)plVar8;
                *plVar11 = **(long **)(*param_1 + uVar4 * 8);
                **(undefined8 **)(*param_1 + uVar4 * 8) = plVar7;
                plVar7 = plVar5;
              }
            }
            plVar8 = (long *)*plVar7;
            plVar5 = plVar7;
            plVar7 = plVar8;
          } while (plVar8 != (long *)0x0);
        }
      }
    }
  }
  return;
}


