/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a354c; name: FUN_032a354c
 */


void FUN_032a354c(long *param_1,long *param_2,uint param_3)

{
  undefined1 *puVar1;
  float *pfVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  size_t __n;
  undefined1 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  char cVar10;
  float *pfVar11;
  long lVar12;
  undefined8 uVar13;
  float *pfVar14;
  ushort *puVar15;
  ulong uVar16;
  ushort *puVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  long lVar22;
  float *pfVar23;
  uint *puVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  long lVar30;
  ulong uVar31;
  byte *pbVar32;
  uint uVar33;
  int iVar34;
  uint *puVar35;
  long lVar36;
  uint *puVar37;
  uint *puVar38;
  uint *puVar39;
  uint *in_x16;
  ulong uVar40;
  long lVar41;
  uint *in_x17;
  long lVar42;
  long lVar43;
  void *pvVar44;
  void *pvVar45;
  ulong uVar46;
  ulong uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auStack_240 [16];
  long local_230;
  undefined4 local_228;
  undefined1 uStack_224;
  undefined3 uStack_223;
  long lStack_220;
  long local_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  size_t local_68;
  
  bVar7 = *(byte *)((long)param_2 + 0xc);
  uVar18 = (ulong)param_3;
  bVar8 = *(byte *)((long)param_1 + 0xc);
  if (((uint)bVar8 == (uint)bVar7) &&
     ((uint)*(byte *)((long)param_1 + 0xd) == (uint)*(byte *)((long)param_2 + 0xd))) {
    if (bVar7 == 8) goto LAB_032a3594;
    iVar34 = (uint)(byte)(&DAT_03aac400)[bVar7] * (uint)*(byte *)((long)param_1 + 0xd);
LAB_032a35e0:
    uVar19 = iVar34 + 3U & 0x1fffc;
  }
  else {
    uVar19 = (uint)bVar7;
    if ((((bVar8 - 3 | uVar19 - 3) & 0xff) < 2) &&
       (uVar33 = (uint)*(byte *)((long)param_1 + 0xd),
       *(byte *)((long)param_1 + 0xd) == *(byte *)((long)param_2 + 0xd))) {
      if (bVar8 != 8) {
        bVar7 = (&DAT_03aac400)[bVar8];
LAB_032a35d8:
        iVar34 = bVar7 * uVar33;
        goto LAB_032a35e0;
      }
    }
    else {
      uVar20 = (uint)bVar7;
      if ((bVar8 != uVar19) ||
         (uVar33 = (uint)*(byte *)((long)param_2 + 0xd), *(byte *)((long)param_1 + 0xd) < uVar33)) {
        switch(bVar8) {
        case 2:
          switch(uVar19 - 3) {
          case 0:
            if (0 < (int)param_3) {
              bVar7 = *(byte *)((long)param_1 + 0xd);
              uVar18 = (ulong)bVar7;
              if ((bVar7 == *(byte *)((long)param_2 + 0xd)) && (bVar7 != 0)) {
                lVar12 = *param_2;
                uVar19 = 0;
                lVar36 = *param_1;
                lVar41 = param_2[1];
                puVar15 = (ushort *)(lVar12 + 8);
                lVar43 = param_1[1];
                if (uVar18 - 1 < 7) goto LAB_032a3a00;
                do {
                  lVar42 = 0;
                  puVar17 = puVar15;
                  do {
                    pbVar32 = (byte *)(lVar36 + lVar42);
                    lVar42 = lVar42 + 8;
                    puVar17[-4] = (ushort)*pbVar32;
                    puVar17[-3] = (ushort)pbVar32[1];
                    puVar17[-2] = (ushort)pbVar32[2];
                    puVar17[-1] = (ushort)pbVar32[3];
                    *puVar17 = (ushort)pbVar32[4];
                    puVar17[1] = (ushort)pbVar32[5];
                    puVar17[2] = (ushort)pbVar32[6];
                    puVar17[3] = (ushort)pbVar32[7];
                    puVar17 = puVar17 + 8;
                  } while (uVar18 - (uVar18 & 7) != lVar42);
                  while( true ) {
                    if ((bVar7 & 7) != 0) {
                      uVar16 = uVar18 & 7;
                      do {
                        uVar16 = uVar16 - 1;
                        *(ushort *)(lVar12 + lVar42 * 2) = (ushort)*(byte *)(lVar36 + lVar42);
                        lVar42 = lVar42 + 1;
                      } while (uVar16 != 0);
                    }
                    uVar19 = uVar19 + 1;
                    lVar12 = lVar12 + (int)lVar41;
                    lVar36 = lVar36 + (int)lVar43;
                    puVar15 = (ushort *)((long)puVar15 + (long)(int)lVar41);
                    if (uVar19 == param_3) {
                      return;
                    }
                    if (6 < uVar18 - 1) break;
LAB_032a3a00:
                    lVar42 = 0;
                  }
                } while( true );
              }
            }
            break;
          case 1:
            if (0 < (int)param_3) {
              bVar7 = *(byte *)((long)param_1 + 0xd);
              uVar18 = (ulong)bVar7;
              bVar8 = *(byte *)((long)param_2 + 0xd);
              uVar16 = (ulong)bVar8;
              if (bVar7 <= bVar8) {
                lVar36 = *param_1;
                uVar47 = uVar18 - 1;
                uVar19 = (uint)bVar7;
                uVar33 = (uint)bVar8;
                lVar12 = *param_2;
                lVar41 = (long)(int)param_2[1];
                lVar43 = (long)(int)param_1[1];
                if (uVar19 != 0) {
                  if (uVar33 <= uVar19) {
                    uVar19 = 0;
                    puVar15 = (ushort *)(lVar12 + 8);
                    if (uVar47 < 7) goto LAB_032a3e30;
                    do {
                      lVar42 = 0;
                      puVar17 = puVar15;
                      do {
                        pbVar32 = (byte *)(lVar36 + lVar42);
                        lVar42 = lVar42 + 8;
                        puVar17[-4] = (ushort)*pbVar32;
                        puVar17[-3] = (ushort)pbVar32[1];
                        puVar17[-2] = (ushort)pbVar32[2];
                        puVar17[-1] = (ushort)pbVar32[3];
                        *puVar17 = (ushort)pbVar32[4];
                        puVar17[1] = (ushort)pbVar32[5];
                        puVar17[2] = (ushort)pbVar32[6];
                        puVar17[3] = (ushort)pbVar32[7];
                        puVar17 = puVar17 + 8;
                      } while (uVar18 - (uVar18 & 7) != lVar42);
                      while( true ) {
                        if ((bVar7 & 7) != 0) {
                          uVar16 = uVar18 & 7;
                          do {
                            uVar16 = uVar16 - 1;
                            *(ushort *)(lVar12 + lVar42 * 2) = (ushort)*(byte *)(lVar36 + lVar42);
                            lVar42 = lVar42 + 1;
                          } while (uVar16 != 0);
                        }
                        uVar19 = uVar19 + 1;
                        lVar12 = lVar12 + lVar41;
                        lVar36 = lVar36 + lVar43;
                        puVar15 = (ushort *)((long)puVar15 + lVar41);
                        if (uVar19 == param_3) {
                          return;
                        }
                        if (6 < uVar47) break;
LAB_032a3e30:
                        lVar42 = 0;
                      }
                    } while( true );
                  }
                  uVar20 = 0;
                  puVar15 = (ushort *)(lVar12 + 8);
                  lVar42 = lVar12 + 0xe;
                  if (uVar47 < 7) goto LAB_032a3b14;
                  do {
                    lVar22 = 0;
                    puVar17 = puVar15;
                    do {
                      pbVar32 = (byte *)(lVar36 + lVar22);
                      lVar22 = lVar22 + 8;
                      puVar17[-4] = (ushort)*pbVar32;
                      puVar17[-3] = (ushort)pbVar32[1];
                      puVar17[-2] = (ushort)pbVar32[2];
                      puVar17[-1] = (ushort)pbVar32[3];
                      *puVar17 = (ushort)pbVar32[4];
                      puVar17[1] = (ushort)pbVar32[5];
                      puVar17[2] = (ushort)pbVar32[6];
                      puVar17[3] = (ushort)pbVar32[7];
                      puVar17 = puVar17 + 8;
                    } while (uVar18 - (uVar18 & 7) != lVar22);
                    while( true ) {
                      if ((bVar7 & 7) != 0) {
                        uVar40 = uVar18 & 7;
                        do {
                          uVar40 = uVar40 - 1;
                          *(ushort *)(lVar12 + lVar22 * 2) = (ushort)*(byte *)(lVar36 + lVar22);
                          lVar22 = lVar22 + 1;
                        } while (uVar40 != 0);
                      }
                      uVar40 = uVar18;
                      if ((uVar33 - uVar19 & 7) != 0) {
                        uVar46 = (ulong)(uVar33 - uVar19) & 7;
                        do {
                          uVar46 = uVar46 - 1;
                          *(ushort *)(lVar12 + uVar40 * 2) = (ushort)*(byte *)(lVar36 + uVar47);
                          uVar40 = uVar40 + 1;
                        } while (uVar46 != 0);
                      }
                      if (6 < ~uVar18 + uVar16) {
                        lVar30 = uVar16 - uVar40;
                        lVar22 = lVar42;
                        do {
                          puVar17 = (ushort *)(lVar22 + uVar40 * 2);
                          lVar22 = lVar22 + 0x10;
                          puVar17[-7] = (ushort)*(byte *)(lVar36 + uVar47);
                          lVar30 = lVar30 + -8;
                          puVar17[-6] = (ushort)*(byte *)(lVar36 + uVar47);
                          puVar17[-5] = (ushort)*(byte *)(lVar36 + uVar47);
                          puVar17[-4] = (ushort)*(byte *)(lVar36 + uVar47);
                          puVar17[-3] = (ushort)*(byte *)(lVar36 + uVar47);
                          puVar17[-2] = (ushort)*(byte *)(lVar36 + uVar47);
                          puVar17[-1] = (ushort)*(byte *)(lVar36 + uVar47);
                          *puVar17 = (ushort)*(byte *)(lVar36 + uVar47);
                        } while (lVar30 != 0);
                      }
                      uVar20 = uVar20 + 1;
                      lVar12 = lVar12 + lVar41;
                      lVar36 = lVar36 + lVar43;
                      puVar15 = (ushort *)((long)puVar15 + lVar41);
                      lVar42 = lVar42 + lVar41;
                      if (uVar20 == param_3) {
                        return;
                      }
                      if (6 < uVar47) break;
LAB_032a3b14:
                      lVar22 = 0;
                    }
                  } while( true );
                }
                if (uVar33 > uVar19) {
                  uVar19 = 0;
                  lVar42 = lVar12 + 0xe;
                  do {
                    uVar40 = uVar18;
                    if ((bVar8 & 7) != 0) {
                      uVar46 = (ulong)uVar33 & 7;
                      do {
                        uVar46 = uVar46 - 1;
                        *(ushort *)(lVar12 + uVar40 * 2) = (ushort)*(byte *)(lVar36 + uVar47);
                        uVar40 = uVar40 + 1;
                      } while (uVar46 != 0);
                    }
                    if (6 < ~uVar18 + uVar16) {
                      lVar30 = uVar16 - uVar40;
                      lVar22 = lVar42;
                      do {
                        puVar15 = (ushort *)(lVar22 + uVar40 * 2);
                        lVar22 = lVar22 + 0x10;
                        puVar15[-7] = (ushort)*(byte *)(lVar36 + uVar47);
                        lVar30 = lVar30 + -8;
                        puVar15[-6] = (ushort)*(byte *)(lVar36 + uVar47);
                        puVar15[-5] = (ushort)*(byte *)(lVar36 + uVar47);
                        puVar15[-4] = (ushort)*(byte *)(lVar36 + uVar47);
                        puVar15[-3] = (ushort)*(byte *)(lVar36 + uVar47);
                        puVar15[-2] = (ushort)*(byte *)(lVar36 + uVar47);
                        puVar15[-1] = (ushort)*(byte *)(lVar36 + uVar47);
                        *puVar15 = (ushort)*(byte *)(lVar36 + uVar47);
                      } while (lVar30 != 0);
                    }
                    uVar19 = uVar19 + 1;
                    lVar12 = lVar12 + lVar41;
                    lVar36 = lVar36 + lVar43;
                    lVar42 = lVar42 + lVar41;
                  } while (uVar19 != param_3);
                }
              }
            }
            break;
          case 4:
          case 5:
            bVar7 = *(byte *)((long)param_1 + 0xd);
            uVar19 = (uint)bVar7;
            if (((uVar19 == *(byte *)((long)param_2 + 0xd)) &&
                (*(char *)((long)param_1 + 0xc) == '\x02')) &&
               (*(byte *)((long)param_2 + 0xc) - 7 < 2)) {
              puVar24 = (uint *)*param_2;
              puVar21 = (uint *)*param_1;
              if (uVar19 - 1 < 4) {
                lVar12 = (long)(int)param_1[1];
                lVar36 = (long)(int)param_2[1];
                switch(uVar19) {
                case 1:
                  if (0 < (int)param_3) {
                    uVar19 = param_3 & 3;
                    if (2 < param_3 - 1) {
                      iVar34 = uVar19 - param_3;
                      do {
                        *puVar24 = (uint)(byte)*puVar21;
                        pbVar32 = (byte *)((long)puVar21 + lVar12) + lVar12;
                        *(uint *)((long)puVar24 + lVar36) = (uint)*(byte *)((long)puVar21 + lVar12);
                        puVar24 = (uint *)((long)puVar24 + lVar36 + lVar36);
                        *puVar24 = (uint)*pbVar32;
                        puVar24 = (uint *)((long)puVar24 + lVar36);
                        *puVar24 = (uint)pbVar32[lVar12];
                        puVar21 = (uint *)(pbVar32 + lVar12 + lVar12);
                        puVar24 = (uint *)((long)puVar24 + lVar36);
                        iVar34 = iVar34 + 4;
                      } while (iVar34 != 0);
                    }
                    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
                      *puVar24 = (uint)(byte)*puVar21;
                      puVar21 = (uint *)((long)puVar21 + lVar12);
                      puVar24 = (uint *)((long)puVar24 + lVar36);
                    }
                  }
                  break;
                case 2:
                  if (0 < (int)param_3) {
                    if (param_3 != 1) {
                      iVar34 = (param_3 & 1) - param_3;
                      do {
                        iVar34 = iVar34 + 2;
                        puVar15 = (ushort *)((long)puVar21 + lVar12);
                        *puVar24 = (uint)(ushort)*puVar21;
                        puVar21 = (uint *)((long)puVar15 + lVar12);
                        *(uint *)((long)puVar24 + lVar36) = (uint)*puVar15;
                        puVar24 = (uint *)((long)puVar24 + lVar36 + lVar36);
                      } while (iVar34 != 0);
                    }
                    if ((param_3 & 1) != 0) {
                      *puVar24 = (uint)(ushort)*puVar21;
                      return;
                    }
                  }
                  break;
                case 3:
                  if (0 < (int)param_3) {
                    puVar28 = (undefined1 *)((long)puVar21 + 2);
                    do {
                      puVar3 = (undefined2 *)(puVar28 + -2);
                      uVar19 = (int)uVar18 - 1;
                      uVar18 = (ulong)uVar19;
                      uVar9 = *puVar28;
                      puVar28 = puVar28 + lVar12;
                      *puVar24 = (uint)CONCAT12(uVar9,*puVar3);
                      puVar24 = (uint *)((long)puVar24 + lVar36);
                    } while (uVar19 != 0);
                  }
                  break;
                case 4:
                  if (0 < (int)param_3) {
                    lVar41 = (long)puVar21 + 3;
                    do {
                      *puVar24 = *(uint *)(lVar41 + -3);
                      puVar24 = (uint *)((long)puVar24 + lVar36);
                      uVar19 = (int)uVar18 - 1;
                      uVar18 = (ulong)uVar19;
                      lVar41 = lVar41 + lVar12;
                    } while (uVar19 != 0);
                  }
                }
              }
              else if (0 < (int)param_3) {
                uVar19 = (uint)(bVar7 >> 2);
                bVar8 = bVar7 & 3;
                if (uVar19 == 0) {
                  if (bVar8 == 3) {
                    do {
                      uVar19 = (int)uVar18 - 1;
                      uVar18 = (ulong)uVar19;
                      *puVar24 = (uint)(uint3)*puVar21;
                    } while (uVar19 != 0);
                  }
                  else {
                    do {
                      if (bVar8 == 1) {
                        uVar19 = (uint)(byte)*puVar21;
LAB_032a4718:
                        *puVar24 = uVar19;
                      }
                      else if (bVar8 == 2) {
                        uVar19 = (uint)(ushort)*puVar21;
                        goto LAB_032a4718;
                      }
                      uVar19 = (int)uVar18 - 1;
                      uVar18 = (ulong)uVar19;
                    } while (uVar19 != 0);
                  }
                }
                else {
                  bVar7 = bVar7 >> 2;
                  uVar33 = 0;
                  do {
                    puVar38 = puVar24;
                    puVar35 = puVar21;
                    if (uVar19 == 1) {
                      if ((bVar7 & 1) == 0) goto LAB_032a458c;
LAB_032a45f0:
                      puVar39 = puVar35 + 1;
                      puVar37 = puVar38 + 1;
                      *puVar38 = *puVar35;
                      in_x17 = puVar35;
                      if (bVar8 == 1) goto LAB_032a4564;
LAB_032a4594:
                      if (bVar8 == 2) {
                        pbVar32 = (byte *)((long)in_x17 + 5);
                        in_x17 = (uint *)(ulong)*pbVar32;
                        uVar20 = (uint)CONCAT11(*pbVar32,(char)*puVar39);
                        goto LAB_032a4568;
                      }
                      if (bVar8 == 3) {
                        puVar28 = (undefined1 *)((long)in_x17 + 5);
                        pbVar32 = (byte *)((long)in_x17 + 6);
                        in_x17 = (uint *)(ulong)*pbVar32;
                        uVar20 = (uint)CONCAT12(*pbVar32,CONCAT11(*puVar28,(char)*puVar39));
                        goto LAB_032a4568;
                      }
                    }
                    else {
                      iVar34 = (bVar7 & 1) - uVar19;
                      do {
                        puVar37 = puVar35;
                        *puVar38 = *puVar37;
                        puVar38[1] = puVar37[1];
                        puVar35 = puVar37 + 2;
                        puVar38 = puVar38 + 2;
                        iVar34 = iVar34 + 2;
                      } while (iVar34 != 0);
                      in_x17 = puVar37 + 1;
                      if ((bVar7 & 1) != 0) goto LAB_032a45f0;
LAB_032a458c:
                      puVar37 = puVar38;
                      puVar39 = puVar35;
                      if (bVar8 != 1) goto LAB_032a4594;
LAB_032a4564:
                      uVar20 = (uint)(byte)*puVar39;
LAB_032a4568:
                      *puVar37 = uVar20;
                    }
                    uVar33 = uVar33 + 1;
                  } while (uVar33 != param_3);
                }
              }
            }
            return;
          case 7:
            bVar7 = *(byte *)((long)param_1 + 0xd);
            uVar16 = (ulong)bVar7;
            bVar8 = *(byte *)((long)param_2 + 0xd);
            uVar18 = (ulong)bVar8;
            lVar41 = (long)(int)param_1[1];
            lVar36 = (long)(int)param_2[1];
            lVar12 = *param_1;
            puVar25 = (undefined4 *)*param_2;
            if ((uint)bVar7 == (uint)bVar8) {
              if ((int)param_3 < 1) {
                return;
              }
              if (bVar7 == 0) {
                return;
              }
              uVar19 = 0;
              pfVar23 = (float *)(puVar25 + 2);
              if (2 < uVar16 - 1) goto LAB_032a47d0;
              do {
                lVar43 = 0;
                while( true ) {
                  if ((bVar7 & 3) != 0) {
                    uVar18 = uVar16 & 3;
                    do {
                      uVar18 = uVar18 - 1;
                      fVar50 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + lVar43));
                      puVar25[lVar43] = fVar50 * 0.003921569;
                      lVar43 = lVar43 + 1;
                    } while (uVar18 != 0);
                  }
                  uVar19 = uVar19 + 1;
                  puVar25 = (undefined4 *)((long)puVar25 + lVar36);
                  lVar12 = lVar12 + lVar41;
                  pfVar23 = (float *)((long)pfVar23 + lVar36);
                  if (uVar19 == param_3) {
                    return;
                  }
                  if (uVar16 - 1 < 3) break;
LAB_032a47d0:
                  lVar43 = 0;
                  pfVar14 = pfVar23;
                  do {
                    pbVar32 = (byte *)(lVar12 + lVar43);
                    lVar43 = lVar43 + 4;
                    fVar50 = (float)NEON_ucvtf((uint)*pbVar32);
                    pfVar14[-2] = fVar50 * 0.003921569;
                    fVar50 = (float)NEON_ucvtf((uint)pbVar32[1]);
                    pfVar14[-1] = fVar50 * 0.003921569;
                    fVar50 = (float)NEON_ucvtf((uint)pbVar32[2]);
                    *pfVar14 = fVar50 * 0.003921569;
                    fVar50 = (float)NEON_ucvtf((uint)pbVar32[3]);
                    pfVar14[1] = fVar50 * 0.003921569;
                    pfVar14 = pfVar14 + 4;
                  } while (uVar16 - (uVar16 & 3) != lVar43);
                }
              } while( true );
            }
            if (*(char *)((long)param_1 + 0xe) == '\a') {
              cVar10 = *(char *)((long)param_2 + 0xe);
              if (cVar10 == '\b') {
                if ((int)param_3 < 1) {
                  return;
                }
                if (bVar8 - 1 != (uint)bVar7) {
                  return;
                }
                if (bVar8 == 0) {
                  return;
                }
                uVar19 = 0;
                pfVar23 = (float *)(puVar25 + 2);
                if (2 < uVar18 - 1) goto LAB_032a49e4;
                do {
                  lVar43 = 0;
                  while( true ) {
                    if ((bVar8 & 3) != 0) {
                      uVar16 = uVar18 & 3;
                      do {
                        uVar16 = uVar16 - 1;
                        fVar50 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + lVar43));
                        puVar25[lVar43] = fVar50 * 0.003921569;
                        lVar43 = lVar43 + 1;
                      } while (uVar16 != 0);
                    }
                    uVar19 = uVar19 + 1;
                    puVar25 = (undefined4 *)((long)puVar25 + lVar36);
                    lVar12 = lVar12 + lVar41;
                    pfVar23 = (float *)((long)pfVar23 + lVar36);
                    if (uVar19 == param_3) {
                      return;
                    }
                    if (uVar18 - 1 < 3) break;
LAB_032a49e4:
                    lVar43 = 0;
                    pfVar14 = pfVar23;
                    do {
                      pbVar32 = (byte *)(lVar12 + lVar43);
                      lVar43 = lVar43 + 4;
                      fVar50 = (float)NEON_ucvtf((uint)*pbVar32);
                      pfVar14[-2] = fVar50 * 0.003921569;
                      fVar50 = (float)NEON_ucvtf((uint)pbVar32[1]);
                      pfVar14[-1] = fVar50 * 0.003921569;
                      fVar50 = (float)NEON_ucvtf((uint)pbVar32[2]);
                      *pfVar14 = fVar50 * 0.003921569;
                      fVar50 = (float)NEON_ucvtf((uint)pbVar32[3]);
                      pfVar14[1] = fVar50 * 0.003921569;
                      pfVar14 = pfVar14 + 4;
                    } while (uVar18 - (uVar18 & 3) != lVar43);
                  }
                } while( true );
              }
            }
            else {
              if (*(char *)((long)param_1 + 0xe) == '\b') goto LAB_032a4870;
              cVar10 = *(char *)((long)param_2 + 0xe);
            }
            if (cVar10 != '\a') {
              return;
            }
LAB_032a4870:
            if ((0 < (int)param_3) && (bVar7 - 1 == (uint)bVar8)) {
              if (bVar8 != 0) {
                uVar19 = 0;
                pfVar23 = (float *)(puVar25 + 1);
                if (bVar8 != 1) goto LAB_032a48f8;
                do {
                  lVar43 = 0;
                  fVar50 = 0.0;
                  while( true ) {
                    if ((bVar8 & 1) != 0) {
                      uVar13 = NEON_scvtf((ulong)CONCAT14(*(byte *)(lVar12 + lVar43),
                                                          (uint)*(byte *)(lVar12 + lVar43)),4);
                      fVar50 = fVar50 + (float)uVar13;
                      puVar25[lVar43] = (float)uVar13 * 0.003921569;
                    }
                    uVar19 = uVar19 + 1;
                    lVar12 = lVar12 + lVar41;
                    puVar25[uVar18] = (255.0 - fVar50) * 0.003921569;
                    puVar25 = (undefined4 *)((long)puVar25 + lVar36);
                    pfVar23 = (float *)((long)pfVar23 + lVar36);
                    if (uVar19 == param_3) {
                      return;
                    }
                    if (bVar8 == 1) break;
LAB_032a48f8:
                    fVar50 = 0.0;
                    lVar43 = 0;
                    pfVar14 = pfVar23;
                    do {
                      pbVar32 = (byte *)(lVar12 + lVar43);
                      lVar43 = lVar43 + 2;
                      bVar7 = *pbVar32;
                      uVar13 = NEON_scvtf((ulong)CONCAT14(bVar7,(uint)bVar7),4);
                      pfVar14[-1] = (float)uVar13 * 0.003921569;
                      bVar7 = pbVar32[1];
                      uVar52 = NEON_scvtf((ulong)CONCAT14(bVar7,(uint)bVar7),4);
                      fVar50 = fVar50 + (float)uVar13 + (float)uVar52;
                      *pfVar14 = (float)uVar52 * 0.003921569;
                      pfVar14 = pfVar14 + 2;
                    } while (uVar18 - (uVar18 & 1) != lVar43);
                  }
                } while( true );
              }
              uVar19 = param_3 & 3;
              if (2 < param_3 - 1) {
                iVar34 = uVar19 - param_3;
                puVar27 = puVar25;
                do {
                  puVar25 = puVar27 + lVar36;
                  iVar34 = iVar34 + 4;
                  *puVar27 = 0x3f800000;
                  *(undefined4 *)((long)puVar27 + lVar36) = 0x3f800000;
                  *(undefined4 *)((long)puVar27 + lVar36 * 2) = 0x3f800000;
                  *(undefined4 *)((long)puVar27 + lVar36 * 3) = 0x3f800000;
                  puVar27 = puVar25;
                } while (iVar34 != 0);
              }
              if (uVar19 != 0) {
                do {
                  *puVar25 = 0x3f800000;
                  uVar19 = uVar19 - 1;
                  puVar25 = (undefined4 *)((long)puVar25 + lVar36);
                } while (uVar19 != 0);
              }
            }
            return;
          }
