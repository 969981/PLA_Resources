/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb5fd8; name: FUN_02fb5fd8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02fb5fd8(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined2 *puVar22;
  byte *pbVar23;
  uint uVar24;
  long lVar25;
  int iVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  int iVar42;
  float fVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  long lVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  long lVar54;
  ulong uVar55;
  undefined2 local_e8 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
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
  
  puVar13 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    uVar55 = param_1[3];
    lVar14 = param_1[2];
    uVar15 = param_1[5];
    lVar25 = param_1[4];
    iVar26 = -(uint)((float)param_3[2] <= (float)lVar25);
    iVar32 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar25 >> 0x20));
    iVar33 = -(uint)((float)param_3[3] <= (float)uVar15);
    iVar34 = -(uint)((float)lVar14 <= (float)param_3[4]);
    iVar35 = -(uint)((float)((ulong)lVar14 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar36 = -(uint)((float)uVar55 <= (float)param_3[5]);
    uVar27 = CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                      CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                               CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar26 >> 8),
                                        (byte)iVar34 & (byte)iVar26)));
    if ((uVar27 & (uint)(CONCAT17((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar32 >> 0x18),
                                  CONCAT16((byte)((uint)iVar35 >> 0x10) &
                                           (byte)((uint)iVar32 >> 0x10),
                                           CONCAT15((byte)((uint)iVar35 >> 8) &
                                                    (byte)((uint)iVar32 >> 8),
                                                    CONCAT14((byte)iVar35 & (byte)iVar32,uVar27))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                 CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                          CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar33 >> 8),
                                   (byte)iVar36 & (byte)iVar33)))) != 0) {
      lVar12 = param_2[1];
      uVar18 = 0;
      bVar6 = *(byte *)((long)param_1 + *param_1 + 3);
joined_r0x02fb6098:
      do {
        while (uVar27 = (uint)bVar6, (bVar6 & 1) == 0) {
          lVar25 = *param_3;
          if (*(char *)(lVar25 + 0xf1) == '\0') {
            bVar6 = bVar6 >> 1;
            lVar14 = *(long *)(lVar25 + 0x68) + (ulong)bVar6 * 4;
            bVar7 = *(byte *)(lVar14 + 3);
            if ((uint)*(byte *)(lVar14 + 1) == (uint)bVar7) {
              if (*(byte *)(lVar14 + 2) - 3 < 2) goto LAB_02fb6338;
            }
            else {
              if ((uint)*(byte *)(lVar14 + 2) == (uint)bVar7) {
LAB_02fb6338:
                uVar27 = uVar27 & 0xfe | *(int *)(lVar25 + 0x94) << 8;
                uVar17 = 1;
              }
              else {
                uVar27 = uVar27 & 0xfe | *(int *)(lVar25 + 0x94) << 8;
                uVar17 = 1;
                if ((*(byte *)(lVar25 + 0x58) & *(byte *)(lVar14 + 1)) <= bVar7) {
                  uVar17 = 2;
                }
              }
              uVar24 = 0;
              do {
                puVar19 = *(undefined8 **)(lVar25 + 0xd8);
                lVar14 = puVar19[5];
                if (lVar14 == 0) {
LAB_02fb6394:
                  uVar9 = (&DAT_03aa74b0)[*(int *)((long)puVar19 + 0x1c)] & *(uint *)(puVar19 + 3) |
                          (uVar27 + 1 <<
                          (ulong)(-(*(int *)(*(long *)(lVar25 + 0x50) + 0x34) +
                                   *(int *)((long)puVar19 + 0x1c)) & 0x1f)) - 1;
                  if (**(long **)(lVar25 + 0xc0) != 0) {
                    lVar14 = *(long *)(lVar25 + 0x88);
                    iVar26 = *(byte *)(*(long *)(lVar25 + 0x60) + 0x5a) - 1;
                    if (iVar26 < 4) {
                      iVar32 = 0;
                    }
                    else {
                      iVar32 = 0;
                      do {
                        iVar33 = iVar32 + iVar26 >> 1;
                        iVar34 = (uint)bVar6 - (uint)*(byte *)(lVar14 + (long)iVar33 * 4 + 2);
                        if (iVar34 < 0) {
                          iVar26 = iVar33;
                        }
                        else {
                          puVar22 = (undefined2 *)
                                    (lVar14 + ((long)((ulong)(uint)(iVar32 + iVar26) << 0x20) >>
                                              0x21) * 4);
                          if (iVar34 < (int)(uint)*(byte *)((long)puVar22 + 3)) goto LAB_02fb6464;
                          iVar32 = iVar33 + 1;
                        }
                      } while (3 < iVar26 - iVar32);
                    }
                    for (puVar22 = (undefined2 *)(lVar14 + (long)iVar32 * 4);
                        (iVar26 = (uint)bVar6 - (uint)*(byte *)(puVar22 + 1), iVar26 < 0 ||
                        ((int)(uint)*(byte *)((long)puVar22 + 3) <= iVar26)); puVar22 = puVar22 + 2)
                    {
                    }
LAB_02fb6464:
                    local_78 = **(undefined8 **)(lVar25 + 0xe0);
                    uStack_70 = (*(undefined8 **)(lVar25 + 0xe0))[1];
                    plVar20 = (long *)**(long **)(lVar25 + 0xc0);
                    (**(code **)(*plVar20 + 0x40))
                              (plVar20,*puVar22,6,*puVar19,puVar19[1],*(undefined8 *)(lVar25 + 0xd0)
                               ,uVar9,0,&local_78);
                    lVar14 = *(long *)(lVar25 + 0xc0);
                    if (*(long *)(lVar14 + 8) != 0) {
                      local_b0[0] = *(undefined2 *)(lVar14 + 0x10);
                      uVar21 = *(undefined8 *)(lVar14 + 0x14);
                      *(undefined4 *)((undefined8 *)((ulong)local_b0 | 4) + 1) =
                           *(undefined4 *)(lVar14 + 0x1c);
                      *(undefined8 *)((ulong)local_b0 | 4) = uVar21;
                      puVar19 = *(undefined8 **)(lVar25 + 200);
                      local_a0 = *puVar19;
                      local_98 = puVar19[1];
                      local_90 = puVar19[2];
                      local_88 = *(undefined4 *)(puVar19 + 3);
                      local_e8[0] = (undefined2)local_78;
                      uVar21 = *(undefined8 *)((ulong)&local_78 | 4);
                      local_80 = 0;
                      *(undefined4 *)((undefined8 *)((ulong)local_e8 | 4) + 1) =
                           *(undefined4 *)((undefined8 *)((ulong)&local_78 | 4) + 1);
                      *(undefined8 *)((ulong)local_e8 | 4) = uVar21;
                      local_d8 = **(undefined8 **)(lVar25 + 0xd8);
                      local_d0 = (*(undefined8 **)(lVar25 + 0xd8))[1];
                      local_c8 = *(undefined8 *)(lVar25 + 0xd0);
                      local_b8 = 0;
                      local_c0 = uVar9;
                      uVar15 = (**(code **)(**(long **)(lVar14 + 8) + 0x40))
                                         (*(long **)(lVar14 + 8),6,1,local_b0,local_e8);
                      if ((uVar15 & 1) == 0) goto LAB_02fb6354;
                    }
                  }
                  plVar20 = *(long **)(lVar25 + 0xe8);
                  iVar32 = (int)plVar20[1];
                  lVar14 = *plVar20;
                  iVar26 = iVar32 + 1;
                  if ((int)(*(uint *)((long)plVar20 + 0xc) & 0x3fffffff) <= iVar32) {
                    lVar14 = FUN_02f7f7b8(puVar13,iVar26);
                    *plVar20 = lVar14;
                    iVar32 = (int)plVar20[1];
                  }
                  *(uint *)(lVar14 + (long)iVar32 * 4) = uVar9;
                  *(int *)(plVar20 + 1) = iVar26;
                }
                else {
                  uVar15 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar14 + 0x18) * 0x40 +
                                       0x4020))
                                     (lVar14,uVar27 << (ulong)(*(uint *)(lVar25 + 0xa0) & 0x1f));
                  if ((uVar15 & 1) != 0) {
                    puVar19 = *(undefined8 **)(lVar25 + 0xd8);
                    goto LAB_02fb6394;
                  }
                }
LAB_02fb6354:
                uVar27 = uVar27 + 1;
                uVar24 = uVar24 + 1;
              } while (uVar24 < uVar17);
              bVar1 = false;
              if (*(char *)(lVar25 + 0xf0) != '\0') {
                bVar1 = 0 < *(int *)(*(long *)(lVar25 + 0xe8) + 8);
              }
              *(byte *)(lVar25 + 0xf1) = *(byte *)(lVar25 + 0xf1) | bVar1;
            }
          }
