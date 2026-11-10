/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a3380; name: FUN_016a3380
 */


void FUN_016a3380(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
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
  if (param_2 <= uVar11) {
    if (param_2 < uVar11) {
      uVar3 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar11 < 3) ||
         (uVar6 = uVar11 - (uVar11 >> 1 & 0x5555555555555555),
         uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333),
         1 < (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar3 = std::__next_prime(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
      }
      if (uVar3 <= param_2) {
        uVar3 = param_2;
      }
      if (uVar3 < uVar11) {
        param_2 = uVar3;
        goto LAB_016a33e8;
      }
    }
    return;
  }
LAB_016a33e8:
  puVar1 = (ulong *)(param_1 + 1);
  if (param_2 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      FUN_016a371c(puVar1);
    }
    *puVar1 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,8);
    if (lVar4 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xb8))();
    }
    lVar5 = *param_1;
    *param_1 = lVar4;
    if (lVar5 != 0) {
      FUN_016a371c(puVar1);
    }
    uVar3 = param_2 - 1;
    uVar11 = param_2 & 3;
    *puVar1 = param_2;
    if (uVar3 < 3) {
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
      } while (param_2 - uVar11 != lVar4);
    }
    if (uVar11 != 0) {
      lVar4 = lVar4 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar4) = 0;
        uVar11 = uVar11 - 1;
        lVar4 = lVar4 + 8;
      } while (uVar11 != 0);
    }
    plVar7 = (long *)param_1[6];
    if (plVar7 != (long *)0x0) {
      uVar11 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar6 = plVar7[1];
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar6 = uVar6 & uVar3;
      }
      else if (param_2 <= uVar6) {
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar6 = uVar6 - uVar2 * param_2;
      }
      *(long **)(*param_1 + uVar6 * 8) = param_1 + 6;
      plVar8 = (long *)*plVar7;
      if (plVar8 != (long *)0x0) {
        if (uVar11 < 2) {
          do {
            uVar11 = plVar8[1] & uVar3;
            if (uVar11 != uVar6) {
              plVar10 = plVar8;
              if (*(long *)(*param_1 + uVar11 * 8) == 0) {
                *(long **)(*param_1 + uVar11 * 8) = plVar7;
                uVar6 = uVar11;
              }
              else {
                do {
                  plVar9 = plVar10;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar8[2] == plVar10[2]);
                *plVar7 = (long)plVar10;
                *plVar9 = **(long **)(*param_1 + uVar11 * 8);
                **(undefined8 **)(*param_1 + uVar11 * 8) = plVar8;
                plVar8 = plVar7;
              }
            }
            plVar10 = (long *)*plVar8;
            plVar7 = plVar8;
            plVar8 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar8[1];
            if (param_2 <= uVar11) {
              uVar3 = 0;
              if (param_2 != 0) {
                uVar3 = uVar11 / param_2;
              }
              uVar11 = uVar11 - uVar3 * param_2;
            }
            if (uVar11 != uVar6) {
              plVar10 = plVar8;
              if (*(long *)(*param_1 + uVar11 * 8) == 0) {
                *(long **)(*param_1 + uVar11 * 8) = plVar7;
                uVar6 = uVar11;
              }
              else {
                do {
                  plVar9 = plVar10;
                  plVar10 = (long *)*plVar9;
                  if (plVar10 == (long *)0x0) break;
                } while (plVar8[2] == plVar10[2]);
                *plVar7 = (long)plVar10;
                *plVar9 = **(long **)(*param_1 + uVar11 * 8);
                **(undefined8 **)(*param_1 + uVar11 * 8) = plVar8;
                plVar8 = plVar7;
              }
            }
            plVar10 = (long *)*plVar8;
            plVar7 = plVar8;
            plVar8 = plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
  return;
}


