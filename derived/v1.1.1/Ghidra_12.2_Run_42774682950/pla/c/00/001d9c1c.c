/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d9c1c; name: FUN_001d9c1c
 */


void FUN_001d9c1c(long *param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  byte *pbVar14;
  byte *pbVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar28;
  int iVar29;
  undefined1 auVar26 [12];
  int iVar30;
  undefined1 auVar27 [16];
  int iVar31;
  int iVar32;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 auVar33 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong local_e8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  long local_a0;
  ulong uStack_98;
  long local_90;
  ulong uStack_88;
  int local_80;
  byte *local_78;
  
  if ((int)param_1[1] != 0) {
    uStack_98 = param_1[3];
    local_a0 = param_1[2];
    uStack_88 = param_1[5];
    local_90 = param_1[4];
    lVar9 = param_2[1];
    local_80 = 0;
    if (*(int *)(param_3 + 1) != 0) {
      iVar31 = -(uint)((float)local_a0 <= *(float *)(param_3 + 4));
      iVar34 = -(uint)((float)((ulong)local_a0 >> 0x20) <= *(float *)((long)param_3 + 0x24));
      iVar36 = -(uint)((float)uStack_98 <= *(float *)(param_3 + 5));
      iVar25 = -(uint)(*(float *)(param_3 + 2) <= (float)local_90);
      iVar28 = -(uint)(*(float *)((long)param_3 + 0x14) <= (float)((ulong)local_90 >> 0x20));
      iVar29 = -(uint)(*(float *)(param_3 + 3) <= (float)uStack_88);
      uVar18 = CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                        CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                 CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar25 >> 8),
                                          (byte)iVar31 & (byte)iVar25)));
      auVar26._0_8_ =
           CONCAT17((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                    CONCAT16((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                             CONCAT15((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar28 >> 8),
                                      CONCAT14((byte)iVar34 & (byte)iVar28,uVar18))));
      auVar26[8] = (byte)iVar36 & (byte)iVar29;
      auVar26[9] = (byte)((uint)iVar36 >> 8) & (byte)((uint)iVar29 >> 8);
      auVar26[10] = (byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
      auVar26[0xb] = (byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar29 >> 0x18);
      if ((uVar18 & (uint)((ulong)auVar26._0_8_ >> 0x20) & auVar26._8_4_) != 0) {
        auVar27 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x1e0);
        auVar33 = NEON_ext(auVar27,auVar27,8,1);
        uVar12 = *(undefined8 *)PTR_PTR_04372408;
        auVar27 = NEON_ext(auVar33,auVar27,8,1);
        bVar10 = ((byte *)(*param_1 + (long)param_1))[3];
        local_78 = (byte *)(*param_1 + (long)param_1);
joined_r0x001d9ce0:
        do {
          uVar18 = (uint)(char)bVar10;
          if (-1 < (char)bVar10) goto LAB_001d9f60;
          while( true ) {
            iVar28 = (int)((long)local_80 + 1);
            fVar16 = (float)local_90;
            fVar20 = (float)local_a0;
            fVar17 = (float)((ulong)local_90 >> 0x20);
            fVar38 = (float)((ulong)local_a0 >> 0x20);
            fVar22 = (float)uStack_88;
            fVar21 = (float)uStack_98;
            iVar25 = local_80 + ((uint)*(ushort *)(local_78 + 4) | (local_78[3] & 0x7f) << 0x10) * 2
            ;
            pbVar15 = (byte *)((long)param_1 + ((long)local_80 + 1) * 6 + *param_1);
            pbVar14 = (byte *)((long)param_1 + (long)iVar25 * 6 + *param_1);
            bVar5 = pbVar15[1] >> 4;
            bVar6 = *pbVar15 >> 4;
            bVar10 = *pbVar15 & 0xf;
            bVar7 = *pbVar14 >> 4;
            fVar39 = (fVar16 - fVar20) * auVar27._0_4_;
            fVar40 = (fVar17 - fVar38) * auVar27._4_4_;
            fVar41 = (fVar22 - fVar21) * auVar27._8_4_;
            bVar8 = pbVar14[1] >> 4;
            bVar1 = pbVar14[2] & 0xf;
            bVar4 = pbVar14[2] >> 4;
            bVar2 = pbVar14[1] & 0xf;
            fVar42 = (float)(byte)(bVar6 * bVar6) * fVar39 + fVar20;
            bVar6 = pbVar15[2] >> 4;
            fVar44 = (float)(byte)(bVar5 * bVar5) * fVar40 + fVar38;
            local_100 = CONCAT44(fVar44,fVar42);
            fVar20 = (float)(byte)(bVar7 * bVar7) * fVar39 + fVar20;
            bVar5 = pbVar15[1] & 0xf;
            fVar45 = (float)(byte)(bVar6 * bVar6) * fVar41 + fVar21;
            bVar6 = pbVar15[2] & 0xf;
            uStack_f8 = (ulong)(uint)fVar45;
            fVar38 = (float)(byte)(bVar8 * bVar8) * fVar40 + fVar38;
            fVar43 = fVar17 - (float)(byte)(bVar5 * bVar5) * fVar40;
            fVar46 = fVar22 - (float)(byte)(bVar6 * bVar6) * fVar41;
            fVar47 = fVar16 - (float)(byte)(bVar10 * bVar10) * fVar39;
            local_f0 = CONCAT44(fVar43,fVar47);
            bVar10 = *pbVar14 & 0xf;
            local_e8 = (ulong)(uint)fVar46;
            local_d0 = CONCAT44(fVar38,fVar20);
            fVar21 = (float)(byte)(bVar4 * bVar4) * fVar41 + fVar21;
            fVar16 = fVar16 - (float)(byte)(bVar10 * bVar10) * fVar39;
            uStack_c8 = (ulong)(uint)fVar21;
            fVar17 = fVar17 - (float)(byte)(bVar2 * bVar2) * fVar40;
            fVar22 = fVar22 - (float)(byte)(bVar1 * bVar1) * fVar41;
            local_c0 = CONCAT44(fVar17,fVar16);
            uStack_b8 = (ulong)(uint)fVar22;
            bVar10 = 0;
            if (*(int *)(param_3 + 1) != 0) {
              iVar29 = -(uint)(*(float *)(param_3 + 2) <= fVar47);
              iVar31 = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar43);
              iVar34 = -(uint)(*(float *)(param_3 + 3) <= fVar46);
              iVar36 = -(uint)(fVar42 <= *(float *)(param_3 + 4));
              iVar23 = -(uint)(fVar44 <= *(float *)((long)param_3 + 0x24));
              iVar24 = -(uint)(fVar45 <= *(float *)(param_3 + 5));
              uVar18 = CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                                CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar29 >> 0x10)
                                         ,CONCAT11((byte)((uint)iVar36 >> 8) &
                                                   (byte)((uint)iVar29 >> 8),
                                                   (byte)iVar36 & (byte)iVar29)));
              iVar29 = -(uint)(*(float *)(param_3 + 2) <= fVar16);
              iVar36 = -(uint)(*(float *)((long)param_3 + 0x14) <= fVar17);
              iVar30 = -(uint)(*(float *)(param_3 + 3) <= fVar22);
              iVar32 = -(uint)(fVar20 <= *(float *)(param_3 + 4));
              iVar35 = -(uint)(fVar38 <= *(float *)((long)param_3 + 0x24));
              iVar37 = -(uint)(fVar21 <= *(float *)(param_3 + 5));
              uVar19 = CONCAT13((byte)((uint)iVar32 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                                CONCAT12((byte)((uint)iVar32 >> 0x10) & (byte)((uint)iVar29 >> 0x10)
                                         ,CONCAT11((byte)((uint)iVar32 >> 8) &
                                                   (byte)((uint)iVar29 >> 8),
                                                   (byte)iVar32 & (byte)iVar29)));
              bVar10 = (uVar18 & (uint)(CONCAT17((byte)((uint)iVar23 >> 0x18) &
                                                 (byte)((uint)iVar31 >> 0x18),
                                                 CONCAT16((byte)((uint)iVar23 >> 0x10) &
                                                          (byte)((uint)iVar31 >> 0x10),
                                                          CONCAT15((byte)((uint)iVar23 >> 8) &
                                                                   (byte)((uint)iVar31 >> 8),
                                                                   CONCAT14((byte)iVar23 &
                                                                            (byte)iVar31,uVar18))))
                                       >> 0x20) &
                       CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                                CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar34 >> 0x10)
                                         ,CONCAT11((byte)((uint)iVar24 >> 8) &
                                                   (byte)((uint)iVar34 >> 8),
                                                   (byte)iVar24 & (byte)iVar34)))) != 0;
              if ((uVar19 & (uint)(CONCAT17((byte)((uint)iVar35 >> 0x18) &
                                            (byte)((uint)iVar36 >> 0x18),
                                            CONCAT16((byte)((uint)iVar35 >> 0x10) &
                                                     (byte)((uint)iVar36 >> 0x10),
                                                     CONCAT15((byte)((uint)iVar35 >> 8) &
                                                              (byte)((uint)iVar36 >> 8),
                                                              CONCAT14((byte)iVar35 & (byte)iVar36,
                                                                       uVar19)))) >> 0x20) &
                  CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar30 >> 0x18),
                           CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar30 >> 0x10),
                                    CONCAT11((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar30 >> 8),
                                             (byte)iVar37 & (byte)iVar30)))) != 0) {
                bVar10 = bVar10 | 2;
              }
            }
            if (bVar10 == 3) {
              iVar29 = (int)param_2[1];
              uVar19 = *(uint *)((long)param_2 + 0xc);
              uVar18 = iVar29 + 1;
              if (iVar29 < (int)(uVar19 & 0x3fffffff)) {
                lVar11 = *param_2;
              }
              else {
                lVar11 = *param_2;
                if (0x3ffffffe < iVar29) {
                  FUN_032bd0a8(uVar18);
                  uVar19 = *(uint *)((long)param_2 + 0xc);
                }
                uVar19 = (uVar19 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar19) {
                  uVar19 = 0x3fffffff;
                }
                uVar3 = uVar18;
                if ((int)uVar18 <= (int)uVar19) {
                  uVar3 = uVar19;
                }
                lVar11 = FUN_032bd1d4(uVar12,uVar3,0x30,lVar11,iVar29,(uint *)((long)param_2 + 0xc))
                ;
                iVar29 = (int)param_2[1];
                *param_2 = lVar11;
              }
              *(uint *)(param_2 + 1) = uVar18;
              plVar13 = (long *)(lVar11 + (long)iVar29 * 0x30);
              plVar13[1] = uStack_c8;
              *plVar13 = local_d0;
              plVar13[3] = uStack_b8;
              plVar13[2] = local_c0;
              *(int *)(plVar13 + 4) = iVar25;
              bVar10 = pbVar15[3];
              local_80 = iVar28;
              local_78 = pbVar15;
              uStack_88 = local_e8;
              local_90 = local_f0;
              uStack_98 = uStack_f8;
              local_a0 = local_100;
              goto joined_r0x001da070;
            }
            if (bVar10 == 2) {
              bVar10 = pbVar14[3];
              local_78 = pbVar14;
              local_90 = local_c0;
              uStack_88 = uStack_b8;
              local_a0 = local_d0;
              uStack_98 = uStack_c8;
              local_80 = iVar25;
              goto joined_r0x001d9ce0;
            }
            if (bVar10 == 1) break;
            while( true ) {
              if ((int)param_2[1] <= (int)lVar9) {
                return;
              }
              iVar25 = (int)param_2[1] + -1;
              *(int *)(param_2 + 1) = iVar25;
              plVar13 = (long *)(*param_2 + (long)iVar25 * 0x30);
              local_80 = (int)plVar13[4];
              local_78 = (byte *)((long)param_1 + (long)(int)plVar13[4] * 6 + *param_1);
              uStack_98 = plVar13[1];
              local_a0 = *plVar13;
              uStack_88 = plVar13[3];
              local_90 = plVar13[2];
              bVar10 = local_78[3];
joined_r0x001da070:
              uVar18 = (uint)(char)bVar10;
              if ((int)uVar18 < 0) break;
LAB_001d9f60:
              if (*(int *)(param_3 + 1) == 0) {
                uVar18 = 0;
              }
              else {
                iVar25 = (**(code **)(**(long **)*param_3 + 0x10))
                                   (*(long **)*param_3,
                                    (uint)*(ushort *)(local_78 + 4) | (uVar18 & 0xff) << 0x10,
                                    &local_a0);
                uVar18 = (uint)(iVar25 != 0);
              }
              *(uint *)(param_3 + 1) = uVar18;
            }
          }
          bVar10 = pbVar15[3];
          local_78 = pbVar15;
          local_90 = local_f0;
          uStack_88 = local_e8;
          local_a0 = local_100;
          uStack_98 = uStack_f8;
          local_80 = iVar28;
        } while( true );
      }
    }
  }
  return;
}