switchD_032a3784_caseD_3:
          return;
        case 3:
        case 4:
          if (uVar20 - 7 < 2) {
            if ((((*(char *)((long)param_1 + 0xd) == '\x04') &&
                 (*(char *)((long)param_2 + 0xd) == '\x04')) &&
                (*(char *)((long)param_1 + 0xc) == '\x03')) &&
               ((*(byte *)((long)param_2 + 0xc) - 7 < 2 && (0 < (int)param_3)))) {
              lVar12 = param_1[1];
              uVar19 = *(uint *)(param_2 + 1);
              puVar21 = (uint *)*param_2;
              pbVar32 = (byte *)(*param_1 + 4);
              do {
                pbVar4 = pbVar32 + -4;
                uVar33 = (int)uVar18 - 1;
                uVar18 = (ulong)uVar33;
                puVar17 = (ushort *)(pbVar32 + -2);
                bVar7 = *pbVar32;
                puVar15 = (ushort *)(pbVar32 + 2);
                pbVar32 = pbVar32 + (long)(int)lVar12 * 2;
                *puVar21 = (uint)*pbVar4 | (*puVar17 & 0xff) << 8 | (uint)bVar7 << 0x10 |
                           (uint)*puVar15 << 0x18;
                puVar21 = (uint *)((long)puVar21 + ((long)((ulong)uVar19 << 0x20) >> 0x21));
              } while (uVar33 != 0);
            }
            return;
          }
          if (uVar20 != 2) {
            return;
          }
          if ((int)param_3 < 1) {
            return;
          }
          bVar7 = *(byte *)((long)param_1 + 0xd);
          uVar18 = (ulong)bVar7;
          if (bVar7 != *(byte *)((long)param_2 + 0xd)) {
            return;
          }
          if (bVar7 == 0) {
            return;
          }
          lVar36 = *param_1;
          uVar19 = 0;
          lVar12 = *param_2;
          lVar41 = param_2[1];
          puVar28 = (undefined1 *)(lVar36 + 8);
          lVar43 = param_1[1];
          if (uVar18 - 1 < 7) goto LAB_032a381c;
          do {
            lVar42 = 0;
            puVar29 = puVar28;
            do {
              puVar5 = (undefined1 *)(lVar12 + lVar42);
              lVar42 = lVar42 + 8;
              *puVar5 = puVar29[-8];
              puVar5[1] = puVar29[-6];
              puVar5[2] = puVar29[-4];
              puVar5[3] = puVar29[-2];
              puVar5[4] = *puVar29;
              puVar5[5] = puVar29[2];
              puVar5[6] = puVar29[4];
              puVar1 = puVar29 + 6;
              puVar29 = puVar29 + 0x10;
              puVar5[7] = *puVar1;
            } while (uVar18 - (uVar18 & 7) != lVar42);
            while( true ) {
              if ((bVar7 & 7) != 0) {
                uVar16 = uVar18 & 7;
                do {
                  uVar16 = uVar16 - 1;
                  *(char *)(lVar12 + lVar42) = (char)*(undefined2 *)(lVar36 + lVar42 * 2);
                  lVar42 = lVar42 + 1;
                } while (uVar16 != 0);
              }
              uVar19 = uVar19 + 1;
              lVar12 = lVar12 + (int)lVar41;
              lVar36 = lVar36 + (int)lVar43;
              puVar28 = puVar28 + (int)lVar43;
              if (uVar19 == param_3) {
                return;
              }
              if (6 < uVar18 - 1) break;
LAB_032a381c:
              lVar42 = 0;
            }
          } while( true );
        case 7:
          switch(uVar20) {
          case 2:
            goto LAB_032a3ee0;
          case 3:
            if ((((*(char *)((long)param_1 + 0xd) == '\x04') &&
                 (*(char *)((long)param_2 + 0xd) == '\x04')) &&
                (*(char *)((long)param_1 + 0xc) == '\a')) &&
               ((*(char *)((long)param_2 + 0xc) == '\x03' && (0 < (int)param_3)))) {
              uVar19 = (int)param_2[1] >> 1;
              lVar12 = param_1[1];
              puVar25 = (undefined4 *)*param_1;
              puVar15 = (ushort *)(*param_2 + 4);
              do {
                uVar6 = *puVar25;
                puVar25 = (undefined4 *)((long)puVar25 + (long)(int)lVar12);
                puVar15[-2] = (ushort)uVar6 & 0xff;
                *puVar15 = (ushort)((uint)uVar6 >> 0x10) & 0xff;
                puVar15[-1] = (ushort)((uint)uVar6 >> 8) & 0xff;
                puVar15[1] = (ushort)(byte)((uint)uVar6 >> 0x18);
                uVar33 = (int)uVar18 - 1;
                uVar18 = (ulong)uVar33;
                puVar15 = (ushort *)
                          ((long)puVar15 +
                          (-(ulong)(uVar19 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar19 << 1));
              } while (uVar33 != 0);
            }
            return;
          default:
            goto switchD_032a3784_caseD_3;
          case 8:
            if (((*(char *)((long)param_1 + 0xd) == *(char *)((long)param_2 + 0xd)) &&
                (*(char *)((long)param_1 + 0xc) == '\a')) &&
               ((*(char *)((long)param_2 + 0xc) == '\b' &&
                ((0 < (int)param_3 && (*(char *)((long)param_1 + 0xd) == '\x04')))))) {
              puVar28 = (undefined1 *)(*param_2 + 1);
              lVar12 = param_2[1];
              lVar36 = param_1[1];
              puVar29 = (undefined1 *)(*param_1 + 3);
              do {
                puVar28[-1] = puVar29[-3];
                *puVar28 = puVar29[-2];
                puVar28[1] = puVar29[-1];
                uVar9 = *puVar29;
                uVar19 = (int)uVar18 - 1;
                uVar18 = (ulong)uVar19;
                puVar29 = puVar29 + (int)lVar36;
                puVar28[2] = uVar9;
                puVar28 = puVar28 + (int)lVar12;
              } while (uVar19 != 0);
            }
            return;
          case 10:
            if ((((*(char *)((long)param_1 + 0xd) == *(char *)((long)param_2 + 0xd)) &&
                 (*(char *)((long)param_1 + 0xc) == '\a')) &&
                (*(char *)((long)param_2 + 0xc) == '\n')) &&
               ((0 < (int)param_3 && (*(char *)((long)param_1 + 0xd) == '\x04')))) {
              uVar19 = (int)param_2[1] >> 2;
              lVar12 = param_1[1];
              puVar26 = (undefined8 *)*param_2;
              puVar28 = (undefined1 *)(*param_1 + 3);
              do {
                uVar33 = (int)uVar18 - 1;
                uVar18 = (ulong)uVar33;
                auVar48._1_3_ = 0;
                auVar48[0] = puVar28[-3];
                auVar48[4] = puVar28[-2];
                auVar48._5_3_ = 0;
                auVar48[8] = puVar28[-1];
                uVar9 = *puVar28;
                puVar28 = puVar28 + (int)lVar12;
                auVar48._9_3_ = 0;
                auVar48[0xc] = uVar9;
                auVar48._13_3_ = 0;
                auVar49 = NEON_scvtf(auVar48,4);
                puVar26[1] = auVar49._8_8_;
                *puVar26 = auVar49._0_8_;
                puVar26 = (undefined8 *)
                          ((long)puVar26 +
                          (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2));
              } while (uVar33 != 0);
            }
            return;
          }
        case 10:
          switch(uVar20) {
          case 2:
            goto LAB_032a4b90;
          default:
            goto switchD_032a3784_caseD_3;
          case 8:
            if ((((*(char *)((long)param_1 + 0xd) == '\x04') &&
                 (*(char *)((long)param_2 + 0xd) == '\x01')) &&
                (*(char *)((long)param_1 + 0xc) == '\n')) &&
               ((0 < (int)param_3 && (*(char *)((long)param_2 + 0xc) == '\b')))) {
              auVar49._8_4_ = 0x437f0000;
              auVar49._0_8_ = 0x437f0000437f0000;
              auVar49._12_4_ = 0x437f0000;
              uVar19 = (int)param_2[1] >> 2;
              uVar33 = (int)param_1[1] >> 2;
              pfVar23 = (float *)*param_1;
              puVar21 = (uint *)*param_2;
              do {
                fVar50 = *pfVar23;
                pfVar14 = pfVar23 + 1;
                pfVar2 = pfVar23 + 2;
                pfVar11 = pfVar23 + 3;
                pfVar23 = (float *)((long)pfVar23 +
                                   (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar33 << 2));
                uVar20 = (int)uVar18 - 1;
                uVar18 = (ulong)uVar20;
                auVar53._0_4_ = fVar50 * 255.0;
                auVar53._4_4_ = *pfVar14 * 255.0;
                auVar53._8_4_ = *pfVar2 * 255.0;
                auVar53._12_4_ = *pfVar11 * 255.0;
                auVar53 = NEON_fmax(auVar53,ZEXT816(0),4);
                auVar53 = NEON_fmin(auVar53,auVar49,4);
                *puVar21 = (int)(auVar53._12_4_ + 8388608.0) << 0x18 |
                           (uint)(auVar53._0_4_ + 8388608.0) & 0xff |
                           ((uint)(auVar53._4_4_ + 8388608.0) & 0xff) << 8 |
                           ((uint)(auVar53._8_4_ + 8388608.0) & 0xff) << 0x10;
                puVar21 = (uint *)((long)puVar21 +
                                  (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 |
                                  (ulong)uVar19 << 2));
              } while (uVar20 != 0);
            }
            return;
          case 10:
            bVar7 = *(byte *)((long)param_1 + 0xd);
            uVar16 = (ulong)bVar7;
            if (((bVar7 <= *(byte *)((long)param_2 + 0xd)) &&
                (*(char *)((long)param_1 + 0xc) == '\n')) &&
               ((*(char *)((long)param_2 + 0xc) == '\n' && (0 < (int)param_3)))) {
              lVar12 = (long)((ulong)*(uint *)(param_2 + 1) << 0x20) >> 0x22;
              pvVar44 = (void *)*param_2;
              uVar19 = (uint)*(byte *)((long)param_2 + 0xd);
              if (bVar7 != 0) {
                uVar46 = uVar16 & 7;
                lVar36 = *param_1;
                uVar40 = uVar16 - 1;
                local_68 = (ulong)(uVar19 + ~(uint)bVar7) * 4 + 4;
                uVar47 = 0;
                lVar42 = uVar16 - uVar46;
                lVar41 = lVar12 << 2;
                lVar43 = ((long)((ulong)*(uint *)(param_1 + 1) << 0x20) >> 0x22) << 2;
                pvVar45 = pvVar44;
                local_80 = lVar43;
                lStack_78 = lVar41;
                local_70 = uVar16;
                if (6 < uVar40) goto LAB_032a4ff8;
                do {
                  lVar22 = 0;
                  while( true ) {
                    if ((bVar7 & 7) != 0) {
                      lVar22 = lVar22 << 2;
                      uVar31 = uVar46;
                      do {
                        uVar31 = uVar31 - 1;
                        *(undefined4 *)((long)pvVar45 + lVar22) = *(undefined4 *)(lVar36 + lVar22);
                        lVar22 = lVar22 + 4;
                      } while (uVar31 != 0);
                    }
                    if ((uint)uVar16 < uVar19) {
                      memset((void *)((long)pvVar44 + (uVar16 + uVar47 * lVar12) * 4),0,local_68);
                      lVar41 = lStack_78;
                      lVar43 = local_80;
                      uVar16 = local_70;
                    }
                    uVar47 = uVar47 + 1;
                    pvVar45 = (void *)((long)pvVar45 + lVar41);
                    lVar36 = lVar36 + lVar43;
                    if (uVar47 == uVar18) {
                      return;
                    }
                    if (uVar40 < 7) break;
LAB_032a4ff8:
                    lVar22 = 0;
                    lVar30 = 0x10;
                    do {
                      puVar25 = (undefined4 *)(lVar36 + lVar30);
                      puVar27 = (undefined4 *)((long)pvVar45 + lVar30);
                      lVar30 = lVar30 + 0x20;
                      puVar27[-4] = puVar25[-4];
                      puVar27[-3] = puVar25[-3];
                      puVar27[-2] = puVar25[-2];
                      puVar27[-1] = puVar25[-1];
                      *puVar27 = *puVar25;
                      puVar27[1] = puVar25[1];
                      puVar27[2] = puVar25[2];
                      lVar22 = lVar22 + 8;
                      puVar27[3] = puVar25[3];
                    } while (lVar42 != lVar22);
                  }
                } while( true );
              }
              if (uVar19 != 0) {
                uVar16 = uVar18 & 3;
                __n = (ulong)(uVar19 - 1) * 4 + 4;
                local_88 = lVar12;
                if (uVar18 - 1 < 3) {
                  lVar36 = 0;
                }
                else {
                  lVar36 = 0;
                  pvVar45 = pvVar44;
                  do {
                    memset(pvVar45,0,__n);
                    memset((void *)((long)pvVar45 + lVar12 * 4),0,__n);
                    memset((void *)((long)pvVar45 + lVar12 * 8),0,__n);
                    memset((void *)((long)pvVar45 + lVar12 * 0xc),0,__n);
                    lVar36 = lVar36 + 4;
                    pvVar45 = (void *)((long)pvVar45 + lVar12 * 0x10);
                  } while (uVar18 - uVar16 != lVar36);
                }
                if ((param_3 & 3) != 0) {
                  lVar12 = local_88 * 4;
                  pvVar44 = (void *)((long)pvVar44 + lVar36 * local_88 * 4);
                  do {
                    memset(pvVar44,0,__n);
                    uVar16 = uVar16 - 1;
                    pvVar44 = (void *)((long)pvVar44 + lVar12);
                  } while (uVar16 != 0);
                }
              }
            }
            return;
          case 0xb:
            if ((((*(char *)((long)param_1 + 0xd) == '\x03') &&
                 (*(char *)((long)param_2 + 0xd) == '\x01')) &&
                (*(char *)((long)param_1 + 0xc) == '\n')) &&
               ((0 < (int)param_3 && (*(char *)((long)param_2 + 0xc) == '\v')))) {
              uVar19 = (int)param_2[1] >> 2;
              puVar25 = (undefined4 *)(*param_2 + 8);
              uVar33 = (int)param_1[1] >> 2;
              puVar27 = (undefined4 *)(*param_1 + 8);
              do {
                puVar25[-2] = puVar27[-2];
                puVar25[-1] = puVar27[-1];
                uVar6 = *puVar27;
                uVar20 = (int)uVar18 - 1;
                uVar18 = (ulong)uVar20;
                puVar27 = (undefined4 *)
                          ((long)puVar27 +
                          (-(ulong)(uVar33 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar33 << 2));
                *puVar25 = uVar6;
                puVar25[1] = 0;
                puVar25 = (undefined4 *)
                          ((long)puVar25 +
                          (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2));
              } while (uVar20 != 0);
            }
            return;
          }
        }
        if ((uVar20 == 10) && (bVar8 == 0xb)) {
          if (*(char *)((long)param_1 + 0xd) == '\x01') {
            bVar7 = *(byte *)((long)param_2 + 0xd);
            if (((((*(char *)((long)param_1 + 0xd) != '\x01') ||
                  (*(byte *)((long)param_2 + 0xd) != bVar7)) ||
                 (*(char *)((long)param_1 + 0xc) != '\v')) ||
                (((int)param_3 < 1 || (*(char *)((long)param_2 + 0xc) != '\n')))) || (bVar7 == 0)) {
              return;
            }
            uVar33 = *(uint *)(param_2 + 1);
            uVar18 = (ulong)bVar7;
            uVar20 = *(uint *)(param_1 + 1);
            lVar12 = *param_2;
            lVar36 = *param_1;
            uVar19 = 0;
            if (6 < uVar18 - 1) goto LAB_032a53b8;
            do {
              lVar41 = 0;
              while( true ) {
                if ((bVar7 & 7) != 0) {
                  lVar41 = lVar41 << 2;
                  uVar16 = uVar18 & 7;
                  do {
                    uVar16 = uVar16 - 1;
                    *(undefined4 *)(lVar12 + lVar41) = *(undefined4 *)(lVar36 + lVar41);
                    lVar41 = lVar41 + 4;
                  } while (uVar16 != 0);
                }
                uVar19 = uVar19 + 1;
                lVar12 = lVar12 + ((long)((ulong)uVar33 << 0x20) >> 0x22) * 4;
                lVar36 = lVar36 + ((long)((ulong)uVar20 << 0x20) >> 0x22) * 4;
                if (uVar19 == param_3) {
                  return;
                }
                if (uVar18 - 1 < 7) break;
LAB_032a53b8:
                lVar41 = 0;
                lVar43 = 0x10;
                do {
                  puVar25 = (undefined4 *)(lVar36 + lVar43);
                  puVar27 = (undefined4 *)(lVar12 + lVar43);
                  lVar43 = lVar43 + 0x20;
                  puVar27[-4] = puVar25[-4];
                  puVar27[-3] = puVar25[-3];
                  puVar27[-2] = puVar25[-2];
                  puVar27[-1] = puVar25[-1];
                  *puVar27 = *puVar25;
                  puVar27[1] = puVar25[1];
                  puVar27[2] = puVar25[2];
                  lVar41 = lVar41 + 8;
                  puVar27[3] = puVar25[3];
                } while (uVar18 - (uVar18 & 7) != lVar41);
              }
            } while( true );
          }
          goto LAB_032a3c74;
        }
        if (bVar8 == 8) {
          if (*(char *)((long)param_1 + 0xd) == '\x04') {
            if (uVar20 != 2) goto LAB_032a3c74;
LAB_032a3ee0:
            bVar7 = *(byte *)((long)param_1 + 0xd);
            uVar19 = (uint)bVar7;
            if (uVar19 != *(byte *)((long)param_2 + 0xd)) {
              return;
            }
            if (1 < *(byte *)((long)param_1 + 0xc) - 7) {
              return;
            }
            if (*(char *)((long)param_2 + 0xc) != '\x02') {
              return;
            }
            puVar24 = (uint *)*param_2;
            puVar21 = (uint *)*param_1;
            if (uVar19 - 1 < 4) {
              lVar12 = (long)(int)param_1[1];
              lVar36 = (long)(int)param_2[1];
              switch(uVar19) {
              case 1:
                if (0 < (int)param_3) {
                  uVar19 = param_3 & 3;
                  if (2 < param_3 - 1) {
                    iVar34 = uVar19 - param_3;
                    do {
                      *(char *)puVar24 = (char)*puVar21;
                      puVar25 = (undefined4 *)((long)puVar21 + lVar12 + lVar12);
                      *(undefined1 *)((long)puVar24 + lVar36) =
                           (char)*(undefined4 *)((long)puVar21 + lVar12);
                      puVar27 = (undefined4 *)((long)puVar25 + lVar12);
                      puVar28 = (undefined1 *)((long)puVar24 + lVar36) + lVar36;
                      *puVar28 = (char)*puVar25;
                      puVar28[lVar36] = (char)*puVar27;
                      puVar21 = (uint *)((long)puVar27 + lVar12);
                      puVar24 = (uint *)(puVar28 + lVar36 + lVar36);
                      iVar34 = iVar34 + 4;
                    } while (iVar34 != 0);
                  }
                  for (; uVar19 != 0; uVar19 = uVar19 - 1) {
                    *(char *)puVar24 = (char)*puVar21;
                    puVar21 = (uint *)((long)puVar21 + lVar12);
                    puVar24 = (uint *)((long)puVar24 + lVar36);
                  }
                }
                break;
              case 2:
                if (0 < (int)param_3) {
                  if (param_3 != 1) {
                    iVar34 = (param_3 & 1) - param_3;
                    do {
                      *(short *)puVar24 = (short)*puVar21;
                      *(undefined2 *)((long)puVar24 + lVar36) =
                           (short)*(undefined4 *)((long)puVar21 + lVar12);
                      puVar21 = (uint *)((long)puVar21 + lVar12 + lVar12);
                      puVar24 = (uint *)((long)puVar24 + lVar36 + lVar36);
                      iVar34 = iVar34 + 2;
                    } while (iVar34 != 0);
                  }
                  if ((param_3 & 1) != 0) {
                    *(short *)puVar24 = (short)*puVar21;
                    return;
                  }
                }
                break;
              case 3:
                if ((int)param_3 < 1) {
                  return;
                }
                if (param_3 != 1) {
                  iVar34 = (param_3 & 1) - param_3;
                  do {
                    uVar19 = *puVar21;
                    *(char *)puVar24 = (char)uVar19;
                    *(char *)((long)puVar24 + 1) = (char)(uVar19 >> 8);
                    *(char *)((long)puVar24 + 2) = (char)(uVar19 >> 0x10);
                    uVar6 = *(undefined4 *)((long)puVar21 + lVar12);
                    puVar28 = (undefined1 *)((long)puVar24 + lVar36);
                    *puVar28 = (char)uVar6;
                    puVar28[1] = (char)((uint)uVar6 >> 8);
                    puVar28[2] = (char)((uint)uVar6 >> 0x10);
                    puVar21 = (uint *)((long)puVar21 + lVar12 + lVar12);
                    puVar24 = (uint *)(puVar28 + lVar36);
                    iVar34 = iVar34 + 2;
                  } while (iVar34 != 0);
                }
                goto joined_r0x032a41b0;
              case 4:
                if (0 < (int)param_3) {
                  lVar41 = (long)puVar24 + 3;
                  do {
                    *(uint *)(lVar41 + -3) = *puVar21;
                    puVar21 = (uint *)((long)puVar21 + lVar12);
                    lVar41 = lVar41 + lVar36;
                    uVar19 = (int)uVar18 - 1;
                    uVar18 = (ulong)uVar19;
                  } while (uVar19 != 0);
                }
              }
            }
            else {
              if ((int)param_3 < 1) {
                return;
              }
              uVar19 = (uint)(bVar7 >> 2);
              bVar8 = bVar7 & 3;
              if (uVar19 != 0) {
                bVar7 = bVar7 >> 2;
                if (bVar8 == 3) {
                  uVar33 = 0;
                  do {
                    puVar38 = puVar24;
                    puVar35 = puVar21;
                    if (uVar19 != 1) {
                      iVar34 = (bVar7 & 1) - uVar19;
                      do {
                        puVar37 = puVar38;
                        *puVar37 = *puVar35;
                        puVar37[1] = puVar35[1];
                        puVar35 = puVar35 + 2;
                        puVar38 = puVar37 + 2;
                        iVar34 = iVar34 + 2;
                      } while (iVar34 != 0);
                      in_x16 = puVar37 + 1;
                    }
                    puVar37 = puVar38;
                    puVar39 = puVar35;
                    if ((bVar7 & 1) != 0) {
                      puVar39 = puVar35 + 1;
                      puVar37 = puVar38 + 1;
                      *puVar38 = *puVar35;
                      in_x16 = puVar38;
                    }
                    uVar20 = *puVar39;
                    uVar33 = uVar33 + 1;
                    *(char *)puVar37 = (char)uVar20;
                    *(char *)((long)in_x16 + 5) = (char)(uVar20 >> 8);
                    *(char *)((long)in_x16 + 6) = (char)(uVar20 >> 0x10);
                  } while (uVar33 != param_3);
                  return;
                }
                uVar33 = 0;
                do {
                  puVar35 = puVar21;
                  if (uVar19 == 1) {
                    puVar38 = puVar24;
                    if ((bVar7 & 1) == 0) goto LAB_032a41ec;
LAB_032a4244:
                    puVar39 = puVar35 + 1;
                    puVar37 = puVar38 + 1;
                    *puVar38 = *puVar35;
                    if (bVar8 == 1) goto LAB_032a41c4;
LAB_032a41f4:
                    if (bVar8 == 2) {
                      uVar20 = *puVar39;
                      *(char *)puVar37 = (char)uVar20;
                      *(char *)((long)puVar38 + 5) = (char)(uVar20 >> 8);
                    }
                  }
                  else {
                    puVar38 = puVar24;
                    iVar34 = (bVar7 & 1) - uVar19;
                    do {
                      puVar37 = puVar38;
                      *puVar37 = *puVar35;
                      puVar37[1] = puVar35[1];
                      puVar35 = puVar35 + 2;
                      puVar38 = puVar37 + 2;
                      iVar34 = iVar34 + 2;
                    } while (iVar34 != 0);
                    in_x17 = puVar37 + 1;
                    if ((bVar7 & 1) != 0) goto LAB_032a4244;
LAB_032a41ec:
                    puVar37 = puVar38;
                    puVar39 = puVar35;
                    puVar38 = in_x17;
                    if (bVar8 != 1) goto LAB_032a41f4;
LAB_032a41c4:
                    *(char *)puVar37 = (char)*puVar39;
                  }
                  uVar33 = uVar33 + 1;
                  in_x17 = puVar38;
                  if (uVar33 == param_3) {
                    return;
                  }
                } while( true );
              }
              if (bVar8 != 3) {
                if (bVar8 != 1) goto LAB_032a428c;
LAB_032a4270:
                uVar19 = *puVar21;
                puVar35 = puVar24;
                do {
                  *(char *)puVar35 = (char)uVar19;
                  do {
                    uVar19 = (int)uVar18 - 1;
                    uVar18 = (ulong)uVar19;
                    if (uVar19 == 0) {
                      return;
                    }
                    if (bVar8 == 1) goto LAB_032a4270;
LAB_032a428c:
                  } while (bVar8 != 2);
                  uVar19 = *puVar21;
                  *(char *)puVar24 = (char)uVar19;
                  uVar19 = uVar19 >> 8;
                  puVar35 = (uint *)((long)puVar24 + 1);
                } while( true );
              }
              if (param_3 != 1) {
                iVar34 = (param_3 & 1) - param_3;
                do {
                  uVar19 = *puVar21;
                  *(char *)puVar24 = (char)uVar19;
                  *(char *)((long)puVar24 + 1) = (char)(uVar19 >> 8);
                  *(char *)((long)puVar24 + 2) = (char)(uVar19 >> 0x10);
                  uVar19 = *puVar21;
                  *(char *)puVar24 = (char)uVar19;
                  iVar34 = iVar34 + 2;
                  *(char *)((long)puVar24 + 1) = (char)(uVar19 >> 8);
                  *(char *)((long)puVar24 + 2) = (char)(uVar19 >> 0x10);
                } while (iVar34 != 0);
              }
joined_r0x032a41b0:
              if ((param_3 & 1) != 0) {
                uVar19 = *puVar21;
                *(char *)puVar24 = (char)uVar19;
                *(char *)((long)puVar24 + 1) = (char)(uVar19 >> 8);
                *(char *)((long)puVar24 + 2) = (char)(uVar19 >> 0x10);
                return;
              }
            }
            return;
          }
          if (*(char *)((long)param_1 + 0xd) != '\x01') goto LAB_032a3c74;
          if (uVar20 == 10) {
            FUN_032a5440(param_1,param_2,uVar18);
            return;
          }
          if (bVar7 != 6) goto LAB_032a3c74;
        }
        else {
          if ((bVar8 != 6) || (*(char *)((long)param_1 + 0xd) != '\x01')) {
LAB_032a3c74:
            FUN_0331fefc(auStack_240,&local_230,0x200);
            uVar13 = FUN_0332448c(auStack_240,"Cannot convert vertex format from ");
            uVar13 = FUN_0332452c(uVar13,*(undefined1 *)((long)param_1 + 0xc));
            uVar13 = FUN_0332448c(uVar13,&DAT_03949cc9);
            FUN_0332452c(uVar13,*(undefined1 *)((long)param_2 + 0xc));
            FUN_03320af0(0xabba4523,&local_230,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/GeometryUtilities/Mesh/Utils/VertexBufferUtil/hkMeshVertexBufferUtil.cpp"
                         ,0x720);
            FUN_0331ff7c(auStack_240);
            return;
          }
          if (bVar7 != 8) {
            if ((uVar19 == 10) && (*(char *)((long)param_1 + 0xe) == '\x03')) {
              lStack_220 = param_1[2];
              local_230 = *param_1;
              uStack_223 = (undefined3)((ulong)param_1[1] >> 0x28);
              _local_228 = CONCAT14(8,(int)param_1[1]);
              FUN_032a5440(&local_230,param_2,uVar18);
              return;
            }
            goto LAB_032a3c74;
          }
        }
        lVar12 = *param_1;
        uVar19 = 4;
        goto LAB_032a35e8;
      }
      if (uVar20 != 8) {
        bVar7 = (&DAT_03aac400)[bVar7];
        goto LAB_032a35d8;
      }
    }
