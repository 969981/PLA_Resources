/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2d7bc; name: FUN_02c2d7bc
 */


void FUN_02c2d7bc(long *param_1,long param_2,short param_3,short param_4)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  uint uVar16;
  
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x7c) != '\0') {
    **(undefined2 **)(lVar6 + 0x58) = 0;
    *(undefined2 *)(lVar6 + 0x7a) = 0;
    lVar6 = *param_1;
    if (*(char *)(lVar6 + 0x7c) != '\0') {
      uVar2 = *(ushort *)(lVar6 + 0x7a);
      uVar8 = (ulong)uVar2;
      if (uVar2 + 1 < (uint)*(ushort *)(lVar6 + 0x78)) {
        *(ushort *)(lVar6 + 0x7a) = uVar2 + 1;
        *(short *)(*(long *)(lVar6 + 0x58) + uVar8 * 2) = param_3 + 0x11;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x7a);
      }
      else {
        if (((short)(param_3 + 0x11) != 0) || (uVar2 + 1 != (uint)*(ushort *)(lVar6 + 0x78)))
        goto LAB_02c2d830;
        *(ushort *)(lVar6 + 0x7a) = uVar2 + 1;
      }
      *(undefined2 *)(*(long *)(lVar6 + 0x58) + uVar8 * 2) = 0;
    }
  }
LAB_02c2d830:
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x7c) != '\0') {
    uVar9 = (uint)*(ushort *)(lVar6 + 0x78) - (uint)*(ushort *)(lVar6 + 0x7a);
    if (uVar9 == 0) {
      iVar7 = 0;
    }
    else {
      puVar10 = (ushort *)(*(long *)(lVar6 + 0x58) + (ulong)*(ushort *)(lVar6 + 0x7a) * 2);
      puVar11 = *(ushort **)(param_2 + 0x58);
      iVar7 = 0;
      do {
        while( true ) {
          uVar2 = *puVar11;
          *puVar10 = uVar2;
          if (uVar2 == 0x10) break;
          if (uVar2 == 0) goto LAB_02c2d97c;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
          iVar7 = iVar7 + 1;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_02c2d968;
        }
        uVar2 = puVar11[1];
        uVar1 = uVar2 + 2;
        bVar5 = uVar9 < uVar1;
        uVar9 = uVar9 - uVar1;
        if (bVar5 || uVar9 == 0) {
          *puVar10 = 0;
          goto LAB_02c2d97c;
        }
        uVar13 = uVar2 + 1;
        uVar16 = uVar13 & 7;
        puVar15 = puVar10 + 1;
        *puVar15 = uVar2;
        puVar4 = puVar11 + 1;
        puVar12 = puVar11;
        if (uVar16 != 0) {
          lVar3 = 0;
          do {
            lVar14 = lVar3;
            uVar13 = uVar13 - 1;
            uVar16 = uVar16 - 1;
            *(undefined2 *)((long)puVar10 + lVar14 + 4) =
                 *(undefined2 *)((long)puVar11 + lVar14 + 4);
            lVar3 = lVar14 + 2;
          } while (uVar16 != 0);
          puVar15 = (ushort *)((long)puVar10 + lVar14 + 4);
          puVar12 = (ushort *)((long)puVar11 + lVar14 + 2);
          puVar4 = puVar12 + 1;
          puVar10 = puVar15;
        }
        puVar11 = puVar4;
        if (6 < uVar2) {
          puVar10 = puVar15;
          do {
            puVar10[1] = puVar12[2];
            puVar10[2] = puVar11[2];
            puVar10[3] = puVar11[3];
            puVar10[4] = puVar11[4];
            puVar10[5] = puVar11[5];
            puVar10[6] = puVar11[6];
            puVar12 = puVar11 + 7;
            puVar10[7] = *puVar12;
            puVar11 = puVar11 + 8;
            uVar13 = uVar13 - 8;
            puVar10 = puVar10 + 8;
            *puVar10 = *puVar11;
          } while (uVar13 != 0);
        }
        iVar7 = uVar1 + iVar7;
      } while (uVar9 != 0);
LAB_02c2d968:
      if (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        puVar10[-1] = 0;
      }
    }
LAB_02c2d97c:
    *(short *)(lVar6 + 0x7a) = *(short *)(lVar6 + 0x7a) + (short)iVar7;
    lVar6 = *param_1;
    if (*(char *)(lVar6 + 0x7c) != '\0') {
      uVar2 = *(ushort *)(lVar6 + 0x7a);
      uVar8 = (ulong)uVar2;
      if (uVar2 + 1 < (uint)*(ushort *)(lVar6 + 0x78)) {
        *(ushort *)(lVar6 + 0x7a) = uVar2 + 1;
        *(short *)(*(long *)(lVar6 + 0x58) + uVar8 * 2) = param_4 + 0x11;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x7a);
      }
      else {
        if ((short)(param_4 + 0x11) != 0) {
          return;
        }
        if (uVar2 + 1 != (uint)*(ushort *)(lVar6 + 0x78)) {
          return;
        }
        *(ushort *)(lVar6 + 0x7a) = uVar2 + 1;
      }
      *(undefined2 *)(*(long *)(lVar6 + 0x58) + uVar8 * 2) = 0;
    }
  }
  return;
}


