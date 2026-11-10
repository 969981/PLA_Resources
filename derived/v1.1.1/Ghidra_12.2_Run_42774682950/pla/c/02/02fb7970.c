/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb7970; name: FUN_02fb7970
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02fb7970(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  long lVar11;
  undefined *puVar12;
  bool bVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 uVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  undefined2 *puVar26;
  byte *pbVar27;
  uint uVar28;
  undefined8 *puVar29;
  long lVar30;
  int iVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  int iVar45;
  float fVar46;
  int iVar47;
  float fVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  ulong uVar58;
  undefined2 local_138 [8];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
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
  
  puVar12 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    uVar58 = param_1[3];
    lVar14 = param_1[2];
    uVar15 = param_1[5];
    lVar30 = param_1[4];
    iVar31 = -(uint)((float)param_3[2] <= (float)lVar30);
    iVar37 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar30 >> 0x20));
    iVar38 = -(uint)((float)param_3[3] <= (float)uVar15);
    iVar39 = -(uint)((float)lVar14 <= (float)param_3[4]);
    iVar40 = -(uint)((float)((ulong)lVar14 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar41 = -(uint)((float)uVar58 <= (float)param_3[5]);
    uVar32 = CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                      CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                               CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar31 >> 8),
                                        (byte)iVar39 & (byte)iVar31)));
    if ((uVar32 & (uint)(CONCAT17((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                                  CONCAT16((byte)((uint)iVar40 >> 0x10) &
                                           (byte)((uint)iVar37 >> 0x10),
                                           CONCAT15((byte)((uint)iVar40 >> 8) &
                                                    (byte)((uint)iVar37 >> 8),
                                                    CONCAT14((byte)iVar40 & (byte)iVar37,uVar32))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar38 >> 0x18),
                 CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar38 >> 0x10),
                          CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar38 >> 8),
                                   (byte)iVar41 & (byte)iVar38)))) != 0) {
      lVar11 = param_2[1];
      puVar29 = (undefined8 *)((ulong)&local_100 | 4);
      uVar19 = 0;
      bVar5 = *(byte *)((long)param_1 + *param_1 + 3);
joined_r0x02fb7a40:
      do {
        while (uVar32 = (uint)bVar5, (bVar5 & 1) == 0) {
          lVar30 = *param_3;
          if (*(char *)(lVar30 + 0xf1) == '\0') {
            bVar5 = bVar5 >> 1;
            lVar14 = *(long *)(lVar30 + 0x68) + (ulong)bVar5 * 4;
            bVar6 = *(byte *)(lVar14 + 3);
            if ((uint)*(byte *)(lVar14 + 1) == (uint)bVar6) {
              if (*(byte *)(lVar14 + 2) - 3 < 2) goto LAB_02fb7cf0;
            }
            else {
              if ((uint)*(byte *)(lVar14 + 2) == (uint)bVar6) {
LAB_02fb7cf0:
                uVar32 = uVar32 & 0xfe | *(int *)(lVar30 + 0x94) << 8;
                uVar18 = 1;
              }
              else {
                uVar32 = uVar32 & 0xfe | *(int *)(lVar30 + 0x94) << 8;
                uVar18 = 1;
                if ((*(byte *)(lVar30 + 0x58) & *(byte *)(lVar14 + 1)) <= bVar6) {
                  uVar18 = 2;
                }
              }
              uVar28 = 0;
              do {
                plVar21 = *(long **)(lVar30 + 0xd8);
                lVar14 = plVar21[5];
                if (lVar14 == 0) {
LAB_02fb7d4c:
                  uVar8 = (&DAT_03aa74b0)[*(int *)((long)plVar21 + 0x1c)] & *(uint *)(plVar21 + 3) |
                          (uVar32 + 1 <<
                          (ulong)(-(*(int *)(*(long *)(lVar30 + 0x50) + 0x34) +
                                   *(int *)((long)plVar21 + 0x1c)) & 0x1f)) - 1;
                  if (**(long **)(lVar30 + 0xc0) == 0) {
                    lVar14 = *plVar21;
                    plVar21 = *(long **)(lVar30 + 0xe8);
                    lVar24 = **(long **)(lVar30 + 200);
                    uVar20 = 0xffffff;
                    local_b0 = 0xffff;
                    local_ac = 0;
                    local_88 = 0xffff;
                    local_84 = 0;
                    uStack_80 = 0;
                    uStack_7c = 0;
                    uStack_a8 = 0;
                    uStack_a4 = 0;
                    if (lVar24 == 0) {
                      local_c8 = 0xffffffffffffffff;
                    }
                    else {
                      local_c8 = *(undefined8 *)(lVar24 + 0xb0);
                      uVar20 = *(undefined4 *)(lVar24 + 0x50);
                    }
                    local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar20);
                    if (lVar14 == 0) {
                      local_98 = 0xffffff;
                      local_a0 = 0xffffffffffffffff;
                    }
                    else {
                      local_a0 = *(undefined8 *)(lVar14 + 0xb0);
                      local_98 = *(undefined4 *)(lVar14 + 0x50);
                    }
                  }
                  else {
                    lVar14 = *(long *)(lVar30 + 0x88);
                    iVar31 = *(byte *)(*(long *)(lVar30 + 0x60) + 0x5a) - 1;
                    if (iVar31 < 4) {
                      iVar37 = 0;
                    }
                    else {
                      iVar37 = 0;
                      do {
                        iVar38 = iVar37 + iVar31 >> 1;
                        iVar39 = (uint)bVar5 - (uint)*(byte *)(lVar14 + (long)iVar38 * 4 + 2);
                        if (iVar39 < 0) {
                          iVar31 = iVar38;
                        }
                        else {
                          puVar26 = (undefined2 *)
                                    (lVar14 + ((long)((ulong)(uint)(iVar37 + iVar31) << 0x20) >>
                                              0x21) * 4);
                          if (iVar39 < (int)(uint)*(byte *)((long)puVar26 + 3)) goto LAB_02fb7eb4;
                          iVar37 = iVar38 + 1;
                        }
                      } while (3 < iVar31 - iVar37);
                    }
                    for (puVar26 = (undefined2 *)(lVar14 + (long)iVar37 * 4);
                        (iVar31 = (uint)bVar5 - (uint)*(byte *)(puVar26 + 1), iVar31 < 0 ||
                        ((int)(uint)*(byte *)((long)puVar26 + 3) <= iVar31)); puVar26 = puVar26 + 2)
                    {
                    }
LAB_02fb7eb4:
                    local_100 = **(undefined8 **)(lVar30 + 0xe0);
                    uStack_f8 = (*(undefined8 **)(lVar30 + 0xe0))[1];
                    plVar16 = (long *)**(long **)(lVar30 + 0xc0);
                    (**(code **)(*plVar16 + 0x40))
                              (plVar16,*puVar26,6,*plVar21,plVar21[1],*(undefined8 *)(lVar30 + 0xd0)
                               ,uVar8,0,&local_100);
                    lVar14 = *(long *)(lVar30 + 0xc0);
                    if (*(long *)(lVar14 + 8) != 0) {
                      local_f0 = CONCAT62(local_f0._2_6_,*(undefined2 *)(lVar14 + 0x10));
                      uVar22 = *(undefined8 *)(lVar14 + 0x14);
                      *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                           *(undefined4 *)(lVar14 + 0x1c);
                      *(undefined8 *)((ulong)&local_f0 | 4) = uVar22;
                      puVar23 = *(undefined8 **)(lVar30 + 200);
                      local_e0 = *puVar23;
                      local_d8 = puVar23[1];
                      local_d0 = puVar23[2];
                      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(puVar23 + 3));
                      local_138[0] = (undefined2)local_100;
                      uVar22 = *puVar29;
                      local_c0 = 0;
                      *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) =
                           *(undefined4 *)(puVar29 + 1);
                      *(undefined8 *)((ulong)local_138 | 4) = uVar22;
                      local_128 = **(undefined8 **)(lVar30 + 0xd8);
                      local_120 = (*(undefined8 **)(lVar30 + 0xd8))[1];
                      local_118 = *(undefined8 *)(lVar30 + 0xd0);
                      local_108 = 0;
                      local_110 = uVar8;
                      uVar15 = (**(code **)(**(long **)(lVar14 + 8) + 0x40))
                                         (*(long **)(lVar14 + 8),6,1,&local_f0,local_138);
                      if ((uVar15 & 1) == 0) goto LAB_02fb7d0c;
                      lVar14 = *(long *)(lVar30 + 0xc0);
                    }
                    plVar21 = *(long **)(lVar30 + 0xe8);
                    lVar25 = **(long **)(lVar30 + 200);
                    lVar24 = **(long **)(lVar30 + 0xd8);
                    uVar20 = 0xffffff;
                    if (lVar25 == 0) {
                      local_c8 = 0xffffffffffffffff;
                    }
                    else {
                      local_c8 = *(undefined8 *)(lVar25 + 0xb0);
                      uVar20 = *(undefined4 *)(lVar25 + 0x50);
                    }
                    local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar20);
                    local_b0 = *(undefined2 *)(lVar14 + 0x10);
                    uStack_a4 = *(undefined4 *)(lVar14 + 0x1c);
                    local_ac = (undefined4)*(undefined8 *)(lVar14 + 0x14);
                    uStack_a8 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x14) >> 0x20);
                    if (lVar24 == 0) {
                      local_98 = 0xffffff;
                      local_a0 = 0xffffffffffffffff;
                    }
                    else {
                      local_a0 = *(undefined8 *)(lVar24 + 0xb0);
                      local_98 = *(undefined4 *)(lVar24 + 0x50);
                    }
                    uStack_7c = *(undefined4 *)(puVar29 + 1);
                    local_88 = (undefined2)local_100;
                    local_84 = (undefined4)*puVar29;
                    uStack_80 = (undefined4)((ulong)*puVar29 >> 0x20);
                  }
                  uStack_74 = 0;
                  local_78 = 6;
                  local_8c = 0xf;
                  local_b4 = 0xf;
                  local_b8 = 0xffffffff;
                  local_d0 = local_d0 & 0xffffffff00000000;
                  local_d8 = 0;
                  local_e0 = 0;
                  uStack_e8 = 0;
                  local_f0 = 0;
                  local_90 = uVar8;
                  (**(code **)(*plVar21 + 0x28))(plVar21,&local_f0);
                }
                else {
                  uVar15 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar14 + 0x18) * 0x40 +
                                       0x4020))
                                     (lVar14,uVar32 << (ulong)(*(uint *)(lVar30 + 0xa0) & 0x1f));
                  if ((uVar15 & 1) != 0) {
                    plVar21 = *(long **)(lVar30 + 0xd8);
                    goto LAB_02fb7d4c;
                  }
                }
