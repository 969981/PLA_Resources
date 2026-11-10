/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6e524; name: FUN_02e6e524
 */


void FUN_02e6e524(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  
  iVar5 = *(int *)(param_1 + 0x314);
  uVar9 = -1 << (ulong)(iVar5 + 1U & 0x1f);
  if ((param_3 & (uVar9 ^ 0xffffffff)) == 0) {
    uVar9 = -1 << (ulong)(iVar5 + 2U & 0x1f);
    if ((param_3 & (uVar9 ^ 0xffffffff)) == 0) {
      iVar3 = 1;
      do {
        iVar4 = iVar3;
        iVar3 = iVar4 + 1;
        uVar9 = -1 << (ulong)(iVar5 + iVar4 + 2U & 0x1f);
      } while ((param_3 & (uVar9 ^ 0xffffffff)) == 0);
      uVar15 = (ulong)(iVar4 + 2);
    }
    else {
      uVar15 = 2;
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
    uVar15 = 1;
  }
  uVar1 = 1 << (ulong)(iVar3 + iVar5 & 0x1f);
  if (((uVar1 & param_3) == 0) ||
     ((param_3 & (-1 << (ulong)(iVar3 + iVar5 & 0x1f) ^ 0xffffffffU)) == 0)) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)
             (*(long *)(param_1 + 0x300) + (ulong)(uVar1 + param_2 + (uVar9 & param_3)));
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
    }
  }
  piVar2 = (int *)FUN_02e6e800(param_1,iVar3,puVar7,param_2,param_3);
  uVar9 = *(int *)(param_1 + 0x318) - 1;
  uVar6 = (ulong)uVar9;
  if ((uint)uVar15 < uVar9) {
    do {
      uVar9 = 1 << (ulong)(*(int *)(param_1 + 0x314) + (int)uVar15 & 0x1f);
      if (param_3 <= uVar9) break;
      if ((uVar9 & param_3) == 0) {
        if ((piVar2 != (int *)0x0) && ((*(int *)(param_1 + 0x30c) - param_3 & uVar9) != 0)) {
          piVar8 = (int *)(param_1 + uVar15 * 0x18);
          piVar10 = piVar8 + 4;
          piVar11 = *(int **)piVar10;
          piVar12 = (int *)0x0;
          piVar13 = piVar11;
          if ((piVar11 == (int *)0x0) || (piVar2 < piVar11)) goto joined_r0x02e6e7c0;
          piVar12 = *(int **)piVar11;
          piVar14 = piVar12;
          if ((piVar12 == (int *)0x0) || (piVar2 < piVar12)) {
joined_r0x02e6e7d0:
            if (uVar6 <= uVar15) goto LAB_02e6e7d4;
LAB_02e6e6c4:
            if ((piVar14 == (int *)0x0) || ((long)piVar14 - (long)piVar2 != (ulong)uVar9))
            goto LAB_02e6e7d4;
            if (piVar14 != piVar11) {
              piVar10 = piVar13;
            }
            *(undefined8 *)piVar10 = *(undefined8 *)piVar14;
            puVar7 = (undefined8 *)(param_1 + uVar15 * 0x18 + 8);
            if ((int *)*puVar7 == piVar14) {
              *puVar7 = piVar13;
            }
            iVar5 = *piVar8 + -1;
          }
          else {
            piVar14 = *(int **)piVar12;
            piVar13 = piVar12;
            if ((piVar14 == (int *)0x0) || (piVar2 < piVar14)) goto joined_r0x02e6e7d0;
            piVar13 = *(int **)piVar14;
            piVar12 = piVar14;
            if ((piVar13 != (int *)0x0) && (piVar13 <= piVar2)) {
              piVar14 = *(int **)piVar13;
              if ((piVar14 == (int *)0x0) || (piVar2 < piVar14)) goto joined_r0x02e6e7d0;
              piVar13 = *(int **)piVar14;
              piVar12 = piVar14;
              if ((piVar13 != (int *)0x0) && (piVar13 <= piVar2)) {
                piVar14 = *(int **)piVar13;
                if ((piVar14 == (int *)0x0) || (piVar2 < piVar14)) goto joined_r0x02e6e7d0;
                piVar13 = *(int **)piVar14;
                piVar12 = piVar14;
                if (piVar13 != (int *)0x0) {
                  piVar14 = piVar13;
                  if (piVar13 <= piVar2) {
                    do {
                      piVar13 = piVar14;
                      piVar14 = *(int **)piVar13;
                    } while (piVar14 != (int *)0x0 && piVar14 <= piVar2);
                    goto joined_r0x02e6e7d0;
                  }
                }
              }
            }
joined_r0x02e6e7c0:
            piVar14 = piVar13;
            piVar13 = piVar12;
            if (uVar15 < uVar6) goto LAB_02e6e6c4;
LAB_02e6e7d4:
            if (piVar13 != (int *)0x0) {
              piVar10 = piVar13;
            }
            *(int **)piVar2 = piVar14;
            *(int **)piVar10 = piVar2;
            if (piVar14 == (int *)0x0) {
              *(int **)(param_1 + uVar15 * 0x18 + 8) = piVar2;
            }
            piVar2 = (int *)0x0;
            iVar5 = *piVar8 + 1;
          }
          *piVar8 = iVar5;
        }
      }
      else {
        piVar2 = (int *)FUN_02e6e800(param_1,uVar15 & 0xffffffff,piVar2,param_2,param_3);
      }
      uVar15 = uVar15 + 1;
      uVar6 = (ulong)(*(int *)(param_1 + 0x318) - 1);
    } while (uVar15 < uVar6);
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  FUN_02e6e9f0(param_1,uVar15 & 0xffffffff);
  return;
}


