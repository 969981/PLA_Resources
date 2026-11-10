/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c36a60; name: FUN_02c36a60
 */


void FUN_02c36a60(long *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  uint uVar15;
  ushort *puVar16;
  
  uVar6 = (**(code **)(*param_1 + 0x50))(param_1,param_1[0xd]);
  if (param_2 < *(uint *)(param_1 + 0x12)) {
    lVar10 = ((ulong)param_2 + (ulong)param_2 * 2) * 8;
    lVar11 = param_1[0xd];
    *(ulong *)(param_1[0x13] + lVar10 + 8) = uVar6 & 0xffff | 0x20000;
    lVar8 = param_1[0x13];
    lVar10 = *(long *)(lVar8 + lVar10);
    if (*(char *)(lVar10 + 0x7c) != '\0') {
      uVar9 = (uint)*(ushort *)(lVar10 + 0x78);
      if (*(ushort *)(lVar10 + 0x78) == 0) {
        iVar7 = 0;
      }
      else {
        puVar13 = *(ushort **)(lVar11 + 0x58);
        iVar7 = 0;
        puVar12 = *(ushort **)(lVar10 + 0x58);
        do {
          while( true ) {
            uVar2 = *puVar13;
            *puVar12 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c36bf8;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
            iVar7 = iVar7 + 1;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_02c36be4;
          }
          uVar2 = puVar13[1];
          uVar1 = uVar2 + 2;
          bVar4 = uVar9 < uVar1;
          uVar9 = uVar9 - uVar1;
          if (bVar4 || uVar9 == 0) {
            *puVar12 = 0;
            goto LAB_02c36bf8;
          }
          uVar15 = uVar2 + 1;
          uVar5 = uVar15 & 7;
          puVar16 = puVar12 + 1;
          *puVar16 = uVar2;
          puVar3 = puVar13 + 1;
          puVar14 = puVar13;
          if (uVar5 != 0) {
            lVar8 = 0;
            do {
              lVar11 = lVar8;
              uVar15 = uVar15 - 1;
              uVar5 = uVar5 - 1;
              *(undefined2 *)((long)puVar12 + lVar11 + 4) =
                   *(undefined2 *)((long)puVar13 + lVar11 + 4);
              lVar8 = lVar11 + 2;
            } while (uVar5 != 0);
            puVar16 = (ushort *)((long)puVar12 + lVar11 + 4);
            puVar14 = (ushort *)((long)puVar13 + lVar11 + 2);
            puVar3 = puVar14 + 1;
            puVar12 = puVar16;
          }
          puVar13 = puVar3;
          if (6 < uVar2) {
            puVar12 = puVar16;
            do {
              puVar12[1] = puVar14[2];
              puVar12[2] = puVar13[2];
              puVar12[3] = puVar13[3];
              puVar12[4] = puVar13[4];
              puVar12[5] = puVar13[5];
              puVar12[6] = puVar13[6];
              puVar14 = puVar13 + 7;
              puVar12[7] = *puVar14;
              puVar13 = puVar13 + 8;
              uVar15 = uVar15 - 8;
              puVar12 = puVar12 + 8;
              *puVar12 = *puVar13;
            } while (uVar15 != 0);
          }
          iVar7 = uVar1 + iVar7;
        } while (uVar9 != 0);
LAB_02c36be4:
        if (iVar7 != 0) {
          iVar7 = iVar7 + -1;
          puVar12[-1] = 0;
        }
      }
LAB_02c36bf8:
      *(short *)(lVar10 + 0x7a) = (short)iVar7;
      lVar8 = param_1[0x13];
    }
    lVar10 = (ulong)param_2 * 0x18;
    *(undefined2 *)(lVar8 + lVar10 + 0x10) = 0;
    lVar10 = param_1[0x13] + lVar10;
    *(ushort *)(lVar10 + 0x12) = *(ushort *)(lVar10 + 0x12) & 0xfffe;
  }
  return;
}


