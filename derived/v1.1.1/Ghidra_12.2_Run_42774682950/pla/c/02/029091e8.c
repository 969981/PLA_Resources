/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029091e8; name: FUN_029091e8
 */


void FUN_029091e8(long *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = ((long *)*param_1)[1];
  if (uVar4 != 0) {
    uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    piVar2 = (int *)*param_3;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & uVar3;
    }
    else if (uVar3 < uVar4) {
      uVar7 = uVar3;
    }
    else {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar3 / uVar4;
      }
      uVar7 = uVar3 - uVar7 * uVar4;
    }
    plVar5 = *(long **)(*(long *)*param_1 + uVar7 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar5[1] == uVar3) {
            if (plVar5[2] == uVar3) {
LAB_029092e8:
              if (*piVar2 != 1) {
                piVar2[2] = (int)((float)piVar2[2] +
                                 *(float *)(param_1 + 1) *
                                 (*(float *)(plVar5 + 4) - (float)piVar2[2]));
                return;
              }
              if (*(float *)(param_1 + 1) <= 0.5) {
                return;
              }
              piVar2[2] = (int)plVar5[4];
              return;
            }
          }
          else if ((plVar5[1] & uVar4 - 1) != uVar7) {
            return;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar3) {
            if (plVar5[2] == uVar3) goto LAB_029092e8;
          }
          else {
            if (uVar4 <= uVar6) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar6 / uVar4;
              }
              uVar6 = uVar6 - uVar1 * uVar4;
            }
            if (uVar6 != uVar7) {
              return;
            }
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
  }
  return;
}


