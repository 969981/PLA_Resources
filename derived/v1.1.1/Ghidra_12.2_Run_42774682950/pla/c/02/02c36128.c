/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c36128; name: FUN_02c36128
 */


void FUN_02c36128(long param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  
  if (param_2 < *(uint *)(param_1 + 0x90)) {
    lVar9 = ((ulong)param_2 + (ulong)param_2 * 2) * 8;
    *(ulong *)(*(long *)(param_1 + 0x98) + lVar9 + 8) =
         (ulong)(uint)(param_5 << 0x12) & 0x1c0000 | (ulong)(param_4 & 3);
    lVar7 = *(long *)(param_1 + 0x98);
    lVar9 = *(long *)(lVar7 + lVar9);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      uVar8 = (uint)*(ushort *)(lVar9 + 0x78);
      if (*(ushort *)(lVar9 + 0x78) == 0) {
        iVar6 = 0;
      }
      else {
        puVar11 = *(ushort **)(param_3 + 0x58);
        iVar6 = 0;
        puVar10 = *(ushort **)(lVar9 + 0x58);
        do {
          while( true ) {
            uVar2 = *puVar11;
            *puVar10 = uVar2;
            if (uVar2 == 0x10) break;
            if (uVar2 == 0) goto LAB_02c362a0;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
            iVar6 = iVar6 + 1;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_02c3628c;
          }
          uVar2 = puVar11[1];
          uVar1 = uVar2 + 2;
          bVar4 = uVar8 < uVar1;
          uVar8 = uVar8 - uVar1;
          if (bVar4 || uVar8 == 0) {
            *puVar10 = 0;
            goto LAB_02c362a0;
          }
          uVar13 = uVar2 + 1;
          uVar5 = uVar13 & 7;
          puVar15 = puVar10 + 1;
          *puVar15 = uVar2;
          puVar3 = puVar11 + 1;
          puVar12 = puVar11;
          if (uVar5 != 0) {
            lVar7 = 0;
            do {
              lVar14 = lVar7;
              uVar13 = uVar13 - 1;
              uVar5 = uVar5 - 1;
              *(undefined2 *)((long)puVar10 + lVar14 + 4) =
                   *(undefined2 *)((long)puVar11 + lVar14 + 4);
              lVar7 = lVar14 + 2;
            } while (uVar5 != 0);
            puVar15 = (ushort *)((long)puVar10 + lVar14 + 4);
            puVar12 = (ushort *)((long)puVar11 + lVar14 + 2);
            puVar3 = puVar12 + 1;
            puVar10 = puVar15;
          }
          puVar11 = puVar3;
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
          iVar6 = uVar1 + iVar6;
        } while (uVar8 != 0);
LAB_02c3628c:
        if (iVar6 != 0) {
          iVar6 = iVar6 + -1;
          puVar10[-1] = 0;
        }
      }
LAB_02c362a0:
      *(short *)(lVar9 + 0x7a) = (short)iVar6;
      lVar7 = *(long *)(param_1 + 0x98);
    }
    lVar9 = (ulong)param_2 * 0x18;
    *(undefined2 *)(lVar7 + lVar9 + 0x10) = 0;
    lVar9 = *(long *)(param_1 + 0x98) + lVar9;
    *(ushort *)(lVar9 + 0x12) = *(ushort *)(lVar9 + 0x12) & 0xfffe;
  }
  return;
}


