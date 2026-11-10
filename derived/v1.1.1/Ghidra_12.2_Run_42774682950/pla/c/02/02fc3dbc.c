/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc3dbc; name: FUN_02fc3dbc
 */


void FUN_02fc3dbc(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined4 uVar20;
  long lVar21;
  byte *pbVar22;
  long *plVar23;
  undefined8 *puVar24;
  int iVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  ulong uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  long lVar54;
  ulong uVar55;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  puVar7 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    lVar19 = param_1[2];
    lVar15 = param_1[4];
    iVar25 = -(uint)((float)param_3[2] <= (float)lVar15);
    iVar31 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar15 >> 0x20));
    iVar32 = -(uint)((float)param_3[3] <= (float)param_1[5]);
    iVar33 = -(uint)((float)lVar19 <= (float)param_3[4]);
    iVar34 = -(uint)((float)((ulong)lVar19 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar35 = -(uint)((float)param_1[3] <= (float)param_3[5]);
    uVar26 = CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                      CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                               CONCAT11((byte)((uint)iVar33 >> 8) & (byte)((uint)iVar25 >> 8),
                                        (byte)iVar33 & (byte)iVar25)));
    if ((uVar26 & (uint)(CONCAT17((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                                  CONCAT16((byte)((uint)iVar34 >> 0x10) &
                                           (byte)((uint)iVar31 >> 0x10),
                                           CONCAT15((byte)((uint)iVar34 >> 8) &
                                                    (byte)((uint)iVar31 >> 8),
                                                    CONCAT14((byte)iVar34 & (byte)iVar31,uVar26))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                 CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar32 >> 0x10),
                          CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar32 >> 8),
                                   (byte)iVar35 & (byte)iVar32)))) != 0) {
      lVar6 = param_2[1];
      puVar24 = (undefined8 *)((ulong)&local_100 | 4);
      uVar11 = 0;
      pbVar22 = (byte *)(*param_1 + (long)param_1);
      uVar49 = param_1[5];
      uVar55 = param_1[3];
LAB_02fc3ea4:
      bVar2 = pbVar22[3];
      if ((char)bVar2 < '\0') goto LAB_02fc3f1c;
      plVar23 = (long *)*param_3;
      uVar26 = (uint)CONCAT12(bVar2,*(undefined2 *)(pbVar22 + 4));
      uVar8 = (**(code **)(**(long **)(*plVar23 + 0x50) + 0x70))(*(long **)(*plVar23 + 0x50),uVar26)
      ;
      uVar9 = (**(code **)(**(long **)(*plVar23 + 0x50) + 0x78))(*(long **)(*plVar23 + 0x50),uVar26)
      ;
      iVar25 = (**(code **)(**(long **)(*plVar23 + 0x50) + 0x20))();
      if ((int)uVar26 < iVar25) {
        uVar13 = 1;
      }
      else {
        uVar13 = 1;
        if (((uVar9 ^ 0xffffffff) & 7) != 0) {
          uVar13 = 2;
        }
      }
      uVar9 = 0;
      do {
        plVar14 = (long *)plVar23[4];
        uVar4 = ((uVar9 | uVar26 << 1) + 1 <<
                (ulong)(-((uint)*(byte *)(*plVar23 + 0x1c) + *(int *)((long)plVar14 + 0x1c)) & 0x1f)
                ) - 1 | (&DAT_03aa74b0)[*(int *)((long)plVar14 + 0x1c)] & *(uint *)(plVar14 + 3);
        if (*(long *)plVar23[2] == 0) {
          lVar15 = *plVar14;
          plVar14 = (long *)plVar23[6];
          lVar19 = *(long *)plVar23[3];
          uVar20 = 0xffffff;
          local_b0 = 0xffff;
          local_ac = 0;
          local_88 = 0xffff;
          local_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          if (lVar19 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar19 + 0xb0);
            uVar20 = *(undefined4 *)(lVar19 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar20);
          if (lVar15 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar15 + 0xb0);
            local_98 = *(undefined4 *)(lVar15 + 0x50);
          }
        }
        else {
          local_100 = *(undefined8 *)plVar23[5];
          uStack_f8 = ((undefined8 *)plVar23[5])[1];
          plVar10 = *(long **)plVar23[2];
          (**(code **)(*plVar10 + 0x40))
                    (plVar10,uVar8,6,*plVar14,plVar14[1],*plVar23,uVar4,0,&local_100);
          lVar15 = plVar23[2];
          if (*(long *)(lVar15 + 8) != 0) {
            local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar15 + 0x10));
            uVar17 = *(undefined8 *)(lVar15 + 0x14);
            *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                 *(undefined4 *)(lVar15 + 0x1c);
            *(undefined8 *)((ulong)&local_f0 | 4) = uVar17;
            puVar18 = (undefined8 *)plVar23[3];
            local_e0 = *puVar18;
            local_d8 = puVar18[1];
            local_d0 = puVar18[2];
            local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar18 + 3));
            local_138[0] = (undefined2)local_100;
            uVar17 = *puVar24;
            local_c0 = 0;
            *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) = *(undefined4 *)(puVar24 + 1)
            ;
            *(undefined8 *)((ulong)local_138 | 4) = uVar17;
            local_128 = *(undefined8 *)plVar23[4];
            local_120 = ((undefined8 *)plVar23[4])[1];
            local_118 = *plVar23;
            local_108 = 0;
            local_110 = uVar4;
            uVar11 = (**(code **)(**(long **)(lVar15 + 8) + 0x40))
                               (*(long **)(lVar15 + 8),6,1,&local_f0,local_138);
            if ((uVar11 & 1) == 0) break;
            lVar15 = plVar23[2];
          }
          plVar14 = (long *)plVar23[6];
          lVar21 = *(long *)plVar23[3];
          lVar19 = *(long *)plVar23[4];
          uVar20 = 0xffffff;
          if (lVar21 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar21 + 0xb0);
            uVar20 = *(undefined4 *)(lVar21 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar20);
          local_b0 = *(undefined2 *)(lVar15 + 0x10);
          uStack_a4 = *(undefined4 *)(lVar15 + 0x1c);
          local_ac = (undefined4)*(undefined8 *)(lVar15 + 0x14);
          uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x14) >> 0x20);
          if (lVar19 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar19 + 0xb0);
            local_98 = *(undefined4 *)(lVar19 + 0x50);
          }
          uStack_7c = *(undefined4 *)(puVar24 + 1);
          local_88 = (undefined2)local_100;
          local_84 = (undefined4)*puVar24;
          uStack_80 = (undefined4)((ulong)*puVar24 >> 0x20);
        }
        local_d0 = local_d0 & 0xffffffff00000000;
        uStack_74 = 0;
        local_78 = 6;
        local_8c = 0xf;
        local_b4 = 0xf;
        local_b8 = 0xffffffff;
        local_d8 = 0;
        local_e0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        local_90 = uVar4;
        (**(code **)(*plVar14 + 0x28))(plVar14,&local_f0);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar13);
      goto LAB_02fc4424;
    }
  }
  return;
