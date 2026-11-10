/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c395d0; name: FUN_02c395d0
 */


void FUN_02c395d0(long param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  ulong uVar2;
  ushort uVar3;
  ushort *puVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  
  FUN_02c307d0(*(undefined8 *)(param_1 + 0x68),param_3,param_4,param_5,param_6);
  plVar7 = (long *)FUN_00d1603c();
  lVar8 = *plVar7;
  *(long *)PTR_DAT_0437b198 = lVar8;
  if (param_2 < *(uint *)(param_1 + 0x90)) {
    uVar2 = 0x220000;
    if (param_3 != 0) {
      uVar2 = 0x20000;
    }
    lVar12 = ((ulong)param_2 + (ulong)param_2 * 2) * 8;
    lVar13 = *(long *)(param_1 + 0x68);
    *(ulong *)(*(long *)(param_1 + 0x98) + lVar12 + 8) =
         uVar2 & 0xfffffffffff80000 |
         uVar2 & 0x7ffff | (ulong)((*(int *)(lVar8 + 0x238) == 3 | param_3) != 1) << 0x12;
    lVar10 = *(long *)(param_1 + 0x98);
    lVar8 = *(long *)(lVar10 + lVar12);
    if (*(char *)(lVar8 + 0x7c) != '\0') {
      uVar11 = (uint)*(ushort *)(lVar8 + 0x78);
      if (*(ushort *)(lVar8 + 0x78) == 0) {
        iVar9 = 0;
      }
      else {
        puVar15 = *(ushort **)(lVar13 + 0x58);
        iVar9 = 0;
        puVar14 = *(ushort **)(lVar8 + 0x58);
        do {
          while( true ) {
            uVar3 = *puVar15;
            *puVar14 = uVar3;
            if (uVar3 == 0x10) break;
            if (uVar3 == 0) goto LAB_02c397b0;
            puVar14 = puVar14 + 1;
            puVar15 = puVar15 + 1;
            iVar9 = iVar9 + 1;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_02c3979c;
          }
          uVar3 = puVar15[1];
          uVar1 = uVar3 + 2;
          bVar5 = uVar11 < uVar1;
          uVar11 = uVar11 - uVar1;
          if (bVar5 || uVar11 == 0) {
            *puVar14 = 0;
            goto LAB_02c397b0;
          }
          uVar17 = uVar3 + 1;
          uVar6 = uVar17 & 7;
          puVar18 = puVar14 + 1;
          *puVar18 = uVar3;
          puVar4 = puVar15 + 1;
          puVar16 = puVar15;
          if (uVar6 != 0) {
            lVar10 = 0;
            do {
              lVar12 = lVar10;
              uVar17 = uVar17 - 1;
              uVar6 = uVar6 - 1;
              *(undefined2 *)((long)puVar14 + lVar12 + 4) =
                   *(undefined2 *)((long)puVar15 + lVar12 + 4);
              lVar10 = lVar12 + 2;
            } while (uVar6 != 0);
            puVar18 = (ushort *)((long)puVar14 + lVar12 + 4);
            puVar16 = (ushort *)((long)puVar15 + lVar12 + 2);
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
        } while (uVar11 != 0);
LAB_02c3979c:
        if (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          puVar14[-1] = 0;
        }
      }
LAB_02c397b0:
      *(short *)(lVar8 + 0x7a) = (short)iVar9;
      lVar10 = *(long *)(param_1 + 0x98);
    }
    lVar8 = (ulong)param_2 * 0x18;
    *(undefined2 *)(lVar10 + lVar8 + 0x10) = 0;
    lVar8 = *(long *)(param_1 + 0x98) + lVar8;
    *(ushort *)(lVar8 + 0x12) = *(ushort *)(lVar8 + 0x12) & 0xfffe;
  }
  return;
}


