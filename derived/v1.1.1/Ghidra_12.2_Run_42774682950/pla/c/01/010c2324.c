/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c2324; name: FUN_010c2324
 */


void FUN_010c2324(long param_1)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  bool bVar5;
  uint uVar6;
  ushort *puVar7;
  long lVar8;
  ushort *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ushort *puVar13;
  uint uVar14;
  ulong uVar15;
  ushort *puVar16;
  ushort *puVar17;
  uint uVar18;
  long lVar19;
  
  lVar11 = *(long *)(param_1 + 0x1a0);
  lVar2 = *(long *)(param_1 + 0x1a8);
  puVar7 = *(ushort **)(lVar2 + 0x58);
  lVar8 = *(long *)(lVar11 + 0x58);
  if (*(char *)(lVar2 + 0x7c) != '\0') {
    uVar14 = (uint)*(ushort *)(lVar2 + 0x78);
    if (*(ushort *)(lVar2 + 0x78) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = 0;
      puVar16 = puVar7;
      puVar9 = puVar7;
      do {
        while( true ) {
          uVar3 = *puVar9;
          *puVar16 = uVar3;
          if (uVar3 == 0x10) break;
          if (uVar3 == 0) goto LAB_010c2454;
          puVar16 = puVar16 + 1;
          puVar9 = puVar9 + 1;
          iVar10 = iVar10 + 1;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_010c2788;
        }
        uVar3 = puVar9[1];
        uVar1 = uVar3 + 2;
        bVar5 = uVar14 < uVar1;
        uVar14 = uVar14 - uVar1;
        if (bVar5 || uVar14 == 0) {
          *puVar16 = 0;
          goto LAB_010c2454;
        }
        uVar18 = uVar3 + 1;
        uVar6 = uVar18 & 7;
        puVar13 = puVar16 + 1;
        *puVar13 = uVar3;
        puVar4 = puVar9 + 1;
        puVar17 = puVar9;
        if (uVar6 != 0) {
          lVar11 = 0;
          do {
            lVar19 = lVar11;
            uVar18 = uVar18 - 1;
            uVar6 = uVar6 - 1;
            *(undefined2 *)((long)puVar16 + lVar19 + 4) = *(undefined2 *)((long)puVar9 + lVar19 + 4)
            ;
            lVar11 = lVar19 + 2;
          } while (uVar6 != 0);
          puVar13 = (ushort *)((long)puVar16 + lVar19 + 4);
          puVar17 = (ushort *)((long)puVar9 + lVar19 + 2);
          puVar4 = puVar17 + 1;
          puVar16 = puVar13;
        }
        puVar9 = puVar4;
        if (6 < uVar3) {
          puVar16 = puVar13;
          do {
            puVar16[1] = puVar17[2];
            puVar16[2] = puVar9[2];
            puVar16[3] = puVar9[3];
            puVar16[4] = puVar9[4];
            puVar16[5] = puVar9[5];
            puVar16[6] = puVar9[6];
            puVar17 = puVar9 + 7;
            puVar16[7] = *puVar17;
            puVar9 = puVar9 + 8;
            uVar18 = uVar18 - 8;
            puVar16 = puVar16 + 8;
            *puVar16 = *puVar9;
          } while (uVar18 != 0);
        }
        iVar10 = uVar1 + iVar10;
      } while (uVar14 != 0);
LAB_010c2788:
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        puVar16[-1] = 0;
      }
    }
