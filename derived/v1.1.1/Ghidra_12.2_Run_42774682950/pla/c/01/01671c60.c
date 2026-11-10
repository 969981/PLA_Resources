/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01671c60; name: FUN_01671c60
 */


void FUN_01671c60(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar6 = param_1[1];
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      uVar3 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar6 < 3) ||
         (uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555),
         uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
         1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar3 = std::__next_prime(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
      }
      if (uVar3 <= param_2) {
        uVar3 = param_2;
      }
      if (uVar3 < uVar6) goto LAB_01671ca8;
    }
    return;
  }
  uVar3 = param_2;
LAB_01671ca8:
  puVar1 = (ulong *)(param_1 + 1);
  if (uVar3 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      FUN_01672010(puVar1);
    }
    *puVar1 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],uVar3 << 3,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xb8))();
    }
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      FUN_01672010(puVar1);
    }
    uVar8 = uVar3 - 1;
    uVar6 = uVar3 & 3;
    *puVar1 = uVar3;
    if (uVar8 < 3) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        lVar5 = lVar4 * 8;
        lVar4 = lVar4 + 4;
        *(undefined8 *)(*param_1 + lVar5) = 0;
        *(undefined8 *)(*param_1 + lVar5 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar5 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar5 + 0x18) = 0;
      } while (uVar3 - uVar6 != lVar4);
    }
    if (uVar6 != 0) {
      lVar4 = lVar4 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar4) = 0;
        uVar6 = uVar6 - 1;
        lVar4 = lVar4 + 8;
      } while (uVar6 != 0);
    }
    plVar7 = (long *)param_1[6];
    if (plVar7 != (long *)0x0) {
      uVar6 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar9 = plVar7[1];
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar9 = uVar9 & uVar8;
      }
      else if (uVar3 <= uVar9) {
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = uVar9 / uVar3;
        }
        uVar9 = uVar9 - uVar2 * uVar3;
      }
      *(long **)(*param_1 + uVar9 * 8) = param_1 + 6;
      plVar10 = (long *)*plVar7;
      if (plVar10 != (long *)0x0) {
        if (uVar6 < 2) {
          do {
            uVar6 = plVar10[1] & uVar8;
            if (uVar6 != uVar9) {
              plVar12 = plVar10;
              if (*(long *)(*param_1 + uVar6 * 8) == 0) {
                *(long **)(*param_1 + uVar6 * 8) = plVar7;
                uVar9 = uVar6;
              }
              else {
                do {
                  plVar11 = plVar12;
                  plVar12 = (long *)*plVar11;
                  if (plVar12 == (long *)0x0) break;
                } while (plVar10[2] == plVar12[2]);
                *plVar7 = (long)plVar12;
                *plVar11 = **(long **)(*param_1 + uVar6 * 8);
                **(undefined8 **)(*param_1 + uVar6 * 8) = plVar10;
                plVar10 = plVar7;
              }
            }
            plVar12 = (long *)*plVar10;
            plVar7 = plVar10;
            plVar10 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar6 = plVar10[1];
            if (uVar3 <= uVar6) {
              uVar8 = 0;
              if (uVar3 != 0) {
                uVar8 = uVar6 / uVar3;
              }
              uVar6 = uVar6 - uVar8 * uVar3;
            }
            if (uVar6 != uVar9) {
              plVar12 = plVar10;
              if (*(long *)(*param_1 + uVar6 * 8) == 0) {
                *(long **)(*param_1 + uVar6 * 8) = plVar7;
                uVar9 = uVar6;
              }
              else {
                do {
                  plVar11 = plVar12;
                  plVar12 = (long *)*plVar11;
                  if (plVar12 == (long *)0x0) break;
                } while (plVar10[2] == plVar12[2]);
                *plVar7 = (long)plVar12;
                *plVar11 = **(long **)(*param_1 + uVar6 * 8);
                **(undefined8 **)(*param_1 + uVar6 * 8) = plVar10;
                plVar10 = plVar7;
              }
            }
            plVar12 = (long *)*plVar10;
            plVar7 = plVar10;
            plVar10 = plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
  }
  return;
}


