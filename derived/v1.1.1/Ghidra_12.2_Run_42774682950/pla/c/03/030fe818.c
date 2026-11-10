/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fe818; name: FUN_030fe818
 */


void FUN_030fe818(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x15d4);
  if ((int)*(uint *)(param_1 + 0x15d4) < 1) {
    return;
  }
  if (*(char *)(param_1 + 0x1688) != '\0') {
    lVar5 = 0;
    lVar7 = 0;
    iVar9 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x1690) + lVar7) == '\0') goto LAB_030fe888;
      do {
        iVar9 = iVar9 + 1;
        uVar14 = *param_2;
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x110) + lVar5);
        uVar13 = puVar3[1];
        uVar12 = *puVar3;
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x110) + lVar5);
        puVar3[1] = CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                             (float)uVar13 + (float)param_2[1]);
        *puVar3 = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar14 >> 0x20),
                           (float)uVar12 + (float)uVar14);
        uVar2 = (ulong)*(uint *)(param_1 + 0x15d4);
LAB_030fe888:
        if ((int)uVar2 <= iVar9) goto LAB_030fe908;
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 0x20;
      } while (*(char *)(param_1 + 0x1688) == '\0');
    } while( true );
  }
  lVar7 = 0;
LAB_030fe900:
  uVar4 = (uint)lVar7;
  do {
    uVar8 = -(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar4 << 5;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x110) + uVar8);
    uVar13 = puVar3[1];
    uVar12 = *puVar3;
    uVar14 = *param_2;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x110) + uVar8);
    puVar3[1] = CONCAT44((float)((ulong)uVar13 >> 0x20) + (float)((ulong)param_2[1] >> 0x20),
                         (float)uVar13 + (float)param_2[1]);
    *puVar3 = CONCAT44((float)((ulong)uVar12 >> 0x20) + (float)((ulong)uVar14 >> 0x20),
                       (float)uVar12 + (float)uVar14);
    if (uVar2 - 1 == lVar7) {
LAB_030fe908:
      uVar12 = *param_2;
      lVar7 = *(long *)(param_1 + 0x16d0);
      *(ulong *)(param_1 + 0x1608) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1608) >> 0x20) +
                    (float)((ulong)param_2[1] >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x1608) + (float)param_2[1]);
      *(ulong *)(param_1 + 0x1600) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1600) >> 0x20) +
                    (float)((ulong)uVar12 >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x1600) + (float)uVar12);
      uVar12 = *param_2;
      *(ulong *)(param_1 + 0x1618) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1618) >> 0x20) +
                    (float)((ulong)param_2[1] >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x1618) + (float)param_2[1]);
      *(ulong *)(param_1 + 0x1610) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1610) >> 0x20) +
                    (float)((ulong)uVar12 >> 0x20),
                    (float)*(undefined8 *)(param_1 + 0x1610) + (float)uVar12);
      lVar5 = *(long *)(param_1 + 0x16d8);
      iVar9 = *(int *)(lVar5 + 4);
      if ((lVar7 != lVar5) || (iVar9 != 0)) {
        iVar10 = 0;
        do {
          lVar11 = lVar7 + (long)iVar10 * 0x30;
          uVar12 = *param_2;
          iVar1 = iVar10 + 1;
          *(ulong *)(lVar11 + 0x18) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x18) >> 0x20) +
                        (float)((ulong)param_2[1] >> 0x20),
                        (float)*(undefined8 *)(lVar11 + 0x18) + (float)param_2[1]);
          *(ulong *)(lVar11 + 0x10) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20) +
                        (float)((ulong)uVar12 >> 0x20),
                        (float)*(undefined8 *)(lVar11 + 0x10) + (float)uVar12);
          uVar12 = *param_2;
          *(ulong *)(lVar11 + 0x28) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x28) >> 0x20) +
                        (float)((ulong)param_2[1] >> 0x20),
                        (float)*(undefined8 *)(lVar11 + 0x28) + (float)param_2[1]);
          *(ulong *)(lVar11 + 0x20) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x20) >> 0x20) +
                        (float)((ulong)uVar12 >> 0x20),
                        (float)*(undefined8 *)(lVar11 + 0x20) + (float)uVar12);
          if (((0xe < iVar10) || (iVar10 = iVar1, *(int *)(lVar7 + 4) <= iVar1)) &&
             (iVar10 = iVar1, *(long *)(lVar7 + 8) != 0)) {
            iVar10 = 0;
            lVar7 = *(long *)(lVar7 + 8);
          }
        } while ((lVar7 != lVar5) || (iVar9 != iVar10));
      }
      if (*(int *)(param_1 + 0x16e8) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x16e0);
        puVar6 = puVar3 + (long)*(int *)(param_1 + 0x16e8) * 6;
        do {
          uVar12 = *param_2;
          puVar3[1] = CONCAT44((float)((ulong)puVar3[1] >> 0x20) +
                               (float)((ulong)param_2[1] >> 0x20),
                               (float)puVar3[1] + (float)param_2[1]);
          *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)uVar12 >> 0x20),
                             (float)*puVar3 + (float)uVar12);
          uVar12 = *param_2;
          puVar3[3] = CONCAT44((float)((ulong)puVar3[3] >> 0x20) +
                               (float)((ulong)param_2[1] >> 0x20),
                               (float)puVar3[3] + (float)param_2[1]);
          puVar3[2] = CONCAT44((float)((ulong)puVar3[2] >> 0x20) + (float)((ulong)uVar12 >> 0x20),
                               (float)puVar3[2] + (float)uVar12);
          puVar3 = puVar3 + 6;
        } while (puVar3 != puVar6);
      }
      if ((*(long *)(param_1 + 0x1660) != 0) && (*(char *)(param_1 + 0x1668) == '\0')) {
        FUN_0335c548(*(long *)(param_1 + 0x1660),param_2);
      }
      FUN_031004ec(*(undefined8 *)(param_1 + 0x1678),param_2);
      return;
    }
    lVar7 = lVar7 + 1;
    if (*(char *)(param_1 + 0x1688) == '\0') goto LAB_030fe900;
    uVar4 = *(uint *)(*(long *)(param_1 + 0x16a8) + lVar7 * 4);
  } while( true );
}