LAB_010c2454:
    *(short *)(lVar2 + 0x7a) = (short)iVar10;
    lVar11 = *(long *)(param_1 + 0x1a0);
  }
  if (*(char *)(lVar11 + 0x7c) != '\0') {
    uVar14 = (uint)*(ushort *)(lVar11 + 0x78);
    if (*(ushort *)(lVar11 + 0x78) == 0) {
      iVar10 = 0;
    }
    else {
      puVar16 = *(ushort **)(lVar11 + 0x58);
      iVar10 = 0;
      puVar9 = puVar16;
      do {
        while( true ) {
          uVar3 = *puVar9;
          *puVar16 = uVar3;
          if (uVar3 == 0x10) break;
          if (uVar3 == 0) goto LAB_010c2580;
          puVar16 = puVar16 + 1;
          puVar9 = puVar9 + 1;
          iVar10 = iVar10 + 1;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_010c2798;
        }
        uVar3 = puVar9[1];
        uVar1 = uVar3 + 2;
        bVar5 = uVar14 < uVar1;
        uVar14 = uVar14 - uVar1;
        if (bVar5 || uVar14 == 0) {
          *puVar16 = 0;
          goto LAB_010c2580;
        }
        uVar18 = uVar3 + 1;
        uVar6 = uVar18 & 7;
        puVar13 = puVar16 + 1;
        *puVar13 = uVar3;
        puVar4 = puVar9 + 1;
        puVar17 = puVar9;
        if (uVar6 != 0) {
          lVar2 = 0;
          do {
            lVar19 = lVar2;
            uVar18 = uVar18 - 1;
            uVar6 = uVar6 - 1;
            *(undefined2 *)((long)puVar16 + lVar19 + 4) = *(undefined2 *)((long)puVar9 + lVar19 + 4)
            ;
            lVar2 = lVar19 + 2;
          } while (uVar6 != 0);
          puVar13 = (ushort *)((long)puVar16 + lVar19 + 4);
          puVar17 = (ushort *)((long)puVar9 + lVar19 + 2);
          puVar4 = puVar17 + 1;
          puVar16 = puVar13;
        }
        puVar9 = puVar4;
        if (6 < uVar3) {
          puVar16 = puVar13;
          do {
            puVar16[1] = puVar17[2];
            puVar16[2] = puVar9[2];
            puVar16[3] = puVar9[3];
            puVar16[4] = puVar9[4];
            puVar16[5] = puVar9[5];
            puVar16[6] = puVar9[6];
            puVar17 = puVar9 + 7;
            puVar16[7] = *puVar17;
            puVar9 = puVar9 + 8;
            uVar18 = uVar18 - 8;
            puVar16 = puVar16 + 8;
            *puVar16 = *puVar9;
          } while (uVar18 != 0);
        }
        iVar10 = uVar1 + iVar10;
      } while (uVar14 != 0);
LAB_010c2798:
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        puVar16[-1] = 0;
      }
    }