LAB_02fb60c4:
          if ((int)param_2[1] <= (int)lVar12) {
            return;
          }
          iVar26 = (int)param_2[1] + -1;
          plVar20 = (long *)(*param_2 + (long)iVar26 * 0x30);
          *(int *)(param_2 + 1) = iVar26;
          uVar18 = (ulong)(int)plVar20[4];
          uVar55 = plVar20[1];
          lVar14 = *plVar20;
          uVar15 = plVar20[3];
          lVar25 = plVar20[2];
          bVar6 = *(byte *)((long)param_1 + uVar18 * 4 + *param_1 + 3);
        }
        uVar27 = (int)uVar18 + (uVar27 & 0xfe);
        fVar48 = (float)lVar25;
        fVar43 = (float)lVar14;
        fVar30 = (float)((ulong)lVar25 >> 0x20);
        fVar28 = (float)((ulong)lVar14 >> 0x20);
        fVar31 = (float)uVar15;
        fVar29 = (float)uVar55;
        uVar3 = (long)(int)uVar18 + 1;
        pbVar23 = (byte *)((long)param_1 + uVar3 * 4 + *param_1);
        bVar7 = *pbVar23 >> 4;
        bVar6 = *pbVar23 & 0xf;
        fVar37 = (fVar48 - fVar43) * 0.0044247787;
        fVar39 = (fVar30 - fVar28) * 0.0044247787;
        fVar41 = (fVar31 - fVar29) * 0.0044247787;
        fVar51 = fVar43 + (float)(byte)(bVar7 * bVar7) * fVar37;
        bVar7 = pbVar23[1] >> 4;
        fVar52 = fVar48 - (float)(byte)(bVar6 * bVar6) * fVar37;
        pbVar2 = (byte *)((long)param_1 + (long)(int)uVar27 * 4 + *param_1);
        fVar53 = fVar28 + (float)(byte)(bVar7 * bVar7) * fVar39;
        bVar6 = *pbVar2 & 0xf;
        bVar8 = *pbVar2 >> 4;
        lVar14 = CONCAT44(fVar53,fVar51);
        bVar7 = pbVar23[1] & 0xf;
        bVar10 = pbVar23[2] >> 4;
        bVar4 = pbVar23[2] & 0xf;
        bVar11 = pbVar2[1] >> 4;
        bVar5 = pbVar2[1] & 0xf;
        fVar43 = fVar43 + (float)(byte)(bVar8 * bVar8) * fVar37;
        fVar47 = fVar30 - (float)(byte)(bVar7 * bVar7) * fVar39;
        lVar25 = CONCAT44(fVar47,fVar52);
        fVar48 = fVar48 - (float)(byte)(bVar6 * bVar6) * fVar37;
        fVar49 = fVar31 - (float)(byte)(bVar4 * bVar4) * fVar41;
        uVar15 = (ulong)(uint)fVar49;
        bVar6 = pbVar2[2] >> 4;
        fVar28 = fVar28 + (float)(byte)(bVar11 * bVar11) * fVar39;
        fVar37 = fVar29 + (float)(byte)(bVar10 * bVar10) * fVar41;
        lVar50 = CONCAT44(fVar28,fVar43);
        uVar55 = (ulong)(uint)fVar37;
        fVar29 = fVar29 + (float)(byte)(bVar6 * bVar6) * fVar41;
        bVar6 = pbVar2[2] & 0xf;
        fVar30 = fVar30 - (float)(byte)(bVar5 * bVar5) * fVar39;
        lVar54 = CONCAT44(fVar30,fVar48);
        fVar31 = fVar31 - (float)(byte)(bVar6 * bVar6) * fVar41;
        fVar41 = (float)param_3[4];
        iVar44 = -(uint)(fVar51 <= fVar41);
        fVar51 = (float)((ulong)param_3[4] >> 0x20);
        iVar45 = -(uint)(fVar53 <= fVar51);
        iVar46 = -(uint)(fVar37 <= (float)param_3[5]);
        fVar37 = (float)param_3[2];
        iVar38 = -(uint)(fVar37 <= fVar52);
        fVar39 = (float)((ulong)param_3[2] >> 0x20);
        iVar40 = -(uint)(fVar39 <= fVar47);
        iVar42 = -(uint)((float)param_3[3] <= fVar49);
        iVar26 = -(uint)(fVar37 <= fVar48);
        iVar32 = -(uint)(fVar39 <= fVar30);
        iVar33 = -(uint)((float)param_3[3] <= fVar31);
        iVar34 = -(uint)(fVar43 <= fVar41);
        iVar35 = -(uint)(fVar28 <= fVar51);
        iVar36 = -(uint)(fVar29 <= (float)param_3[5]);
        uVar17 = CONCAT13((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                          CONCAT12((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                                   CONCAT11((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar26 >> 8),
                                            (byte)iVar34 & (byte)iVar26)));
        bVar6 = (CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar38 >> 0x18),
                          CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar38 >> 0x10),
                                   CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar38 >> 8),
                                            (byte)iVar44 & (byte)iVar38))) &
                 CONCAT13((byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar40 >> 0x18),
                          CONCAT12((byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar40 >> 0x10),
                                   CONCAT11((byte)((uint)iVar45 >> 8) & (byte)((uint)iVar40 >> 8),
                                            (byte)iVar45 & (byte)iVar40))) &
                CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar42 >> 0x18),
                         CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar42 >> 0x10),
                                  CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar42 >> 8),
                                           (byte)iVar46 & (byte)iVar42)))) != 0 |
                ((uVar17 & (uint)(CONCAT17((byte)((uint)iVar35 >> 0x18) &
                                           (byte)((uint)iVar32 >> 0x18),
                                           CONCAT16((byte)((uint)iVar35 >> 0x10) &
                                                    (byte)((uint)iVar32 >> 0x10),
                                                    CONCAT15((byte)((uint)iVar35 >> 8) &
                                                             (byte)((uint)iVar32 >> 8),
                                                             CONCAT14((byte)iVar35 & (byte)iVar32,
                                                                      uVar17)))) >> 0x20) &
                 CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                          CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                                   CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar33 >> 8),
                                            (byte)iVar36 & (byte)iVar33)))) != 0) << 1;
        uVar18 = uVar3 & 0xffffffff;
        if (bVar6 != 1) {
          if (bVar6 == 3) {
            iVar32 = (int)param_2[1];
            lVar16 = *param_2;
            iVar26 = iVar32 + 1;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar32) {
              lVar16 = FUN_02fb5338(puVar13,iVar26,lVar16,iVar32,(long)param_2 + 0xc);
              iVar32 = (int)param_2[1];
              *param_2 = lVar16;
            }
            plVar20 = (long *)(lVar16 + (long)iVar32 * 0x30);
            *(int *)(param_2 + 1) = iVar26;
            uVar18 = uVar3 & 0xffffffff;
            *(uint *)(plVar20 + 4) = uVar27;
            plVar20[1] = (ulong)(uint)fVar29;
            *plVar20 = lVar50;
            plVar20[3] = (ulong)(uint)fVar31;
            plVar20[2] = lVar54;
            bVar6 = pbVar23[3];
            goto joined_r0x02fb6098;
          }
          if (bVar6 != 2) goto LAB_02fb60c4;
          uVar18 = (ulong)uVar27;
          pbVar23 = pbVar2;
          lVar25 = lVar54;
          uVar15 = (ulong)(uint)fVar31;
          lVar14 = lVar50;
          uVar55 = (ulong)(uint)fVar29;
        }
        bVar6 = pbVar23[3];
      } while( true );
    }
  }
  return;
}


