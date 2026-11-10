/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004daa10; name: FUN_004daa10
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_004daa10(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    piVar10 = &DAT_04181630;
    iVar6 = DAT_04181630;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      return *param_1 == param_2;
    }
    piVar10 = &DAT_041816c0;
    iVar6 = DAT_041816c0;
  }
  if (iVar6 != 0) {
    iVar1 = 0xff00;
    if (param_2 != 0x100) {
      iVar1 = param_2;
    }
    do {
      piVar10 = piVar10 + 6;
      if (iVar6 == param_2) {
        if ((*(code **)(piVar10 + -4) != (code *)0x0) && (iVar6 == param_2)) {
          piVar7 = (int *)(**(code **)(piVar10 + -4))();
          iVar6 = *piVar7;
          iVar4 = param_1[0x175];
          if ((iVar4 == 0) || (iVar6 == iVar4)) {
LAB_004dab2c:
            iVar4 = FUN_004e2fc0(param_1,9,0,iVar6,0);
            if (iVar4 != 0) {
              iVar4 = param_1[0x176];
              if ((iVar4 == 0) || (iVar6 == iVar4)) {
LAB_004dab70:
                if (((*(ulong *)(piVar7 + 2) & (ulong)(uint)param_1[0x173]) == 0) &&
                   (((*(byte *)(piVar7 + 1) >> 1 & 1) == 0 ||
                    ((*(byte *)(*(long *)(param_1 + 0x122) + 0x1e) & 3) == 0)))) {
                  if (((param_2 != 0x304) ||
                      ((((param_1[0xe] == 0 || (*(long *)(param_1 + 0x160) != 0)) ||
                        (*(long *)(param_1 + 0x162) != 0)) ||
                       (lVar9 = *(long *)(param_1 + 0x122), *(long *)(lVar9 + 0x1c8) != 0)))) ||
                     (((*(long *)(lVar9 + 0x20) != 0 && (*(long *)(lVar9 + 0x28) != 0)) ||
                      ((*(long *)(lVar9 + 0x48) != 0 && (*(long *)(lVar9 + 0x50) != 0)))))) {
LAB_004dac84:
                    if (param_3 != (undefined8 *)0x0) {
                      uVar8 = (**(code **)(piVar10 + -4))();
                      *param_3 = uVar8;
                    }
                    return true;
                  }
                  if (((*(long *)(lVar9 + 0x98) != 0) && (*(long *)(lVar9 + 0xa0) != 0)) &&
                     (lVar9 = FUN_004238d0(), lVar9 != 0)) {
                    FUN_0042d4f0();
                    uVar5 = FUN_0042e3e0();
                    iVar6 = FUN_004dcb40(param_1,uVar5);
                    if (iVar6 != 0) goto LAB_004dac84;
                  }
                  lVar9 = *(long *)(param_1 + 0x122);
                  if (((*(long *)(lVar9 + 0x138) != 0) && (*(long *)(lVar9 + 0x140) != 0)) ||
                     ((*(long *)(lVar9 + 0x160) != 0 && (*(long *)(lVar9 + 0x168) != 0))))
                  goto LAB_004dac84;
                }
              }
              else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
                if (iVar6 < iVar4) goto LAB_004dab70;
              }
              else {
                iVar3 = 0xff00;
                if (iVar6 != 0x100) {
                  iVar3 = iVar6;
                }
                iVar6 = 0xff00;
                if (iVar4 != 0x100) {
                  iVar6 = iVar4;
                }
                if (iVar6 < iVar3) goto LAB_004dab70;
              }
            }
          }
          else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
            if (iVar4 <= iVar6) goto LAB_004dab2c;
          }
          else {
            iVar3 = 0xff00;
            if (iVar6 != 0x100) {
              iVar3 = iVar6;
            }
            iVar2 = 0xff00;
            if (iVar4 != 0x100) {
              iVar2 = iVar4;
            }
            if (iVar3 <= iVar2) goto LAB_004dab2c;
          }
        }
      }
      else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
        if (iVar6 <= param_2) {
          return false;
        }
      }
      else {
        iVar4 = 0xff00;
        if (iVar6 != 0x100) {
          iVar4 = iVar6;
        }
        if (iVar1 <= iVar4) {
          return false;
        }
      }
      iVar6 = *piVar10;
    } while (iVar6 != 0);
  }
  return false;
}


