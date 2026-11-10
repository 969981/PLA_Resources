/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01123a70; name: FUN_01123a70
 */


void FUN_01123a70(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  uint uVar14;
  
  if (*(char *)(param_2 + 0x7c) != '\0') {
    uVar7 = (uint)*(ushort *)(param_2 + 0x78);
    if (*(ushort *)(param_2 + 0x78) == 0) {
      iVar6 = 0;
    }
    else {
      puVar8 = *(ushort **)(param_2 + 0x58);
      iVar6 = 0;
      puVar9 = (ushort *)(param_1 + 0x88);
      do {
        while( true ) {
          uVar2 = *puVar9;
          *puVar8 = uVar2;
          if (uVar2 == 0x10) break;
          if (uVar2 == 0) goto LAB_01123b94;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
          iVar6 = iVar6 + 1;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_01123b9c;
        }
        uVar2 = puVar9[1];
        uVar1 = uVar2 + 2;
        bVar5 = uVar7 < uVar1;
        uVar7 = uVar7 - uVar1;
        if (bVar5 || uVar7 == 0) {
          *puVar8 = 0;
          goto LAB_01123b94;
        }
        uVar11 = uVar2 + 1;
        uVar14 = uVar11 & 7;
        puVar13 = puVar8 + 1;
        *puVar13 = uVar2;
        puVar4 = puVar9 + 1;
        puVar10 = puVar9;
        if (uVar14 != 0) {
          lVar3 = 0;
          do {
            lVar12 = lVar3;
            uVar11 = uVar11 - 1;
            uVar14 = uVar14 - 1;
            *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar9 + lVar12 + 4);
            lVar3 = lVar12 + 2;
          } while (uVar14 != 0);
          puVar13 = (ushort *)((long)puVar8 + lVar12 + 4);
          puVar10 = (ushort *)((long)puVar9 + lVar12 + 2);
          puVar4 = puVar10 + 1;
          puVar8 = puVar13;
        }
        puVar9 = puVar4;
        if (6 < uVar2) {
          puVar8 = puVar13;
          do {
            puVar8[1] = puVar10[2];
            puVar8[2] = puVar9[2];
            puVar8[3] = puVar9[3];
            puVar8[4] = puVar9[4];
            puVar8[5] = puVar9[5];
            puVar8[6] = puVar9[6];
            puVar10 = puVar9 + 7;
            puVar8[7] = *puVar10;
            puVar9 = puVar9 + 8;
            uVar11 = uVar11 - 8;
            puVar8 = puVar8 + 8;
            *puVar8 = *puVar9;
          } while (uVar11 != 0);
        }
        iVar6 = uVar1 + iVar6;
      } while (uVar7 != 0);
LAB_01123b9c:
      if (iVar6 != 0) {
        iVar6 = iVar6 + -1;
        puVar8[-1] = 0;
      }
    }
LAB_01123b94:
    *(short *)(param_2 + 0x7a) = (short)iVar6;
  }
  return;
}


