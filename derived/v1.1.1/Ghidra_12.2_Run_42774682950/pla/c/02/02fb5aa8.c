/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb5aa8; name: FUN_02fb5aa8
 */


void FUN_02fb5aa8(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iVar27;
  undefined8 uVar26;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  float fVar32;
  int iVar33;
  float fVar34;
  int iVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  long lVar48;
  float fVar49;
  ulong uVar50;
  ulong uVar51;
  
  puVar10 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    lVar13 = param_1[2];
    lVar11 = param_1[4];
    iVar20 = -(uint)((float)param_3[2] <= (float)lVar11);
    iVar27 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= (float)((ulong)lVar11 >> 0x20));
    iVar28 = -(uint)((float)param_3[3] <= (float)param_1[5]);
    iVar29 = -(uint)((float)lVar13 <= (float)param_3[4]);
    iVar30 = -(uint)((float)((ulong)lVar13 >> 0x20) <= (float)((ulong)param_3[4] >> 0x20));
    iVar31 = -(uint)((float)param_1[3] <= (float)param_3[5]);
    uVar21 = CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                      CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                               CONCAT11((byte)((uint)iVar29 >> 8) & (byte)((uint)iVar20 >> 8),
                                        (byte)iVar29 & (byte)iVar20)));
    if ((uVar21 & (uint)(CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                                  CONCAT16((byte)((uint)iVar30 >> 0x10) &
                                           (byte)((uint)iVar27 >> 0x10),
                                           CONCAT15((byte)((uint)iVar30 >> 8) &
                                                    (byte)((uint)iVar27 >> 8),
                                                    CONCAT14((byte)iVar30 & (byte)iVar27,uVar21))))
                        >> 0x20) &
        CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                 CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                          CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar28 >> 8),
                                   (byte)iVar31 & (byte)iVar28)))) != 0) {
      lVar9 = param_2[1];
      uVar18 = 0;
      pbVar19 = (byte *)(*param_1 + (long)param_1);
      uVar50 = param_1[5];
      uVar51 = param_1[3];
LAB_02fb5b60:
      bVar5 = pbVar19[3];
      uVar21 = (uint)uVar18;
      if ((char)bVar5 < '\0') goto LAB_02fb5d44;
      lVar11 = *param_3;
      lVar13 = *(long *)(lVar11 + 0xa8);
      if (lVar13 == 0) {
LAB_02fb5bd8:
        lVar17 = *(long *)(lVar11 + 0x50);
        lVar14 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar5,pbVar19[4]) * 0x60 + param_1[8];
        lVar15 = *(long *)(lVar17 + 0x40);
        lVar13 = lVar15 + lVar17 + 0x40;
        lVar48 = 0;
        if (lVar15 != 0) {
          lVar48 = lVar13;
        }
        iVar20 = (int)(lVar14 - lVar48 >> 5) * -0x55555555;
        if ((*(int *)(lVar11 + 0x94) != iVar20) || (*(int *)(lVar11 + 0x98) != iVar20)) {
          lVar13 = lVar13 + (long)iVar20 * 0x60;
          *(long *)(lVar11 + 0x60) = lVar13;
          *(int *)(lVar11 + 0x94) = iVar20;
          *(int *)(lVar11 + 0x98) = iVar20;
          lVar15 = *(long *)(lVar17 + 0x70);
          lVar48 = 0;
          if (lVar15 != 0) {
            lVar48 = lVar15 + lVar17 + 0x70;
          }
          *(ulong *)(lVar11 + 0x70) = lVar48 + (ulong)*(uint *)(lVar13 + 0x48) * 4;
          lVar15 = *(long *)(lVar17 + 0x80);
          lVar48 = 0;
          if (lVar15 != 0) {
            lVar48 = lVar15 + lVar17 + 0x80;
          }
          *(ulong *)(lVar11 + 0x78) = lVar48 + (ulong)*(byte *)(lVar13 + 0x5b) * 0x80000;
          lVar15 = *(long *)(lVar17 + 0x60);
          lVar48 = 0;
          if (lVar15 != 0) {
            lVar48 = lVar15 + lVar17 + 0x60;
          }
          lVar48 = lVar48 + (ulong)*(uint *)(lVar13 + 0x4c) * 2;
          *(long *)(lVar11 + 0x80) = lVar48;
          lVar16 = *(long *)(lVar17 + 0x90);
          lVar15 = 0;
          if (lVar16 != 0) {
            lVar15 = lVar16 + lVar17 + 0x90;
          }
          *(ulong *)(lVar11 + 0x88) = lVar15 + (ulong)*(uint *)(lVar13 + 0x54) * 4;
          *(uint *)(lVar11 + 0x90) = (uint)*(byte *)(lVar13 + 0x58);
          lVar16 = *(long *)(lVar17 + 0x50);
          lVar15 = 0;
          if (lVar16 != 0) {
            lVar15 = lVar16 + lVar17 + 0x50;
          }
          *(ulong *)(lVar11 + 0x68) = lVar15 + (ulong)*(uint *)(lVar13 + 0x50) * 4;
          uVar26 = *(undefined8 *)(lVar13 + 0x30);
          *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)(lVar13 + 0x38);
          *(undefined8 *)(lVar11 + 0x30) = uVar26;
          uVar26 = *(undefined8 *)(lVar13 + 0x3c);
          *(ulong *)(lVar11 + 0x48) = (ulong)*(uint *)(lVar13 + 0x44);
          *(undefined8 *)(lVar11 + 0x40) = uVar26;
          *(ulong *)(lVar11 + 0x80) = lVar48 + (ulong)*(byte *)(lVar13 + 0x58) * -2;
        }
        FUN_02fb5fd8(lVar14,param_2,param_3);
      }
      else {
        lVar14 = *(long *)(lVar13 + 0x20);
        lVar48 = 0;
        if (lVar14 != 0) {
          lVar48 = lVar14 + lVar13 + 0x20;
        }
        lVar17 = *(long *)(lVar48 + 0x48);
        lVar14 = 0;
        if (lVar17 != 0) {
          lVar14 = lVar17 + lVar48 + 0x48;
        }
        uVar4 = uVar21 + 0x1f;
        if (-1 < (int)uVar21) {
          uVar4 = uVar21;
        }
        if ((*(uint *)(lVar13 + 0x28 +
                      (long)((int)uVar4 >> 5) * 4 +
                      (long)(*(int *)(lVar14 + 0x68) << 3) * 4 + *(long *)(lVar13 + 0x28)) &
            1 << (ulong)(uVar21 & 0x1f)) != 0) goto LAB_02fb5bd8;
      }
      goto LAB_02fb5d08;
    }
  }
  return;
