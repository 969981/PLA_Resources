/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b37f18; name: FUN_01b37f18
 */


void FUN_01b37f18(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar11 = param_1[1];
  if (!(param_2 >= uVar11 && param_2 != uVar11)) {
    if (param_2 < uVar11) {
      uVar8 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar11 < 3) ||
         (uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar8 = std::__next_prime(uVar8);
      }
      else if (1 < uVar8) {
        uVar8 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar8 - 1) & 0x3f);
      }
      if (uVar8 <= param_2) {
        uVar8 = param_2;
      }
      if (uVar8 < uVar11) goto LAB_01b37f4c;
    }
    return;
  }
  uVar8 = param_2;
LAB_01b37f4c:
  plVar4 = param_1 + 1;
  if (uVar8 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      FUN_01b35c98(plVar4);
    }
    *plVar4 = 0;
  }
  else {
    lVar2 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar8 << 3,8);
    if (lVar2 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xb8))();
    }
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      FUN_01b35c98(plVar4);
    }
    uVar11 = uVar8 - 1;
    param_1[1] = uVar8;
    *(undefined8 *)*param_1 = 0;
    if ((uVar11 != 0) && (*(undefined8 *)(*param_1 + 8) = 0, uVar8 != 2)) {
      uVar7 = 2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    plVar4 = (long *)param_1[6];
    if (plVar4 != (long *)0x0) {
      uVar7 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
      uVar5 = plVar4[1];
      uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar7 < 2) {
        uVar5 = uVar5 & uVar11;
      }
      else if (uVar8 <= uVar5) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar1 * uVar8;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 6;
      plVar6 = (long *)*plVar4;
      if (plVar6 != (long *)0x0) {
        if (uVar7 < 2) {
          do {
            uVar8 = plVar6[1] & uVar11;
            if (uVar8 != uVar5) {
              plVar10 = plVar6;
              if (*(long *)(*param_1 + uVar8 * 8) == 0) {
                *(long **)(*param_1 + uVar8 * 8) = plVar4;
                uVar5 = uVar8;
              }
              else {
                do {
                  plVar9 = plVar10;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 == (long *)0x0) break;
                } while ((int)plVar6[2] == (int)plVar10[2]);
                *plVar4 = (long)plVar10;
                *plVar9 = **(long **)(*param_1 + uVar8 * 8);
                **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
                plVar6 = plVar4;
              }
            }
            plVar10 = (long *)*plVar6;
            plVar4 = plVar6;
            plVar6 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar6[1];
            if (uVar8 <= uVar11) {
              uVar7 = 0;
              if (uVar8 != 0) {
                uVar7 = uVar11 / uVar8;
              }
              uVar11 = uVar11 - uVar7 * uVar8;
            }
            if (uVar11 != uVar5) {
              plVar10 = plVar6;
              if (*(long *)(*param_1 + uVar11 * 8) == 0) {
                *(long **)(*param_1 + uVar11 * 8) = plVar4;
                uVar5 = uVar11;
              }
              else {
                do {
                  plVar9 = plVar10;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 == (long *)0x0) break;
                } while ((int)plVar6[2] == (int)plVar10[2]);
                *plVar4 = (long)plVar10;
                *plVar9 = **(long **)(*param_1 + uVar11 * 8);
                **(undefined8 **)(*param_1 + uVar11 * 8) = plVar6;
                plVar6 = plVar4;
              }
            }
            plVar10 = (long *)*plVar6;
            plVar4 = plVar6;
            plVar6 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
  return;
}


