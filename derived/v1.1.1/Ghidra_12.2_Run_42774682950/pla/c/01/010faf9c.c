/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010faf9c; name: FUN_010faf9c
 */


bool FUN_010faf9c(long param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar5 = *(ulong *)(param_1 + 0x5660);
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = uVar4 / uVar5;
    }
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar9 = uVar5 - 1 & uVar4;
    }
    else {
      uVar9 = uVar4;
      if (uVar5 <= uVar4) {
        uVar9 = uVar4 - uVar1 * uVar5;
      }
    }
    lVar8 = *(long *)(param_1 + 0x5658);
    plVar6 = *(long **)(lVar8 + uVar9 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      uVar7 = uVar5 - 1;
      if (uVar3 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if (plVar6[2] == uVar4) goto LAB_010fb094;
          }
          else if ((plVar6[1] & uVar7) != uVar9) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar6[1];
          if (uVar11 == uVar4) {
            if (plVar6[2] == uVar4) goto LAB_010fb094;
          }
          else {
            if (uVar5 <= uVar11) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar11 / uVar5;
              }
              uVar11 = uVar11 - uVar2 * uVar5;
            }
            if (uVar11 != uVar9) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  goto LAB_010fb1b0;
LAB_010fb094:
  uVar9 = *param_3;
  plVar6 = (long *)(plVar6[3] + 8);
  plVar12 = (long *)*plVar6;
  if (plVar12 == (long *)0x0) {
LAB_010fb0e8:
    plVar10 = plVar6;
  }
  else {
    plVar10 = plVar6;
    if ((ulong)plVar12[4] >= uVar9) {
      plVar10 = plVar12;
    }
    for (plVar12 = (long *)plVar12[(ulong)plVar12[4] < uVar9]; plVar12 != (long *)0x0;
        plVar12 = (long *)plVar12[(ulong)plVar12[4] < uVar9]) {
      if ((ulong)plVar12[4] >= uVar9) {
        plVar10 = plVar12;
      }
    }
    if ((plVar10 == plVar6) || (uVar9 < (ulong)plVar10[4])) goto LAB_010fb0e8;
  }
  if (uVar3 < 2) {
    uVar9 = uVar7 & uVar4;
    plVar6 = *(long **)(lVar8 + uVar9 * 8);
  }
  else {
    uVar9 = uVar4;
    if (uVar5 <= uVar4) {
      uVar9 = uVar4 - uVar1 * uVar5;
    }
    plVar6 = *(long **)(lVar8 + uVar9 * 8);
  }
  if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
    if (uVar3 < 2) {
      do {
        if (plVar6[1] == uVar4) {
          if (plVar6[2] == uVar4) goto LAB_010fb198;
        }
        else if ((plVar6[1] & uVar7) != uVar9) break;
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        uVar3 = plVar6[1];
        if (uVar3 == uVar4) {
          if (plVar6[2] == uVar4) {
LAB_010fb198:
            return plVar10 != (long *)(plVar6[3] + 8);
          }
        }
        else {
          if (uVar5 <= uVar3) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar3 / uVar5;
            }
            uVar3 = uVar3 - uVar1 * uVar5;
          }
          if (uVar3 != uVar9) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
LAB_010fb1b0:
                    /* WARNING: Subroutine does not return */
  FUN_010ff3c0();
}