LAB_02fc3f1c:
  uVar1 = (long)(int)uVar11 + 1;
  fVar29 = (float)((ulong)lVar15 >> 0x20);
  fVar30 = (float)uVar49;
  fVar47 = (float)lVar15;
  fVar42 = (float)lVar19;
  fVar27 = (float)((ulong)lVar19 >> 0x20);
  fVar28 = (float)uVar55;
  uVar26 = (int)uVar11 + ((uint)*(ushort *)(pbVar22 + 4) | (bVar2 & 0x7f) << 0x10) * 2;
  fVar36 = (fVar47 - fVar42) * 0.0044247787;
  fVar38 = (fVar29 - fVar27) * 0.0044247787;
  fVar40 = (fVar30 - fVar28) * 0.0044247787;
  pbVar22 = (byte *)((long)param_1 + uVar1 * 6 + *param_1);
  pbVar16 = (byte *)((long)param_1 + (long)(int)uVar26 * 6 + *param_1);
  bVar5 = *pbVar22 >> 4;
  bVar2 = *pbVar22 & 0xf;
  fVar50 = fVar42 + (float)(byte)(bVar5 * bVar5) * fVar36;
  fVar51 = fVar47 - (float)(byte)(bVar2 * bVar2) * fVar36;
  bVar5 = pbVar22[1] >> 4;
  bVar2 = *pbVar16 & 0xf;
  fVar52 = fVar27 + (float)(byte)(bVar5 * bVar5) * fVar38;
  bVar3 = *pbVar16 >> 4;
  lVar19 = CONCAT44(fVar52,fVar50);
  bVar5 = pbVar22[1] & 0xf;
  fVar42 = fVar42 + (float)(byte)(bVar3 * bVar3) * fVar36;
  fVar46 = fVar29 - (float)(byte)(bVar5 * bVar5) * fVar38;
  lVar15 = CONCAT44(fVar46,fVar51);
  bVar3 = pbVar22[2] >> 4;
  bVar5 = pbVar22[2] & 0xf;
  fVar53 = fVar28 + (float)(byte)(bVar3 * bVar3) * fVar40;
  fVar47 = fVar47 - (float)(byte)(bVar2 * bVar2) * fVar36;
  bVar2 = pbVar16[1] >> 4;
  uVar55 = (ulong)(uint)fVar53;
  fVar48 = fVar30 - (float)(byte)(bVar5 * bVar5) * fVar40;
  uVar49 = (ulong)(uint)fVar48;
  bVar3 = pbVar16[2] >> 4;
  fVar27 = fVar27 + (float)(byte)(bVar2 * bVar2) * fVar38;
  bVar2 = pbVar16[1] & 0xf;
  lVar21 = CONCAT44(fVar27,fVar42);
  bVar5 = pbVar16[2] & 0xf;
  fVar28 = fVar28 + (float)(byte)(bVar3 * bVar3) * fVar40;
  fVar29 = fVar29 - (float)(byte)(bVar2 * bVar2) * fVar38;
  lVar54 = CONCAT44(fVar29,fVar47);
  fVar30 = fVar30 - (float)(byte)(bVar5 * bVar5) * fVar40;
  fVar40 = (float)param_3[4];
  iVar43 = -(uint)(fVar50 <= fVar40);
  fVar50 = (float)((ulong)param_3[4] >> 0x20);
  iVar44 = -(uint)(fVar52 <= fVar50);
  iVar45 = -(uint)(fVar53 <= (float)param_3[5]);
  fVar36 = (float)param_3[2];
  iVar37 = -(uint)(fVar36 <= fVar51);
  fVar38 = (float)((ulong)param_3[2] >> 0x20);
  iVar39 = -(uint)(fVar38 <= fVar46);
  iVar41 = -(uint)((float)param_3[3] <= fVar48);
  iVar25 = -(uint)(fVar36 <= fVar47);
  iVar31 = -(uint)(fVar38 <= fVar29);
  iVar32 = -(uint)((float)param_3[3] <= fVar30);
  iVar33 = -(uint)(fVar42 <= fVar40);
  iVar34 = -(uint)(fVar27 <= fVar50);
  iVar35 = -(uint)(fVar28 <= (float)param_3[5]);
  uVar9 = CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                   CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                            CONCAT11((byte)((uint)iVar33 >> 8) & (byte)((uint)iVar25 >> 8),
                                     (byte)iVar33 & (byte)iVar25)));
  bVar2 = (CONCAT13((byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                    CONCAT12((byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                             CONCAT11((byte)((uint)iVar43 >> 8) & (byte)((uint)iVar37 >> 8),
                                      (byte)iVar43 & (byte)iVar37))) &
           CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                    CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                             CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar39 >> 8),
                                      (byte)iVar44 & (byte)iVar39))) &
          CONCAT13((byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar41 >> 0x18),
                   CONCAT12((byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar41 >> 0x10),
                            CONCAT11((byte)((uint)iVar45 >> 8) & (byte)((uint)iVar41 >> 8),
                                     (byte)iVar45 & (byte)iVar41)))) != 0 |
          ((uVar9 & (uint)(CONCAT17((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                                    CONCAT16((byte)((uint)iVar34 >> 0x10) &
                                             (byte)((uint)iVar31 >> 0x10),
                                             CONCAT15((byte)((uint)iVar34 >> 8) &
                                                      (byte)((uint)iVar31 >> 8),
                                                      CONCAT14((byte)iVar34 & (byte)iVar31,uVar9))))
                          >> 0x20) &
           CONCAT13((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                    CONCAT12((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar32 >> 0x10),
                             CONCAT11((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar32 >> 8),
                                      (byte)iVar35 & (byte)iVar32)))) != 0) << 1;
  uVar11 = uVar1 & 0xffffffff;
  if (bVar2 != 1) {
    if (bVar2 == 3) {
      iVar31 = (int)param_2[1];
      lVar12 = *param_2;
      iVar25 = iVar31 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar31) {
        lVar12 = FUN_02fb5338(puVar7,iVar25,lVar12,iVar31,(long)param_2 + 0xc);
        *param_2 = lVar12;
        iVar31 = (int)param_2[1];
      }
      plVar23 = (long *)(lVar12 + (long)iVar31 * 0x30);
      *(int *)(param_2 + 1) = iVar25;
      uVar11 = uVar1 & 0xffffffff;
      *(uint *)(plVar23 + 4) = uVar26;
      plVar23[1] = (ulong)(uint)fVar28;
      *plVar23 = lVar21;
      plVar23[3] = (ulong)(uint)fVar30;
      plVar23[2] = lVar54;
    }
    else if (bVar2 == 2) {
      uVar11 = (ulong)uVar26;
      pbVar22 = pbVar16;
      lVar15 = lVar54;
      uVar49 = (ulong)(uint)fVar30;
      lVar19 = lVar21;
      uVar55 = (ulong)(uint)fVar28;
    }
    else {
LAB_02fc4424:
      if ((int)param_2[1] <= (int)lVar6) {
        return;
      }
      iVar25 = (int)param_2[1] + -1;
      plVar23 = (long *)(*param_2 + (long)iVar25 * 0x30);
      *(int *)(param_2 + 1) = iVar25;
      uVar11 = (long)(int)plVar23[4];
      pbVar22 = (byte *)((long)param_1 + (long)(int)plVar23[4] * 6 + *param_1);
      lVar15 = plVar23[2];
      uVar49 = plVar23[3];
      lVar19 = *plVar23;
      uVar55 = plVar23[1];
    }
  }
  goto LAB_02fc3ea4;
}


