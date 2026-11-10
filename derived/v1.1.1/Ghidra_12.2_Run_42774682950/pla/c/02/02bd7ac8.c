/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd7ac8; name: FUN_02bd7ac8
 */


void FUN_02bd7ac8(undefined8 *param_1,long param_2,int param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  if ((*(int *)(param_2 + 0xfc) == param_3) && (*(long *)(param_2 + 0x1d8) == 1)) {
    uVar5 = *(ulong *)(param_2 + 0x110);
    if (uVar5 != 0) {
      uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar3 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x1b8) + 0x18) + 0x70);
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar7 = uVar5 - 1 & uVar3;
      }
      else {
        uVar7 = uVar3;
        if (uVar5 <= uVar3) {
          uVar7 = 0;
          if (uVar5 != 0) {
            uVar7 = uVar3 / uVar5;
          }
          uVar7 = uVar3 - uVar7 * uVar5;
        }
      }
      plVar8 = *(long **)(*(long *)(param_2 + 0x108) + uVar7 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        if (uVar6 < 2) {
          do {
            if (plVar8[1] == uVar3) {
              if (plVar8[2] == uVar3) goto LAB_02bd7bf0;
            }
            else if ((plVar8[1] & uVar5 - 1) != uVar7) break;
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
        else {
          do {
            uVar6 = plVar8[1];
            if (uVar6 == uVar3) {
              if (plVar8[2] == uVar3) goto LAB_02bd7bf0;
            }
            else {
              if (uVar5 <= uVar6) {
                uVar1 = 0;
                if (uVar5 != 0) {
                  uVar1 = uVar6 / uVar5;
                }
                uVar6 = uVar6 - uVar1 * uVar5;
              }
              if (uVar6 != uVar7) break;
            }
            plVar8 = (long *)*plVar8;
          } while (plVar8 != (long *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02be1d40();
  }
LAB_02bd7c28:
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_04287c58;
  param_1[1] = 0;
  uVar4 = *(undefined8 *)(PTR_DAT_04379570 + 8);
  param_1[4] = *(undefined8 *)PTR_DAT_04379570;
  param_1[5] = uVar4;
  return;
LAB_02bd7bf0:
  lVar9 = plVar8[3];
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
  FUN_02bde78c();
  for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    if (puVar2 == &DAT_043f2008) {
      *param_1 = &PTR_FUN_04287c58;
      uVar4 = *(undefined8 *)(lVar9 + 0xa8);
      param_1[5] = *(undefined8 *)(lVar9 + 0x98);
      param_1[7] = uVar4;
      param_1[3] = *(undefined8 *)(lVar9 + 0x88);
      param_1[2] = *(undefined8 *)(lVar9 + 0x80);
      uVar4 = *(undefined8 *)(lVar9 + 0x90);
      param_1[6] = *(undefined8 *)(lVar9 + 0xa0);
      param_1[4] = uVar4;
      return;
    }
  }
  goto LAB_02bd7c28;
}


