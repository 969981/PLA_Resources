/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010aaed4; name: FUN_010aaed4
 */


bool FUN_010aaed4(long param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  uVar2 = *(ulong *)(param_1 + 0x4dd8);
  if ((param_3 & 1) == 0) {
LAB_010aaedc:
    if (uVar2 != 0) {
      uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
      uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
      uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
LAB_010aaf10:
      if (uVar3 < 2) {
        uVar4 = uVar2 - 1 & param_2;
      }
      else {
        uVar4 = param_2;
        if (uVar2 <= param_2) {
          uVar4 = 0;
          if (uVar2 != 0) {
            uVar4 = param_2 / uVar2;
          }
          uVar4 = param_2 - uVar4 * uVar2;
        }
      }
      plVar5 = *(long **)(*(long *)(param_1 + 0x4dd0) + uVar4 * 8);
      if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
        if (uVar3 < 2) {
          do {
            if (plVar5[1] == param_2) {
              if (plVar5[2] == param_2) goto LAB_010aafd8;
            }
            else if ((plVar5[1] & uVar2 - 1) != uVar4) goto LAB_010aafd0;
            plVar5 = (long *)*plVar5;
            plVar6 = (long *)0x0;
          } while (plVar5 != (long *)0x0);
        }
        else {
          do {
            uVar3 = plVar5[1];
            if (uVar3 == param_2) {
              if (plVar5[2] == param_2) goto LAB_010aafd8;
            }
            else {
              if (uVar2 <= uVar3) {
                uVar1 = 0;
                if (uVar2 != 0) {
                  uVar1 = uVar3 / uVar2;
                }
                uVar3 = uVar3 - uVar1 * uVar2;
              }
              if (uVar3 != uVar4) goto LAB_010aafd0;
            }
            plVar5 = (long *)*plVar5;
            plVar6 = (long *)0x0;
          } while (plVar5 != (long *)0x0);
        }
        goto LAB_010aafdc;
      }
    }
  }
  else if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar4 = uVar2 - 1 & param_2;
    }
    else {
      uVar4 = param_2;
      if (uVar2 <= param_2) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_2 / uVar2;
        }
        uVar4 = param_2 - uVar4 * uVar2;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x4dd0) + uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar5[1] == param_2) {
            if (plVar5[2] == param_2) {
              return true;
            }
          }
          else if ((plVar5[1] & uVar2 - 1) != uVar4) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar5[1];
          if (uVar3 == param_2) {
            if (plVar5[2] == param_2) {
              return true;
            }
          }
          else {
            if (uVar2 <= uVar3) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar3 / uVar2;
              }
              uVar3 = uVar3 - uVar1 * uVar2;
            }
            if (uVar3 != uVar4) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      goto LAB_010aaedc;
    }
    goto LAB_010aaf10;
  }
LAB_010aafd0:
  plVar6 = (long *)0x0;
LAB_010aafdc:
  return plVar6 != (long *)0x0;
LAB_010aafd8:
  plVar6 = plVar5;
  goto LAB_010aafdc;
}


