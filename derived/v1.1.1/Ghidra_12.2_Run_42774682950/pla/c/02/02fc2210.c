/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc2210; name: FUN_02fc2210
 */


void FUN_02fc2210(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  uint uVar15;
  undefined8 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  long *plVar19;
  int iVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  int iVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  long lVar44;
  ulong uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  uint local_c0;
  undefined8 local_b8;
  undefined2 local_b0 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar7 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    lVar51 = param_1[2];
    lVar14 = param_1[4];
    iVar20 = -(uint)((float)param_3[2] <= (float)lVar14);
    iVar26 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar14 >> 0x20));
    iVar27 = -(uint)((float)param_3[3] <= (float)param_1[5]);
    iVar28 = -(uint)((float)lVar51 <= (float)param_3[4]);
    iVar29 = -(uint)((float)((ulong)lVar51 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar30 = -(uint)((float)param_1[3] <= (float)param_3[5]);
    uVar21 = CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                      CONCAT12((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                               CONCAT11((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar20 >> 8),
                                        (byte)iVar28 & (byte)iVar20)));
    if ((uVar21 & (uint)(CONCAT17((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                                  CONCAT16((byte)((uint)iVar29 >> 0x10) &
                                           (byte)((uint)iVar26 >> 0x10),
                                           CONCAT15((byte)((uint)iVar29 >> 8) &
                                                    (byte)((uint)iVar26 >> 8),
                                                    CONCAT14((byte)iVar29 & (byte)iVar26,uVar21))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                 CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                          CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar27 >> 8),
                                   (byte)iVar30 & (byte)iVar27)))) != 0) {
      lVar6 = param_2[1];
      uVar11 = 0;
      pbVar18 = (byte *)(*param_1 + (long)param_1);
      uVar45 = param_1[5];
      uVar52 = param_1[3];
LAB_02fc22e0:
      bVar3 = pbVar18[3];
      if ((char)bVar3 < '\0') goto LAB_02fc2518;
      plVar19 = (long *)*param_3;
      uVar21 = (uint)CONCAT12(bVar3,*(undefined2 *)(pbVar18 + 4));
      uVar8 = (**(code **)(**(long **)(*plVar19 + 0x50) + 0x70))(*(long **)(*plVar19 + 0x50),uVar21)
      ;
      uVar9 = (**(code **)(**(long **)(*plVar19 + 0x50) + 0x78))(*(long **)(*plVar19 + 0x50),uVar21)
      ;
      iVar20 = (**(code **)(**(long **)(*plVar19 + 0x50) + 0x20))();
      uVar15 = 1;
      if (((uVar9 ^ 0xffffffff) & 7) != 0) {
        uVar15 = 2;
      }
      uVar9 = 0;
      uVar2 = 1;
      if (iVar20 <= (int)uVar21) {
        uVar2 = uVar15;
      }
      do {
        puVar13 = (undefined8 *)plVar19[4];
        uVar15 = ((uVar9 | uVar21 << 1) + 1 <<
                 (ulong)(-((uint)*(byte *)(*plVar19 + 0x1c) + *(int *)((long)puVar13 + 0x1c)) & 0x1f
                        )) - 1 |
                 (&DAT_03aa74b0)[*(int *)((long)puVar13 + 0x1c)] & *(uint *)(puVar13 + 3);
        if (*(long *)plVar19[2] != 0) {
          local_78 = *(undefined8 *)plVar19[5];
          uStack_70 = ((undefined8 *)plVar19[5])[1];
          plVar10 = *(long **)plVar19[2];
          (**(code **)(*plVar10 + 0x40))
                    (plVar10,uVar8,6,*puVar13,puVar13[1],*plVar19,uVar15,0,&local_78);
          lVar14 = plVar19[2];
          if (*(long *)(lVar14 + 8) != 0) {
            local_b0[0] = *(undefined2 *)(lVar14 + 0x10);
            uVar16 = *(undefined8 *)(lVar14 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) =
                 *(undefined4 *)(lVar14 + 0x1c);
            *(undefined8 *)((ulong)local_b0 | 4) = uVar16;
            puVar13 = (undefined8 *)plVar19[3];
            local_a0 = *puVar13;
            local_98 = puVar13[1];
            local_90 = puVar13[2];
            local_88 = *(undefined4 *)(puVar13 + 3);
            local_e8[0] = (undefined2)local_78;
            uVar16 = *(undefined8 *)((ulong)&local_78 | 4);
            local_80 = 0;
            *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) =
                 *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
            *(undefined8 *)((ulong)local_e8 | 4) = uVar16;
            local_d8 = *(undefined8 *)plVar19[4];
            local_d0 = ((undefined8 *)plVar19[4])[1];
            local_c8 = *plVar19;
            local_b8 = 0;
            local_c0 = uVar15;
            uVar11 = (**(code **)(**(long **)(lVar14 + 8) + 0x40))
                               (*(long **)(lVar14 + 8),6,1,local_b0,local_e8);
            if ((uVar11 & 1) == 0) break;
          }
        }
        plVar10 = (long *)plVar19[6];
        iVar26 = (int)plVar10[1];
        lVar14 = *plVar10;
        iVar20 = iVar26 + 1;
        if ((int)(*(uint *)((long)plVar10 + 0xc) & 0x3fffffff) <= iVar26) {
          lVar14 = FUN_02f7f7b8(puVar7,iVar20);
          *plVar10 = lVar14;
          iVar26 = (int)plVar10[1];
        }
        uVar9 = uVar9 + 1;
        *(uint *)(lVar14 + (long)iVar26 * 4) = uVar15;
        *(int *)(plVar10 + 1) = iVar20;
      } while (uVar9 < uVar2);
      goto LAB_02fc24d0;
    }
  }
  return;
