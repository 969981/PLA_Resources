/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280a488; name: FUN_0280a488
 */


void FUN_0280a488(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  uint uVar15;
  
  lVar6 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x470);
  if (*(char *)(lVar6 + 0x7c) != '\0') {
    uVar8 = (uint)*(ushort *)(lVar6 + 0x78);
    if (*(ushort *)(lVar6 + 0x78) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      puVar10 = *(ushort **)(*param_3 + 0x58);
      puVar9 = *(ushort **)(lVar6 + 0x58);
      do {
        while( true ) {
          uVar2 = *puVar10;
          *puVar9 = uVar2;
          if (uVar2 == 0x10) break;
          if (uVar2 == 0) goto LAB_0280a5b8;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
          iVar7 = iVar7 + 1;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_0280a5c0;
        }
        uVar2 = puVar10[1];
        uVar1 = uVar2 + 2;
        bVar5 = uVar8 < uVar1;
        uVar8 = uVar8 - uVar1;
        if (bVar5 || uVar8 == 0) {
          *puVar9 = 0;
          goto LAB_0280a5b8;
        }
        uVar12 = uVar2 + 1;
        uVar15 = uVar12 & 7;
        puVar14 = puVar9 + 1;
        *puVar14 = uVar2;
        puVar4 = puVar10 + 1;
        puVar11 = puVar10;
        if (uVar15 != 0) {
          lVar3 = 0;
          do {
            lVar13 = lVar3;
            uVar12 = uVar12 - 1;
            uVar15 = uVar15 - 1;
            *(undefined2 *)((long)puVar9 + lVar13 + 4) = *(undefined2 *)((long)puVar10 + lVar13 + 4)
            ;
            lVar3 = lVar13 + 2;
          } while (uVar15 != 0);
          puVar14 = (ushort *)((long)puVar9 + lVar13 + 4);
          puVar11 = (ushort *)((long)puVar10 + lVar13 + 2);
          puVar4 = puVar11 + 1;
          puVar9 = puVar14;
        }
        puVar10 = puVar4;
        if (6 < uVar2) {
          puVar9 = puVar14;
          do {
            puVar9[1] = puVar11[2];
            puVar9[2] = puVar10[2];
            puVar9[3] = puVar10[3];
            puVar9[4] = puVar10[4];
            puVar9[5] = puVar10[5];
            puVar9[6] = puVar10[6];
            puVar11 = puVar10 + 7;
            puVar9[7] = *puVar11;
            puVar10 = puVar10 + 8;
            uVar12 = uVar12 - 8;
            puVar9 = puVar9 + 8;
            *puVar9 = *puVar10;
          } while (uVar12 != 0);
        }
        iVar7 = uVar1 + iVar7;
      } while (uVar8 != 0);
LAB_0280a5c0:
      if (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        puVar9[-1] = 0;
      }
    }
LAB_0280a5b8:
    *(short *)(lVar6 + 0x7a) = (short)iVar7;
  }
  return;
}


