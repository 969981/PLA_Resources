/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fe62c; name: FUN_028fe62c
 */


void FUN_028fe62c(long *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar8 = *param_2;
  plVar7 = (long *)param_2[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar4 = *(ulong *)(*param_1 + 0x28);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    piVar2 = (int *)*param_3;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar8;
    }
    else {
      uVar6 = uVar8;
      if (uVar4 <= uVar8) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar8 / uVar4;
        }
        uVar6 = uVar8 - uVar6 * uVar4;
      }
    }
    plVar3 = *(long **)(*(long *)(*param_1 + 0x20) + uVar6 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar3[1] == uVar8) {
            if (plVar3[2] == uVar8) goto LAB_028fe748;
          }
          else if ((plVar3[1] & uVar4 - 1) != uVar6) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar3[1];
          if (uVar5 == uVar8) {
            if (plVar3[2] == uVar8) goto LAB_028fe748;
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar6) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
joined_r0x028fe76c:
  if (plVar7 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x028fe7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return;
LAB_028fe748:
  if (*piVar2 == 1) {
    if (0.5 < *(float *)(param_1 + 1)) {
      piVar2[2] = (int)plVar3[7];
    }
  }
  else {
    piVar2[2] = (int)((float)piVar2[2] +
                     *(float *)(param_1 + 1) * (*(float *)(plVar3 + 7) - (float)piVar2[2]));
  }
  goto joined_r0x028fe76c;
}


