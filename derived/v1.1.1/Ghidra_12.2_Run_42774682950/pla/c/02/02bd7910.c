/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd7910; name: FUN_02bd7910
 */


void FUN_02bd7910(undefined8 *param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  if ((*(int *)(param_2 + 0xfc) == param_3) && (*(long *)(param_2 + 0x1d8) == 1)) {
    uVar5 = *(ulong *)(param_2 + 0x110);
    if (uVar5 != 0) {
      uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
      uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x1b8) + 0x18) + 0x70);
      uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar7 < 2) {
        uVar8 = uVar5 - 1 & uVar4;
      }
      else {
        uVar8 = uVar4;
        if (uVar5 <= uVar4) {
          uVar8 = 0;
          if (uVar5 != 0) {
            uVar8 = uVar4 / uVar5;
          }
          uVar8 = uVar4 - uVar8 * uVar5;
        }
      }
      plVar9 = *(long **)(*(long *)(param_2 + 0x108) + uVar8 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if (uVar7 < 2) {
          do {
            if (plVar9[1] == uVar4) {
              if (plVar9[2] == uVar4) goto LAB_02bd7a38;
            }
            else if ((plVar9[1] & uVar5 - 1) != uVar8) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar7 = plVar9[1];
            if (uVar7 == uVar4) {
              if (plVar9[2] == uVar4) goto LAB_02bd7a38;
            }
            else {
              if (uVar5 <= uVar7) {
                uVar2 = 0;
                if (uVar5 != 0) {
                  uVar2 = uVar7 / uVar5;
                }
                uVar7 = uVar7 - uVar2 * uVar5;
              }
              if (uVar7 != uVar8) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02be1d40();
  }
LAB_02bd7a70:
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_04287c08;
  param_1[1] = 0;
  return;
LAB_02bd7a38:
  lVar10 = plVar9[3];
  puVar3 = (undefined8 *)(*(code *)**(undefined8 **)(lVar10 + 0x50))((undefined8 *)(lVar10 + 0x50));
  FUN_02bdd200();
  for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
    if (puVar3 == &DAT_043f1ff8) {
      *param_1 = &PTR_FUN_04287c08;
      uVar1 = *(undefined4 *)(lVar10 + 0x90);
      param_1[3] = *(undefined8 *)(lVar10 + 0x88);
      uVar6 = *(undefined8 *)(lVar10 + 0x80);
      *(undefined4 *)(param_1 + 4) = uVar1;
      param_1[2] = uVar6;
      return;
    }
  }
  goto LAB_02bd7a70;
}


