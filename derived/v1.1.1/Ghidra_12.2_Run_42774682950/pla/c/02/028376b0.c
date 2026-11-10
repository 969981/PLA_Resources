/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028376b0; name: FUN_028376b0
 */


void FUN_028376b0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  
  lVar8 = *(long *)(param_1 + 0x90);
  if (*(char *)(lVar8 + 0x7c) != '\0') {
    uVar10 = (uint)*(ushort *)(lVar8 + 0x78);
    if (*(ushort *)(lVar8 + 0x78) == 0) {
      iVar9 = 0;
    }
    else {
      puVar12 = *(ushort **)(param_2 + 0x58);
      iVar9 = 0;
      puVar11 = *(ushort **)(lVar8 + 0x58);
      do {
        while( true ) {
          uVar3 = *puVar12;
          *puVar11 = uVar3;
          if (uVar3 == 0x10) break;
          if (uVar3 == 0) goto LAB_028377ec;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
          iVar9 = iVar9 + 1;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_02837874;
        }
        uVar3 = puVar12[1];
        uVar1 = uVar3 + 2;
        bVar5 = uVar10 < uVar1;
        uVar10 = uVar10 - uVar1;
        if (bVar5 || uVar10 == 0) {
          *puVar11 = 0;
          goto LAB_028377ec;
        }
        uVar14 = uVar3 + 1;
        uVar17 = uVar14 & 7;
        puVar16 = puVar11 + 1;
        *puVar16 = uVar3;
        puVar4 = puVar12 + 1;
        puVar13 = puVar12;
        if (uVar17 != 0) {
          lVar2 = 0;
          do {
            lVar15 = lVar2;
            uVar14 = uVar14 - 1;
            uVar17 = uVar17 - 1;
            *(undefined2 *)((long)puVar11 + lVar15 + 4) =
                 *(undefined2 *)((long)puVar12 + lVar15 + 4);
            lVar2 = lVar15 + 2;
          } while (uVar17 != 0);
          puVar16 = (ushort *)((long)puVar11 + lVar15 + 4);
          puVar13 = (ushort *)((long)puVar12 + lVar15 + 2);
          puVar4 = puVar13 + 1;
          puVar11 = puVar16;
        }
        puVar12 = puVar4;
        if (6 < uVar3) {
          puVar11 = puVar16;
          do {
            puVar11[1] = puVar13[2];
            puVar11[2] = puVar12[2];
            puVar11[3] = puVar12[3];
            puVar11[4] = puVar12[4];
            puVar11[5] = puVar12[5];
            puVar11[6] = puVar12[6];
            puVar13 = puVar12 + 7;
            puVar11[7] = *puVar13;
            puVar12 = puVar12 + 8;
            uVar14 = uVar14 - 8;
            puVar11 = puVar11 + 8;
            *puVar11 = *puVar12;
          } while (uVar14 != 0);
        }
        iVar9 = uVar1 + iVar9;
      } while (uVar10 != 0);
LAB_02837874:
      if (iVar9 != 0) {
        iVar9 = iVar9 + -1;
        puVar11[-1] = 0;
      }
    }
LAB_028377ec:
    *(short *)(lVar8 + 0x7a) = (short)iVar9;
  }
  lVar8 = *(long *)(param_1 + 0xb0);
  if (lVar8 == 0) {
    plVar6 = *(long **)(param_1 + 0xa8);
    uVar7 = *(undefined8 *)(param_1 + 0x90);
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x90);
    lVar2 = *(long *)(param_1 + 0x98);
    *(undefined2 *)(lVar8 + 0x128) = 0;
    *(undefined4 *)(lVar8 + 300) = 0;
    *(undefined4 *)(lVar8 + 0x124) = 0;
    *(undefined4 *)(lVar8 + 0x134) = 0;
    FUN_02c33414(lVar8,uVar7);
    if (*(char *)(lVar2 + 0x7c) != '\0') {
      **(undefined2 **)(lVar2 + 0x58) = 0;
      *(undefined2 *)(lVar2 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar8,lVar2,uVar7,0,0);
    plVar6 = *(long **)(param_1 + 0xa8);
    uVar7 = *(undefined8 *)(param_1 + 0x98);
  }
  (**(code **)(*plVar6 + 0x48))(plVar6,uVar7);
  if (*(int *)(param_1 + 0x80) == 6) {
    *(undefined4 *)(param_1 + 0x80) = 4;
  }
  return;
}