LAB_032a3594:
    uVar19 = 4;
  }
  lVar12 = *param_1;
LAB_032a35e8:
  FUN_032a2398(lVar12,(int)param_1[1],*param_2,(int)param_2[1],uVar19);
  return;
LAB_032a4b90:
  bVar7 = *(byte *)((long)param_1 + 0xd);
  uVar16 = (ulong)bVar7;
  bVar8 = *(byte *)((long)param_2 + 0xd);
  uVar18 = (ulong)bVar8;
  lVar41 = (long)(int)param_1[1];
  lVar36 = (long)(int)param_2[1];
  lVar12 = *param_1;
  puVar28 = (undefined1 *)*param_2;
  if ((uint)bVar7 == (uint)bVar8) {
    if ((int)param_3 < 1) {
      return;
    }
    if (bVar7 == 0) {
      return;
    }
    uVar19 = 0;
    pfVar23 = (float *)(lVar12 + 8);
    if (2 < uVar16 - 1) goto LAB_032a4c0c;
    do {
      lVar43 = 0;
      while( true ) {
        if ((bVar7 & 3) != 0) {
          uVar18 = uVar16 & 3;
          do {
            uVar18 = uVar18 - 1;
            puVar28[lVar43] = (char)(int)(*(float *)(lVar12 + lVar43 * 4) * 255.0);
            lVar43 = lVar43 + 1;
          } while (uVar18 != 0);
        }
        uVar19 = uVar19 + 1;
        puVar28 = puVar28 + lVar36;
        lVar12 = lVar12 + lVar41;
        pfVar23 = (float *)((long)pfVar23 + lVar41);
        if (uVar19 == param_3) {
          return;
        }
        if (uVar16 - 1 < 3) break;
LAB_032a4c0c:
        lVar43 = 0;
        pfVar14 = pfVar23;
        do {
          puVar29 = puVar28 + lVar43;
          lVar43 = lVar43 + 4;
          *puVar29 = (char)(int)(pfVar14[-2] * 255.0);
          puVar29[1] = (char)(int)(pfVar14[-1] * 255.0);
          puVar29[2] = (char)(int)(*pfVar14 * 255.0);
          pfVar2 = pfVar14 + 1;
          pfVar14 = pfVar14 + 4;
          puVar29[3] = (char)(int)(*pfVar2 * 255.0);
        } while (uVar16 - (uVar16 & 3) != lVar43);
      }
    } while( true );
  }
  if (*(char *)((long)param_1 + 0xe) == '\a') {
    cVar10 = *(char *)((long)param_2 + 0xe);
    if (cVar10 == '\b') {
      if ((int)param_3 < 1) {
        return;
      }
      if (bVar8 - 1 != (uint)bVar7) {
        return;
      }
      if (bVar8 == 0) {
        return;
      }
      uVar19 = 0;
      pfVar23 = (float *)(lVar12 + 8);
      if (2 < uVar18 - 1) goto LAB_032a4e10;
      do {
        lVar43 = 0;
        while( true ) {
          if ((bVar8 & 3) != 0) {
            uVar16 = uVar18 & 3;
            do {
              uVar16 = uVar16 - 1;
              puVar28[lVar43] = (char)(int)(*(float *)(lVar12 + lVar43 * 4) * 255.0);
              lVar43 = lVar43 + 1;
            } while (uVar16 != 0);
          }
          uVar19 = uVar19 + 1;
          puVar28 = puVar28 + lVar36;
          lVar12 = lVar12 + lVar41;
          pfVar23 = (float *)((long)pfVar23 + lVar41);
          if (uVar19 == param_3) {
            return;
          }
          if (uVar18 - 1 < 3) break;
LAB_032a4e10:
          lVar43 = 0;
          pfVar14 = pfVar23;
          do {
            puVar29 = puVar28 + lVar43;
            lVar43 = lVar43 + 4;
            *puVar29 = (char)(int)(pfVar14[-2] * 255.0);
            puVar29[1] = (char)(int)(pfVar14[-1] * 255.0);
            puVar29[2] = (char)(int)(*pfVar14 * 255.0);
            pfVar2 = pfVar14 + 1;
            pfVar14 = pfVar14 + 4;
            puVar29[3] = (char)(int)(*pfVar2 * 255.0);
          } while (uVar18 - (uVar18 & 3) != lVar43);
        }
      } while( true );
    }
  }
  else {
    if (*(char *)((long)param_1 + 0xe) == '\b') goto LAB_032a4cac;
    cVar10 = *(char *)((long)param_2 + 0xe);
  }
  if (cVar10 != '\a') {
    return;
  }
