/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021b700; name: FUN_0021b700
 */


void FUN_0021b700(long param_1,long param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  
  if (-1 < param_3) {
    uVar2 = *(ushort *)(param_2 + 2);
    uVar11 = 0;
    iVar7 = 0;
    iVar12 = 0x8a;
    if (uVar2 != 0) {
      iVar12 = 7;
    }
    iVar15 = 3;
    if (uVar2 != 0) {
      iVar15 = 4;
    }
    uVar5 = (ulong)uVar2;
    uVar17 = 0xffffffff;
    do {
      while( true ) {
        uVar14 = uVar5;
        uVar11 = uVar11 + 1;
        uVar2 = *(ushort *)(param_2 + uVar11 * 4 + 2);
        iVar8 = iVar7 + 1;
        uVar6 = (uint)uVar14;
        uVar13 = (uint)uVar2;
        uVar5 = (ulong)uVar2;
        if ((iVar12 <= iVar8) || (uVar6 != uVar13)) break;
joined_r0x0021b854:
        iVar7 = iVar8;
        if (uVar11 == param_3 + 1) {
          return;
        }
      }
      if (iVar8 < iVar15) {
        uVar10 = *(uint *)(param_1 + 0x1734);
        lVar18 = param_1 + uVar14 * 4;
        do {
          while( true ) {
            uVar16 = (uint)*(ushort *)(lVar18 + 0xabe);
            uVar3 = *(ushort *)(lVar18 + 0xabc);
            uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar3 << (ulong)(uVar10 & 0x1f);
            *(short *)(param_1 + 0x1730) = (short)uVar9;
            if ((int)uVar10 <= (int)(0x10 - uVar16)) break;
            lVar19 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar19 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar19) = (char)uVar9;
            lVar19 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar19 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar19) = *(undefined1 *)(param_1 + 0x1731);
            *(ushort *)(param_1 + 0x1730) =
                 uVar3 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            uVar10 = (uVar16 + *(int *)(param_1 + 0x1734)) - 0x10;
            iVar8 = iVar8 + -1;
            *(uint *)(param_1 + 0x1734) = uVar10;
            if (iVar8 == 0) goto LAB_0021b834;
          }
          uVar10 = uVar10 + uVar16;
          iVar8 = iVar8 + -1;
          *(uint *)(param_1 + 0x1734) = uVar10;
        } while (iVar8 != 0);
LAB_0021b834:
        bVar1 = uVar2 == 0;
joined_r0x0021bbf0:
        if (!bVar1) goto LAB_0021b83c;
      }
      else if (uVar6 == 0) {
        if (iVar8 < 0xb) {
          uVar3 = *(ushort *)(param_1 + 0xb02);
          uVar10 = *(uint *)(param_1 + 0x1734);
          uVar4 = *(ushort *)(param_1 + 0xb00);
          uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar10 & 0x1f);
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          if ((int)(0x10 - (uint)uVar3) < (int)uVar10) {
            lVar18 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar18 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar9;
            lVar18 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar18 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) = *(undefined1 *)(param_1 + 0x1731);
            uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            uVar9 = (uint)uVar4;
            uVar10 = ((uint)uVar3 + *(int *)(param_1 + 0x1734)) - 0x10;
            *(ushort *)(param_1 + 0x1730) = uVar4;
          }
          else {
            uVar10 = uVar10 + uVar3;
          }
          uVar16 = iVar7 + 0xfffeU & 0xffff;
          uVar9 = uVar9 | uVar16 << (ulong)(uVar10 & 0x1f);
          *(uint *)(param_1 + 0x1734) = uVar10;
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          if (0xd < (int)uVar10) {
            lVar18 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar18 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar9;
            lVar18 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar18 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) = *(undefined1 *)(param_1 + 0x1731);
            *(short *)(param_1 + 0x1730) =
                 (short)(uVar16 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
            *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -0xd;
            goto joined_r0x0021bb50;
          }
          *(uint *)(param_1 + 0x1734) = uVar10 + 3;
        }
        else {
          uVar2 = *(ushort *)(param_1 + 0xb06);
          uVar10 = *(uint *)(param_1 + 0x1734);
          uVar3 = *(ushort *)(param_1 + 0xb04);
          uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar3 << (ulong)(uVar10 & 0x1f);
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          if ((int)(0x10 - (uint)uVar2) < (int)uVar10) {
            lVar18 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar18 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar9;
            lVar18 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar18 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) = *(undefined1 *)(param_1 + 0x1731);
            uVar3 = uVar3 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            uVar9 = (uint)uVar3;
            uVar10 = ((uint)uVar2 + *(int *)(param_1 + 0x1734)) - 0x10;
            *(ushort *)(param_1 + 0x1730) = uVar3;
          }
          else {
            uVar10 = uVar10 + uVar2;
          }
          uVar16 = iVar7 + 0xfff6U & 0xffff;
          uVar9 = uVar9 | uVar16 << (ulong)(uVar10 & 0x1f);
          *(uint *)(param_1 + 0x1734) = uVar10;
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          if ((int)uVar10 < 10) {
            *(uint *)(param_1 + 0x1734) = uVar10 + 7;
            bVar1 = uVar13 == 0;
            goto joined_r0x0021bbf0;
          }
          lVar18 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar18 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar9;
          lVar18 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar18 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) = *(undefined1 *)(param_1 + 0x1731);
          *(short *)(param_1 + 0x1730) =
               (short)(uVar16 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
          *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -9;
        }
        if (uVar13 != 0) goto LAB_0021b83c;
      }
      else {
        if (uVar6 == (uint)uVar17) {
          uVar10 = *(uint *)(param_1 + 0x1734);
          iVar7 = iVar8;
        }
        else {
          lVar18 = param_1 + uVar14 * 4;
          uVar3 = *(ushort *)(lVar18 + 0xabe);
          uVar10 = *(uint *)(param_1 + 0x1734);
          uVar4 = *(ushort *)(lVar18 + 0xabc);
          uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar10 & 0x1f);
          *(short *)(param_1 + 0x1730) = (short)uVar9;
          if ((int)(0x10 - (uint)uVar3) < (int)uVar10) {
            lVar18 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar18 + 1;
            *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar9;
            lVar18 = *(long *)(param_1 + 0x28);
            *(long *)(param_1 + 0x28) = lVar18 + 1;
            *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) = *(undefined1 *)(param_1 + 0x1731);
            *(ushort *)(param_1 + 0x1730) =
                 uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
            uVar10 = ((uint)uVar3 + *(int *)(param_1 + 0x1734)) - 0x10;
          }
          else {
            uVar10 = uVar10 + uVar3;
          }
          *(uint *)(param_1 + 0x1734) = uVar10;
        }
        uVar3 = *(ushort *)(param_1 + 0xafe);
        uVar4 = *(ushort *)(param_1 + 0xafc);
        uVar9 = (uint)*(ushort *)(param_1 + 0x1730) | (uint)uVar4 << (ulong)(uVar10 & 0x1f);
        *(short *)(param_1 + 0x1730) = (short)uVar9;
        if ((int)(0x10 - (uint)uVar3) < (int)uVar10) {
          lVar18 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar18 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar9;
          lVar18 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar18 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) = *(undefined1 *)(param_1 + 0x1731);
          uVar4 = uVar4 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f);
          uVar9 = (uint)uVar4;
          *(ushort *)(param_1 + 0x1730) = uVar4;
          uVar10 = ((uint)uVar3 + *(int *)(param_1 + 0x1734)) - 0x10;
        }
        else {
          uVar10 = uVar10 + uVar3;
        }
        uVar16 = iVar7 + 0xfffdU & 0xffff;
        uVar9 = uVar9 | uVar16 << (ulong)(uVar10 & 0x1f);
        *(uint *)(param_1 + 0x1734) = uVar10;
        *(short *)(param_1 + 0x1730) = (short)uVar9;
        if ((int)uVar10 < 0xf) {
          *(uint *)(param_1 + 0x1734) = uVar10 + 2;
        }
        else {
          lVar18 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar18 + 1;
          *(char *)(*(long *)(param_1 + 0x10) + lVar18) = (char)uVar9;
          lVar18 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar18 + 1;
          *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar18) = *(undefined1 *)(param_1 + 0x1731);
          *(short *)(param_1 + 0x1730) =
               (short)(uVar16 >> (ulong)(0x10U - *(int *)(param_1 + 0x1734) & 0x1f));
          *(int *)(param_1 + 0x1734) = *(int *)(param_1 + 0x1734) + -0xe;
        }
joined_r0x0021bb50:
        if (uVar2 != 0) {
LAB_0021b83c:
          iVar15 = 3;
          if (uVar6 != uVar13) {
            iVar15 = 4;
          }
          iVar12 = 6;
          uVar17 = uVar14;
          iVar8 = 0;
          if (uVar6 != uVar13) {
            iVar12 = 7;
          }
          goto joined_r0x0021b854;
        }
      }
      iVar15 = 3;
      iVar12 = 0x8a;
      iVar7 = 0;
      uVar17 = uVar14;
    } while (uVar11 != param_3 + 1);
  }
  return;
}


