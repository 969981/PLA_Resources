/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031db5c4; name: FUN_031db5c4
 */


void FUN_031db5c4(long param_1,long param_2,int *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  short sVar5;
  int iVar6;
  ushort uVar7;
  undefined *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  short sVar18;
  uint uVar19;
  undefined1 uVar20;
  int iVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  int local_68 [2];
  
  puVar8 = PTR_PTR_0434a080;
  piVar22 = (int *)(*(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_3 * 0x10);
  sVar12 = (short)piVar22[2];
  sVar18 = *(short *)((long)piVar22 + 10);
  iVar1 = (int)sVar18 + (int)sVar12;
  if (0 < iVar1) {
    iVar14 = (int)sVar12;
    uVar19 = 0;
    while( true ) {
      if ((int)uVar19 < (int)sVar12) {
        iVar21 = *piVar22;
      }
      else {
        iVar21 = piVar22[1] - (int)sVar12;
      }
      lVar17 = *(long *)(*(long *)(param_1 + 8) + 0x28);
      iVar11 = *(int *)(lVar17 + (long)(int)(iVar21 + uVar19) * 0x14 + 8);
      if (iVar11 != -1) {
        iVar21 = *(int *)(lVar17 + (long)(int)(iVar21 + uVar19) * 0x14 + 0xc);
        lVar17 = *(long *)(*(long *)(param_1 + 8) + 0x18);
        piVar13 = (int *)(lVar17 + (long)iVar21 * 0x10);
        uVar7 = *(ushort *)(piVar13 + 2);
        uVar15 = iVar11 - *piVar13;
        if ((uint)(int)(short)uVar7 <= uVar15) {
          uVar15 = (uint)uVar7 + (iVar11 - *(int *)(lVar17 + (long)iVar21 * 0x10 + 4));
        }
        iVar11 = *param_3;
        if (iVar21 == iVar11) {
          if ((uVar19 & 0xffff) < (uVar15 & 0xffff)) {
            iVar10 = (int)param_4[1];
            lVar17 = *param_4;
            iVar11 = iVar10 + 1;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar10) {
              lVar17 = FUN_031dcbe0(puVar8,iVar11,lVar17,iVar10,(long)param_4 + 0xc);
              *param_4 = lVar17;
              iVar10 = (int)param_4[1];
            }
            piVar13 = (int *)(lVar17 + (long)iVar10 * 0x10);
            *piVar13 = iVar21;
            piVar13[1] = iVar21;
            *(short *)(piVar13 + 2) = (short)uVar19;
            *(short *)((long)piVar13 + 10) = (short)uVar15;
            *(undefined1 *)(piVar13 + 3) = 2;
            *(int *)(param_4 + 1) = iVar11;
          }
        }
        else {
          uVar2 = uVar19;
          iVar10 = iVar21;
          if (iVar21 <= iVar11) {
            uVar2 = uVar15;
            iVar10 = iVar11;
          }
          iVar6 = iVar11;
          if (iVar21 <= iVar11) {
            iVar6 = iVar21;
          }
          if (iVar21 <= iVar11) {
            uVar15 = uVar19;
          }
          if ((*(uint *)(*(long *)(param_2 + 8) + (ulong)(uVar19 >> 5) * 4) &
              1 << (ulong)(uVar19 & 0x1f)) == 0) {
            local_68[0] = iVar21;
            uVar9 = FUN_031d89f4(param_1,local_68);
            uVar20 = 1;
            if ((uVar9 & 1) == 0) {
              uVar20 = 2;
            }
          }
          else {
            uVar20 = 2;
          }
          iVar11 = (int)param_4[1];
          lVar17 = *param_4;
          iVar21 = iVar11 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar11) {
            lVar17 = FUN_031dcbe0(puVar8,iVar21,lVar17,iVar11,(long)param_4 + 0xc);
            *param_4 = lVar17;
            iVar11 = (int)param_4[1];
          }
          piVar13 = (int *)(lVar17 + (long)iVar11 * 0x10);
          *piVar13 = iVar6;
          piVar13[1] = iVar10;
          *(short *)(piVar13 + 2) = (short)uVar2;
          *(short *)((long)piVar13 + 10) = (short)uVar15;
          *(undefined1 *)(piVar13 + 3) = uVar20;
          *(int *)(param_4 + 1) = iVar21;
        }
      }
      if ((iVar14 + sVar18) - 1U == uVar19) break;
      sVar12 = (short)piVar22[2];
      uVar19 = uVar19 + 1;
    }
  }
  if (*(char *)(param_2 + 5) != '\0') {
    lVar17 = FUN_031dd758((long *)(param_1 + 0x50),param_3);
    puVar8 = PTR_PTR_0434a080;
    if (lVar17 == 0) {
      uVar15 = 0;
      uVar19 = 0xffffffff;
    }
    else {
      uVar19 = *(uint *)(lVar17 + 4);
      uVar15 = ((int)lVar17 - (int)*(undefined8 *)(param_1 + 0x60)) * 0x20000000;
    }
    lVar17 = *(long *)(param_1 + 0x50);
    piVar22 = (int *)(lVar17 + (long)(int)(uVar19 | uVar15) * 0x18 + 0x10);
    if (0 < *piVar22) {
      lVar23 = 0;
      lVar24 = 0;
      do {
        lVar16 = *(long *)(lVar17 + (long)(int)(uVar19 | uVar15) * 0x18 + 8);
        uVar2 = iVar1 + (int)lVar24;
        sVar12 = (short)uVar2;
        iVar14 = *param_3;
        iVar21 = *(int *)(lVar16 + lVar23);
        if (iVar21 == iVar14) {
          iVar21 = *(int *)(lVar16 + lVar23 + 4);
          if (lVar24 < iVar21) {
            uVar3 = iVar21 + iVar1;
            sVar5 = (short)uVar3;
            sVar18 = sVar5;
            if ((uVar3 & 0xffff) <= (uVar2 & 0xffff)) {
              sVar18 = sVar12;
              sVar12 = sVar5;
            }
            lVar16 = *param_4;
            iVar11 = (int)param_4[1];
            iVar21 = iVar11 + 1;
            if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar11) {
              lVar16 = FUN_031dcbe0(puVar8,iVar21,lVar16,iVar11,(long)param_4 + 0xc);
              *param_4 = lVar16;
              iVar11 = (int)param_4[1];
            }
            piVar13 = (int *)(lVar16 + (long)iVar11 * 0x10);
            *piVar13 = iVar14;
            piVar13[1] = iVar14;
            *(short *)(piVar13 + 2) = sVar12;
            goto LAB_031db8d8;
          }
        }
        else if (-1 < iVar21) {
          iVar11 = iVar14;
          iVar10 = iVar21;
          if (iVar21 <= iVar14) {
            iVar11 = iVar21;
            iVar10 = iVar14;
          }
          lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)iVar21 * 0x10;
          sVar18 = *(short *)(lVar4 + 10) + *(short *)(lVar4 + 8) +
                   (short)*(undefined4 *)(lVar16 + lVar23 + 4);
          sVar5 = sVar12;
          if (iVar21 <= iVar14) {
            sVar5 = sVar18;
            sVar18 = sVar12;
          }
          lVar16 = *param_4;
          iVar14 = (int)param_4[1];
          iVar21 = iVar14 + 1;
          if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) <= iVar14) {
            lVar16 = FUN_031dcbe0(puVar8,iVar21,lVar16,iVar14,(long)param_4 + 0xc);
            *param_4 = lVar16;
            iVar14 = (int)param_4[1];
          }
          piVar13 = (int *)(lVar16 + (long)iVar14 * 0x10);
          *piVar13 = iVar11;
          piVar13[1] = iVar10;
          *(short *)(piVar13 + 2) = sVar5;
LAB_031db8d8:
          *(short *)((long)piVar13 + 10) = sVar18;
          *(undefined1 *)(piVar13 + 3) = 3;
          *(int *)(param_4 + 1) = iVar21;
        }
        lVar24 = lVar24 + 1;
        lVar23 = lVar23 + 8;
      } while (lVar24 < *piVar22);
    }
  }
  return;
}


