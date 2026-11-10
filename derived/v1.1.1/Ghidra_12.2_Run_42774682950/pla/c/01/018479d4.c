/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018479d4; name: FUN_018479d4
 */


void FUN_018479d4(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  uVar6 = *(ulong *)(param_1 + 0x110);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar9 = uVar6 - 1 & param_2;
    }
    else {
      uVar9 = param_2;
      if (uVar6 <= param_2) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = param_2 / uVar6;
        }
        uVar9 = param_2 - uVar9 * uVar6;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x108) + uVar9 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == param_2) {
            if (plVar8[2] == param_2) goto LAB_01847ad4;
          }
          else if ((plVar8[1] & uVar6 - 1) != uVar9) {
            return;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == param_2) {
            if (plVar8[2] == param_2) {
LAB_01847ad4:
              iVar2 = *(int *)(*(long *)(plVar8[3] + 0x70) + 0x278);
              iVar1 = 0;
              if (0 < iVar2) {
                iVar1 = iVar2 + -1;
              }
              *(int *)(*(long *)(plVar8[3] + 0x70) + 0x278) = iVar1;
              if (iVar1 != 0) {
                return;
              }
              lVar10 = *(long *)(plVar8[3] + 0x70);
              *(undefined1 *)(lVar10 + 0x27c) = 0;
              if (*(char *)(lVar10 + 0x202) == '\0') {
                if ((*(long *)(lVar10 + 0x280) == 0) ||
                   (*(int *)(*(long *)(lVar10 + 0x280) + 0xc) == 0)) {
                  uVar4 = 1;
                  uVar5 = 1;
                }
                else {
                  FUN_015916d0(lVar10,0,1,0);
                  uVar4 = 0;
                  uVar5 = 0x80;
                }
                FUN_015916d0(lVar10,uVar4,uVar5,0);
              }
              FUN_01837174(*(undefined8 *)(lVar10 + 0x218),lVar10);
              return;
            }
          }
          else {
            if (uVar6 <= uVar7) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar3 * uVar6;
            }
            if (uVar7 != uVar9) {
              return;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return;
}