LAB_02fb7d0c:
                uVar32 = uVar32 + 1;
                uVar28 = uVar28 + 1;
              } while (uVar28 < uVar18);
              bVar13 = false;
              if (*(char *)(lVar30 + 0xf0) != '\0') {
                bVar13 = *(int *)(*(long *)(lVar30 + 0xe8) + 0xc) != 0;
              }
              *(byte *)(lVar30 + 0xf1) = *(byte *)(lVar30 + 0xf1) | bVar13;
            }
          }
LAB_02fb7a74:
          if ((int)param_2[1] <= (int)lVar11) {
            return;
          }
          iVar31 = (int)param_2[1] + -1;
          plVar21 = (long *)(*param_2 + (long)iVar31 * 0x30);
          *(int *)(param_2 + 1) = iVar31;
          uVar19 = (ulong)(int)plVar21[4];
          uVar58 = plVar21[1];
          lVar14 = *plVar21;
          uVar15 = plVar21[3];
          lVar30 = plVar21[2];
          bVar5 = *(byte *)((long)param_1 + uVar19 * 4 + *param_1 + 3);
        }
        uVar32 = (int)uVar19 + (uVar32 & 0xfe);
        fVar53 = (float)lVar30;
        fVar48 = (float)lVar14;
        fVar35 = (float)((ulong)lVar30 >> 0x20);
        fVar33 = (float)((ulong)lVar14 >> 0x20);
        fVar36 = (float)uVar15;
        fVar34 = (float)uVar58;
        uVar2 = (long)(int)uVar19 + 1;
        pbVar27 = (byte *)((long)param_1 + uVar2 * 4 + *param_1);
        bVar6 = *pbVar27 >> 4;
        bVar5 = *pbVar27 & 0xf;
        fVar42 = (fVar53 - fVar48) * 0.0044247787;
        fVar44 = (fVar35 - fVar33) * 0.0044247787;
        fVar46 = (fVar36 - fVar34) * 0.0044247787;
        fVar55 = fVar48 + (float)(byte)(bVar6 * bVar6) * fVar42;
        bVar6 = pbVar27[1] >> 4;
        fVar56 = fVar53 - (float)(byte)(bVar5 * bVar5) * fVar42;
        pbVar1 = (byte *)((long)param_1 + (long)(int)uVar32 * 4 + *param_1);
        fVar57 = fVar33 + (float)(byte)(bVar6 * bVar6) * fVar44;
        bVar5 = *pbVar1 & 0xf;
        bVar7 = *pbVar1 >> 4;
        lVar14 = CONCAT44(fVar57,fVar55);
        bVar6 = pbVar27[1] & 0xf;
        bVar9 = pbVar27[2] >> 4;
        bVar3 = pbVar27[2] & 0xf;
        bVar10 = pbVar1[1] >> 4;
        bVar4 = pbVar1[1] & 0xf;
        fVar48 = fVar48 + (float)(byte)(bVar7 * bVar7) * fVar42;
        fVar52 = fVar35 - (float)(byte)(bVar6 * bVar6) * fVar44;
        lVar30 = CONCAT44(fVar52,fVar56);
        fVar53 = fVar53 - (float)(byte)(bVar5 * bVar5) * fVar42;
        fVar54 = fVar36 - (float)(byte)(bVar3 * bVar3) * fVar46;
        uVar15 = (ulong)(uint)fVar54;
        bVar5 = pbVar1[2] >> 4;
        fVar33 = fVar33 + (float)(byte)(bVar10 * bVar10) * fVar44;
        fVar42 = fVar34 + (float)(byte)(bVar9 * bVar9) * fVar46;
        lVar24 = CONCAT44(fVar33,fVar48);
        uVar58 = (ulong)(uint)fVar42;
        fVar34 = fVar34 + (float)(byte)(bVar5 * bVar5) * fVar46;
        bVar5 = pbVar1[2] & 0xf;
        fVar35 = fVar35 - (float)(byte)(bVar4 * bVar4) * fVar44;
        lVar25 = CONCAT44(fVar35,fVar53);
        fVar36 = fVar36 - (float)(byte)(bVar5 * bVar5) * fVar46;
        fVar46 = (float)param_3[4];
        iVar49 = -(uint)(fVar55 <= fVar46);
        fVar55 = (float)((ulong)param_3[4] >> 0x20);
        iVar50 = -(uint)(fVar57 <= fVar55);
        iVar51 = -(uint)(fVar42 <= (float)param_3[5]);
        fVar42 = (float)param_3[2];
        iVar43 = -(uint)(fVar42 <= fVar56);
        fVar44 = (float)((ulong)param_3[2] >> 0x20);
        iVar45 = -(uint)(fVar44 <= fVar52);
        iVar47 = -(uint)((float)param_3[3] <= fVar54);
        iVar31 = -(uint)(fVar42 <= fVar53);
        iVar37 = -(uint)(fVar44 <= fVar35);
        iVar38 = -(uint)((float)param_3[3] <= fVar36);
        iVar39 = -(uint)(fVar48 <= fVar46);
        iVar40 = -(uint)(fVar33 <= fVar55);
        iVar41 = -(uint)(fVar34 <= (float)param_3[5]);
        uVar18 = CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                          CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                   CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar31 >> 8),
                                            (byte)iVar39 & (byte)iVar31)));
        bVar5 = (CONCAT13((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar43 >> 0x18),
                          CONCAT12((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar43 >> 0x10),
                                   CONCAT11((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar43 >> 8),
                                            (byte)iVar49 & (byte)iVar43))) &
                 CONCAT13((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar45 >> 0x18),
                          CONCAT12((byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar45 >> 0x10),
                                   CONCAT11((byte)((uint)iVar50 >> 8) & (byte)((uint)iVar45 >> 8),
                                            (byte)iVar50 & (byte)iVar45))) &
                CONCAT13((byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar47 >> 0x18),
                         CONCAT12((byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar47 >> 0x10),
                                  CONCAT11((byte)((uint)iVar51 >> 8) & (byte)((uint)iVar47 >> 8),
                                           (byte)iVar51 & (byte)iVar47)))) != 0 |
                ((uVar18 & (uint)(CONCAT17((byte)((uint)iVar40 >> 0x18) &
                                           (byte)((uint)iVar37 >> 0x18),
                                           CONCAT16((byte)((uint)iVar40 >> 0x10) &
                                                    (byte)((uint)iVar37 >> 0x10),
                                                    CONCAT15((byte)((uint)iVar40 >> 8) &
                                                             (byte)((uint)iVar37 >> 8),
                                                             CONCAT14((byte)iVar40 & (byte)iVar37,
                                                                      uVar18)))) >> 0x20) &
                 CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar38 >> 0x18),
                          CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar38 >> 0x10),
                                   CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar38 >> 8),
                                            (byte)iVar41 & (byte)iVar38)))) != 0) << 1;
        uVar19 = uVar2 & 0xffffffff;
        if (bVar5 != 1) {
          if (bVar5 == 3) {
            iVar37 = (int)param_2[1];
            lVar17 = *param_2;
            iVar31 = iVar37 + 1;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar37) {
              lVar17 = FUN_02fb5338(puVar12,iVar31,lVar17,iVar37,(long)param_2 + 0xc);
              iVar37 = (int)param_2[1];
              *param_2 = lVar17;
            }
            plVar21 = (long *)(lVar17 + (long)iVar37 * 0x30);
            *(int *)(param_2 + 1) = iVar31;
            uVar19 = uVar2 & 0xffffffff;
            *(uint *)(plVar21 + 4) = uVar32;
            plVar21[1] = (ulong)(uint)fVar34;
            *plVar21 = lVar24;
            plVar21[3] = (ulong)(uint)fVar36;
            plVar21[2] = lVar25;
            bVar5 = pbVar27[3];
            goto joined_r0x02fb7a40;
          }
          if (bVar5 != 2) goto LAB_02fb7a74;
          uVar19 = (ulong)uVar32;
          pbVar27 = pbVar1;
          lVar30 = lVar25;
          uVar15 = (ulong)(uint)fVar36;
          lVar14 = lVar24;
          uVar58 = (ulong)(uint)fVar34;
        }
        bVar5 = pbVar27[3];
      } while( true );
    }
  }
  return;
}


