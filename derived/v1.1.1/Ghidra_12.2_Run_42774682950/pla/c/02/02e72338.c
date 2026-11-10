/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e72338; name: FUN_02e72338
 */


void FUN_02e72338(long param_1,long *param_2,ulong param_3,long param_4)

{
  MutexType *pMVar1;
  undefined1 *__dest;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  float *pfVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  float *pfVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  uint uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  undefined8 *puVar34;
  uint uVar35;
  long *plVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  ulong local_178;
  ulong local_170;
  uint local_164;
  ulong local_160;
  float *local_158;
  long local_150;
  long local_148;
  long local_140;
  ulong local_138;
  undefined8 local_130;
  ulong local_128;
  ulong local_120;
  undefined8 local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  long *local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  uint local_cc;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 local_a0;
  
  uVar35 = (uint)param_3 & 0xf00;
  uVar33 = param_3 & 0xffffffff;
  if (uVar35 == 0x100) {
    uVar31 = (uint)param_3 >> 0xc & 0x637;
    uVar22 = uVar31 - (uVar31 >> 1 & 0xf1f1f1f1);
    uVar22 = (uVar22 & 0x33333333) + (uVar22 >> 2 & 0x33333333);
    uVar33 = (ulong)(uVar31 << 0xc | (uVar22 + (uVar22 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 |
                    0x100);
  }
  uVar22 = *(uint *)(DAT_0440a140 + 0x38);
  if (uVar22 != 0) {
    lVar17 = *(long *)(param_4 + 0xd0);
    uVar31 = 0;
    if (uVar22 != 0) {
      uVar31 = (uint)lVar17 / uVar22;
    }
    plVar18 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                        (ulong)((uint)lVar17 - uVar31 * uVar22) * 8);
    if (plVar18 != (long *)0x0) {
      fVar37 = *(float *)(param_1 + 0x108);
      uVar25 = (ulong)*(uint *)(*(long *)(param_4 + 0x58) + 0x80);
      do {
        if (plVar18[1] == lVar17) {
          if (*(uint *)(plVar18[2] + 0x40) < 3) {
            return;
          }
          lVar30 = *(long *)(*(long *)(plVar18[2] + 0x38) + 0x10);
          if (lVar30 == 0) {
            return;
          }
          uVar20 = (ulong)*(uint *)(param_2 + 1);
          plVar18 = (long *)((long)&local_190 - (uVar20 * 8 + 0xf & 0xffffffff0));
          pfVar24 = (float *)((long)plVar18 - (uVar20 * 4 + 0xf & 0x7fffffff0));
          fVar38 = 1.0;
          if (DAT_042ac988 < *(float *)(param_4 + 0x1c)) {
            fVar38 = 1.0 / *(float *)(param_4 + 0x1c);
          }
          lVar21 = uVar20 * 0x68;
          lVar19 = *param_2;
          uVar20 = 0;
          do {
            uVar27 = uVar20;
            if (lVar17 == *(long *)(lVar19 + 0x50)) {
              plVar18[uVar20] = lVar19;
              iVar29 = *(int *)(param_4 + 0x164);
              if (iVar29 == 0) {
                fVar39 = *(float *)(lVar19 + 0x30);
              }
              else if (iVar29 == 2) {
                fVar39 = *(float *)(lVar19 + 0x38);
              }
              else {
                fVar39 = 1.0;
                if (iVar29 == 1) {
                  fVar39 = *(float *)(lVar19 + 0x34);
                }
              }
              uVar27 = (ulong)((int)uVar20 + 1);
              pfVar24[uVar20] = fVar39 * fVar38;
            }
            lVar19 = lVar19 + 0x68;
            lVar21 = lVar21 + -0x68;
            uVar20 = uVar27;
          } while (lVar21 != 0);
          local_cc = (uint)uVar27;
          if (local_cc == 0) {
            return;
          }
          local_160 = uVar25 & 0xff;
          local_e8 = local_160 + 3;
          local_d8 = param_3 & 0xff;
          local_100 = local_e8 >> 2;
          local_148 = local_d8 * local_100 * 0x10;
          uVar20 = (ulong)(local_cc * (int)local_148);
          local_150 = local_d8 * local_100 * 4;
          pfVar6 = (float *)((long)pfVar24 - uVar20);
          local_164 = uVar35;
          local_158 = pfVar24;
          local_f8 = plVar18;
          local_f0 = param_3;
          local_e0 = uVar25;
          local_c8 = (undefined1 *)pfVar6;
          memset(pfVar6,0,uVar20);
          lVar17 = DAT_0440a120;
          uVar35 = (uint)uVar33 & 0xff;
          uVar25 = (ulong)uVar35;
          if ((uVar33 & 0xff) != 0) {
            if (*(char *)(lVar30 + 0x88) == '\0') {
              local_140 = param_4;
              local_110 = (ulong)local_cc;
              fVar37 = 1.0 / SQRT((float)uVar25);
              if ((local_e0 & 0xe00) == 0) {
                local_118 = 0;
                local_190 = (ulong)((uint)local_e8 & 0x1fc);
                uVar22 = (uint)local_e0 - ((uint)local_e0 >> 0xf & 1) & 0xff;
                uVar20 = (ulong)uVar22;
                uVar10 = (ulong)(uint)((int)local_160 << 2);
                local_128 = CONCAT44(local_128._4_4_,(uint)(uVar35 < 2 || (int)local_160 == 0));
                local_138 = uVar20 - 1;
                uVar23 = (ulong)(uVar35 - 1) & 1;
                local_120 = uVar20;
                fVar37 = fVar37 / (float)uVar22;
                local_188 = local_c8 + 0x10;
                uVar27 = uVar20 & 7;
                local_130 = CONCAT44(local_130._4_4_,(int)local_100 * (int)local_d8 * 4) &
                            0xffffffff3ffffffc;
                local_170 = uVar27;
                local_180 = -uVar27;
                uVar33 = (local_e0 & 0xff) + 3 >> 2;
                local_108 = local_108 & 0xffffffff00000000;
                local_178 = uVar23;
                do {
                  lVar17 = (local_108 & 0xffffffff) * 4;
                  if ((int)local_120 != 0) {
                    if (local_138 < 7) {
                      lVar19 = 0;
                    }
                    else {
                      lVar19 = 0;
                      pfVar24 = (float *)(local_188 + lVar17);
                      do {
                        lVar19 = lVar19 + 8;
                        pfVar24[-4] = fVar37;
                        pfVar24[-3] = fVar37;
                        pfVar24[-2] = fVar37;
                        pfVar24[-1] = fVar37;
                        *pfVar24 = fVar37;
                        pfVar24[1] = fVar37;
                        pfVar24[2] = fVar37;
                        pfVar24[3] = fVar37;
                        pfVar24 = pfVar24 + 8;
                      } while (uVar20 - uVar27 != lVar19);
                    }
                    if (local_170 != 0) {
                      pfVar24 = (float *)(local_c8 + lVar17 + lVar19 * 4);
                      lVar19 = local_180;
                      do {
                        bVar5 = lVar19 != -1;
                        lVar19 = lVar19 + 1;
                        *pfVar24 = fVar37;
                        pfVar24 = pfVar24 + 1;
                      } while (bVar5);
                    }
                  }
                  if ((local_128 & 1) == 0) {
                    if (uVar35 == 2) {
                      lVar17 = 1;
                    }
                    else {
                      puVar32 = local_c8 + lVar17;
                      lVar17 = 1;
                      do {
                        __dest = puVar32 + uVar33 * 0x10;
                        memcpy(__dest,puVar32,uVar10);
                        puVar32 = puVar32 + uVar33 * 0x20;
                        memcpy(puVar32,__dest,uVar10);
                        lVar17 = lVar17 + 2;
                      } while (uVar25 - uVar23 != lVar17);
                    }
                    if (local_178 != 0) {
                      uVar22 = (int)local_150 * (int)local_118;
                      memcpy(local_c8 + lVar17 * local_190 * 4 + (ulong)uVar22 * 4,
                             local_c8 + (lVar17 + -1) * local_190 * 4 + (ulong)uVar22 * 4,uVar10);
                    }
                  }
                  local_118 = local_118 + 1;
                  local_108 = CONCAT44(local_108._4_4_,(int)local_108 + (int)local_130);
                  param_4 = local_140;
                } while (local_118 != local_110);
              }
              else {
                uVar27 = (local_e0 & 0xff) + 3 >> 2;
                uVar35 = 0;
                uVar20 = 0;
                do {
                  if (uVar25 - 1 < 7) {
                    lVar17 = 0;
                  }
                  else {
                    lVar17 = 0;
                    pfVar24 = (float *)(local_c8 + (ulong)uVar35 * 4);
                    do {
                      lVar17 = lVar17 + 8;
                      *pfVar24 = fVar37;
                      pfVar24[uVar27 * 4] = fVar37;
                      pfVar24[uVar27 * 8] = fVar37;
                      pfVar24[uVar27 * 0xc] = fVar37;
                      pfVar24[uVar27 * 0x10] = fVar37;
                      pfVar24[uVar27 * 0x14] = fVar37;
                      pfVar24[uVar27 * 0x18] = fVar37;
                      pfVar24[uVar27 * 0x1c] = fVar37;
                      pfVar24 = pfVar24 + uVar27 * 0x20;
                    } while (uVar25 - (uVar25 & 7) != lVar17);
                  }
                  if ((uVar33 & 7) != 0) {
                    pfVar24 = (float *)(local_c8 + (ulong)uVar35 * 4 + uVar27 * 0x10 * lVar17);
                    uVar23 = uVar25 & 7;
                    do {
                      *pfVar24 = fVar37;
                      uVar23 = uVar23 - 1;
                      pfVar24 = pfVar24 + uVar27 * 4;
                    } while (uVar23 != 0);
                  }
                  uVar20 = uVar20 + 1;
                  uVar35 = uVar35 + ((int)local_100 * (int)local_d8 * 4 & 0x3ffffffcU);
                } while (uVar20 != local_cc);
              }
            }
            else {
              fVar38 = *(float *)(param_1 + 0x120);
              if ((*(byte *)(param_1 + 0x134) >> 6 & 1) == 0) {
LAB_02e725c8:
                plVar18 = (long *)0x0;
                plVar36 = (long *)0x0;
              }
              else {
                lVar19 = *(long *)(param_1 + 0x138);
                if (lVar19 == 0) {
                  uVar35 = *(uint *)(param_1 + 0x124);
                  if (uVar35 == 0) goto LAB_02e725c8;
                  pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
                  nn::os::LockMutex(pMVar1);
                  uVar22 = *(uint *)(lVar17 + 0x178);
                  if (uVar22 != 0) {
                    uVar31 = 0;
                    if (uVar22 != 0) {
                      uVar31 = uVar35 / uVar22;
                    }
                    for (lVar19 = *(long *)(*(long *)(lVar17 + 0x170) +
                                           (ulong)(uVar35 - uVar31 * uVar22) * 8); lVar19 != 0;
                        lVar19 = *(long *)(lVar19 + 8)) {
                      if (*(uint *)(lVar19 + 0x10) == uVar35) {
                        *(int *)(lVar19 + 0x14) = *(int *)(lVar19 + 0x14) + 1;
                        nn::os::UnlockMutex(pMVar1);
                        *(long *)(param_1 + 0x138) = lVar19;
                        goto LAB_02e72580;
                      }
                    }
                  }
                  nn::os::UnlockMutex(pMVar1);
                  plVar18 = (long *)0x0;
                  plVar36 = (long *)0x0;
                  *(undefined8 *)(param_1 + 0x138) = 0;
                }
                else {
LAB_02e72580:
                  if (((ulong)*(byte *)(lVar19 + 0xdd) == 0xff) ||
                     (plVar36 = (long *)(lVar19 + (ulong)*(byte *)(lVar19 + 0xdd) * 0x18 + 0x30),
                     *plVar36 == 0)) {
                    plVar36 = (long *)0x0;
                  }
                  if (((ulong)*(byte *)(lVar19 + 0xde) == 0xff) ||
                     (plVar18 = (long *)(lVar19 + (ulong)*(byte *)(lVar19 + 0xde) * 0x18 + 0x30),
                     *plVar18 == 0)) {
                    plVar18 = (long *)0x0;
                  }
                }
              }
              if ((*(byte *)(param_1 + 0x134) & 0x38) == 0) {
                if ((((*(float *)(param_1 + 0x110) == *(float *)(param_1 + 0x100)) &&
                     (*(float *)(param_1 + 0x114) == *(float *)(param_1 + 0x104))) &&
                    (*(float *)(param_1 + 0x118) == *(float *)(param_1 + 0x108))) &&
                   (((((*(byte *)(param_1 + 0x10c) ^ *(byte *)(param_1 + 0x11c)) & 0xf) == 0 &&
                     (local_cc < 2)) && ((*(byte *)(param_4 + 0x168) >> 1 & 1) == 0)))) {
                  iVar29 = ((uint)local_e8 & 0x1fc) * (int)local_d8;
                  if (iVar29 != 0) {
                    memcpy(local_c8,*(void **)(param_4 + 0x38),(ulong)(uint)(iVar29 * 4));
                  }
                }
                else {
                  uVar7 = FUN_02eca560(*(long *)(param_4 + 0x58) + 0x68);
                  uVar35 = local_cc;
                  fVar38 = *(float *)(param_1 + 0x100) * 0.005 + 0.5;
                  fVar37 = 0.0;
                  if ((0.0 <= fVar38) && (fVar37 = 1.0, fVar38 <= 1.0)) {
                    fVar37 = fVar38;
                  }
                  fVar39 = *(float *)(param_1 + 0x104) * 0.005 + 0.5;
                  fVar38 = 0.0;
                  if ((0.0 <= fVar39) && (fVar38 = 1.0, fVar39 <= 1.0)) {
                    fVar38 = fVar39;
                  }
                  FUN_02efd104(fVar37,fVar38,*(float *)(param_1 + 0x108) * 0.01,
                               *(byte *)(param_1 + 0x10c) & 7,local_f0 & 0xffffffff,local_e0,
                               local_c8,uVar7);
                  if (1 < uVar35) {
                    iVar29 = ((uint)local_e8 & 0x1fc) * (int)local_d8;
                    if (iVar29 != 0) {
                      lVar17 = (ulong)local_cc - 1;
                      uVar22 = (int)local_100 * (int)local_d8 * 4 & 0x3ffffffc;
                      uVar35 = uVar22;
                      do {
                        memcpy(local_c8 + (ulong)uVar35 * 4,local_c8,(ulong)(uint)(iVar29 * 4));
                        lVar17 = lVar17 + -1;
                        uVar35 = uVar35 + uVar22;
                      } while (lVar17 != 0);
                    }
                  }
                }
              }
              else {
                local_108 = FUN_02eca560(*(long *)(param_4 + 0x58) + 0x68);
                if (local_108 != 0) {
                  local_120 = CONCAT44(local_120._4_4_,
                                       (uint)(plVar18 != (long *)0x0 || plVar36 != (long *)0x0));
                  local_128 = lVar30 + 0x78;
                  local_130 = lVar30 + 0x3c;
                  local_110 = (ulong)local_cc;
                  fVar38 = fVar38 * 0.01;
                  uVar20 = 0;
                  uVar25 = 0;
                  local_118 = CONCAT44(local_118._4_4_,(int)local_100 * (int)local_d8 * 4) &
                              0xffffffff3ffffffc;
                  local_140 = param_4;
                  local_138 = uVar33;
                  do {
                    puVar34 = (undefined8 *)local_f8[uVar25];
                    puVar32 = local_c8 + uVar20 * 4;
                    uVar33 = (ulong)*(uint *)((long)puVar34 + 0x44);
                    uVar27 = (ulong)*(uint *)(puVar34 + 9);
                    if ((int)local_120 != 0) {
                      fVar39 = 0.0;
                      if (0.0 < *(float *)((long)puVar34 + 0x24)) {
                        fVar42 = *(float *)((long)puVar34 + 0x1c) - *(float *)(lVar30 + 0x7c);
                        fVar39 = *(float *)(puVar34 + 3) - *(float *)(lVar30 + 0x78);
                        fVar40 = *(float *)(puVar34 + 4) - *(float *)(lVar30 + 0x80);
                        fVar41 = *(float *)(lVar30 + 0x3c) * fVar39 +
                                 fVar42 * *(float *)(lVar30 + 0x40) +
                                 fVar40 * *(float *)(lVar30 + 0x44);
                        fVar39 = *(float *)(lVar30 + 0x54) * fVar39 +
                                 fVar42 * *(float *)(lVar30 + 0x58) +
                                 fVar40 * *(float *)(lVar30 + 0x5c);
                        fVar39 = SQRT(fVar41 * fVar41 + fVar39 * fVar39) / *(float *)(puVar34 + 0xb)
                        ;
                      }
                      if (plVar36 != (long *)0x0) {
                        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar36[2]);
                        uVar33 = FUN_02e74568(fVar39,uVar33,plVar36,&local_c0);
                        *(undefined4 *)(plVar36 + 2) = (undefined4)local_c0;
                      }
                      if (plVar18 != (long *)0x0) {
                        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar18[2]);
                        uVar27 = FUN_02e74568(fVar39,uVar33,plVar18,&local_c0);
                        *(undefined4 *)(plVar18 + 2) = (undefined4)local_c0;
                      }
                    }
                    local_c0 = *puVar34;
                    uStack_a8 = puVar34[3];
                    local_a0 = *(undefined4 *)(puVar34 + 4);
                    local_b8 = (undefined4)puVar34[1];
                    uStack_b4 = (undefined4)((ulong)puVar34[1] >> 0x20);
                    local_b0 = (undefined4)puVar34[2];
                    uStack_ac = (undefined4)((ulong)puVar34[2] >> 0x20);
                    if ((*(ushort *)(param_1 + 0x134) & 0x38) == 8) {
                      local_c0 = *(undefined8 *)(lVar30 + 0x60);
                      local_b8 = *(undefined4 *)(lVar30 + 0x68);
                      uStack_ac = *(undefined4 *)(lVar30 + 0x74);
                      uStack_b4 = (undefined4)*(undefined8 *)(lVar30 + 0x6c);
                      local_b0 = (undefined4)((ulong)*(undefined8 *)(lVar30 + 0x6c) >> 0x20);
                    }
                    FUN_02ef9850(fVar37 * 0.01,uVar33,uVar27,&local_c0,puVar32,local_138,
                                 *(undefined4 *)((long)puVar34 + 0x4c),local_e0,local_128,local_130,
                                 local_108);
                    uVar33 = local_d8;
                    param_4 = local_140;
                    uVar20 = (ulong)(uint)((int)uVar20 + (int)local_118);
                    uVar25 = uVar25 + 1;
                  } while (uVar25 < local_110);
                  if (fVar38 < 1.0) {
                    pfVar6 = (float *)((long)pfVar6 + -((ulong)((int)local_148 + 0xf) & 0xffff0));
                    fVar39 = *(float *)(param_1 + 0x100) * 0.005 + 0.5;
                    fVar37 = 0.0;
                    if ((0.0 <= fVar39) && (fVar37 = 1.0, fVar39 <= 1.0)) {
                      fVar37 = fVar39;
                    }
                    fVar42 = *(float *)(param_1 + 0x104) * 0.005 + 0.5;
                    fVar39 = 0.0;
                    if ((0.0 <= fVar42) && (fVar39 = 1.0, fVar42 <= 1.0)) {
                      fVar39 = fVar42;
                    }
                    FUN_02efd104(fVar37,fVar39,*(float *)(param_1 + 0x108) * 0.01,
                                 *(byte *)(param_1 + 0x10c) & 7,local_f0 & 0xffffffff,local_e0,
                                 pfVar6,local_108);
                    uVar35 = ((uint)local_e8 & 0x1fc) * (int)uVar33;
                    if (uVar35 != 0) {
                      fVar37 = 1.0 - fVar38;
                      fVar39 = *pfVar6;
                      uVar25 = 0;
                      uVar33 = 0;
                      do {
                        pfVar24 = (float *)(local_c8 +
                                           (ulong)(uint)((int)local_150 * (int)uVar33) * 4);
                        pfVar24[1] = pfVar24[1] * fVar38;
                        *pfVar24 = *pfVar24 * fVar38;
                        pfVar24[3] = pfVar24[3] * fVar38;
                        pfVar24[2] = pfVar24[2] * fVar38;
                        if (uVar35 != 4) {
                          pfVar24[5] = pfVar24[5] * fVar38;
                          pfVar24[4] = pfVar24[4] * fVar38;
                          pfVar12 = (float *)(local_c8 + uVar25 * 4 + 0x18);
                          lVar17 = (ulong)uVar35 - 6;
                          do {
                            lVar17 = lVar17 + -1;
                            *pfVar12 = *pfVar12 * fVar38;
                            pfVar12 = pfVar12 + 1;
                          } while (lVar17 != 0);
                        }
                        fVar40 = pfVar6[1];
                        fVar41 = pfVar6[2];
                        *pfVar24 = *pfVar24 + fVar39 * fVar37;
                        fVar42 = pfVar6[3];
                        pfVar24[1] = pfVar24[1] + fVar37 * fVar40;
                        pfVar24[2] = pfVar24[2] + fVar37 * fVar41;
                        pfVar24[3] = pfVar24[3] + fVar37 * fVar42;
                        if (uVar35 != 4) {
                          fVar42 = pfVar6[5];
                          pfVar24[4] = pfVar24[4] + fVar37 * pfVar6[4];
                          pfVar24[5] = pfVar24[5] + fVar37 * fVar42;
                          pfVar24 = (float *)(local_c8 + uVar25 * 4 + 0x18);
                          pfVar12 = pfVar6 + 6;
                          lVar17 = (ulong)uVar35 - 6;
                          do {
                            lVar17 = lVar17 + -1;
                            *pfVar24 = *pfVar24 + fVar37 * *pfVar12;
                            pfVar24 = pfVar24 + 1;
                            pfVar12 = pfVar12 + 1;
                          } while (lVar17 != 0);
                        }
                        uVar25 = (ulong)(uint)((int)uVar25 + (int)local_118);
                        uVar33 = uVar33 + 1;
                      } while (uVar33 < local_110);
                    }
                  }
                }
              }
            }
          }
          puVar32 = local_c8;
          uVar35 = local_cc;
          uVar25 = local_e0;
          uVar33 = local_f0;
          uVar31 = (uint)local_e0;
          iVar26 = (int)local_d8;
          uVar22 = (uint)local_e8;
          iVar29 = (int)local_160;
          iVar28 = (int)local_100;
          if ((((uint)local_f0 & uVar31) >> 0xf & 1) != 0) {
            uVar27 = 0;
            uVar20 = 0;
            do {
              uVar20 = uVar20 + 1;
              *(undefined4 *)
               (local_c8 +
               uVar27 * 4 + (long)(iVar29 + -1) * 4 + (ulong)((uVar22 & 0x1fc) * (iVar26 + -1)) * 4)
                   = 0x3f800000;
              uVar27 = (ulong)((int)uVar27 + (iVar28 * iVar26 * 4 & 0x3ffffffcU));
            } while (uVar20 < local_cc);
          }
          if ((((*(long *)(lVar30 + 0x30) != 0) && ((uVar31 & 0xf00) == 0x100)) &&
              (local_164 == 0x100)) &&
             (((*(ushort *)(param_1 + 0x134) & 0x38) != 0 && (iVar29 != 0)))) {
            uVar27 = local_e0 >> 0xc;
            uVar23 = (ulong)local_cc;
            lVar17 = local_160 - 2;
            uVar16 = 0;
            uVar20 = 0;
            do {
              iVar8 = (int)local_150;
              pfVar24 = (float *)(puVar32 + (ulong)uVar16 * 4 + 8);
              pfVar6 = (float *)((long)pfVar6 - ((ulong)(iVar28 * 0x10 + 0xf) & 0xff0));
              uVar2 = *(uint *)(lVar30 + 0x38);
              uVar9 = 0;
              uVar11 = 0;
              uVar13 = 1;
              do {
                uVar15 = uVar13 & uVar2 >> 0xc;
                if ((uVar13 & (uint)uVar27 & 0xfffff) == 0) {
                  if (uVar15 != 0) {
                    uVar9 = uVar9 + 1;
                  }
                }
                else if (uVar15 == 0) {
                  pfVar6[uVar11] = 1.0;
                  uVar11 = uVar11 + 1;
                }
                else {
                  uVar10 = (ulong)uVar9;
                  uVar9 = uVar9 + 1;
                  pfVar6[uVar11] = *(float *)(*(long *)(lVar30 + 0x30) + uVar10 * 4);
                  uVar11 = uVar11 + 1;
                }
                uVar13 = uVar13 << 1;
                uVar15 = (uint)local_160;
              } while (uVar11 < uVar15);
              if ((int)local_d8 != 0) {
                fVar37 = *pfVar6;
                uVar10 = 0;
                do {
                  pfVar12 = (float *)(local_c8 +
                                     uVar10 * (uVar22 & 0x1fc) * 4 +
                                     (ulong)(uint)(iVar8 * (int)uVar20) * 4);
                  *pfVar12 = *pfVar12 * fVar37;
                  if ((uVar15 != 1) && (pfVar12[1] = pfVar12[1] * pfVar6[1], uVar15 != 2)) {
                    pfVar12 = pfVar6 + 2;
                    pfVar14 = pfVar24;
                    lVar19 = lVar17;
                    do {
                      lVar19 = lVar19 + -1;
                      *pfVar14 = *pfVar14 * *pfVar12;
                      pfVar12 = pfVar12 + 1;
                      pfVar14 = pfVar14 + 1;
                    } while (lVar19 != 0);
                  }
                  uVar10 = uVar10 + 1;
                  pfVar24 = (float *)((long)pfVar24 + ((ulong)(iVar29 * 4 + 0xc) & 0x7f0));
                } while (uVar10 != local_d8);
              }
              uVar20 = uVar20 + 1;
              uVar16 = uVar16 + (iVar28 * iVar26 * 4 & 0x3ffffffcU);
            } while (uVar20 < uVar23);
          }
          if (uVar35 == 1) {
            iVar29 = ((uint)local_e8 & 0x1fc) * (int)local_d8;
            if (iVar29 == 0) {
              return;
            }
            memcpy(*(void **)(param_4 + 0x30),local_c8,(ulong)(uint)(iVar29 * 4));
            return;
          }
          lVar17 = ((ulong)(*(byte *)(*(long *)(param_4 + 0x58) + 0x80) + 3) & 0x1fc) *
                   (ulong)*(byte *)(param_4 + 0x150);
          if ((int)lVar17 != 0) {
            memset(*(void **)(param_4 + 0x30),0,lVar17 * 4);
          }
          puVar32 = local_c8;
          iVar29 = (int)local_d8;
          if ((((*(long *)(param_1 + 0x170) == 0) ||
               (uVar3 = *(ushort *)(param_1 + 0x134), (uVar3 >> 9 & 1) == 0)) ||
              (uVar4 = (uVar3 & 7) - 1, uVar4 < 2)) ||
             (lVar17 = **(long **)(*(long *)(param_1 + 0x10) + 0x38), *(short *)(lVar17 + 0x38) != 1
             )) {
            lVar17 = **(long **)(*(long *)(param_1 + 0x10) + 0x38);
            if ((*(byte *)(lVar17 + 0x3a) & 7) == 1) {
              pfVar24 = (float *)((long)pfVar6 - ((ulong)((int)local_148 + 0xf) & 0xffff0));
              uVar22 = ((uint)local_e8 & 0x1fc) * iVar29;
              if (uVar22 == 0) {
                return;
              }
              uVar31 = 0;
              uVar33 = 0;
              do {
                pfVar6 = (float *)(local_c8 + (ulong)(uint)((int)local_150 * (int)uVar33) * 4);
                fVar37 = local_158[uVar33];
                fVar38 = *pfVar6;
                pfVar24[1] = pfVar6[1] * fVar37;
                *pfVar24 = fVar38 * fVar37;
                fVar38 = pfVar6[2];
                pfVar24[3] = pfVar6[3] * fVar37;
                pfVar24[2] = fVar38 * fVar37;
                if (uVar22 != 4) {
                  lVar17 = (ulong)uVar22 - 4;
                  pfVar6 = (float *)(puVar32 + (ulong)uVar31 * 4 + 0x10);
                  pfVar12 = pfVar24 + 4;
                  do {
                    *pfVar12 = *pfVar6 * fVar37;
                    lVar17 = lVar17 + -1;
                    pfVar6 = pfVar6 + 1;
                    pfVar12 = pfVar12 + 1;
                  } while (lVar17 != 0);
                }
                pfVar6 = *(float **)(param_4 + 0x30);
                *pfVar6 = *pfVar6 + *pfVar24;
                pfVar6[1] = pfVar6[1] + pfVar24[1];
                pfVar6[2] = pfVar6[2] + pfVar24[2];
                pfVar6[3] = pfVar6[3] + pfVar24[3];
                if (uVar22 != 4) {
                  lVar17 = (ulong)uVar22 - 4;
                  pfVar6 = pfVar6 + 4;
                  pfVar12 = pfVar24 + 4;
                  do {
                    lVar17 = lVar17 + -1;
                    *pfVar6 = *pfVar6 + *pfVar12;
                    pfVar6 = pfVar6 + 1;
                    pfVar12 = pfVar12 + 1;
                  } while (lVar17 != 0);
                }
                uVar33 = uVar33 + 1;
                uVar31 = uVar31 + ((int)local_100 * iVar29 * 4 & 0x3ffffffcU);
              } while (uVar33 < uVar35);
              return;
            }
            if (*(long *)(param_1 + 0x170) == 0) goto LAB_02e72b50;
            uVar3 = *(ushort *)(param_1 + 0x134);
            uVar4 = (uVar3 & 7) - 1;
          }
          if ((((uVar3 & 0x200) != 0) && (1 < uVar4)) && (*(short *)(lVar17 + 0x38) == 1)) {
            fVar37 = *(float *)(param_4 + 0xd8);
            fVar39 = *(float *)(param_4 + 0xdc);
            fVar38 = (float)NEON_fminnm(fVar37 * (fVar37 * (fVar37 * 9.302722e-07 + -0.00017546544)
                                                 + -0.0011517591) + 0.9843052,0x3f800000);
            fVar37 = (float)NEON_fminnm(fVar39 * (fVar39 * fVar39 * -1.3191276e-10 + 0.0031678583) +
                                        0.98224795,0x3f800000);
            if (fVar38 <= 0.0) {
              fVar38 = 0.0;
            }
            if (fVar37 <= 0.0) {
              fVar37 = 0.0;
            }
            uVar20 = (ulong)uVar35;
            pfVar24 = local_158;
            do {
              uVar20 = uVar20 - 1;
              lVar17 = *local_f8;
              local_f8 = local_f8 + 1;
              fVar42 = *(float *)(lVar17 + 0x60);
              fVar39 = *(float *)(lVar17 + 100);
              fVar39 = (float)NEON_fminnm(fVar39 * (fVar39 * fVar39 * -1.3191276e-10 + 0.0031678583)
                                          + 0.98224795,0x3f800000);
              fVar42 = (float)NEON_fminnm(fVar42 * (fVar42 * (fVar42 * 9.302722e-07 + -0.00017546544
                                                             ) + -0.0011517591) + 0.9843052,
                                          0x3f800000);
              if (fVar39 <= 0.0) {
                fVar39 = 0.0;
              }
              if (fVar42 <= 0.0) {
                fVar42 = 0.0;
              }
              *pfVar24 = fVar42 * *pfVar24 * fVar39 * (1.0 / (fVar37 * fVar38));
              pfVar24 = pfVar24 + 1;
            } while (uVar20 != 0);
          }
LAB_02e72b50:
          if ((uVar31 & 0xf00) == 0x200) {
            FUN_02f00ef8(uVar33 & 0xffffffff,uVar25,local_c8,local_150,local_158,uVar35,
                         *(undefined8 *)(param_4 + 0x30));
            return;
          }
          pfVar24 = (float *)((long)pfVar6 - ((ulong)((int)local_148 + 0xf) & 0xffff0));
          uVar22 = ((uint)local_e8 & 0x1fc) * iVar29;
          if (uVar22 == 0) {
            return;
          }
          uVar31 = 0;
          uVar33 = 0;
          do {
            pfVar6 = (float *)(local_c8 + (ulong)(uint)((int)local_150 * (int)uVar33) * 4);
            fVar37 = local_158[uVar33];
            fVar38 = *pfVar6;
            pfVar24[1] = pfVar6[1] * fVar37;
            *pfVar24 = fVar38 * fVar37;
            fVar38 = pfVar6[2];
            pfVar24[3] = pfVar6[3] * fVar37;
            pfVar24[2] = fVar38 * fVar37;
            if (uVar22 != 4) {
              lVar17 = (ulong)uVar22 - 4;
              pfVar6 = (float *)(puVar32 + (ulong)uVar31 * 4 + 0x10);
              pfVar12 = pfVar24 + 4;
              do {
                *pfVar12 = *pfVar6 * fVar37;
                lVar17 = lVar17 + -1;
                pfVar6 = pfVar6 + 1;
                pfVar12 = pfVar12 + 1;
              } while (lVar17 != 0);
            }
            pfVar6 = *(float **)(param_4 + 0x30);
            fVar37 = *pfVar6;
            fVar38 = pfVar6[1];
            fVar39 = *pfVar24;
            if (fVar37 * fVar37 <= fVar39 * fVar39) {
              fVar37 = fVar39;
            }
            *pfVar6 = fVar37;
            fVar37 = pfVar24[1];
            if (fVar38 * fVar38 <= fVar37 * fVar37) {
              fVar38 = fVar37;
            }
            pfVar6[1] = fVar38;
            fVar37 = pfVar6[2];
            fVar38 = pfVar6[3];
            fVar39 = pfVar24[2];
            if (fVar37 * fVar37 <= fVar39 * fVar39) {
              fVar37 = fVar39;
            }
            pfVar6[2] = fVar37;
            fVar37 = pfVar24[3];
            if (fVar38 * fVar38 <= fVar37 * fVar37) {
              fVar38 = fVar37;
            }
            pfVar6[3] = fVar38;
            if (uVar22 != 4) {
              lVar17 = (ulong)uVar22 - 4;
              pfVar6 = pfVar6 + 4;
              pfVar12 = pfVar24 + 4;
              do {
                fVar37 = *pfVar6;
                fVar38 = *pfVar12;
                if (fVar37 * fVar37 <= fVar38 * fVar38) {
                  fVar37 = fVar38;
                }
                lVar17 = lVar17 + -1;
                *pfVar6 = fVar37;
                pfVar6 = pfVar6 + 1;
                pfVar12 = pfVar12 + 1;
              } while (lVar17 != 0);
            }
            uVar33 = uVar33 + 1;
            uVar31 = uVar31 + ((int)local_100 * iVar29 * 4 & 0x3ffffffcU);
          } while (uVar33 < uVar35);
          return;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
  return;
}