LAB_02fb5d44:
  uVar18 = (long)(int)uVar21 + 1;
  fVar43 = (float)lVar11;
  fVar38 = (float)lVar13;
  fVar24 = (float)((ulong)lVar11 >> 0x20);
  fVar22 = (float)((ulong)lVar13 >> 0x20);
  fVar25 = (float)uVar50;
  fVar23 = (float)uVar51;
  fVar32 = (fVar43 - fVar38) * 0.0044247787;
  fVar34 = (fVar24 - fVar22) * 0.0044247787;
  fVar36 = (fVar25 - fVar23) * 0.0044247787;
  uVar1 = (long)(int)uVar21 + (ulong)((uint)pbVar19[4] | (bVar5 & 0x7f) << 8) * 2;
  pbVar19 = (byte *)((long)param_1 + uVar18 * 5 + *param_1);
  pbVar2 = (byte *)((long)param_1 + uVar1 * 5 + *param_1);
  bVar6 = *pbVar19 >> 4;
  bVar5 = *pbVar19 & 0xf;
  bVar7 = pbVar19[1] >> 4;
  bVar8 = pbVar19[2] >> 4;
  bVar3 = pbVar19[2] & 0xf;
  fVar42 = fVar38 + (float)(byte)(bVar6 * bVar6) * fVar32;
  bVar6 = *pbVar2 >> 4;
  fVar44 = fVar22 + (float)(byte)(bVar7 * bVar7) * fVar34;
  lVar13 = CONCAT44(fVar44,fVar42);
  fVar49 = fVar23 + (float)(byte)(bVar8 * bVar8) * fVar36;
  fVar38 = fVar38 + (float)(byte)(bVar6 * bVar6) * fVar32;
  fVar45 = fVar43 - (float)(byte)(bVar5 * bVar5) * fVar32;
  bVar5 = pbVar19[1] & 0xf;
  uVar51 = (ulong)(uint)fVar49;
  bVar6 = *pbVar2 & 0xf;
  fVar46 = fVar24 - (float)(byte)(bVar5 * bVar5) * fVar34;
  lVar11 = CONCAT44(fVar46,fVar45);
  bVar5 = pbVar2[1] >> 4;
  fVar43 = fVar43 - (float)(byte)(bVar6 * bVar6) * fVar32;
  fVar47 = fVar25 - (float)(byte)(bVar3 * bVar3) * fVar36;
  uVar50 = (ulong)(uint)fVar47;
  fVar22 = fVar22 + (float)(byte)(bVar5 * bVar5) * fVar34;
  bVar6 = pbVar2[2] >> 4;
  lVar48 = CONCAT44(fVar22,fVar38);
  bVar5 = pbVar2[1] & 0xf;
  bVar3 = pbVar2[2] & 0xf;
  fVar23 = fVar23 + (float)(byte)(bVar6 * bVar6) * fVar36;
  fVar24 = fVar24 - (float)(byte)(bVar5 * bVar5) * fVar34;
  lVar14 = CONCAT44(fVar24,fVar43);
  fVar25 = fVar25 - (float)(byte)(bVar3 * bVar3) * fVar36;
  fVar36 = (float)param_3[4];
  iVar39 = -(uint)(fVar42 <= fVar36);
  fVar42 = (float)((ulong)param_3[4] >> 0x20);
  iVar40 = -(uint)(fVar44 <= fVar42);
  iVar41 = -(uint)(fVar49 <= (float)param_3[5]);
  fVar32 = (float)param_3[2];
  iVar33 = -(uint)(fVar32 <= fVar45);
  fVar34 = (float)((ulong)param_3[2] >> 0x20);
  iVar35 = -(uint)(fVar34 <= fVar46);
  iVar37 = -(uint)((float)param_3[3] <= fVar47);
  iVar20 = -(uint)(fVar32 <= fVar43);
  iVar27 = -(uint)(fVar34 <= fVar24);
  iVar28 = -(uint)((float)param_3[3] <= fVar25);
  iVar29 = -(uint)(fVar38 <= fVar36);
  iVar30 = -(uint)(fVar22 <= fVar42);
  iVar31 = -(uint)(fVar23 <= (float)param_3[5]);
  uVar21 = CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar20 >> 0x18),
                    CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar20 >> 0x10),
                             CONCAT11((byte)((uint)iVar29 >> 8) & (byte)((uint)iVar20 >> 8),
                                      (byte)iVar29 & (byte)iVar20)));
  bVar5 = (CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                    CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                             CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar33 >> 8),
                                      (byte)iVar39 & (byte)iVar33))) &
           CONCAT13((byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                    CONCAT12((byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                             CONCAT11((byte)((uint)iVar40 >> 8) & (byte)((uint)iVar35 >> 8),
                                      (byte)iVar40 & (byte)iVar35))) &
          CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                   CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                            CONCAT11((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar37 >> 8),
                                     (byte)iVar41 & (byte)iVar37)))) != 0 |
          ((uVar21 & (uint)(CONCAT17((byte)((uint)iVar30 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                                     CONCAT16((byte)((uint)iVar30 >> 0x10) &
                                              (byte)((uint)iVar27 >> 0x10),
                                              CONCAT15((byte)((uint)iVar30 >> 8) &
                                                       (byte)((uint)iVar27 >> 8),
                                                       CONCAT14((byte)iVar30 & (byte)iVar27,uVar21))
                                             )) >> 0x20) &
           CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                    CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                             CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar28 >> 8),
                                      (byte)iVar31 & (byte)iVar28)))) != 0) << 1;
  if (bVar5 != 1) {
    if (bVar5 == 3) {
      iVar27 = (int)param_2[1];
      lVar17 = *param_2;
      iVar20 = iVar27 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar27) {
        lVar17 = FUN_02fb5338(puVar10,iVar20,lVar17,iVar27,(long)param_2 + 0xc);
        iVar27 = (int)param_2[1];
        *param_2 = lVar17;
      }
      plVar12 = (long *)(lVar17 + (long)iVar27 * 0x30);
      *(int *)(param_2 + 1) = iVar20;
      *(int *)(plVar12 + 4) = (int)uVar1;
      plVar12[1] = (ulong)(uint)fVar23;
      *plVar12 = lVar48;
      plVar12[3] = (ulong)(uint)fVar25;
      plVar12[2] = lVar14;
    }
    else if (bVar5 == 2) {
      uVar18 = uVar1 & 0xffffffff;
      pbVar19 = pbVar2;
      lVar11 = lVar14;
      uVar50 = (ulong)(uint)fVar25;
      lVar13 = lVar48;
      uVar51 = (ulong)(uint)fVar23;
    }
    else {
LAB_02fb5d08:
      if ((int)param_2[1] <= (int)lVar9) {
        return;
      }
      iVar20 = (int)param_2[1] + -1;
      *(int *)(param_2 + 1) = iVar20;
      plVar12 = (long *)(*param_2 + (long)iVar20 * 0x30);
      uVar18 = (ulong)(int)plVar12[4];
      pbVar19 = (byte *)((long)param_1 + uVar18 * 5 + *param_1);
      lVar11 = plVar12[2];
      uVar50 = plVar12[3];
      lVar13 = *plVar12;
      uVar51 = plVar12[1];
    }
  }
  goto LAB_02fb5b60;
}


