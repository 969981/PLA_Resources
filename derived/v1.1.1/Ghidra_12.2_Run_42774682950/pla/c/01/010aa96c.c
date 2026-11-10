/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010aa96c; name: FUN_010aa96c
 */


long FUN_010aa96c(long param_1,long param_2,ulong param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar3 = *(ulong *)(param_1 + 0x4b68);
  if (uVar3 != 0) {
    uVar2 = param_2 << 0x20 | (param_3 & 0xffff) << 0x10;
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar7 = uVar2 | (ulong)param_4 & 1;
    uVar4 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar4 < 2) {
      uVar9 = uVar3 - 1 & uVar7;
    }
    else if (uVar7 < uVar3) {
      uVar9 = uVar7;
    }
    else {
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar9 = uVar7 / uVar3;
      }
      uVar9 = uVar7 - uVar9 * uVar3;
    }
    lVar8 = *(long *)(param_1 + 0x4b60);
    plVar5 = *(long **)(lVar8 + uVar9 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar5[1] == uVar7) {
            if (plVar5[2] == uVar7) goto LAB_010aaa18;
          }
          else if ((plVar5[1] & uVar3 - 1) != uVar9) break;
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar5[1];
          if (uVar10 == uVar7) {
            if (plVar5[2] == uVar7) goto LAB_010aaa18;
          }
          else {
            if (uVar3 <= uVar10) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar10 / uVar3;
              }
              uVar10 = uVar10 - uVar1 * uVar3;
            }
            if (uVar10 != uVar9) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
    if ((param_4 & 1) != 0) {
      if (uVar4 < 2) {
        uVar7 = uVar3 - 1 & uVar2;
        puVar6 = *(undefined8 **)(lVar8 + uVar7 * 8);
      }
      else if (uVar2 < uVar3) {
        puVar6 = *(undefined8 **)(lVar8 + uVar2 * 8);
        uVar7 = uVar2;
      }
      else {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar2 / uVar3;
        }
        uVar7 = uVar2 - uVar7 * uVar3;
        puVar6 = *(undefined8 **)(lVar8 + uVar7 * 8);
      }
      if ((puVar6 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar6, plVar5 != (long *)0x0)) {
        if (uVar4 < 2) {
          do {
            if (plVar5[1] == uVar2) {
              if (plVar5[2] == uVar2) {
LAB_010aaa18:
                return plVar5[3];
              }
            }
            else if ((plVar5[1] & uVar3 - 1) != uVar7) break;
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
        }
        else {
          do {
            uVar4 = plVar5[1];
            if (uVar4 == uVar2) {
              if (plVar5[2] == uVar2) goto LAB_010aaa18;
            }
            else {
              if (uVar3 <= uVar4) {
                uVar9 = 0;
                if (uVar3 != 0) {
                  uVar9 = uVar4 / uVar3;
                }
                uVar4 = uVar4 - uVar9 * uVar3;
              }
              if (uVar4 != uVar7) break;
            }
            plVar5 = (long *)*plVar5;
          } while (plVar5 != (long *)0x0);
        }
      }
    }
  }
  return *(long *)(*(long *)(param_1 + 0x4b90) + 0x18);
}


