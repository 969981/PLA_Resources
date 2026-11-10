/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d6d60; name: FUN_001d6d60
 */


void FUN_001d6d60(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  
  if (*(uint *)((long)param_1 + 0x1c) != 0) {
    lVar3 = 0;
    if (*param_1 != 0) {
      lVar3 = *param_1 + (long)param_1;
    }
    puVar7 = (undefined8 *)(lVar3 + (ulong)*(uint *)((long)param_1 + 0x1c) * 0x30);
    iVar11 = -(uint)((float)param_3[2] <= (float)puVar7[2]);
    iVar15 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)puVar7[2] >> 0x20));
    iVar16 = -(uint)((float)param_3[3] <= (float)puVar7[3]);
    iVar17 = -(uint)((float)*puVar7 <= (float)param_3[4]);
    iVar18 = -(uint)((float)((ulong)*puVar7 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar19 = -(uint)((float)puVar7[1] <= (float)param_3[5]);
    uVar12 = CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar11 >> 0x18),
                      CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar11 >> 0x10),
                               CONCAT11((byte)((uint)iVar17 >> 8) & (byte)((uint)iVar11 >> 8),
                                        (byte)iVar17 & (byte)iVar11)));
    if ((uVar12 & (uint)(CONCAT17((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
                                  CONCAT16((byte)((uint)iVar18 >> 0x10) &
                                           (byte)((uint)iVar15 >> 0x10),
                                           CONCAT15((byte)((uint)iVar18 >> 8) &
                                                    (byte)((uint)iVar15 >> 8),
                                                    CONCAT14((byte)iVar18 & (byte)iVar15,uVar12))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
                 CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar16 >> 0x10),
                          CONCAT11((byte)((uint)iVar19 >> 8) & (byte)((uint)iVar16 >> 8),
                                   (byte)iVar19 & (byte)iVar16)))) != 0) {
      lVar3 = param_2[1];
      uVar4 = *(undefined8 *)PTR_PTR_04372408;
      uVar5 = *(undefined8 *)PTR_PTR_04372400;
      uVar12 = *(uint *)((long)puVar7 + 0x24);
joined_r0x001d6e18:
      while (uVar12 != 0) {
        lVar10 = 0;
        if (*param_1 != 0) {
          lVar10 = *param_1 + (long)param_1;
        }
        puVar8 = (undefined8 *)(lVar10 + (ulong)uVar12 * 0x30);
        uVar12 = *(uint *)(puVar7 + 5);
        fVar21 = (float)param_3[2];
        iVar16 = -(uint)(fVar21 <= (float)puVar8[2]);
        fVar23 = (float)((ulong)param_3[2] >> 0x20);
        iVar19 = -(uint)(fVar23 <= (float)((ulong)puVar8[2] >> 0x20));
        iVar20 = -(uint)((float)param_3[3] <= (float)puVar8[3]);
        puVar7 = (undefined8 *)(lVar10 + (ulong)uVar12 * 0x30);
        fVar26 = (float)param_3[4];
        iVar11 = -(uint)((float)*puVar8 <= fVar26);
        fVar27 = (float)((ulong)param_3[4] >> 0x20);
        iVar15 = -(uint)((float)((ulong)*puVar8 >> 0x20) <= fVar27);
        iVar17 = -(uint)((float)puVar8[1] <= (float)param_3[5]);
        uVar13 = CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
                          CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar16 >> 0x10),
                                   CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar16 >> 8),
                                            (byte)iVar11 & (byte)iVar16)));
        iVar22 = -(uint)(fVar21 <= (float)puVar7[2]);
        iVar24 = -(uint)(fVar23 <= (float)((ulong)puVar7[2] >> 0x20));
        iVar25 = -(uint)((float)param_3[3] <= (float)puVar7[3]);
        iVar11 = -(uint)((float)*puVar7 <= fVar26);
        iVar16 = -(uint)((float)((ulong)*puVar7 >> 0x20) <= fVar27);
        iVar18 = -(uint)((float)puVar7[1] <= (float)param_3[5]);
        uVar14 = CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar22 >> 0x18),
                          CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar22 >> 0x10),
                                   CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar22 >> 8),
                                            (byte)iVar11 & (byte)iVar22)));
        bVar1 = (uVar13 & (uint)(CONCAT17((byte)((uint)iVar15 >> 0x18) &
                                          (byte)((uint)iVar19 >> 0x18),
                                          CONCAT16((byte)((uint)iVar15 >> 0x10) &
                                                   (byte)((uint)iVar19 >> 0x10),
                                                   CONCAT15((byte)((uint)iVar15 >> 8) &
                                                            (byte)((uint)iVar19 >> 8),
                                                            CONCAT14((byte)iVar15 & (byte)iVar19,
                                                                     uVar13)))) >> 0x20) &
                CONCAT13((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                         CONCAT12((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                                  CONCAT11((byte)((uint)iVar17 >> 8) & (byte)((uint)iVar20 >> 8),
                                           (byte)iVar17 & (byte)iVar20)))) != 0 |
                ((uVar14 & (uint)(CONCAT17((byte)((uint)iVar16 >> 0x18) &
                                           (byte)((uint)iVar24 >> 0x18),
                                           CONCAT16((byte)((uint)iVar16 >> 0x10) &
                                                    (byte)((uint)iVar24 >> 0x10),
                                                    CONCAT15((byte)((uint)iVar16 >> 8) &
                                                             (byte)((uint)iVar24 >> 8),
                                                             CONCAT14((byte)iVar16 & (byte)iVar24,
                                                                      uVar14)))) >> 0x20) &
                 CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                          CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                   CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar25 >> 8),
                                            (byte)iVar18 & (byte)iVar25)))) != 0) << 1;
        if (bVar1 != 1) {
          if (bVar1 == 3) {
            iVar11 = (int)param_2[1];
            uVar14 = *(uint *)((long)param_2 + 0xc);
            uVar13 = iVar11 + 1;
            if (iVar11 < (int)(uVar14 & 0x3fffffff)) {
              lVar10 = *param_2;
            }
            else {
              lVar10 = *param_2;
              if (0x3ffffffe < iVar11) {
                FUN_032bd0a8(uVar13);
                uVar14 = *(uint *)((long)param_2 + 0xc);
              }
              uVar14 = (uVar14 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar14) {
                uVar14 = 0x3fffffff;
              }
              uVar2 = uVar13;
              if ((int)uVar13 <= (int)uVar14) {
                uVar2 = uVar14;
              }
              lVar10 = FUN_032bd1d4(uVar4,uVar2,4,lVar10,iVar11,(uint *)((long)param_2 + 0xc));
              iVar11 = (int)param_2[1];
              *param_2 = lVar10;
            }
            *(uint *)(param_2 + 1) = uVar13;
            *(uint *)(lVar10 + (long)iVar11 * 4) = uVar12;
          }
          else {
            puVar8 = puVar7;
            if (bVar1 != 2) goto LAB_001d6fec;
          }
        }
        puVar7 = puVar8;
        uVar12 = *(uint *)((long)puVar8 + 0x24);
      }
      puVar8 = (undefined8 *)*param_3;
      if (-1 < *(int *)puVar8[1]) {
        plVar9 = (long *)*puVar8;
        iVar11 = (int)plVar9[1];
        puVar6 = (uint *)((long)plVar9 + 0xc);
        uVar12 = *puVar6;
        if ((int)(uVar12 & 0x3fffffff) <= iVar11) {
          lVar10 = *plVar9;
          uVar13 = iVar11 + 1;
          if (0x3ffffffe < iVar11) {
            FUN_032bd0a8(uVar13);
            uVar12 = *puVar6;
          }
          uVar12 = (uVar12 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar12) {
            uVar12 = 0x3fffffff;
          }
          if ((int)uVar13 <= (int)uVar12) {
            uVar13 = uVar12;
          }
          lVar10 = FUN_032bd1d4(uVar5,uVar13,4,lVar10,iVar11,puVar6);
          *plVar9 = lVar10;
          plVar9 = (long *)*puVar8;
        }
        lVar10 = plVar9[1];
        *(undefined4 *)(*plVar9 + (long)(int)lVar10 * 4) = *(undefined4 *)(puVar7 + 5);
        *(int *)(plVar9 + 1) = (int)lVar10 + 1;
      }
LAB_001d6fec:
      if ((int)lVar3 < (int)param_2[1]) {
        iVar11 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar11;
        lVar10 = 0;
        if (*param_1 != 0) {
          lVar10 = *param_1 + (long)param_1;
        }
        puVar7 = (undefined8 *)(lVar10 + (ulong)*(uint *)(*param_2 + (long)iVar11 * 4) * 0x30);
        uVar12 = *(uint *)((long)puVar7 + 0x24);
        goto joined_r0x001d6e18;
      }
    }
  }
  return;
}


