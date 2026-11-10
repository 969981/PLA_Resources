/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03182d44; name: FUN_03182d44
 */


void FUN_03182d44(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  int iVar13;
  undefined8 uVar12;
  int iVar14;
  int iVar15;
  int iVar17;
  undefined8 uVar16;
  int iVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  uint local_68;
  
  puVar5 = PTR_PTR_0434a080;
  local_68 = *(uint *)((long)param_1 + 0x1c);
  if (local_68 != 0) {
    lVar4 = param_2[1];
    lVar9 = 0;
    if (*param_1 != 0) {
      lVar9 = *param_1 + (long)param_1;
    }
    local_70 = (undefined8 *)(lVar9 + (ulong)local_68 * 0x30);
    uStack_88 = local_70[1];
    local_90 = *local_70;
    uStack_78 = local_70[3];
    local_80 = local_70[2];
    iVar10 = -(uint)((float)local_90 <= (float)param_3[4]);
    iVar13 = -(uint)((float)((ulong)local_90 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar14 = -(uint)((float)uStack_88 <= (float)param_3[5]);
    iVar15 = -(uint)((float)param_3[2] <= (float)local_80);
    iVar17 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)local_80 >> 0x20));
    iVar18 = -(uint)((float)param_3[3] <= (float)uStack_78);
    uVar11 = CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
                      CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar15 >> 0x10),
                               CONCAT11((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar15 >> 8),
                                        (byte)iVar10 & (byte)iVar15)));
    if ((uVar11 & (uint)(CONCAT17((byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
                                  CONCAT16((byte)((uint)iVar13 >> 0x10) &
                                           (byte)((uint)iVar17 >> 0x10),
                                           CONCAT15((byte)((uint)iVar13 >> 8) &
                                                    (byte)((uint)iVar17 >> 8),
                                                    CONCAT14((byte)iVar13 & (byte)iVar17,uVar11))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar18 >> 0x18),
                 CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar18 >> 0x10),
                          CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar18 >> 8),
                                   (byte)iVar14 & (byte)iVar18)))) != 0) {
      uVar11 = *(uint *)((long)local_70 + 0x24);
      if (*(uint *)((long)local_70 + 0x24) != 0) goto LAB_03182e7c;
LAB_03182e20:
      FUN_03182fd8(*param_3,&local_90);
LAB_03182e2c:
      if ((int)lVar4 < (int)param_2[1]) {
        iVar10 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar10;
        local_68 = *(uint *)(*param_2 + (long)iVar10 * 4);
        lVar9 = 0;
        if (*param_1 != 0) {
          lVar9 = *param_1 + (long)param_1;
        }
        local_70 = (undefined8 *)(lVar9 + (ulong)local_68 * 0x30);
        uVar20 = *(uint *)((long)local_70 + 0x24);
        local_90 = *local_70;
        uStack_88 = local_70[1];
        local_80 = local_70[2];
        uStack_78 = local_70[3];
joined_r0x03182e78:
        do {
          uVar11 = uVar20;
          if (uVar20 == 0) goto LAB_03182e20;
LAB_03182e7c:
          lVar9 = 0;
          if (*param_1 != 0) {
            lVar9 = *param_1 + (long)param_1;
          }
          puVar8 = (undefined8 *)(lVar9 + (ulong)uVar11 * 0x30);
          uVar2 = *(uint *)(local_70 + 5);
          uVar29 = puVar8[1];
          uVar28 = *puVar8;
          uVar31 = puVar8[3];
          uVar30 = puVar8[2];
          puVar7 = (undefined8 *)(lVar9 + (ulong)uVar2 * 0x30);
          fVar19 = (float)param_3[2];
          iVar22 = -(uint)(fVar19 <= (float)uVar30);
          fVar21 = (float)((ulong)param_3[2] >> 0x20);
          iVar23 = -(uint)(fVar21 <= (float)((ulong)uVar30 >> 0x20));
          iVar24 = -(uint)((float)param_3[3] <= (float)uVar31);
          uVar12 = *puVar7;
          uVar16 = puVar7[2];
          iVar10 = -(uint)(fVar19 <= (float)uVar16);
          iVar13 = -(uint)(fVar21 <= (float)((ulong)uVar16 >> 0x20));
          iVar14 = -(uint)((float)param_3[3] <= (float)puVar7[3]);
          fVar19 = (float)param_3[4];
          iVar25 = -(uint)((float)uVar28 <= fVar19);
          fVar21 = (float)((ulong)param_3[4] >> 0x20);
          iVar26 = -(uint)((float)((ulong)uVar28 >> 0x20) <= fVar21);
          iVar27 = -(uint)((float)uVar29 <= (float)param_3[5]);
          iVar15 = -(uint)((float)uVar12 <= fVar19);
          iVar17 = -(uint)((float)((ulong)uVar12 >> 0x20) <= fVar21);
          iVar18 = -(uint)((float)puVar7[1] <= (float)param_3[5]);
          uVar20 = CONCAT13((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar10 >> 0x18),
                            CONCAT12((byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar10 >> 0x10),
                                     CONCAT11((byte)((uint)iVar15 >> 8) & (byte)((uint)iVar10 >> 8),
                                              (byte)iVar15 & (byte)iVar10)));
          bVar1 = (CONCAT13((byte)((uint)iVar25 >> 0x18) & (byte)((uint)iVar22 >> 0x18),
                            CONCAT12((byte)((uint)iVar25 >> 0x10) & (byte)((uint)iVar22 >> 0x10),
                                     CONCAT11((byte)((uint)iVar25 >> 8) & (byte)((uint)iVar22 >> 8),
                                              (byte)iVar25 & (byte)iVar22))) &
                   CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar23 >> 0x18),
                            CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar23 >> 0x10),
                                     CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar23 >> 8),
                                              (byte)iVar26 & (byte)iVar23))) &
                  CONCAT13((byte)((uint)iVar27 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                           CONCAT12((byte)((uint)iVar27 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                                    CONCAT11((byte)((uint)iVar27 >> 8) & (byte)((uint)iVar24 >> 8),
                                             (byte)iVar27 & (byte)iVar24)))) != 0 |
                  ((uVar20 & (uint)(CONCAT17((byte)((uint)iVar17 >> 0x18) &
                                             (byte)((uint)iVar13 >> 0x18),
                                             CONCAT16((byte)((uint)iVar17 >> 0x10) &
                                                      (byte)((uint)iVar13 >> 0x10),
                                                      CONCAT15((byte)((uint)iVar17 >> 8) &
                                                               (byte)((uint)iVar13 >> 8),
                                                               CONCAT14((byte)iVar17 & (byte)iVar13,
                                                                        uVar20)))) >> 0x20) &
                   CONCAT13((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar14 >> 0x18),
                            CONCAT12((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar14 >> 0x10),
                                     CONCAT11((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar14 >> 8),
                                              (byte)iVar18 & (byte)iVar14)))) != 0) << 1;
          if (bVar1 == 3) {
            iVar10 = (int)param_2[1];
            uVar6 = *(uint *)((long)param_2 + 0xc);
            uVar20 = iVar10 + 1;
            if (iVar10 < (int)(uVar6 & 0x3fffffff)) {
              lVar9 = *param_2;
            }
            else {
              lVar9 = *param_2;
              if (0x3ffffffe < iVar10) {
                FUN_032bd0a8(uVar20);
                uVar6 = *(uint *)((long)param_2 + 0xc);
              }
              uVar6 = (uVar6 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar6) {
                uVar6 = 0x3fffffff;
              }
              uVar3 = uVar20;
              if ((int)uVar20 <= (int)uVar6) {
                uVar3 = uVar6;
              }
              lVar9 = FUN_032bd1d4(puVar5,uVar3,4,lVar9,iVar10,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar9;
              iVar10 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar20;
            *(uint *)(lVar9 + (long)iVar10 * 4) = uVar2;
          }
          else {
            if (bVar1 == 2) {
              uVar20 = *(uint *)((long)puVar7 + 0x24);
              local_68 = uVar2;
              local_70 = puVar7;
              local_90 = uVar12;
              uStack_88 = puVar7[1];
              local_80 = uVar16;
              uStack_78 = puVar7[3];
              goto joined_r0x03182e78;
            }
            if (bVar1 != 1) goto LAB_03182e2c;
          }
          uVar20 = *(uint *)((long)puVar8 + 0x24);
          local_68 = uVar11;
          local_70 = puVar8;
          local_90 = uVar28;
          uStack_88 = uVar29;
          local_80 = uVar30;
          uStack_78 = uVar31;
        } while( true );
      }
    }
  }
  return;
}


