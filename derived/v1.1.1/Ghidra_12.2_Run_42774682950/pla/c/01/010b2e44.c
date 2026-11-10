/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b2e44; name: FUN_010b2e44
 */


void FUN_010b2e44(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar12 = param_1[1];
  if (param_2 <= uVar12) {
    if (param_2 < uVar12) {
      uVar3 = (ulong)((float)(ulong)param_1[0xb] / *(float *)(param_1 + 0xc));
      if ((uVar12 < 3) ||
         (uVar7 = uVar12 - (uVar12 >> 1 & 0x5555555555555555),
         uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
         1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar3 = std::__next_prime(uVar3);
      }
      else if (1 < uVar3) {
        uVar3 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar3 - 1) & 0x3f);
      }
      if (uVar3 <= param_2) {
        uVar3 = param_2;
      }
      if (uVar3 < uVar12) goto LAB_010b2e8c;
    }
    return;
  }
  uVar3 = param_2;
LAB_010b2e8c:
  puVar1 = (ulong *)(param_1 + 1);
  if (uVar3 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      FUN_010ad4b4(puVar1);
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
      FUN_010ad4b4(puVar1);
    }
    uVar7 = uVar3 - 1;
    uVar12 = uVar3 & 3;
    *puVar1 = uVar3;
    if (uVar7 < 3) {
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
      } while (uVar3 - uVar12 != lVar4);
    }
    if (uVar12 != 0) {
      lVar4 = lVar4 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar4) = 0;
        uVar12 = uVar12 - 1;
        lVar4 = lVar4 + 8;
      } while (uVar12 != 0);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar12 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar8 = plVar6[1];
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar8 = uVar8 & uVar7;
      }
      else if (uVar3 <= uVar8) {
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = uVar8 / uVar3;
        }
        uVar8 = uVar8 - uVar2 * uVar3;
      }
      *(long **)(*param_1 + uVar8 * 8) = param_1 + 6;
      plVar9 = (long *)*plVar6;
      if (plVar9 != (long *)0x0) {
        if (uVar12 < 2) {
          do {
            uVar12 = plVar9[1] & uVar7;
            if (uVar12 != uVar8) {
              plVar11 = plVar9;
              if (*(long *)(*param_1 + uVar12 * 8) == 0) {
                *(long **)(*param_1 + uVar12 * 8) = plVar6;
                uVar8 = uVar12;
              }
              else {
                do {
                  plVar10 = plVar11;
                  plVar11 = (long *)*plVar10;
                  if (plVar11 == (long *)0x0) break;
                } while (plVar9[2] == plVar11[2]);
                *plVar6 = (long)plVar11;
                *plVar10 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar9;
                plVar9 = plVar6;
              }
            }
            plVar11 = (long *)*plVar9;
            plVar6 = plVar9;
            plVar9 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar9[1];
            if (uVar3 <= uVar12) {
              uVar7 = 0;
              if (uVar3 != 0) {
                uVar7 = uVar12 / uVar3;
              }
              uVar12 = uVar12 - uVar7 * uVar3;
            }
            if (uVar12 != uVar8) {
              if (*(long *)(*param_1 + uVar12 * 8) == 0) {
                *(long **)(*param_1 + uVar12 * 8) = plVar6;
                uVar8 = uVar12;
              }
              else {
                plVar11 = plVar9;
                do {
                  plVar10 = plVar11;
                  plVar11 = (long *)*plVar10;
                  if (plVar11 == (long *)0x0) break;
                } while (plVar9[2] == plVar11[2]);
                *plVar6 = (long)plVar11;
                *plVar10 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar9;
                plVar9 = plVar6;
              }
            }
            plVar11 = (long *)*plVar9;
            plVar6 = plVar9;
            plVar9 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
  }
  return;
}


