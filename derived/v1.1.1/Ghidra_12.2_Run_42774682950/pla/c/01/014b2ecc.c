/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b2ecc; name: FUN_014b2ecc
 */


int FUN_014b2ecc(float param_1,long param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  piVar15 = *(int **)(param_2 + 0x30);
  if (piVar15 != (int *)0x0) {
    uVar17 = (ulong)*(ushort *)((long)piVar15 + (4 - (long)*piVar15));
    puVar1 = (uint *)((long)piVar15 + uVar17);
    uVar18 = (ulong)*puVar1;
    puVar1 = (uint *)((long)puVar1 + uVar18);
    puVar13 = puVar1 + 1;
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      lVar16 = (long)piVar15 + uVar18 + uVar17 + 9;
      fVar20 = 0.0;
      puVar1 = puVar13 + uVar3;
      iVar12 = 0;
      iVar14 = 0;
      while( true ) {
        if (*(int *)(param_2 + 0x50) <= iVar14) {
          return iVar12;
        }
        uVar17 = (ulong)*puVar13;
        fVar21 = 0.0;
        if (iVar14 != 0) {
          fVar21 = *(float *)(param_2 + 0x44);
        }
        fVar20 = fVar20 + fVar21;
        fVar21 = *(float *)(param_2 + 0x40);
        fVar23 = fVar20 / fVar21 + *(float *)(param_2 + 0x48);
        if (param_1 < fVar23) break;
        if (param_1 <= fVar23 + *(float *)(param_2 + 0x4c)) {
          piVar15 = (int *)((long)puVar13 + uVar17);
          iVar5 = *piVar15;
          uVar18 = (ulong)*(ushort *)((long)piVar15 + (6 - (long)iVar5));
          puVar2 = (uint *)((long)piVar15 + uVar18);
          uVar10 = (ulong)*puVar2;
          bVar4 = *(byte *)((long)puVar2 + uVar10 + 4);
          puVar19 = &DAT_cbf29ce484222645;
          if (bVar4 != 0) {
            puVar19 = &DAT_cbf29ce484222645;
            pbVar8 = (byte *)(lVar16 + uVar10 + uVar18 + uVar17);
            do {
              puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar8;
              pbVar8 = pbVar8 + 1;
            } while (bVar4 != 0);
          }
          uVar18 = (ulong)*(ushort *)((long)piVar15 + (10 - (long)iVar5));
          puVar2 = (uint *)((long)piVar15 + uVar18);
          uVar10 = (ulong)*puVar2;
          bVar4 = *(byte *)((long)puVar2 + uVar10 + 4);
          puVar7 = &DAT_cbf29ce484222645;
          if (bVar4 != 0) {
            lVar11 = uVar17 + uVar18 + uVar10;
            puVar7 = &DAT_cbf29ce484222645;
            do {
              puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *(byte *)(lVar16 + lVar11);
              lVar11 = lVar11 + 1;
            } while (bVar4 != 0);
          }
          uVar18 = (ulong)*(ushort *)((long)piVar15 + (8 - (long)iVar5));
          puVar2 = (uint *)((long)piVar15 + uVar18);
          uVar10 = (ulong)*puVar2;
          bVar4 = *(byte *)((long)puVar2 + uVar10 + 4);
          puVar9 = &DAT_cbf29ce484222645;
          if (bVar4 != 0) {
            lVar11 = uVar17 + uVar18 + uVar10;
            puVar9 = &DAT_cbf29ce484222645;
            do {
              puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *(byte *)(lVar16 + lVar11);
              lVar11 = lVar11 + 1;
            } while (bVar4 != 0);
          }
          uVar18 = (ulong)*(ushort *)((long)piVar15 + (4 - (long)iVar5));
          puVar2 = (uint *)((long)piVar15 + uVar18);
          uVar10 = (ulong)*puVar2;
          bVar4 = *(byte *)((long)puVar2 + uVar10 + 4);
          puVar6 = &DAT_cbf29ce484222645;
          if (bVar4 != 0) {
            lVar11 = uVar17 + uVar18 + uVar10;
            puVar6 = &DAT_cbf29ce484222645;
            do {
              puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *(byte *)(lVar16 + lVar11);
              lVar11 = lVar11 + 1;
            } while (bVar4 != 0);
          }
          fVar22 = *(float *)(param_2 + 0x44);
          piVar15 = (int *)(param_3 + (long)iVar12 * 0x28);
          iVar12 = iVar12 + 1;
          *piVar15 = iVar14;
          *(undefined1 **)(piVar15 + 2) = puVar7;
          *(undefined1 **)(piVar15 + 4) = puVar9;
          *(undefined1 **)(piVar15 + 6) = puVar19;
          *(undefined1 **)(piVar15 + 8) = puVar6;
          piVar15[1] = (int)(fVar21 * (param_1 - fVar23) + -540.0 + fVar22 * -0.5);
        }
        puVar13 = puVar13 + 1;
        iVar14 = iVar14 + 1;
        lVar16 = lVar16 + 4;
        if (puVar13 == puVar1) {
          return iVar12;
        }
      }
      return iVar12;
    }
  }
  return 0;
}


