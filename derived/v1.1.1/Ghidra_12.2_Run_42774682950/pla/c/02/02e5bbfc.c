/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5bbfc; name: FUN_02e5bbfc
 */


void FUN_02e5bbfc(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x40);
  if (uVar1 == 0) {
    lVar11 = 0;
  }
  else {
    plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x38);
    lVar11 = *plVar7;
    if (5 < uVar1) {
      lVar9 = plVar7[5];
      goto joined_r0x02e5bdb4;
    }
  }
  lVar9 = 0;
joined_r0x02e5bdb4:
  if ((((param_2 >> 3 & 1) == 0) || (*(int *)(lVar9 + 0xec) < 1)) ||
     (*(short *)(lVar11 + 0x38) != 1)) {
    FUN_02e5a714(param_1);
  }
  else {
    FUN_02e5aee4(param_1);
  }
  if ((DAT_042a5cb2 != '\0') || (*(int *)(param_1 + 0x70) == 0)) {
    FUN_02e5b684(param_1);
  }
  FUN_02ef7698(lVar9,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x48));
  uVar1 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar1 != 0) {
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x48);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)lVar10 / uVar1;
    }
    for (plVar7 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                            (ulong)((uint)lVar10 - uVar2 * uVar1) * 8); plVar7 != (long *)0x0;
        plVar7 = (long *)*plVar7) {
      if (plVar7[1] == lVar10) {
        lVar3 = FUN_02e42e10(plVar7[2]);
        if (lVar3 != 0) {
          fVar12 = *(float *)(lVar9 + 0xf0);
          if (*(uint *)(lVar9 + 0x58) == 0) goto LAB_02e5bcd4;
          lVar6 = (ulong)*(uint *)(lVar9 + 0x58) * 0x68;
          lVar8 = *(long *)(lVar9 + 0x50);
          lVar5 = 0;
          do {
            if ((*(long *)(lVar8 + 0x50) == lVar10) && (*(float *)(lVar8 + 0x24) < fVar12)) {
              lVar5 = lVar8;
              fVar12 = *(float *)(lVar8 + 0x24);
            }
            lVar8 = lVar8 + 0x68;
            lVar6 = lVar6 + -0x68;
          } while (lVar6 != 0);
          if (lVar5 == 0) {
LAB_02e5bcd4:
            uVar1 = *(uint *)(lVar9 + 0x28);
            if (uVar1 == 0) break;
            lVar8 = *(long *)(lVar9 + 0x20);
            if ((*(long *)(lVar8 + 0x50) != lVar10) ||
               (fVar13 = *(float *)(lVar8 + 0x24), lVar5 = lVar8, fVar12 <= fVar13)) {
              lVar5 = 0;
              fVar13 = fVar12;
            }
            if (uVar1 != 1) {
              if ((*(long *)(lVar8 + 0xb8) == lVar10) && (*(float *)(lVar8 + 0x8c) < fVar13)) {
                lVar5 = lVar8 + 0x68;
                fVar13 = *(float *)(lVar8 + 0x8c);
              }
              if (uVar1 != 2) {
                lVar8 = lVar8 + 0xd0;
                lVar6 = (ulong)uVar1 * 0x68 + -0xd0;
                do {
                  if ((*(long *)(lVar8 + 0x50) == lVar10) && (*(float *)(lVar8 + 0x24) < fVar13)) {
                    lVar5 = lVar8;
                    fVar13 = *(float *)(lVar8 + 0x24);
                  }
                  lVar8 = lVar8 + 0x68;
                  lVar6 = lVar6 + -0x68;
                } while (lVar6 != 0);
              }
            }
            if (lVar5 == 0) break;
          }
          if (*(int *)(*(long *)(lVar9 + 8) + 0x40) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = **(undefined8 **)(*(long *)(lVar9 + 8) + 0x38);
          }
          FUN_02ef0870(uVar4,lVar5,lVar3);
        }
        break;
      }
    }
  }
  *(byte *)(lVar11 + 0x54) = *(byte *)(lVar11 + 0x54) & 0xfe;
  return;
}


