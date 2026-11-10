/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a7610; name: FUN_030a7610
 */


void FUN_030a7610(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  ushort *puVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  undefined1 auVar12 [14];
  float fVar13;
  undefined *puVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  long lVar33;
  undefined8 *puVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined4 *puVar39;
  float *pfVar40;
  ulong uVar41;
  float fVar42;
  undefined8 *puVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  int iVar49;
  float fVar50;
  undefined8 uVar51;
  float fVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  uVar36 = *(uint *)(param_2 + 0x184);
  lVar19 = *(long *)(param_2 + 0xd8);
  if (0 < (int)*(uint *)(lVar19 + 0x28)) {
    memset(*(void **)(lVar19 + 0x18),0,(ulong)*(uint *)(lVar19 + 0x28) << 2);
    lVar19 = *(long *)(param_2 + 0xd8);
  }
  if (0 < (int)uVar36) {
    fVar44 = *(float *)(param_2 + 0x178);
    lVar29 = *(long *)(lVar19 + 0x18);
    uVar27 = 0;
    while( true ) {
      uVar22 = (ulong)*(ushort *)(*(long *)(param_2 + 200) + uVar27 * 2);
      lVar23 = *(long *)(param_2 + 0x38);
      lVar30 = lVar23 + uVar22 * 0x70;
      lVar26 = *(long *)(lVar19 + 0x50);
      uVar37 = (ulong)*(ushort *)(lVar26 + uVar27 * 2);
      lVar28 = *(long *)(lVar19 + 0x30) + uVar27 * 8;
      uVar38 = (ulong)*(byte *)(lVar28 + 7);
      uVar8 = *(ushort *)(*(long *)(lVar19 + 0x40) + (uVar38 + uVar37) * 8 + 4);
      lVar31 = *(long *)(param_2 + 0x28) + (long)*(short *)(lVar30 + 0xc) * 0xa0;
      lVar33 = *(long *)(param_2 + 0x28) + (long)*(short *)(lVar30 + 0xe) * 0xa0;
      puVar32 = (undefined8 *)(lVar31 + 0x50);
      uVar47 = *(undefined8 *)(lVar31 + 0x58);
      uVar21 = *puVar32;
      fVar45 = (float)((ulong)uVar47 >> 0x20);
      puVar34 = (undefined8 *)(lVar33 + 0x50);
      uVar53 = *(undefined8 *)(lVar33 + 0x58);
      uVar51 = *puVar34;
      bVar7 = *(byte *)(lVar30 + 0x19);
      fVar50 = (float)((ulong)uVar53 >> 0x20);
      uVar25 = (bVar7 + 1) * (uint)bVar7 >> 1;
      uVar16 = (uint)bVar7;
      if (uVar25 != 0) {
        iVar24 = 0;
        iVar49 = 0;
        while( true ) {
          lVar19 = (long)*(short *)(lVar23 + uVar22 * 0x70 + 0x14);
          pfVar40 = (float *)(*(long *)(param_2 + 0x88) + (lVar19 + iVar49) * 0x40);
          puVar43 = (undefined8 *)(*(long *)(param_2 + 0x88) + (lVar19 + iVar24) * 0x40);
          uVar17 = (uint)uVar8;
          iVar35 = iVar24 + uVar17 + iVar49 * (uint)*(ushort *)(lVar28 + 2);
          auVar55._0_4_ = (fVar45 + fVar50) * *pfVar40 * (float)*puVar43;
          auVar55._4_4_ = (fVar45 + fVar50) * pfVar40[1] * (float)((ulong)*puVar43 >> 0x20);
          auVar55._8_4_ = (fVar45 + fVar50) * pfVar40[2] * (float)puVar43[1];
          auVar55._12_4_ = (fVar45 + fVar50) * pfVar40[3] * (float)((ulong)puVar43[1] >> 0x20);
          uVar25 = uVar25 - 1;
          fVar48 = (float)uVar21 * (float)*(undefined8 *)(pfVar40 + 4) * *(float *)(puVar43 + 2) +
                   auVar55._0_4_ +
                   (float)uVar51 * (float)*(undefined8 *)(pfVar40 + 8) * (float)puVar43[4] +
                   (float)((ulong)uVar21 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pfVar40 + 4) >> 0x20) *
                   *(float *)((long)puVar43 + 0x14) +
                   auVar55._4_4_ +
                   (float)((ulong)uVar51 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(pfVar40 + 8) >> 0x20) *
                   (float)((ulong)puVar43[4] >> 0x20) +
                   (float)uVar47 * (float)*(undefined8 *)(pfVar40 + 6) * *(float *)(puVar43 + 3) +
                   auVar55._8_4_ +
                   (float)uVar53 * (float)*(undefined8 *)(pfVar40 + 10) * (float)puVar43[5];
          if (iVar24 == iVar49) {
            *(float *)(lVar29 + (long)iVar35 * 4) = fVar48 + fVar44 * param_1 * param_1 * fVar48;
          }
          else {
            auVar12._2_12_ = auVar55._4_12_;
            auVar12._0_2_ = *(undefined2 *)((long)pfVar40 + 0x32);
            uVar11 = *(ushort *)((long)puVar43 + 0x32);
            *(float *)(lVar29 + (long)iVar35 * 4) = (float)(auVar12._0_4_ << 0x10) * fVar48;
            *(float *)(lVar29 + (long)(int)(iVar49 + uVar17 + iVar24 * (uint)*(ushort *)(lVar28 + 2)
                                           ) * 4) = (float)((uint)uVar11 << 0x10) * fVar48;
          }
          if (uVar25 == 0) break;
          uVar47 = *(undefined8 *)(lVar31 + 0x58);
          uVar21 = *puVar32;
          iVar24 = iVar24 + 1;
          iVar35 = iVar49 + 1;
          uVar53 = *(undefined8 *)(lVar33 + 0x58);
          uVar51 = *puVar34;
          if ((int)uVar16 <= iVar24) {
            iVar49 = iVar35;
            iVar24 = iVar35;
          }
        }
        lVar19 = *(long *)(param_2 + 0xd8);
        lVar26 = *(long *)(lVar19 + 0x50);
        uVar38 = (ulong)*(byte *)(lVar28 + 7);
        uVar37 = (ulong)*(ushort *)(lVar26 + uVar27 * 2);
      }
      uVar27 = uVar27 + 1;
      uVar25 = (int)uVar38 + (int)uVar37 + 1;
      uVar37 = (ulong)uVar25;
      uVar17 = (uint)*(ushort *)(lVar26 + uVar27 * 2);
      if (uVar25 < uVar17) {
        while( true ) {
          lVar31 = *(long *)(lVar19 + 0x40);
          lVar33 = *(long *)(param_2 + 0x38);
          uVar38 = (ulong)*(ushort *)(lVar31 + uVar37 * 8);
          uVar41 = (ulong)*(ushort *)(*(long *)(param_2 + 200) + uVar38 * 2);
          sVar9 = *(short *)(lVar30 + 0xe);
          lVar26 = lVar33 + uVar41 * 0x70;
          sVar10 = *(short *)(lVar26 + 0xc);
          bVar15 = sVar10 == sVar9;
          if (bVar15 || *(short *)(lVar26 + 0xe) == sVar9) {
            lVar26 = 1;
            fVar48 = -1.0;
            if (sVar10 != sVar9) {
              fVar48 = 1.0;
            }
            puVar43 = puVar34;
            fVar46 = fVar50;
          }
          else {
            bVar15 = sVar10 == *(short *)(lVar30 + 0xc);
            lVar26 = 0;
            fVar48 = 1.0;
            if (!bVar15) {
              fVar48 = -1.0;
            }
            puVar43 = puVar32;
            fVar46 = fVar45;
          }
          bVar7 = *(byte *)(lVar33 + uVar41 * 0x70 + 0x19);
          if (bVar7 * uVar16 != 0) {
            uVar47 = puVar43[1];
            uVar21 = *puVar43;
            lVar3 = lVar31 + uVar37 * 8;
            lVar19 = *(long *)(lVar19 + 0x30);
            iVar24 = 0;
            uVar8 = *(ushort *)(lVar3 + 6);
            iVar49 = uVar16 * bVar7;
            iVar35 = 0;
            fVar42 = 1.4210855e-14;
            do {
              iVar1 = iVar35 + 1;
              uVar25 = (uint)bVar7;
              pfVar40 = (float *)(*(long *)(param_2 + 0x88) +
                                 ((long)*(short *)(lVar33 + uVar41 * 0x70 + 0x14) + (long)iVar35) *
                                 0x40);
              puVar43 = (undefined8 *)
                        (*(long *)(param_2 + 0x88) +
                        ((long)*(short *)(lVar23 + uVar22 * 0x70 + 0x14) + (long)iVar24) * 0x40);
              auVar56._0_4_ = *pfVar40 * (float)*puVar43;
              auVar56._4_4_ = pfVar40[1] * (float)((ulong)*puVar43 >> 0x20);
              auVar56._8_4_ = pfVar40[2] * (float)puVar43[1];
              auVar56._12_4_ = pfVar40[3] * (float)((ulong)puVar43[1] >> 0x20);
              auVar57 = NEON_ext(auVar56,auVar56,8,1);
              auVar54._0_4_ =
                   (float)*(undefined8 *)(pfVar40 + (ulong)(bVar15 ^ 1) * 4 + 4) *
                   (float)uVar21 * *(float *)(puVar43 + lVar26 * 2 + 2);
              auVar54._4_4_ =
                   (float)((ulong)*(undefined8 *)(pfVar40 + (ulong)(bVar15 ^ 1) * 4 + 4) >> 0x20) *
                   (float)((ulong)uVar21 >> 0x20) * *(float *)((long)puVar43 + lVar26 * 0x10 + 0x14)
              ;
              auVar54._8_4_ =
                   (float)*(undefined8 *)(pfVar40 + (ulong)(bVar15 ^ 1) * 4 + 6) *
                   (float)uVar47 * *(float *)(puVar43 + lVar26 * 2 + 3);
              auVar54._12_4_ =
                   (float)((ulong)*(undefined8 *)(pfVar40 + (ulong)(bVar15 ^ 1) * 4 + 6) >> 0x20) *
                   (float)((ulong)uVar47 >> 0x20) * *(float *)((long)puVar43 + lVar26 * 0x10 + 0x1c)
              ;
              auVar55 = NEON_ext(auVar54,auVar54,8,1);
              fVar13 = 0.0;
              if ((int)uVar25 <= iVar1) {
                fVar13 = 1.4210855e-14;
              }
              fVar52 = fVar46 * (auVar56._0_4_ + auVar56._4_4_ + auVar57._0_4_) * fVar48 +
                       auVar54._0_4_ + auVar54._4_4_ + auVar55._0_4_;
              uVar11 = *(ushort *)((long)pfVar40 + 0x32);
              *(float *)(lVar29 + (long)(int)(iVar35 + (uint)*(ushort *)(lVar3 + 4) +
                                             iVar24 * (uint)*(ushort *)(lVar28 + 2)) * 4) =
                   fVar42 + (float)((uint)*(ushort *)((long)puVar43 + 0x32) << 0x10) * fVar52;
              iVar2 = iVar24 + (uint)*(ushort *)(lVar31 + (ulong)uVar8 * 8 + 4);
              if ((int)uVar25 <= iVar1) {
                iVar24 = iVar24 + 1;
              }
              iVar6 = 0;
              if (iVar1 < (int)uVar25) {
                iVar6 = iVar35 + 1;
              }
              iVar49 = iVar49 + -1;
              *(float *)(lVar29 + (long)(int)(iVar2 + iVar35 * (uint)*(ushort *)
                                                                      (lVar19 + uVar38 * 8 + 2)) * 4
                        ) = fVar42 + (float)((uint)uVar11 << 0x10) * fVar52;
              iVar35 = iVar6;
              fVar42 = fVar13;
            } while (iVar49 != 0);
          }
          uVar37 = uVar37 + 1;
          if ((uint)uVar37 == uVar17) break;
          lVar19 = *(long *)(param_2 + 0xd8);
        }
      }
      if (uVar27 == uVar36) break;
      lVar19 = *(long *)(param_2 + 0xd8);
    }
  }
  if (0 < *(int *)(param_2 + 0xa0)) {
    lVar29 = (long)*(int *)(param_2 + 0xa0) << 5;
    iVar24 = *(int *)(param_2 + 0x108);
    lVar19 = *(long *)(*(long *)(param_2 + 0xd8) + 0x18);
    uVar21 = *(undefined8 *)(*(long *)(param_2 + 0xd8) + 0x20);
    puVar39 = *(undefined4 **)(param_2 + 0x98);
    if (iVar24 < 1) {
      do {
        if (*(char *)((long)puVar39 + 0x1b) != '\0') {
          FUN_030a7e30(puVar39,param_2,lVar19,uVar21);
        }
        puVar39 = puVar39 + 8;
        lVar29 = lVar29 + -0x20;
      } while (lVar29 != 0);
    }
    else {
      do {
        if (*(char *)((long)puVar39 + 0x1b) != '\0') {
          FUN_030a7e30(puVar39,param_2,lVar19,uVar21);
          *(undefined4 *)(*(long *)(param_2 + 0x100) + (long)*(short *)((long)puVar39 + 0x16) * 4) =
               *puVar39;
        }
        puVar39 = puVar39 + 8;
        lVar29 = lVar29 + -0x20;
      } while (lVar29 != 0);
    }
    if (*(int *)(param_2 + 0xa0) != 0) {
      pfVar40 = *(float **)(param_2 + 0x98);
      pfVar4 = pfVar40 + (long)*(int *)(param_2 + 0xa0) * 8;
      do {
        if (-1e+06 < pfVar40[1]) {
          if ((pfVar40[2] < 1e+06) && (*(char *)((long)pfVar40 + 0x1b) == '\0' && 0 < iVar24)) {
            lVar28 = *(long *)(param_2 + 0xd8);
            puVar5 = (ushort *)(*(long *)(lVar28 + 0x50) + (long)*(short *)(pfVar40 + 5) * 2);
            lVar29 = *(long *)(lVar28 + 0x30) + (long)*(short *)(pfVar40 + 5) * 8;
            uVar8 = *puVar5;
            uVar27 = (ulong)uVar8;
            uVar11 = puVar5[1];
            uVar22 = (ulong)*(byte *)((long)pfVar40 + 0x1a);
            fVar45 = *(float *)(lVar19 + (*(ushort *)
                                           (*(long *)(lVar28 + 0x40) +
                                            (*(byte *)(lVar29 + 7) + uVar27) * 8 + 4) + uVar22 +
                                         *(ushort *)(lVar29 + 2) * uVar22) * 4);
            lVar29 = *(long *)(param_2 + 0x100);
            uVar47 = CONCAT44(fVar45,fVar45);
            uVar51 = NEON_frecpe(uVar47,4);
            uVar53 = NEON_frecps(uVar47,uVar51,4);
            fVar50 = (float)uVar51 * (float)uVar53;
            iVar49 = -(uint)(fVar45 == 0.0);
            uVar47 = NEON_frecps(uVar47,CONCAT44((float)((ulong)uVar51 >> 0x20) *
                                                 (float)((ulong)uVar53 >> 0x20),fVar50),4);
            fVar44 = 0.0;
            if (uVar8 < uVar11) {
              fVar44 = 0.0;
              do {
                lVar23 = *(long *)(lVar28 + 0x40) + uVar27 * 8;
                lVar26 = *(long *)(lVar28 + 0x30) + (ulong)*(ushort *)(lVar23 + 2) * 8;
                uVar37 = (ulong)*(byte *)(lVar26 + 6);
                if (uVar37 != 0) {
                  lVar23 = (ulong)*(ushort *)(lVar23 + 4) + *(ushort *)(lVar26 + 2) * uVar22;
                  uVar38 = uVar37 & 3;
                  if (uVar37 - 1 < 3) {
                    lVar30 = 0;
                  }
                  else {
                    lVar30 = 0;
                    pfVar18 = (float *)(lVar19 + 8 + lVar23 * 4);
                    pfVar20 = (float *)(lVar29 + 8 + (ulong)*(ushort *)(lVar26 + 4) * 4);
                    do {
                      lVar30 = lVar30 + 4;
                      fVar44 = fVar44 + pfVar18[-2] * pfVar20[-2] + pfVar18[-1] * pfVar20[-1] +
                               *pfVar18 * *pfVar20 + pfVar18[1] * pfVar20[1];
                      pfVar18 = pfVar18 + 4;
                      pfVar20 = pfVar20 + 4;
                    } while (uVar37 - uVar38 != lVar30);
                  }
                  if ((*(byte *)(lVar26 + 6) & 3) != 0) {
                    pfVar18 = (float *)(lVar19 + (lVar30 + lVar23) * 4);
                    pfVar20 = (float *)(lVar29 + (lVar30 + (ulong)*(ushort *)(lVar26 + 4)) * 4);
                    do {
                      uVar38 = uVar38 - 1;
                      fVar44 = fVar44 + *pfVar18 * *pfVar20;
                      pfVar18 = pfVar18 + 1;
                      pfVar20 = pfVar20 + 1;
                    } while (uVar38 != 0);
                  }
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 != uVar11);
            }
            lVar28 = (long)*(short *)((long)pfVar40 + 0x16) * 4;
            fVar45 = *pfVar40 +
                     (float)((uint)(fVar50 * (float)uVar47) &
                            CONCAT13(~(byte)((uint)iVar49 >> 0x18),
                                     CONCAT12(~(byte)((uint)iVar49 >> 0x10),
                                              CONCAT11(~(byte)((uint)iVar49 >> 8),~(byte)iVar49))))
                     * (*(float *)(*(long *)(param_2 + 0xf0) + lVar28) -
                       (fVar44 - fVar45 * *(float *)(lVar29 + lVar28)));
            fVar44 = pfVar40[1] + pfVar40[3];
            fVar50 = 1.17;
            if (0.0 <= fVar44) {
              fVar50 = 1.43;
            }
            if (fVar44 * fVar50 <= fVar45) {
              fVar50 = pfVar40[2] + pfVar40[4];
              fVar44 = 1.17;
              if (fVar50 <= 0.0) {
                fVar44 = 1.43;
              }
              if (fVar45 <= fVar50 * fVar44) goto LAB_030a7b44;
            }
            *(undefined1 *)((long)pfVar40 + 0x1b) = 1;
            fVar44 = pfVar40[3];
            if (*(char *)((long)pfVar40 + 0x1d) != '\x01') {
              fVar44 = pfVar40[4];
            }
            *pfVar40 = fVar44 - *pfVar40;
            FUN_030a7e30(pfVar40,param_2,lVar19,uVar21);
          }
        }
LAB_030a7b44:
        pfVar40 = pfVar40 + 8;
      } while (pfVar40 != pfVar4);
    }
  }
  puVar14 = PTR_PTR_0434a080;
  if (0 < *(int *)(param_2 + 0x18c)) {
    uVar36 = *(uint *)(param_2 + 0x108);
    uVar27 = (ulong)(*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0)) >> 2;
    uVar25 = (uint)uVar27;
    if (uVar36 != uVar25) {
      uVar16 = *(uint *)(param_2 + 0x10c);
      if ((int)(uVar16 & 0x3fffffff) < (int)uVar25) {
        uVar21 = *(undefined8 *)(param_2 + 0x100);
        if (0x3fffffff < (int)uVar25) {
          FUN_032bd0a8(uVar27 & 0xffffffff);
          uVar16 = *(uint *)(param_2 + 0x10c);
        }
        uVar16 = (uVar16 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar16) {
          uVar16 = 0x3fffffff;
        }
        uVar17 = uVar25;
        if ((int)uVar25 <= (int)uVar16) {
          uVar17 = uVar16;
        }
        uVar21 = FUN_032bd1d4(puVar14,uVar17,4,uVar21,uVar36,(uint *)(param_2 + 0x10c));
        uVar36 = *(uint *)(param_2 + 0x108);
        *(undefined8 *)(param_2 + 0x100) = uVar21;
      }
      if (((int)uVar36 < (int)uVar25) || ((int)uVar25 < (int)uVar36)) {
        *(uint *)(param_2 + 0x108) = uVar25;
      }
    }
  }
  return;
}


