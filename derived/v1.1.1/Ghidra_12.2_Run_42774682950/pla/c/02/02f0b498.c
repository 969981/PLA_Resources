/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0b498; name: FUN_02f0b498
 */


void FUN_02f0b498(long param_1,int param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long *plVar11;
  int *piVar12;
  int iVar13;
  undefined8 local_68;
  
  if ((param_3 != 0) && (4 < *(uint *)(param_3 + 0x40))) {
    lVar6 = *(long *)(*(long *)(param_3 + 0x38) + 0x20);
    if (lVar6 == 0) {
      local_68 = 0;
      uVar7 = 0;
      goto LAB_02f0b55c;
    }
    piVar4 = *(int **)(lVar6 + 0x20);
    uVar2 = *(uint *)(lVar6 + 0x28);
    if ((uVar2 == 0) || (*piVar4 == *(int *)(param_1 + 0x10))) {
      piVar12 = piVar4;
    }
    else {
      lVar6 = (ulong)uVar2 * 0xc;
      piVar10 = piVar4;
      do {
        lVar6 = lVar6 + -0xc;
        if (lVar6 == 0) goto LAB_02f0b52c;
        piVar1 = piVar10 + 3;
        piVar12 = piVar10 + 3;
        piVar10 = piVar10 + 3;
      } while (*piVar1 != *(int *)(param_1 + 0x10));
    }
    if (piVar12 != piVar4 + (ulong)uVar2 * 3) {
      uVar7 = (ulong)(uint)piVar12[1];
      local_68 = (ulong)(uint)piVar12[2] << 0x20;
      goto LAB_02f0b55c;
    }
  }
LAB_02f0b52c:
  uVar7 = 0;
  local_68 = 0;
LAB_02f0b55c:
  local_68 = local_68 | uVar7;
  if ((int)uVar7 != param_2) {
    plVar5 = *(long **)(param_1 + 0x120);
    if (plVar5 == (long *)0x0) {
      param_2 = *(int *)(param_1 + 0x114);
      plVar11 = (long *)0x0;
      plVar8 = (long *)0x0;
    }
    else {
      plVar11 = plVar5;
      do {
        if ((int)plVar11[1] == (int)uVar7) {
          plVar11 = plVar11 + 2;
          goto LAB_02f0b598;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
      plVar11 = (long *)0x0;
LAB_02f0b598:
      plVar8 = plVar5;
      do {
        if ((int)plVar8[1] == param_2) {
          plVar8 = plVar8 + 2;
          goto LAB_02f0b5d4;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      param_2 = *(int *)(param_1 + 0x114);
      do {
        if ((int)plVar5[1] == param_2) {
          plVar8 = plVar5 + 2;
          goto LAB_02f0b5d4;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
      plVar8 = (long *)0x0;
    }
LAB_02f0b5d4:
    FUN_02f0b780(param_1,plVar11,plVar8,param_3);
    FUN_02ef3648(DAT_0440a140,*(undefined4 *)(param_1 + 0x10),param_3);
    local_68 = 0;
    plVar5 = *(long **)(param_1 + 0x178);
    if (plVar5 != (long *)0x0) {
      iVar13 = 0;
      iVar3 = 0;
      do {
        if (plVar5[4] == param_3) {
          if (iVar3 == param_2) {
            iVar13 = iVar13 + 1;
            local_68 = CONCAT44(iVar13,(undefined4)local_68);
          }
          else {
            iVar13 = 1;
            local_68 = CONCAT44(1,param_2);
          }
          if ((plVar8 != (long *)0x0) &&
             (uVar7 = (ulong)*(uint *)(plVar8 + 2), *(uint *)(plVar8 + 2) != 0)) {
            piVar4 = (int *)plVar8[1];
            if (plVar11 != (long *)0x0) {
              piVar12 = piVar4;
LAB_02f0b67c:
              iVar3 = *piVar12;
              for (plVar9 = *(long **)(param_1 + 0x148); plVar9 != (long *)0x0;
                  plVar9 = (long *)*plVar9) {
                if (*(int *)(plVar9 + 1) == iVar3) {
                  if (((*(byte *)((long)plVar9 + 0x14) >> 4 & 1) != 0) &&
                     (*(uint *)(plVar11 + 2) != 0)) {
                    lVar6 = (ulong)*(uint *)(plVar11 + 2) << 2;
                    piVar10 = (int *)plVar11[1];
                    goto LAB_02f0b6b8;
                  }
                  break;
                }
              }
              goto LAB_02f0b658;
            }
            do {
              for (plVar9 = *(long **)(param_1 + 0x148);
                  (plVar9 != (long *)0x0 && (*(int *)(plVar9 + 1) != *piVar4));
                  plVar9 = (long *)*plVar9) {
              }
              FUN_02f0b8ec(param_1,*piVar4,plVar5);
              piVar4 = piVar4 + 1;
            } while (piVar4 != (int *)(plVar8[1] + (ulong)*(uint *)(plVar8 + 2) * 4));
          }
LAB_02f0b614:
          iVar3 = param_2;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    FUN_02ef32e4(DAT_0440a140,param_3,*(undefined4 *)(param_1 + 0x10),&local_68);
  }
  return;
  while (lVar6 = lVar6 + -4, piVar10 = piVar10 + 1, lVar6 != 0) {
LAB_02f0b6b8:
    if (*piVar10 == iVar3) goto LAB_02f0b66c;
  }
LAB_02f0b658:
  FUN_02f0b8ec(param_1,iVar3,plVar5);
  piVar4 = (int *)plVar8[1];
  uVar7 = (ulong)*(uint *)(plVar8 + 2);
LAB_02f0b66c:
  piVar12 = piVar12 + 1;
  if (piVar12 == piVar4 + uVar7) goto LAB_02f0b614;
  goto LAB_02f0b67c;
}


