/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03266aa0; name: FUN_03266aa0
 */


void FUN_03266aa0(long param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  short *psVar20;
  long lVar21;
  int iVar22;
  
  iVar5 = *(int *)(param_1 + 0xc0);
  if (0 < iVar5) {
    puVar11 = *(ushort **)(param_1 + 0xb8);
    uVar16 = 0;
    lVar13 = *(long *)(param_1 + 0x100);
    iVar22 = *(int *)(lVar13 + (ulong)*puVar11 * 0x20 + 4);
    iVar6 = *(int *)(lVar13 + (ulong)*puVar11 * 0x20);
    lVar10 = 0;
    do {
      iVar22 = iVar22 - iVar6;
      lVar21 = (long)(int)uVar16;
      iVar2 = (iVar22 * 2 & 0x10000U) + iVar22;
      lVar12 = (ulong)uVar16 << 0x20;
      iVar4 = -1;
      lVar17 = lVar21;
      do {
        iVar18 = iVar4;
        lVar19 = lVar12;
        lVar17 = lVar17 + 1;
        if (iVar5 <= lVar17) {
          iVar22 = 0;
          break;
        }
        iVar22 = *(int *)(lVar13 + (ulong)puVar11[lVar17] * 0x20 + 4);
        iVar9 = iVar22 - iVar6;
        iVar9 = (iVar9 * 2 & 0x10000U) + iVar9;
        lVar12 = lVar19 + 0x100000000;
        iVar4 = iVar18 + -1;
      } while ((int)(short)iVar9 * (iVar2 >> 0x10) == (iVar9 >> 0x10) * (int)(short)iVar2);
      uVar16 = uVar16 - iVar18;
      if ((iVar18 != -1) && (1 < -iVar18)) {
        lVar19 = lVar19 >> 0x20;
        while( true ) {
          uVar7 = puVar11[lVar19];
          lVar19 = lVar19 + -1;
          uVar8 = puVar11[lVar19];
          piVar3 = (int *)(lVar13 + (ulong)uVar7 * 0x20);
          lVar13 = lVar13 + (ulong)uVar8 * 0x20;
          iVar2 = *(int *)(lVar13 + 4);
          *(short *)((long)piVar3 + 10) = *(short *)((long)piVar3 + 10) + 1;
          *piVar3 = iVar2;
          if (piVar3[1] != iVar2) {
            FUN_03260ed0(param_1,(ulong)uVar7);
          }
          if (-1 < *(int *)(param_1 + 0xe0)) {
            iVar4 = *(int *)(param_1 + 0xe0) >> 5;
            iVar2 = iVar4 + 1;
            lVar14 = *(long *)(param_1 + 0xd0);
            lVar17 = lVar14 + (long)(int)(iVar2 * (uint)uVar8) * 4;
            lVar12 = 0;
            do {
              lVar15 = lVar12 * 4;
              *(uint *)(lVar17 + lVar15) =
                   *(uint *)(lVar17 + lVar15) ^
                   *(uint *)(lVar14 + (long)(int)(iVar2 * (uint)uVar7) * 4 + lVar15);
              bVar1 = lVar12 < iVar4;
              lVar12 = lVar12 + 1;
            } while (bVar1);
          }
          psVar20 = (short *)(lVar13 + 8);
          if (*psVar20 == -1) {
            *psVar20 = (short)piVar3[2];
          }
          puVar11 = *(ushort **)(param_1 + 0xb8);
          if (lVar19 == lVar21) break;
          lVar13 = *(long *)(param_1 + 0x100);
        }
      }
      lVar17 = lVar10 + 1;
      puVar11[lVar10] = puVar11[lVar21];
      if (iVar5 <= (int)uVar16) goto LAB_03266c8c;
      puVar11 = *(ushort **)(param_1 + 0xb8);
      lVar13 = *(long *)(param_1 + 0x100);
      lVar10 = lVar17;
    } while( true );
  }
  lVar17 = 0;
  if (iVar5 == 0) {
    return;
  }
LAB_03266c98:
  *(int *)(param_1 + 0xc0) = (int)lVar17;
  return;
LAB_03266c8c:
  if (*(int *)(param_1 + 0xc0) == (int)lVar17) {
    return;
  }
  goto LAB_03266c98;
}


