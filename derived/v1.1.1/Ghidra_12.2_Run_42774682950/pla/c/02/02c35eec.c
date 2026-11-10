/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c35eec; name: FUN_02c35eec
 */


void FUN_02c35eec(long param_1,uint param_2,long param_3,long *param_4,int param_5)

{
  uint uVar1;
  long *plVar2;
  ushort uVar3;
  ushort *puVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  
  lVar10 = *(long *)(param_3 + 0xb0);
  if (lVar10 != 0) {
    plVar8 = *(long **)(lVar10 + 0x270);
    if (plVar8 != *(long **)(lVar10 + 0x278)) {
      iVar9 = 0;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar8 != 0) {
          plVar2 = (long *)(*plVar8 + 0x58);
        }
        if (*plVar2 == *param_4) goto LAB_02c35f68;
        plVar8 = plVar8 + 1;
        iVar9 = iVar9 + 1;
      } while (*(long **)(lVar10 + 0x278) != plVar8);
    }
  }
  iVar9 = 0;
LAB_02c35f68:
  uVar7 = FUN_02c2e33c(param_3,iVar9,*(undefined8 *)(param_1 + 0x68));
  if (param_2 < *(uint *)(param_1 + 0x90)) {
    lVar13 = *(long *)(param_1 + 0x68);
    lVar10 = ((ulong)param_2 + (ulong)param_2 * 2) * 8;
    *(ulong *)(*(long *)(param_1 + 0x98) + lVar10 + 8) =
         (ulong)(uint)(param_5 << 0x12) & 0x1c0000 | uVar7 & 0xffff | 0x20000;
    lVar11 = *(long *)(param_1 + 0x98);
    lVar10 = *(long *)(lVar11 + lVar10);
    if (*(char *)(lVar10 + 0x7c) != '\0') {
      uVar12 = (uint)*(ushort *)(lVar10 + 0x78);
      if (*(ushort *)(lVar10 + 0x78) == 0) {
        iVar9 = 0;
      }
      else {
        puVar15 = *(ushort **)(lVar13 + 0x58);
        iVar9 = 0;
        puVar14 = *(ushort **)(lVar10 + 0x58);
        do {
          while( true ) {
            uVar3 = *puVar15;
            *puVar14 = uVar3;
            if (uVar3 == 0x10) break;
            if (uVar3 == 0) goto LAB_02c360ec;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
            iVar9 = iVar9 + 1;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_02c360d8;
          }
          uVar3 = puVar15[1];
          uVar1 = uVar3 + 2;
          bVar5 = uVar12 < uVar1;
          uVar12 = uVar12 - uVar1;
          if (bVar5 || uVar12 == 0) {
            *puVar14 = 0;
            goto LAB_02c360ec;
          }
          uVar17 = uVar3 + 1;
          uVar6 = uVar17 & 7;
          puVar18 = puVar14 + 1;
          *puVar18 = uVar3;
          puVar4 = puVar15 + 1;
          puVar16 = puVar15;
          if (uVar6 != 0) {
            lVar11 = 0;
            do {
              lVar13 = lVar11;
              uVar17 = uVar17 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar14 + lVar13 + 4) =
                   *(undefined2 *)((long)puVar15 + lVar13 + 4);
              lVar11 = lVar13 + 2;
            } while (uVar6 != 0);
            puVar18 = (ushort *)((long)puVar14 + lVar13 + 4);
            puVar16 = (ushort *)((long)puVar15 + lVar13 + 2);
            puVar4 = puVar16 + 1;
            puVar14 = puVar18;
          }
          puVar15 = puVar4;
          if (6 < uVar3) {
            puVar14 = puVar18;
            do {
              puVar14[1] = puVar16[2];
              puVar14[2] = puVar15[2];
              puVar14[3] = puVar15[3];
              puVar14[4] = puVar15[4];
              puVar14[5] = puVar15[5];
              puVar14[6] = puVar15[6];
              puVar16 = puVar15 + 7;
              puVar14[7] = *puVar16;
              puVar15 = puVar15 + 8;
              uVar17 = uVar17 - 8;
              puVar14 = puVar14 + 8;
              *puVar14 = *puVar15;
            } while (uVar17 != 0);
          }
          iVar9 = uVar1 + iVar9;
        } while (uVar12 != 0);
LAB_02c360d8:
        if (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          puVar14[-1] = 0;
        }
      }
LAB_02c360ec:
      *(short *)(lVar10 + 0x7a) = (short)iVar9;
      lVar11 = *(long *)(param_1 + 0x98);
    }
    lVar10 = (ulong)param_2 * 0x18;
    *(undefined2 *)(lVar11 + lVar10 + 0x10) = 0;
    lVar10 = *(long *)(param_1 + 0x98) + lVar10;
    *(ushort *)(lVar10 + 0x12) = *(ushort *)(lVar10 + 0x12) & 0xfffe;
  }
  return;
}