LAB_02fc2518:
  uVar1 = (long)(int)uVar11 + 1;
  fVar24 = (float)((ulong)lVar14 >> 0x20);
  fVar25 = (float)uVar45;
  uVar21 = (int)uVar11 + ((uint)*(ushort *)(pbVar18 + 4) | (bVar3 & 0x7f) << 0x10) * 2;
  fVar42 = (float)lVar14;
  fVar37 = (float)lVar51;
  fVar22 = (float)((ulong)lVar51 >> 0x20);
  fVar23 = (float)uVar52;
  fVar31 = (fVar42 - fVar37) * 0.0044247787;
  fVar33 = (fVar24 - fVar22) * 0.0044247787;
  fVar35 = (fVar25 - fVar23) * 0.0044247787;
  pbVar18 = (byte *)((long)param_1 + uVar1 * 6 + *param_1);
  pbVar17 = (byte *)((long)param_1 + (long)(int)uVar21 * 6 + *param_1);
  bVar5 = *pbVar18 >> 4;
  bVar3 = *pbVar18 & 0xf;
  fVar46 = fVar37 + (float)(byte)(bVar5 * bVar5) * fVar31;
  fVar47 = fVar42 - (float)(byte)(bVar3 * bVar3) * fVar31;
  bVar5 = pbVar18[1] >> 4;
  bVar3 = *pbVar17 & 0xf;
  fVar48 = fVar22 + (float)(byte)(bVar5 * bVar5) * fVar33;
  bVar4 = *pbVar17 >> 4;
  lVar51 = CONCAT44(fVar48,fVar46);
  bVar5 = pbVar18[1] & 0xf;
  fVar37 = fVar37 + (float)(byte)(bVar4 * bVar4) * fVar31;
  fVar41 = fVar24 - (float)(byte)(bVar5 * bVar5) * fVar33;
  lVar14 = CONCAT44(fVar41,fVar47);
  bVar4 = pbVar18[2] >> 4;
  bVar5 = pbVar18[2] & 0xf;
  fVar49 = fVar23 + (float)(byte)(bVar4 * bVar4) * fVar35;
  fVar42 = fVar42 - (float)(byte)(bVar3 * bVar3) * fVar31;
  bVar3 = pbVar17[1] >> 4;
  uVar52 = (ulong)(uint)fVar49;
  fVar43 = fVar25 - (float)(byte)(bVar5 * bVar5) * fVar35;
  uVar45 = (ulong)(uint)fVar43;
  bVar4 = pbVar17[2] >> 4;
  fVar22 = fVar22 + (float)(byte)(bVar3 * bVar3) * fVar33;
  bVar3 = pbVar17[1] & 0xf;
  lVar44 = CONCAT44(fVar22,fVar37);
  bVar5 = pbVar17[2] & 0xf;
  fVar23 = fVar23 + (float)(byte)(bVar4 * bVar4) * fVar35;
  fVar24 = fVar24 - (float)(byte)(bVar3 * bVar3) * fVar33;
  lVar50 = CONCAT44(fVar24,fVar42);
  fVar25 = fVar25 - (float)(byte)(bVar5 * bVar5) * fVar35;
  fVar35 = (float)param_3[4];
  iVar38 = -(uint)(fVar46 <= fVar35);
  fVar46 = (float)((ulong)param_3[4] >> 0x20);
  iVar39 = -(uint)(fVar48 <= fVar46);
  iVar40 = -(uint)(fVar49 <= (float)param_3[5]);
  fVar31 = (float)param_3[2];
  iVar32 = -(uint)(fVar31 <= fVar47);
  fVar33 = (float)((ulong)param_3[2] >> 0x20);
  iVar34 = -(uint)(fVar33 <= fVar41);
  iVar36 = -(uint)((float)param_3[3] <= fVar43);
  iVar20 = -(uint)(fVar31 <= fVar42);
  iVar26 = -(uint)(fVar33 <= fVar24);
  iVar27 = -(uint)((float)param_3[3] <= fVar25);
  iVar28 = -(uint)(fVar37 <= fVar35);
  iVar29 = -(uint)(fVar22 <= fVar46);
  iVar30 = -(uint)(fVar23 <= (float)param_3[5]);
  uVar15 = CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                    CONCAT12((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                             CONCAT11((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar20 >> 8),
                                      (byte)iVar28 & (byte)iVar20)));
  bVar3 = (CONCAT13((byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                    CONCAT12((byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar32 >> 0x10),
                             CONCAT11((byte)((uint)iVar38 >> 8) & (byte)((uint)iVar32 >> 8),
                                      (byte)iVar38 & (byte)iVar32))) &
           CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                    CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                             CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar34 >> 8),
                                      (byte)iVar39 & (byte)iVar34))) &
          CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar36 >> 0x18),
                   CONCAT12((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar36 >> 0x10),
                            CONCAT11((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar36 >> 8),
                                     (byte)iVar40 & (byte)iVar36)))) != 0 |
          ((uVar15 & (uint)(CONCAT17((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                                     CONCAT16((byte)((uint)iVar29 >> 0x10) &
                                              (byte)((uint)iVar26 >> 0x10),
                                              CONCAT15((byte)((uint)iVar29 >> 8) &
                                                       (byte)((uint)iVar26 >> 8),
                                                       CONCAT14((byte)iVar29 & (byte)iVar26,uVar15))
                                             )) >> 0x20) &
           CONCAT13((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                    CONCAT12((byte)((uint)iVar30 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                             CONCAT11((byte)((uint)iVar30 >> 8) & (byte)((uint)iVar27 >> 8),
                                      (byte)iVar30 & (byte)iVar27)))) != 0) << 1;
  uVar11 = uVar1 & 0xffffffff;
  if (bVar3 != 1) {
    if (bVar3 == 3) {
      iVar26 = (int)param_2[1];
      lVar12 = *param_2;
      iVar20 = iVar26 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar26) {
        lVar12 = FUN_02fb5338(puVar7,iVar20,lVar12,iVar26,(long)param_2 + 0xc);
        iVar26 = (int)param_2[1];
        *param_2 = lVar12;
      }
      plVar19 = (long *)(lVar12 + (long)iVar26 * 0x30);
      *(int *)(param_2 + 1) = iVar20;
      uVar11 = uVar1 & 0xffffffff;
      *(uint *)(plVar19 + 4) = uVar21;
      plVar19[1] = (ulong)(uint)fVar23;
      *plVar19 = lVar44;
      plVar19[3] = (ulong)(uint)fVar25;
      plVar19[2] = lVar50;
    }
    else if (bVar3 == 2) {
      uVar11 = (ulong)uVar21;
      pbVar18 = pbVar17;
      lVar14 = lVar50;
      uVar45 = (ulong)(uint)fVar25;
      lVar51 = lVar44;
      uVar52 = (ulong)(uint)fVar23;
    }
    else {
LAB_02fc24d0:
      if ((int)param_2[1] <= (int)lVar6) {
        return;
      }
      iVar20 = (int)param_2[1] + -1;
      plVar19 = (long *)(*param_2 + (long)iVar20 * 0x30);
      *(int *)(param_2 + 1) = iVar20;
      uVar11 = (long)(int)plVar19[4];
      pbVar18 = (byte *)((long)param_1 + (long)(int)plVar19[4] * 6 + *param_1);
      lVar14 = plVar19[2];
      uVar45 = plVar19[3];
      lVar51 = *plVar19;
      uVar52 = plVar19[1];
    }
  }
  goto LAB_02fc22e0;
}


