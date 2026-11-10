/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f20f98; name: FUN_01f20f98
 */


void FUN_01f20f98(long param_1,undefined8 param_2,ulong *param_3)

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
  ulong uVar10;
  
  uVar5 = *(ulong *)(param_1 + 0xd6730);
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar4 = *param_3;
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
    lVar8 = *(long *)(param_1 + 0xd6728);
    plVar6 = *(long **)(lVar8 + uVar9 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      uVar7 = uVar5 - 1;
      if (uVar3 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if (plVar6[2] == uVar4) goto LAB_01f210b4;
          }
          else if ((plVar6[1] & uVar7) != uVar9) {
            return;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar6[1];
          if (uVar10 == uVar4) {
            if (plVar6[2] == uVar4) goto LAB_01f210b4;
          }
          else {
            if (uVar5 <= uVar10) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar10 / uVar5;
              }
              uVar10 = uVar10 - uVar2 * uVar5;
            }
            if (uVar10 != uVar9) {
              return;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return;
LAB_01f210b4:
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
          if (plVar6[2] == uVar4) goto LAB_01f21160;
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
LAB_01f21160:
            FUN_01f1f0b4(param_1,param_2,(int)plVar6[6]);
            return;
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
                    /* WARNING: Subroutine does not return */
  FUN_01f22c10();
}