LAB_032a4cac:
  if ((0 < (int)param_3) && (bVar7 - 1 == (uint)bVar8)) {
    if (bVar8 != 0) {
      uVar19 = 0;
      pfVar23 = (float *)(lVar12 + 4);
      if (bVar8 != 1) goto LAB_032a4d28;
      do {
        lVar43 = 0;
        fVar50 = 0.0;
        while( true ) {
          if ((bVar8 & 1) != 0) {
            fVar51 = *(float *)(lVar12 + lVar43 * 4) * 255.0;
            fVar50 = fVar50 + fVar51;
            puVar28[lVar43] = (char)(int)fVar51;
          }
          uVar19 = uVar19 + 1;
          lVar12 = lVar12 + lVar41;
          puVar28[uVar18] = (char)(int)(255.0 - fVar50);
          puVar28 = puVar28 + lVar36;
          pfVar23 = (float *)((long)pfVar23 + lVar41);
          if (uVar19 == param_3) {
            return;
          }
          if (bVar8 == 1) break;
LAB_032a4d28:
          fVar50 = 0.0;
          lVar43 = 0;
          pfVar14 = pfVar23;
          do {
            fVar51 = pfVar14[-1];
            puVar29 = puVar28 + lVar43;
            lVar43 = lVar43 + 2;
            *puVar29 = (char)(int)(fVar51 * 255.0);
            fVar50 = fVar50 + fVar51 * 255.0 + *pfVar14 * 255.0;
            puVar29[1] = (char)(int)(*pfVar14 * 255.0);
            pfVar14 = pfVar14 + 2;
          } while (uVar18 - (uVar18 & 1) != lVar43);
        }
      } while( true );
    }
    uVar19 = param_3 & 3;
    if (2 < param_3 - 1) {
      iVar34 = uVar19 - param_3;
      puVar29 = puVar28;
      do {
        puVar28 = puVar29 + lVar36 * 4;
        iVar34 = iVar34 + 4;
        *puVar29 = 0xff;
        puVar29[lVar36] = 0xff;
        puVar29[lVar36 * 2] = 0xff;
        puVar29[lVar36 * 3] = 0xff;
        puVar29 = puVar28;
      } while (iVar34 != 0);
    }
    if (uVar19 != 0) {
      do {
        *puVar28 = 0xff;
        uVar19 = uVar19 - 1;
        puVar28 = puVar28 + lVar36;
      } while (uVar19 != 0);
    }
  }
  return;
}


