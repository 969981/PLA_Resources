/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d6a20; name: FUN_001d6a20
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001d6a20(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  int iVar14;
  undefined8 uVar13;
  int iVar15;
  int iVar16;
  int iVar18;
  undefined8 uVar17;
  int iVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  uint local_78;
  
  local_78 = *(uint *)((long)param_1 + 0x1c);
  if (local_78 != 0) {
    lVar2 = param_2[1];
    lVar10 = 0;
    if (*param_1 != 0) {
      lVar10 = *param_1 + (long)param_1;
    }
    local_80 = (undefined8 *)(lVar10 + (ulong)local_78 * 0x30);
    uStack_98 = local_80[1];
    local_a0 = *local_80;
    uStack_88 = local_80[3];
    local_90 = local_80[2];
    if (*(int *)(param_3 + 1) != 0) {
      iVar11 = -(uint)((float)local_a0 <= (float)param_3[4]);
      iVar14 = -(uint)((float)((ulong)local_a0 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
      iVar15 = -(uint)((float)uStack_98 <= (float)param_3[5]);
      iVar16 = -(uint)((float)param_3[2] <= (float)local_90);
      iVar18 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)local_90 >> 0x20));
      iVar19 = -(uint)((float)param_3[3] <= (float)uStack_88);
      uVar12 = CONCAT13((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
                        CONCAT12((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar16 >> 0x10),
                                 CONCAT11((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar16 >> 8),
                                          (byte)iVar11 & (byte)iVar16)));
      if ((uVar12 & (uint)(CONCAT17((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar18 >> 0x18),
                                    CONCAT16((byte)((uint)iVar14 >> 0x10) &
                                             (byte)((uint)iVar18 >> 0x10),
                                             CONCAT15((byte)((uint)iVar14 >> 8) &
                                                      (byte)((uint)iVar18 >> 8),
                                                      CONCAT14((byte)iVar14 & (byte)iVar18,uVar12)))
                                   ) >> 0x20) &
          CONCAT13((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                   CONCAT12((byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                            CONCAT11((byte)((uint)iVar15 >> 8) & (byte)((uint)iVar19 >> 8),
                                     (byte)iVar15 & (byte)iVar19)))) != 0) {
        uVar7 = *(undefined8 *)PTR_PTR_04372408;
        uVar12 = *(uint *)((long)local_80 + 0x24);
        if (uVar12 != 0) goto LAB_001d6b70;
LAB_001d6b28:
        if (*(int *)(param_3 + 1) == 0) {
          uVar12 = 0;
        }
        else {
          iVar11 = (**(code **)(**(long **)*param_3 + 0x10))
                             (*(long **)*param_3,*(undefined4 *)(local_80 + 5),&local_a0);
          uVar12 = (uint)(iVar11 != 0);
        }
        *(uint *)(param_3 + 1) = uVar12;
        iVar11 = (int)param_2[1];
        while ((int)lVar2 < iVar11) {
          uVar12 = iVar11 - 1;
          uVar9 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar12 << 2;
          *(uint *)(param_2 + 1) = uVar12;
          lVar10 = 0;
          if (*param_1 != 0) {
            lVar10 = *param_1 + (long)param_1;
          }
          local_80 = (undefined8 *)(lVar10 + (ulong)*(uint *)(*param_2 + uVar9) * 0x30);
          uStack_98 = local_80[1];
          local_a0 = *local_80;
          uStack_88 = local_80[3];
          local_90 = local_80[2];
          uVar12 = *(uint *)((long)local_80 + 0x24);
          local_78 = *(uint *)(*param_2 + uVar9);
joined_r0x001d6cfc:
          if (uVar12 == 0) goto LAB_001d6b28;
LAB_001d6b70:
          lVar10 = 0;
          if (*param_1 != 0) {
            lVar10 = *param_1 + (long)param_1;
          }
          puVar8 = (undefined8 *)(lVar10 + (ulong)uVar12 * 0x30);
          uVar32 = puVar8[1];
          uVar31 = *puVar8;
          uVar34 = puVar8[3];
          uVar33 = puVar8[2];
          uVar6 = *(uint *)(local_80 + 5);
          puVar5 = (undefined8 *)(lVar10 + (ulong)uVar6 * 0x30);
          uVar13 = *puVar5;
          uVar17 = puVar5[2];
          bVar3 = false;
          if (*(int *)(param_3 + 1) == 0) {
LAB_001d6c88:
            if (bVar3 != 3) goto LAB_001d6c98;
LAB_001d6c20:
            iVar11 = (int)param_2[1];
            uVar4 = *(uint *)((long)param_2 + 0xc);
            uVar21 = iVar11 + 1;
            if (iVar11 < (int)(uVar4 & 0x3fffffff)) {
              lVar10 = *param_2;
            }
            else {
              lVar10 = *param_2;
              if (0x3ffffffe < iVar11) {
                FUN_032bd0a8(uVar21);
                uVar4 = *(uint *)((long)param_2 + 0xc);
              }
              uVar4 = (uVar4 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar4) {
                uVar4 = 0x3fffffff;
              }
              uVar1 = uVar21;
              if ((int)uVar21 <= (int)uVar4) {
                uVar1 = uVar4;
              }
              lVar10 = FUN_032bd1d4(uVar7,uVar1,4,lVar10,iVar11,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar10;
              iVar11 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar21;
            *(uint *)(lVar10 + (long)iVar11 * 4) = uVar6;
LAB_001d6b08:
            puVar5 = puVar8;
            uVar6 = uVar12;
            local_a0 = uVar31;
            uStack_98 = uVar32;
            local_90 = uVar33;
            uStack_88 = uVar34;
LAB_001d6b14:
            uVar12 = *(uint *)((long)puVar5 + 0x24);
            local_78 = uVar6;
            local_80 = puVar5;
            goto joined_r0x001d6cfc;
          }
          fVar23 = (float)param_3[4];
          iVar28 = -(uint)((float)uVar31 <= fVar23);
          fVar24 = (float)((ulong)param_3[4] >> 0x20);
          iVar29 = -(uint)((float)((ulong)uVar31 >> 0x20) <= fVar24);
          iVar30 = -(uint)((float)uVar32 <= (float)param_3[5]);
          fVar20 = (float)param_3[2];
          iVar25 = -(uint)(fVar20 <= (float)uVar33);
          fVar22 = (float)((ulong)param_3[2] >> 0x20);
          iVar26 = -(uint)(fVar22 <= (float)((ulong)uVar33 >> 0x20));
          iVar27 = -(uint)((float)param_3[3] <= (float)uVar34);
          iVar11 = -(uint)(fVar20 <= (float)uVar17);
          iVar14 = -(uint)(fVar22 <= (float)((ulong)uVar17 >> 0x20));
          iVar15 = -(uint)((float)param_3[3] <= (float)puVar5[3]);
          iVar16 = -(uint)((float)uVar13 <= fVar23);
          iVar18 = -(uint)((float)((ulong)uVar13 >> 0x20) <= fVar24);
          iVar19 = -(uint)((float)puVar5[1] <= (float)param_3[5]);
          uVar21 = CONCAT13((byte)((uint)iVar16 >> 0x18) & (byte)((uint)iVar11 >> 0x18),
                            CONCAT12((byte)((uint)iVar16 >> 0x10) & (byte)((uint)iVar11 >> 0x10),
                                     CONCAT11((byte)((uint)iVar16 >> 8) & (byte)((uint)iVar11 >> 8),
                                              (byte)iVar16 & (byte)iVar11)));
          bVar3 = (CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                            CONCAT12((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                     CONCAT11((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar25 >> 8),
                                              (byte)iVar28 & (byte)iVar25))) &
                   CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                            CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                                     CONCAT11((byte)((uint)iVar29 >> 8) & (byte)((uint)iVar26 >> 8),
                                              (byte)iVar29 & (byte)iVar26))) &
                  CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                           CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                                    CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar27 >> 8),
                                             (byte)iVar30 & (byte)iVar27)))) != 0;
          if ((uVar21 & (uint)(CONCAT17((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar14 >> 0x18),
                                        CONCAT16((byte)((uint)iVar18 >> 0x10) &
                                                 (byte)((uint)iVar14 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar18 >> 8) &
                                                          (byte)((uint)iVar14 >> 8),
                                                          CONCAT14((byte)iVar18 & (byte)iVar14,
                                                                   uVar21)))) >> 0x20) &
              CONCAT13((byte)((uint)iVar19 >> 0x18) & (byte)((uint)iVar15 >> 0x18),
                       CONCAT12((byte)((uint)iVar19 >> 0x10) & (byte)((uint)iVar15 >> 0x10),
                                CONCAT11((byte)((uint)iVar19 >> 8) & (byte)((uint)iVar15 >> 8),
                                         (byte)iVar19 & (byte)iVar15)))) == 0) goto LAB_001d6c88;
          bVar3 = bVar3 | 2;
          if (bVar3 == 3) goto LAB_001d6c20;
LAB_001d6c98:
          if (bVar3 == 2) {
            local_a0 = uVar13;
            uStack_98 = puVar5[1];
            local_90 = uVar17;
            uStack_88 = puVar5[3];
            goto LAB_001d6b14;
          }
          if (bVar3 == 1) goto LAB_001d6b08;
          iVar11 = (int)param_2[1];
        }
      }
    }
  }
  return;
}