LAB_010c2580:
    *(short *)(lVar11 + 0x7a) = (short)iVar10;
    lVar11 = *(long *)(param_1 + 0x1a0);
  }
  puVar16 = (ushort *)(lVar8 + (ulong)*(ushort *)(lVar11 + 0x7a) * 2);
  uVar3 = *(ushort *)(*(long *)(param_1 + 0x1a8) + 0x7a);
  uVar15 = (ulong)uVar3;
  if (uVar15 != 0) {
    uVar12 = uVar15 & 3;
    if (uVar15 - 1 < 3) {
      lVar11 = 0;
    }
    else {
      lVar11 = 0;
      puVar9 = puVar7 + 2;
      do {
        *puVar16 = puVar9[-2];
        puVar16[1] = puVar9[-1];
        puVar16[2] = *puVar9;
        puVar13 = puVar9 + 1;
        lVar11 = lVar11 + -4;
        puVar9 = puVar9 + 4;
        puVar16[3] = *puVar13;
        puVar16 = puVar16 + 4;
      } while (uVar12 - uVar15 != lVar11);
      lVar11 = -lVar11;
    }
    if ((uVar3 & 3) != 0) {
      puVar9 = puVar16;
      puVar13 = puVar7 + lVar11;
      do {
        uVar12 = uVar12 - 1;
        puVar16 = puVar9 + 1;
        *puVar9 = *puVar13;
        puVar9 = puVar16;
        puVar13 = puVar13 + 1;
      } while (uVar12 != 0);
    }
  }
  *puVar16 = 0;
  puVar7[0x78] = 0;
  puVar7[0x79] = 0;
  puVar7[0x7a] = 0;
  puVar7[0x7b] = 0;
  puVar7[0x7c] = 0;
  puVar7[0x7d] = 0;
  puVar7[0x7e] = 0;
  puVar7[0x7f] = 0;
  puVar7[0x70] = 0;
  puVar7[0x71] = 0;
  puVar7[0x72] = 0;
  puVar7[0x73] = 0;
  puVar7[0x74] = 0;
  puVar7[0x75] = 0;
  puVar7[0x76] = 0;
  puVar7[0x77] = 0;
  puVar7[0x68] = 0;
  puVar7[0x69] = 0;
  puVar7[0x6a] = 0;
  puVar7[0x6b] = 0;
  puVar7[0x6c] = 0;
  puVar7[0x6d] = 0;
  puVar7[0x6e] = 0;
  puVar7[0x6f] = 0;
  puVar7[0x60] = 0;
  puVar7[0x61] = 0;
  puVar7[0x62] = 0;
  puVar7[99] = 0;
  puVar7[100] = 0;
  puVar7[0x65] = 0;
  puVar7[0x66] = 0;
  puVar7[0x67] = 0;
  puVar7[0x58] = 0;
  puVar7[0x59] = 0;
  puVar7[0x5a] = 0;
  puVar7[0x5b] = 0;
  puVar7[0x5c] = 0;
  puVar7[0x5d] = 0;
  puVar7[0x5e] = 0;
  puVar7[0x5f] = 0;
  puVar7[0x50] = 0;
  puVar7[0x51] = 0;
  puVar7[0x52] = 0;
  puVar7[0x53] = 0;
  puVar7[0x54] = 0;
  puVar7[0x55] = 0;
  puVar7[0x56] = 0;
  puVar7[0x57] = 0;
  puVar7[0x48] = 0;
  puVar7[0x49] = 0;
  puVar7[0x4a] = 0;
  puVar7[0x4b] = 0;
  puVar7[0x4c] = 0;
  puVar7[0x4d] = 0;
  puVar7[0x4e] = 0;
  puVar7[0x4f] = 0;
  puVar7[0x40] = 0;
  puVar7[0x41] = 0;
  puVar7[0x42] = 0;
  puVar7[0x43] = 0;
  puVar7[0x44] = 0;
  puVar7[0x45] = 0;
  puVar7[0x46] = 0;
  puVar7[0x47] = 0;
  puVar7[0x38] = 0;
  puVar7[0x39] = 0;
  puVar7[0x3a] = 0;
  puVar7[0x3b] = 0;
  puVar7[0x3c] = 0;
  puVar7[0x3d] = 0;
  puVar7[0x3e] = 0;
  puVar7[0x3f] = 0;
  puVar7[0x30] = 0;
  puVar7[0x31] = 0;
  puVar7[0x32] = 0;
  puVar7[0x33] = 0;
  puVar7[0x34] = 0;
  puVar7[0x35] = 0;
  puVar7[0x36] = 0;
  puVar7[0x37] = 0;
  puVar7[0x28] = 0;
  puVar7[0x29] = 0;
  puVar7[0x2a] = 0;
  puVar7[0x2b] = 0;
  puVar7[0x2c] = 0;
  puVar7[0x2d] = 0;
  puVar7[0x2e] = 0;
  puVar7[0x2f] = 0;
  puVar7[0x20] = 0;
  puVar7[0x21] = 0;
  puVar7[0x22] = 0;
  puVar7[0x23] = 0;
  puVar7[0x24] = 0;
  puVar7[0x25] = 0;
  puVar7[0x26] = 0;
  puVar7[0x27] = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0] = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  lVar11 = *(long *)(param_1 + 0x1a0);
  if (*(char *)(lVar11 + 0x7c) != '\0') {
    uVar14 = (uint)*(ushort *)(lVar11 + 0x78);
    if (*(ushort *)(lVar11 + 0x78) == 0) {
      iVar10 = 0;
    }
    else {
      puVar7 = *(ushort **)(lVar11 + 0x58);
      iVar10 = 0;
      puVar16 = puVar7;
      do {
        while( true ) {
          uVar3 = *puVar16;
          *puVar7 = uVar3;
          if (uVar3 == 0x10) break;
          if (uVar3 == 0) goto LAB_010c2780;
          puVar7 = puVar7 + 1;
          puVar16 = puVar16 + 1;
          iVar10 = iVar10 + 1;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_010c27a8;
        }
        uVar3 = puVar16[1];
        uVar1 = uVar3 + 2;
        bVar5 = uVar14 < uVar1;
        uVar14 = uVar14 - uVar1;
        if (bVar5 || uVar14 == 0) {
          *puVar7 = 0;
          goto LAB_010c2780;
        }
        uVar18 = uVar3 + 1;
        uVar6 = uVar18 & 7;
        puVar9 = puVar7 + 1;
        *puVar9 = uVar3;
        puVar17 = puVar16 + 1;
        puVar13 = puVar16;
        if (uVar6 != 0) {
          lVar2 = 0;
          do {
            lVar8 = lVar2;
            uVar18 = uVar18 - 1;
            uVar6 = uVar6 - 1;
            *(undefined2 *)((long)puVar7 + lVar8 + 4) = *(undefined2 *)((long)puVar16 + lVar8 + 4);
            lVar2 = lVar8 + 2;
          } while (uVar6 != 0);
          puVar9 = (ushort *)((long)puVar7 + lVar8 + 4);
          puVar13 = (ushort *)((long)puVar16 + lVar8 + 2);
          puVar17 = puVar13 + 1;
          puVar7 = puVar9;
        }
        puVar16 = puVar17;
        if (6 < uVar3) {
          puVar7 = puVar9;
          do {
            puVar7[1] = puVar13[2];
            puVar7[2] = puVar16[2];
            puVar7[3] = puVar16[3];
            puVar7[4] = puVar16[4];
            puVar7[5] = puVar16[5];
            puVar7[6] = puVar16[6];
            puVar13 = puVar16 + 7;
            puVar7[7] = *puVar13;
            puVar16 = puVar16 + 8;
            uVar18 = uVar18 - 8;
            puVar7 = puVar7 + 8;
            *puVar7 = *puVar16;
          } while (uVar18 != 0);
        }
        iVar10 = uVar1 + iVar10;
      } while (uVar14 != 0);
LAB_010c27a8:
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        puVar7[-1] = 0;
      }
    }
LAB_010c2780:
    *(short *)(lVar11 + 0x7a) = (short)iVar10;
  }
  return;
}


