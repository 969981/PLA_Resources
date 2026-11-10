/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef9850; name: FUN_02ef9850
 */


void FUN_02ef9850(float param_1,float param_2,float param_3,undefined8 param_4,undefined4 *param_5,
                 uint param_6,uint param_7,ulong param_8,undefined8 param_9,undefined8 param_10,
                 long param_11)

{
  uint *puVar1;
  MutexType *pMVar2;
  char cVar3;
  float *pfVar4;
  long lVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  uint *puVar9;
  ulong uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  ulong uVar16;
  undefined1 (*pauVar17) [16];
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  undefined1 *puVar24;
  ulong uVar25;
  uint uVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  ulong uVar29;
  uint *puVar30;
  long lVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  long lVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined1 *puVar39;
  long lVar40;
  float *pfVar41;
  float *pfVar42;
  uint uVar43;
  ulong uVar44;
  undefined *puVar45;
  uint uVar46;
  ulong uVar47;
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar69;
  float fVar70;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auVar63 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float afStack_140 [2];
  undefined4 *local_138;
  long local_130;
  undefined4 *local_128;
  ulong local_120;
  ulong local_118;
  undefined *local_110;
  ulong local_108;
  ulong local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined4 *local_a8;
  void *local_a0;
  
  uVar35 = (uint)param_8;
  uVar43 = uVar35 >> 8 & 0xf;
  uVar38 = param_8 & 0xffffffff;
  if (uVar43 == 1) {
    uVar37 = uVar35 >> 0xc & 0xffff7;
    uVar46 = uVar37 - (uVar37 >> 1 & 0x55555555);
    uVar46 = (uVar46 & 0x33333333) + (uVar46 >> 2 & 0x33333333);
    uVar38 = (ulong)((uVar46 + (uVar46 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar37 << 0xc |
                    0x100);
  }
  local_b0 = uVar38 & 0xff;
  uVar46 = param_6 & 0xff;
  iVar13 = (int)local_b0 + -1;
  if ((int)local_b0 == 0 || iVar13 == 0) {
    if (iVar13 != 0) {
      return;
    }
    if ((param_6 & 0xf00) == 0x200) {
      *param_5 = 0x3f800000;
      return;
    }
    uVar38 = 0;
    do {
      if ((param_7 & 0xffff & *(uint *)(&DAT_03a9f40c + uVar38 * 4 + (ulong)(uVar46 - 1) * 0x20)) !=
          0) {
        param_5[(ulong)(*(uint *)(&DAT_03a9f40c + uVar38 * 4 + (ulong)(uVar46 - 1) * 0x20) >> 0x10)
                * ((ulong)((uVar35 & 0xff) + 3) & 0x1fc)] = 0x3f800000;
      }
      uVar38 = uVar38 + 1;
    } while (uVar38 < uVar46);
    return;
  }
  uVar37 = param_6 >> 8 & 0xf;
  local_a8 = param_5;
  if ((uVar37 == 0) || (uVar43 == 0)) {
    uVar35 = uVar35 & 0xff;
    uVar43 = param_6 & 0xff;
    uVar46 = uVar35 + 3 & 0x1fc;
    if (uVar46 * uVar43 != 0) {
      memset(param_5,0,(ulong)(uVar46 * uVar43 * 4));
    }
    if ((param_6 & 0xf00) == 0x200) {
      if ((uVar43 != 0) && ((param_8 & 0xff) != 0)) {
        if (uVar43 < 0xc) {
          uVar36 = *(uint *)(&DAT_03a9ff30 + (ulong)(uVar43 - 1) * 4);
          uVar38 = 0;
          uVar37 = 0;
          do {
            if ((1 << (ulong)((uint)uVar38 & 0x1f) & uVar36) == 0) {
              uVar26 = uVar37 * uVar46;
              uVar37 = uVar37 + 1;
              param_5[uVar26 + uVar38] = 0x3f800000;
            }
            uVar38 = uVar38 + 1;
          } while ((uVar38 < uVar35) && (uVar37 < uVar43));
        }
        else {
          uVar38 = 1;
          do {
            *param_5 = 0x3f800000;
            if (uVar35 <= uVar38) {
              return;
            }
            param_5 = (undefined4 *)((long)param_5 + ((ulong)(uVar35 * 4 + 0xc) & 0x7f0 | 4));
            bVar7 = uVar38 < uVar43;
            uVar38 = uVar38 + 1;
          } while (bVar7);
        }
      }
    }
    else {
      if (uVar35 <= uVar43) {
        uVar43 = uVar35;
      }
      uVar38 = (ulong)uVar43;
      if (uVar43 != 0) {
        uVar16 = uVar38 & 3;
        uVar35 = uVar35 + 3 >> 2;
        if (uVar38 - 1 < 3) {
          lVar31 = 0;
        }
        else {
          uVar44 = 0;
          iVar13 = uVar35 * 0x10;
          uVar36 = uVar35 << 3;
          uVar26 = uVar35 * 0xc;
          lVar40 = 0;
          uVar37 = uVar46;
          do {
            lVar31 = lVar40 + 4;
            param_5[uVar44 + lVar40] = 0x3f800000;
            uVar47 = (ulong)uVar37;
            uVar37 = uVar37 + iVar13;
            param_5[uVar47 + lVar40 + 1] = 0x3f800000;
            uVar47 = (ulong)uVar36;
            uVar36 = uVar36 + iVar13;
            uVar44 = (ulong)(uint)((int)uVar44 + iVar13);
            param_5[uVar47 + lVar40 + 2] = 0x3f800000;
            uVar47 = (ulong)uVar26;
            uVar26 = uVar26 + iVar13;
            param_5[uVar47 + lVar40 + 3] = 0x3f800000;
            lVar40 = lVar31;
          } while (uVar38 - uVar16 != lVar31);
        }
        if ((uVar43 & 3) != 0) {
          uVar35 = uVar35 * (int)lVar31 * 4;
          param_5 = param_5 + lVar31;
          do {
            param_5[uVar35] = 0x3f800000;
            uVar16 = uVar16 - 1;
            param_5 = param_5 + 1;
            uVar35 = uVar35 + uVar46;
          } while (uVar16 != 0);
        }
      }
    }
    return;
  }
  param_2 = param_2 * 0.01;
  uVar36 = (uint)uVar38;
  if (uVar37 == 2) {
    uVar37 = uVar35 & 0xff;
    if (uVar46 <= (uVar35 & 0xff)) {
      uVar37 = uVar46;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    uVar26 = uVar46;
    if (uVar43 == 2) {
      uVar26 = uVar37;
    }
    uVar44 = (ulong)(char)(&DAT_03a9f3e4)[uVar26];
    uVar37 = *(uint *)(&DAT_03a9f3d0 + uVar44 * 4);
    uVar16 = (ulong)uVar37;
    pfVar41 = afStack_140 + uVar16 * -4;
    local_b8 = pfVar41;
    FUN_02efc7a0((&PTR_DAT_042ab730)[uVar44],uVar16,param_4,param_10);
    local_d0 = (undefined1 *)uVar44;
    lVar40 = FUN_02ef8fe0(uVar44 & 0xffffffff);
    if (lVar40 == 0) {
      return;
    }
    iVar12 = (int)local_d0;
    iVar13 = iVar12 + 2;
    iVar13 = iVar13 * iVar13;
    fVar64 = param_2 * param_2 * 0.5 + 0.5;
    local_e0 = CONCAT44(local_e0._4_4_,iVar13);
    if (uVar43 == 2) {
      local_a0 = (void *)CONCAT44(local_a0._4_4_,uVar37 + 3);
      uVar43 = uVar37 + 3 >> 2;
      puVar39 = (undefined1 *)((long)pfVar41 - (ulong)(iVar13 * uVar43 * 0x10));
      uVar38 = 0;
      puVar24 = puVar39;
      do {
        FUN_02ef9108(iVar12 + 1,uVar16,puVar24);
        uVar38 = uVar38 + 1;
        puVar24 = puVar24 + 4;
      } while (uVar38 < uVar16);
      if ((int)local_e0 == 0) {
        return;
      }
      fVar64 = SQRT(fVar64);
      uVar38 = (ulong)(uVar43 << 4);
      uVar35 = (uVar35 & 0xff) + 3 & 0x1fc;
      if (0xb < uVar46) {
        fVar64 = (1.0 / (float)uVar16) * fVar64;
        uVar47 = 0;
        uVar44 = 0;
        pfVar41 = (float *)puVar39;
        do {
          pfVar41 = (float *)((long)pfVar41 - (uVar38 + 0xf & 0x1fffffff0));
          if (uVar16 - 1 < 3) {
            lVar31 = 0;
          }
          else {
            pfVar42 = (float *)(lVar40 + 8 + uVar47 * 4);
            lVar31 = 0;
            pfVar11 = pfVar41 + 2;
            do {
              pfVar11[-2] = fVar64 * pfVar42[-2];
              pfVar11[-1] = fVar64 * pfVar42[-1];
              *pfVar11 = fVar64 * *pfVar42;
              pfVar19 = pfVar42 + 1;
              pfVar42 = pfVar42 + 4;
              lVar31 = lVar31 + 4;
              pfVar11[1] = fVar64 * *pfVar19;
              pfVar11 = pfVar11 + 4;
            } while (uVar16 - (uVar16 & 3) != lVar31);
          }
          if ((uVar37 & 3) != 0) {
            pfVar42 = (float *)(lVar40 + (lVar31 + uVar47) * 4);
            pfVar11 = pfVar41 + lVar31;
            uVar10 = uVar16 & 3;
            do {
              *pfVar11 = fVar64 * *pfVar42;
              uVar10 = uVar10 - 1;
              pfVar42 = pfVar42 + 1;
              pfVar11 = pfVar11 + 1;
            } while (uVar10 != 0);
          }
          uVar10 = 0;
          do {
            pfVar42 = (float *)(puVar39 + (ulong)(((uint)local_a0 & 0xfffffffc) * (int)uVar10) * 4);
            pfVar11 = pfVar41;
            auVar55 = ZEXT816(0);
            do {
              pfVar19 = pfVar42 + 4;
              fVar49 = auVar55._0_4_ + *pfVar42 * *pfVar11;
              auVar67._0_8_ = CONCAT44(auVar55._4_4_ + pfVar42[1] * pfVar11[1],fVar49);
              auVar67._8_4_ = auVar55._8_4_ + pfVar42[2] * pfVar11[2];
              auVar67._12_4_ = auVar55._12_4_ + pfVar42[3] * pfVar11[3];
              pfVar42 = pfVar19;
              pfVar11 = pfVar11 + 4;
              auVar55 = auVar67;
            } while (pfVar19 < (float *)((long)(puVar39 +
                                               (ulong)(((uint)local_a0 & 0xfffffffc) * (int)uVar10)
                                               * 4) + uVar16 * 4));
            auVar55 = NEON_ext(auVar67,auVar67,8,1);
            uVar54 = NEON_rev64(auVar67._0_8_,4);
            uVar58 = NEON_rev64(auVar55._0_8_,4);
            local_a8[uVar35 * (int)uVar44 + uVar10] =
                 (float)uVar58 + auVar67._8_4_ + (float)uVar54 + fVar49;
            uVar10 = uVar10 + 1;
          } while (uVar10 != (local_e0 & 0xffffffff));
          uVar44 = uVar44 + 1;
          uVar47 = (ulong)((int)uVar47 + uVar37);
        } while (uVar44 != (local_e0 & 0xffffffff));
        return;
      }
      fVar64 = (1.0 / (float)uVar16) * fVar64;
      uVar46 = *(uint *)(&DAT_03a9ff30 + (ulong)(uVar46 - 1) * 4);
      uVar43 = 0;
      uVar44 = 0;
      iVar13 = 0;
      pfVar41 = (float *)puVar39;
      do {
        if ((1 << (ulong)((uint)uVar44 & 0x1f) & uVar46) == 0) {
          pfVar41 = (float *)((long)pfVar41 + -(uVar38 + 0xf & 0x1fffffff0));
          if (uVar16 - 1 < 3) {
            lVar31 = 0;
          }
          else {
            pfVar42 = (float *)(lVar40 + 8 + (ulong)uVar43 * 4);
            lVar31 = 0;
            pfVar11 = pfVar41 + 2;
            do {
              pfVar11[-2] = fVar64 * pfVar42[-2];
              pfVar11[-1] = fVar64 * pfVar42[-1];
              *pfVar11 = fVar64 * *pfVar42;
              pfVar19 = pfVar42 + 1;
              pfVar42 = pfVar42 + 4;
              lVar31 = lVar31 + 4;
              pfVar11[1] = fVar64 * *pfVar19;
              pfVar11 = pfVar11 + 4;
            } while (uVar16 - (uVar16 & 3) != lVar31);
          }
          if ((uVar37 & 3) != 0) {
            pfVar42 = pfVar41 + lVar31;
            pfVar11 = (float *)(lVar40 + (lVar31 + (ulong)uVar43) * 4);
            uVar47 = uVar16 & 3;
            do {
              *pfVar42 = fVar64 * *pfVar11;
              uVar47 = uVar47 - 1;
              pfVar42 = pfVar42 + 1;
              pfVar11 = pfVar11 + 1;
            } while (uVar47 != 0);
          }
          uVar47 = 0;
          do {
            pfVar42 = (float *)(puVar39 + (ulong)(((uint)local_a0 & 0xfffffffc) * (int)uVar47) * 4);
            pfVar11 = pfVar41;
            auVar55 = ZEXT816(0);
            do {
              pfVar19 = pfVar42 + 4;
              fVar49 = auVar55._0_4_ + *pfVar42 * *pfVar11;
              auVar51._0_8_ = CONCAT44(auVar55._4_4_ + pfVar42[1] * pfVar11[1],fVar49);
              auVar51._8_4_ = auVar55._8_4_ + pfVar42[2] * pfVar11[2];
              auVar51._12_4_ = auVar55._12_4_ + pfVar42[3] * pfVar11[3];
              pfVar42 = pfVar19;
              pfVar11 = pfVar11 + 4;
              auVar55 = auVar51;
            } while (pfVar19 < (float *)((long)(puVar39 +
                                               (ulong)(((uint)local_a0 & 0xfffffffc) * (int)uVar47)
                                               * 4) + uVar16 * 4));
            auVar55 = NEON_ext(auVar51,auVar51,8,1);
            uVar54 = NEON_rev64(auVar51._0_8_,4);
            uVar58 = NEON_rev64(auVar55._0_8_,4);
            local_a8[iVar13 * uVar35 + uVar47] =
                 (float)uVar58 + auVar51._8_4_ + (float)uVar54 + fVar49;
            uVar47 = uVar47 + 1;
          } while (uVar47 != (local_e0 & 0xffffffff));
          iVar13 = iVar13 + 1;
        }
        uVar44 = uVar44 + 1;
        uVar43 = uVar43 + uVar37;
      } while (uVar44 != (local_e0 & 0xffffffff));
      return;
    }
    if (param_11 == 0) {
      return;
    }
    nn::os::LockMutex((MutexType *)(param_11 + 0x88));
    puVar15 = *(uint **)(param_11 + 0x78);
    uVar43 = *(uint *)(param_11 + 0x80);
    if ((uVar43 == 0) || (*puVar15 == uVar36)) {
      puVar9 = puVar15;
    }
    else {
      lVar31 = (ulong)uVar43 * 0x10;
      puVar30 = puVar15;
      do {
        lVar31 = lVar31 + -0x10;
        if (lVar31 == 0) goto LAB_02efc544;
        puVar9 = puVar30 + 4;
        puVar1 = puVar30 + 4;
        puVar30 = puVar9;
      } while (*puVar1 != uVar36);
    }
    if (puVar9 == puVar15 + (ulong)uVar43 * 4) {
LAB_02efc544:
      pfVar42 = (float *)FUN_02ec87f4(param_11,uVar38);
    }
    else {
      pfVar42 = *(float **)(puVar9 + 2);
    }
    nn::os::UnlockMutex((MutexType *)(param_11 + 0x88));
    if (pfVar42 == (float *)0x0) {
      return;
    }
    uVar43 = (int)local_b0 + 3;
    uVar26 = uVar43 >> 2;
    local_d8 = (undefined *)(ulong)uVar26;
    local_a0 = (void *)((long)pfVar41 - (ulong)(uVar26 * uVar37 * 0x10));
    uVar43 = uVar43 & 0x1fc;
    if (uVar37 * uVar43 != 0) {
      memset(local_a0,0,(ulong)(uVar37 * uVar43) << 2);
    }
    fVar64 = (1.0 / (float)uVar16) * fVar64;
    if ((param_8 & 0xff9c0000) == 0) {
      if (((uVar36 & 0xfffff000) == 0x3000) && (*(int *)(param_11 + 0x54) == 1)) {
        uVar37 = uVar35 & 0xff;
        uVar36 = uVar37 + 3 >> 2;
        if ((param_8 & 0xff) == 0) {
          uVar38 = 0;
          do {
            fVar64 = local_b8[uVar38 * 4] * (local_b8[uVar38 * 4] * -0.20710677 + 0.5) + 0.70710677;
            pauVar27 = (undefined1 (*) [16])((long)local_a0 + (ulong)(uVar43 * (int)uVar38) * 4);
            fVar57 = *(float *)(*pauVar27 + 4);
            pauVar32 = pauVar27 + uVar36;
            fVar64 = fVar64 * fVar64;
            fVar49 = 1.0 - fVar64;
            if (1.0 < fVar64) {
              fVar49 = 0.0;
            }
            *(float *)*pauVar27 = fVar49 + *(float *)*pauVar27;
            *(float *)(*pauVar27 + 4) = fVar64 + fVar57;
            if (pauVar27 < pauVar32) {
              auVar55 = NEON_frsqrte(*pauVar27,4);
              auVar55 = NEON_frecpe(auVar55,4);
              *(long *)(*pauVar27 + 8) = auVar55._8_8_;
              *(long *)*pauVar27 = auVar55._0_8_;
              if (pauVar27 + 1 < pauVar32) {
                pauVar27 = pauVar27 + 1;
                do {
                  pauVar17 = pauVar27 + 1;
                  auVar55 = NEON_frsqrte(*pauVar27,4);
                  auVar55 = NEON_frecpe(auVar55,4);
                  *(long *)(*pauVar27 + 8) = auVar55._8_8_;
                  *(long *)*pauVar27 = auVar55._0_8_;
                  pauVar27 = pauVar17;
                } while (pauVar17 < pauVar32);
              }
            }
            uVar38 = uVar38 + 1;
          } while (uVar38 < uVar16);
        }
        else {
          uVar26 = 0;
          uVar38 = 0;
          do {
            pauVar27 = (undefined1 (*) [16])((long)local_a0 + (ulong)(uVar43 * (int)uVar38) * 4);
            fVar49 = local_b8[uVar38 * 4] * (local_b8[uVar38 * 4] * -0.20710677 + 0.5) + 0.70710677;
            fVar49 = fVar49 * fVar49;
            fVar52 = 1.0 - fVar49;
            fVar57 = fVar49 + *(float *)(*pauVar27 + 4);
            if (1.0 < fVar49) {
              fVar52 = 0.0;
            }
            *(float *)*pauVar27 = (fVar52 + *(float *)*pauVar27) * fVar64;
            *(float *)(*pauVar27 + 4) = fVar57;
            if ((((uVar37 != 1) && (*(float *)(*pauVar27 + 4) = fVar57 * fVar64, uVar37 != 2)) &&
                (*(float *)(*pauVar27 + 8) = *(float *)(*pauVar27 + 8) * fVar64, uVar37 != 3)) &&
               (*(float *)(*pauVar27 + 0xc) = *(float *)(*pauVar27 + 0xc) * fVar64, uVar37 != 4)) {
              pfVar41 = (float *)((long)local_a0 + (ulong)uVar26 * 4 + 0x10);
              lVar31 = (ulong)uVar37 - 4;
              do {
                lVar31 = lVar31 + -1;
                *pfVar41 = *pfVar41 * fVar64;
                pfVar41 = pfVar41 + 1;
              } while (lVar31 != 0);
            }
            pauVar32 = pauVar27 + uVar36;
            if (pauVar27 < pauVar32) {
              auVar55 = NEON_frsqrte(*pauVar27,4);
              auVar55 = NEON_frecpe(auVar55,4);
              *(long *)(*pauVar27 + 8) = auVar55._8_8_;
              *(long *)*pauVar27 = auVar55._0_8_;
              while (pauVar27 = pauVar27 + 1, pauVar27 < pauVar32) {
                auVar55 = NEON_frsqrte(*pauVar27,4);
                auVar55 = NEON_frecpe(auVar55,4);
                *(long *)(*pauVar27 + 8) = auVar55._8_8_;
                *(long *)*pauVar27 = auVar55._0_8_;
              }
            }
            uVar38 = uVar38 + 1;
            uVar26 = uVar26 + uVar43;
          } while (uVar38 < uVar16);
        }
      }
      else {
        uVar38 = 0;
        do {
          fVar60 = local_b8[uVar38 * 4];
          fVar52 = (local_b8 + uVar38 * 4)[2];
          fVar49 = *pfVar42 * fVar60;
          fVar57 = pfVar42[2] * fVar60;
          fVar62 = -(pfVar42[3] * fVar52);
          bVar7 = true;
          bVar8 = false;
          if (-(pfVar42[1] * fVar52) <= fVar49) {
            bVar7 = false;
            bVar8 = true;
            if (!NAN(fVar57) && !NAN(fVar62)) {
              bVar7 = fVar57 < fVar62;
              bVar8 = false;
            }
          }
          if (bVar7 == bVar8) {
            uVar44 = 0;
            fVar60 = pfVar42[1] * fVar52;
            fVar52 = pfVar42[3] * fVar52;
            uVar47 = 1;
          }
          else {
            fVar62 = -(pfVar42[7] * fVar52);
            fVar49 = pfVar42[4] * fVar60;
            fVar57 = pfVar42[6] * fVar60;
            bVar7 = true;
            bVar8 = false;
            if (-(pfVar42[5] * fVar52) <= fVar49) {
              bVar7 = false;
              bVar8 = true;
              if (!NAN(fVar57) && !NAN(fVar62)) {
                bVar7 = fVar57 < fVar62;
                bVar8 = false;
              }
            }
            if (bVar7 == bVar8) {
              fVar60 = pfVar42[5] * fVar52;
              fVar52 = pfVar42[7] * fVar52;
              uVar47 = 2;
              uVar44 = 1;
            }
            else {
              fVar49 = pfVar42[8] * fVar60;
              if (-(pfVar42[9] * fVar52) <= fVar49) {
                fVar57 = pfVar42[10] * fVar60;
                if (-(pfVar42[0xb] * fVar52) <= fVar57) {
                  fVar60 = pfVar42[9] * fVar52;
                  fVar52 = pfVar42[0xb] * fVar52;
                  uVar47 = 3;
                  uVar44 = 2;
                  goto LAB_02efbdd0;
                }
              }
              fVar49 = pfVar42[0xc] * fVar60;
              if (-(pfVar42[0xd] * fVar52) <= fVar49) {
                fVar57 = pfVar42[0xe] * fVar60;
                if (-(pfVar42[0xf] * fVar52) <= fVar57) {
                  fVar60 = pfVar42[0xd] * fVar52;
                  fVar52 = pfVar42[0xf] * fVar52;
                  uVar47 = 4;
                  uVar44 = 3;
                  goto LAB_02efbdd0;
                }
              }
              fVar49 = pfVar42[0x10] * fVar60;
              if (-(pfVar42[0x11] * fVar52) <= fVar49) {
                fVar57 = pfVar42[0x12] * fVar60;
                if (-(pfVar42[0x13] * fVar52) <= fVar57) {
                  fVar60 = pfVar42[0x11] * fVar52;
                  fVar52 = pfVar42[0x13] * fVar52;
                  uVar44 = 4;
                  uVar47 = 5;
                  goto LAB_02efbdd0;
                }
              }
              uVar44 = 4;
              do {
                iVar13 = (int)uVar44;
                uVar44 = (ulong)(iVar13 + 1);
                pfVar41 = pfVar42 + uVar44 * 4;
                fVar62 = -(pfVar41[3] * fVar52);
                fVar49 = *pfVar41 * fVar60;
                fVar57 = pfVar41[2] * fVar60;
                bVar7 = true;
                bVar8 = false;
                if (-(pfVar41[1] * fVar52) <= fVar49) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(fVar57) && !NAN(fVar62)) {
                    bVar7 = fVar57 < fVar62;
                    bVar8 = false;
                  }
                }
              } while (bVar7 != bVar8);
              fVar60 = pfVar41[1] * fVar52;
              fVar52 = pfVar41[3] * fVar52;
              uVar47 = (ulong)(iVar13 + 2);
            }
          }
LAB_02efbdd0:
          uVar47 = (ulong)(*(uint *)(&DAT_03a9f40c + uVar47 * 4 + (local_b0 - 1) * 0x20) >> 0xe) &
                   0x3fffc;
          pauVar27 = (undefined1 (*) [16])((long)local_a0 + (ulong)(uVar43 * (int)uVar38) * 4);
          fVar49 = fVar49 + fVar60 + 1.1920929e-07;
          fVar57 = fVar57 + fVar52 + 1.1920929e-07;
          uVar44 = (ulong)(*(uint *)(&DAT_03a9f40c + uVar44 * 4 + (local_b0 - 1) * 0x20) >> 0xe) &
                   0x3fffc;
          fVar49 = fVar49 * fVar49;
          fVar57 = fVar57 * fVar57;
          fVar52 = fVar64 / (fVar57 + fVar49);
          *(float *)(*pauVar27 + uVar44) = *(float *)(*pauVar27 + uVar44) + fVar49 * fVar52;
          pauVar32 = pauVar27 + (long)local_d8;
          *(float *)(*pauVar27 + uVar47) = *(float *)(*pauVar27 + uVar47) + fVar57 * fVar52;
          if (pauVar27 < pauVar32) {
            auVar55 = NEON_frsqrte(*pauVar27,4);
            auVar55 = NEON_frecpe(auVar55,4);
            *(long *)(*pauVar27 + 8) = auVar55._8_8_;
            *(long *)*pauVar27 = auVar55._0_8_;
            if (pauVar27 + 1 < pauVar32) {
              pauVar27 = pauVar27 + 1;
              do {
                pauVar17 = pauVar27 + 1;
                auVar55 = NEON_frsqrte(*pauVar27,4);
                auVar55 = NEON_frecpe(auVar55,4);
                *(long *)(*pauVar27 + 8) = auVar55._8_8_;
                *(long *)*pauVar27 = auVar55._0_8_;
                pauVar27 = pauVar17;
              } while (pauVar17 < pauVar32);
            }
          }
          uVar38 = uVar38 + 1;
        } while (uVar38 < uVar16);
      }
    }
    else if ((int)local_b0 == 0) {
      uVar44 = 0;
      uVar38 = 0;
      do {
        FUN_02f12cd8(pfVar42,0,(void *)((long)local_a0 + uVar44 * 4));
        uVar38 = uVar38 + 1;
        uVar44 = (ulong)((int)uVar44 + uVar43);
      } while (uVar38 < uVar16);
    }
    else {
      local_e8 = (undefined *)(local_b0 - 1);
      local_c8 = local_b0 & 7;
      lVar31 = local_b0 - local_c8;
      local_f0 = (float *)((long)local_a0 + 0x10);
      local_f8 = (undefined4 *)(local_b0 - 2);
      uVar37 = 0;
      uVar38 = 0;
      local_100 = (long)local_a0 + 8;
      do {
        local_c0 = (ulong)uVar37 << 2;
        pauVar27 = (undefined1 (*) [16])((long)local_a0 + (ulong)(uVar43 * (int)uVar38) * 4);
        FUN_02f12cd8(pfVar42,local_b0,pauVar27);
        if (local_e8 < 7) {
          lVar34 = 0;
          fVar49 = 0.0;
        }
        else {
          fVar49 = 0.0;
          lVar34 = 0;
          pfVar41 = (float *)((long)local_f0 + local_c0);
          do {
            pfVar11 = pfVar41 + -4;
            pfVar18 = pfVar41 + -3;
            pfVar19 = pfVar41 + -2;
            pfVar21 = pfVar41 + -1;
            fVar57 = *pfVar41;
            pfVar22 = pfVar41 + 1;
            pfVar23 = pfVar41 + 2;
            pfVar4 = pfVar41 + 3;
            pfVar41 = pfVar41 + 8;
            fVar49 = *pfVar11 + fVar49 + *pfVar18 + *pfVar19 + *pfVar21 + fVar57 + *pfVar22 +
                     *pfVar23 + *pfVar4;
            lVar34 = lVar34 + 8;
          } while (lVar31 != lVar34);
        }
        if (local_c8 != 0) {
          pfVar41 = (float *)((long)local_a0 + local_c0 + lVar34 * 4);
          uVar44 = local_c8;
          do {
            fVar49 = *pfVar41 + fVar49;
            uVar44 = uVar44 - 1;
            pfVar41 = pfVar41 + 1;
          } while (uVar44 != 0);
        }
        if (0.0 < fVar49) {
          *(float *)*pauVar27 = (*(float *)*pauVar27 * fVar64) / fVar49;
          if (((int)local_b0 != 1) &&
             (*(float *)(*pauVar27 + 4) = (*(float *)(*pauVar27 + 4) * fVar64) / fVar49,
             (int)local_b0 != 2)) {
            pfVar41 = (float *)(local_100 + local_c0);
            puVar20 = local_f8;
            do {
              *pfVar41 = *pfVar41 * fVar64 * (1.0 / fVar49);
              puVar20 = (undefined4 *)((long)puVar20 + -1);
              pfVar41 = pfVar41 + 1;
            } while (puVar20 != (undefined4 *)0x0);
          }
          pauVar32 = pauVar27 + (long)local_d8;
          if (pauVar27 < pauVar32) {
            auVar55 = NEON_frsqrte(*pauVar27,4);
            auVar55 = NEON_frecpe(auVar55,4);
            *(long *)(*pauVar27 + 8) = auVar55._8_8_;
            *(long *)*pauVar27 = auVar55._0_8_;
            if (pauVar27 + 1 < pauVar32) {
              pauVar27 = pauVar27 + 1;
              do {
                pauVar17 = pauVar27 + 1;
                auVar55 = NEON_frsqrte(*pauVar27,4);
                auVar55 = NEON_frecpe(auVar55,4);
                *(long *)(*pauVar27 + 8) = auVar55._8_8_;
                *(long *)*pauVar27 = auVar55._0_8_;
                pauVar27 = pauVar17;
              } while (pauVar17 < pauVar32);
            }
          }
        }
        uVar38 = uVar38 + 1;
        uVar37 = uVar37 + uVar43;
      } while (uVar38 < uVar16);
    }
    if (uVar46 == 0) {
      return;
    }
    if ((int)local_e0 == 0) {
      return;
    }
    puVar45 = (&PTR_DAT_042ab708)[(long)local_d0];
    fVar64 = (1.0 / (float)uVar16) * 12.566371;
    local_c0 = (ulong)((uVar35 & 0xff) + 3 & 0x1fc);
    local_c8 = (ulong)((uVar35 & 0xff) << 2);
    local_b8 = (float *)(CONCAT44(local_b8._4_4_,uVar35) & 0xffffffff000000ff);
    if (0xb < uVar46) {
      uVar44 = local_e0 & 0xffffffff;
      uVar47 = local_b0 & 1;
      lVar31 = 0;
      uVar38 = 0;
      local_d0 = (undefined1 *)(local_b0 - uVar47);
      while( true ) {
        puVar20 = local_a8 + uVar38 * local_c0;
        if ((uint)local_b8 != 0) {
          memset(puVar20,0,local_c8);
        }
        if ((int)local_b0 != 0) {
          iVar13 = (int)lVar31;
          if ((int)local_b0 == 1) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            puVar24 = local_d0;
            do {
              fVar49 = 0.0;
              uVar25 = 0;
              uVar28 = 0;
              do {
                iVar12 = (int)uVar28;
                uVar28 = uVar28 + 1;
                lVar34 = uVar25 * 4;
                uVar25 = (ulong)((int)uVar25 + uVar43);
                fVar49 = fVar49 + *(float *)((long)local_a0 + lVar34 + uVar10 * 4) *
                                  *(float *)(puVar45 + uVar38 * 4) * fVar64 *
                                  *(float *)(lVar40 + (ulong)(uint)(iVar13 + iVar12) * 4);
              } while (uVar28 < uVar16);
              puVar20[uVar10] = fVar49;
              fVar49 = 0.0;
              uVar25 = uVar10 | 1;
              uVar29 = 0;
              uVar28 = 0;
              do {
                iVar12 = (int)uVar28;
                uVar28 = uVar28 + 1;
                lVar34 = uVar29 * 4;
                uVar29 = (ulong)((int)uVar29 + uVar43);
                fVar49 = fVar49 + *(float *)((long)local_a0 + lVar34 + uVar25 * 4) *
                                  *(float *)(puVar45 + uVar38 * 4) * fVar64 *
                                  *(float *)(lVar40 + (ulong)(uint)(iVar13 + iVar12) * 4);
              } while (uVar28 < uVar16);
              uVar10 = uVar10 + 2;
              puVar24 = (undefined1 *)((long)puVar24 + -2);
              puVar20[uVar25] = fVar49;
            } while (puVar24 != (undefined1 *)0x0);
          }
          if (uVar47 != 0) {
            fVar49 = 0.0;
            uVar25 = 0;
            uVar28 = 0;
            do {
              iVar12 = (int)uVar28;
              uVar28 = uVar28 + 1;
              lVar34 = uVar25 * 4;
              uVar25 = (ulong)((int)uVar25 + uVar43);
              fVar49 = fVar49 + *(float *)((long)local_a0 + lVar34 + uVar10 * 4) *
                                *(float *)(puVar45 + uVar38 * 4) * fVar64 *
                                *(float *)(lVar40 + (ulong)(uint)(iVar13 + iVar12) * 4);
            } while (uVar28 < uVar16);
            puVar20[uVar10] = fVar49;
          }
        }
        uVar38 = uVar38 + 1;
        if (uVar44 <= uVar38) break;
        lVar31 = lVar31 + uVar16;
        if (uVar46 <= uVar38) {
          return;
        }
      }
      return;
    }
    uVar37 = *(uint *)(&DAT_03a9ff30 + (ulong)(uVar46 - 1) * 4);
    local_d8 = (undefined *)(local_b0 & 1);
    lVar31 = 0;
    uVar38 = 0;
    uVar35 = 0;
    local_d0 = (undefined1 *)(local_e0 & 0xffffffff);
    local_e0 = local_b0 - (long)local_d8;
    while( true ) {
      if ((1 << (ulong)((uint)uVar38 & 0x1f) & uVar37) == 0) {
        puVar20 = local_a8 + uVar35 * (int)local_c0;
        if ((uint)local_b8 != 0) {
          memset(puVar20,0,local_c8);
        }
        if ((int)local_b0 != 0) {
          iVar13 = (int)lVar31;
          if ((int)local_b0 == 1) {
            uVar44 = 0;
          }
          else {
            uVar44 = 0;
            lVar34 = local_e0;
            do {
              fVar49 = 0.0;
              uVar10 = 0;
              uVar47 = 0;
              do {
                iVar12 = (int)uVar47;
                uVar47 = uVar47 + 1;
                lVar5 = uVar10 * 4;
                uVar10 = (ulong)((int)uVar10 + uVar43);
                fVar49 = fVar49 + *(float *)((long)local_a0 + lVar5 + uVar44 * 4) *
                                  *(float *)(puVar45 + uVar38 * 4) * fVar64 *
                                  *(float *)(lVar40 + (ulong)(uint)(iVar13 + iVar12) * 4);
              } while (uVar47 < uVar16);
              puVar20[uVar44] = fVar49;
              fVar49 = 0.0;
              uVar10 = uVar44 | 1;
              uVar28 = 0;
              uVar47 = 0;
              do {
                iVar12 = (int)uVar47;
                uVar47 = uVar47 + 1;
                lVar5 = uVar28 * 4;
                uVar28 = (ulong)((int)uVar28 + uVar43);
                fVar49 = fVar49 + *(float *)((long)local_a0 + lVar5 + uVar10 * 4) *
                                  *(float *)(puVar45 + uVar38 * 4) * fVar64 *
                                  *(float *)(lVar40 + (ulong)(uint)(iVar13 + iVar12) * 4);
              } while (uVar47 < uVar16);
              uVar44 = uVar44 + 2;
              lVar34 = lVar34 + -2;
              puVar20[uVar10] = fVar49;
            } while (lVar34 != 0);
          }
          if (local_d8 != (undefined *)0x0) {
            fVar49 = 0.0;
            uVar10 = 0;
            uVar47 = 0;
            do {
              iVar12 = (int)uVar47;
              uVar47 = uVar47 + 1;
              lVar34 = uVar10 * 4;
              uVar10 = (ulong)((int)uVar10 + uVar43);
              fVar49 = fVar49 + *(float *)((long)local_a0 + lVar34 + uVar44 * 4) *
                                *(float *)(puVar45 + uVar38 * 4) * fVar64 *
                                *(float *)(lVar40 + (ulong)(uint)(iVar13 + iVar12) * 4);
            } while (uVar47 < uVar16);
            puVar20[uVar44] = fVar49;
          }
        }
        uVar35 = uVar35 + 1;
      }
      uVar38 = uVar38 + 1;
      if (local_d0 <= uVar38) break;
      lVar31 = lVar31 + uVar16;
      if (uVar46 <= uVar35) {
        return;
      }
    }
    return;
  }
  if (param_11 == 0) {
    return;
  }
  param_7 = param_6 >> 0xc & param_7;
  uVar43 = param_6 & 7;
  local_a0 = (void *)(ulong)uVar43;
  local_b8 = (float *)CONCAT44(local_b8._4_4_,param_7);
  uVar16 = (ulong)local_a0;
  if (param_7 != param_6 >> 0xc) {
    param_7 = param_7 - (param_7 >> 1 & 0x55555555);
    uVar43 = (param_7 & 0x33333333) + (param_7 >> 2 & 0x33333333);
    uVar43 = (uVar43 + (uVar43 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 & 7;
    uVar16 = (ulong)uVar43;
  }
  if (uVar43 == 0) {
    return;
  }
  fVar64 = 1.0 / (float)uVar16;
  uVar43 = (uint)uVar16;
  if (((uVar36 & 0xf00) == 0x100) && ((uVar38 & 0xff9c0000) == 0)) {
    if (0.0 < param_2) {
      pMVar2 = (MutexType *)(param_11 + 0xb8);
      nn::os::LockMutex(pMVar2);
      puVar15 = *(uint **)(param_11 + 0xa8);
      uVar35 = *(uint *)(param_11 + 0xb0);
      if ((uVar35 == 0) || (*puVar15 == uVar43)) {
        puVar9 = puVar15;
      }
      else {
        lVar40 = (ulong)uVar35 * 0x18;
        puVar30 = puVar15;
        do {
          lVar40 = lVar40 + -0x18;
          if (lVar40 == 0) goto LAB_02efa014;
          puVar9 = puVar30 + 6;
          puVar1 = puVar30 + 6;
          puVar30 = puVar9;
        } while (*puVar1 != uVar43);
      }
      if (puVar9 == puVar15 + (ulong)uVar35 * 6) {
LAB_02efa014:
        puVar9 = (uint *)FUN_02ec89d0(param_11,uVar16);
        nn::os::UnlockMutex(pMVar2);
        if (puVar9 == (uint *)0x0) {
          return;
        }
      }
      else {
        puVar9 = puVar9 + 2;
        nn::os::UnlockMutex(pMVar2);
      }
      uVar35 = puVar9[2];
      uVar44 = (ulong)uVar35;
      pauVar27 = (undefined1 (*) [16])(afStack_140 + uVar44 * -4);
      fVar49 = param_3 * -0.01 + 1.0;
      if (fVar49 == 1.0) {
        memcpy(pauVar27,*(void **)puVar9,uVar44 << 4);
      }
      else if (fVar49 <= 0.5) {
        FUN_02efce28(*(undefined8 *)puVar9,uVar44,pauVar27);
      }
      else {
        FUN_02efcf58();
      }
      uVar10 = (ulong)(uVar35 * uVar43);
      pauVar17 = pauVar27 + -uVar10;
      uVar47 = 0;
      pauVar32 = pauVar17;
      do {
        auVar55 = *pauVar27;
        auVar67 = *(undefined1 (*) [16])(&local_130 + uVar44 * -2);
        pfVar41 = (float *)(&DAT_03a9ff5c + uVar47 * 0xc + (ulong)(uVar43 - 1) * 0x54);
        auVar51 = *(undefined1 (*) [16])(&local_120 + uVar44 * -2);
        auVar6 = *(undefined1 (*) [16])(&local_110 + uVar44 * -2);
        auVar48 = NEON_ext(auVar55,auVar55,8,1);
        auVar50 = NEON_ext(auVar67,auVar67,8,1);
        auVar56 = NEON_ext(auVar51,auVar51,8,1);
        auVar59 = NEON_ext(auVar6,auVar6,8,1);
        fVar49 = auVar48._0_4_;
        fVar52 = auVar50._0_4_;
        fVar57 = auVar56._0_4_;
        fVar60 = auVar59._0_4_;
        fVar65 = *pfVar41;
        fVar53 = pfVar41[1];
        fVar62 = pfVar41[2];
        fVar66 = -fVar65;
        auVar50._0_4_ = auVar55._4_4_ + fVar49 * fVar53;
        auVar50._4_4_ = auVar67._4_4_ + fVar52 * fVar53;
        auVar50._8_4_ = auVar51._4_4_ + fVar57 * fVar53;
        auVar50._12_4_ = auVar6._4_4_ + fVar60 * fVar53;
        fVar69 = auVar55._0_4_ * fVar62 + fVar49 * fVar65;
        auVar48._4_4_ = auVar67._0_4_ * fVar62 + fVar52 * fVar65;
        auVar48._8_4_ = auVar51._0_4_ * fVar62 + fVar57 * fVar65;
        auVar48._12_4_ = auVar6._0_4_ * fVar62 + fVar60 * fVar65;
        fVar49 = auVar55._0_4_ * fVar66 + fVar49 * fVar62;
        fVar52 = auVar67._0_4_ * fVar66 + fVar52 * fVar62;
        fVar57 = auVar51._0_4_ * fVar66 + fVar57 * fVar62;
        fVar60 = auVar6._0_4_ * fVar66 + fVar60 * fVar62;
        auVar55 = NEON_ext(auVar50,auVar50,8,1);
        auVar67 = NEON_ext(auVar48,auVar48,8,1);
        uVar54 = CONCAT44(auVar50._0_4_,fVar69);
        *(ulong *)(*pauVar32 + 8) = CONCAT44(fVar49,fVar49);
        *(undefined8 *)*pauVar32 = uVar54;
        *(ulong *)(pauVar32[1] + 8) = CONCAT44(fVar52,fVar52);
        uVar54 = CONCAT44(auVar50._4_4_,auVar48._4_4_);
        *(undefined8 *)pauVar32[1] = uVar54;
        *(ulong *)(pauVar32[2] + 8) = CONCAT44(fVar57,fVar57);
        *(ulong *)pauVar32[2] = CONCAT44(auVar55._0_4_,auVar67._0_4_);
        *(ulong *)(pauVar32[3] + 8) = CONCAT44(fVar60,fVar60);
        *(ulong *)pauVar32[3] = CONCAT44(auVar55._4_4_,auVar67._4_4_);
        pauVar32 = pauVar32 + 4;
        if (0x10 < uVar35 << 2) {
          pauVar33 = (undefined1 (*) [16])(&local_100 + uVar44 * -2);
          do {
            auVar55 = *pauVar33;
            auVar67 = pauVar33[1];
            auVar48 = NEON_ext(auVar55,auVar55,8,1);
            auVar51 = pauVar33[2];
            auVar6 = pauVar33[3];
            auVar50 = NEON_ext(auVar67,auVar67,8,1);
            auVar56 = NEON_ext(auVar51,auVar51,8,1);
            auVar59 = NEON_ext(auVar6,auVar6,8,1);
            pauVar33 = pauVar33 + 4;
            fVar49 = auVar48._0_4_;
            fVar52 = auVar50._0_4_;
            fVar57 = auVar56._0_4_;
            fVar60 = auVar59._0_4_;
            auVar59._0_4_ = auVar55._4_4_ + fVar53 * fVar49;
            auVar59._4_4_ = auVar67._4_4_ + fVar53 * fVar52;
            auVar59._8_4_ = auVar51._4_4_ + fVar53 * fVar57;
            auVar59._12_4_ = auVar6._4_4_ + fVar53 * fVar60;
            auVar56._0_4_ = auVar55._0_4_ * fVar62 + fVar65 * fVar49;
            auVar56._4_4_ = auVar67._0_4_ * fVar62 + fVar65 * fVar52;
            auVar56._8_4_ = auVar51._0_4_ * fVar62 + fVar65 * fVar57;
            auVar56._12_4_ = auVar6._0_4_ * fVar62 + fVar65 * fVar60;
            fVar49 = auVar55._0_4_ * fVar66 + fVar62 * fVar49;
            fVar52 = auVar67._0_4_ * fVar66 + fVar62 * fVar52;
            fVar57 = auVar51._0_4_ * fVar66 + fVar62 * fVar57;
            fVar60 = auVar6._0_4_ * fVar66 + fVar62 * fVar60;
            uVar54 = CONCAT44(auVar59._0_4_,auVar56._0_4_);
            auVar55 = NEON_ext(auVar56,auVar56,8,1);
            auVar67 = NEON_ext(auVar59,auVar59,8,1);
            *(ulong *)(*pauVar32 + 8) = CONCAT44(fVar49,fVar49);
            *(undefined8 *)*pauVar32 = uVar54;
            *(ulong *)(pauVar32[1] + 8) = CONCAT44(fVar52,fVar52);
            uVar54 = CONCAT44(auVar59._4_4_,auVar56._4_4_);
            *(undefined8 *)pauVar32[1] = uVar54;
            *(ulong *)(pauVar32[2] + 8) = CONCAT44(fVar57,fVar57);
            *(ulong *)pauVar32[2] = CONCAT44(auVar67._0_4_,auVar55._0_4_);
            *(ulong *)(pauVar32[3] + 8) = CONCAT44(fVar60,fVar60);
            *(ulong *)pauVar32[3] = CONCAT44(auVar67._4_4_,auVar55._4_4_);
            pauVar32 = pauVar32 + 4;
          } while (pauVar33 < (undefined1 (*) [16])(*pauVar27 + (ulong)(uVar35 << 2) * 4));
        }
        uVar47 = uVar47 + 1;
      } while (uVar47 != uVar16);
      lVar40 = (long)pauVar17 - (uVar10 * 0x10 + 0xf & 0x1ffffffff0);
      FUN_02efc7a0(pauVar17,uVar10,param_4,param_10,lVar40);
    }
    else {
      lVar40 = (long)afStack_140 - (ulong)(uVar43 << 4);
      FUN_02efcd10(uVar16,param_4,param_10,param_9,lVar40);
      uVar44 = 1;
    }
    pMVar2 = (MutexType *)(param_11 + 0x88);
    nn::os::LockMutex(pMVar2);
    puVar15 = *(uint **)(param_11 + 0x78);
    uVar35 = *(uint *)(param_11 + 0x80);
    if ((uVar35 == 0) || (*puVar15 == uVar36)) {
      puVar9 = puVar15;
    }
    else {
      lVar31 = (ulong)uVar35 * 0x10;
      puVar30 = puVar15;
      do {
        lVar31 = lVar31 + -0x10;
        if (lVar31 == 0) goto LAB_02efac98;
        puVar9 = puVar30 + 4;
        puVar1 = puVar30 + 4;
        puVar30 = puVar9;
      } while (*puVar1 != uVar36);
    }
    if (puVar9 == puVar15 + (ulong)uVar35 * 4) {
LAB_02efac98:
      pfVar41 = (float *)FUN_02ec87f4(param_11,uVar38);
    }
    else {
      pfVar41 = *(float **)(puVar9 + 2);
    }
    nn::os::UnlockMutex(pMVar2);
    if (pfVar41 == (float *)0x0) {
      return;
    }
    pfVar42 = (float *)0x0;
    if ((param_1 < 1.0) &&
       (uVar35 = uVar36 >> 0xc & 0xffffb,
       uVar35 = uVar36 - ((uVar36 >> 0xc) - uVar35 >> 2) & 0xff | uVar35 << 0xc | 0x100,
       uVar36 != uVar35)) {
      nn::os::LockMutex(pMVar2);
      puVar15 = *(uint **)(param_11 + 0x78);
      uVar43 = *(uint *)(param_11 + 0x80);
      if ((uVar43 == 0) || (*puVar15 == uVar35)) {
        puVar9 = puVar15;
      }
      else {
        lVar31 = (ulong)uVar43 * 0x10;
        puVar30 = puVar15;
        do {
          lVar31 = lVar31 + -0x10;
          if (lVar31 == 0) goto LAB_02efc494;
          puVar9 = puVar30 + 4;
          puVar1 = puVar30 + 4;
          puVar30 = puVar9;
        } while (*puVar1 != uVar35);
      }
      if (puVar9 == puVar15 + (ulong)uVar43 * 4) {
LAB_02efc494:
        pfVar42 = (float *)FUN_02ec87f4(param_11,uVar35);
      }
      else {
        pfVar42 = *(float **)(puVar9 + 2);
      }
      nn::os::UnlockMutex(pMVar2);
    }
    uVar38 = (param_8 & 0xff) + 3;
    uVar35 = (int)uVar44 * 4;
    lVar31 = local_b0 - 1;
    fVar49 = 1.0 / (float)uVar44;
    uVar16 = 0;
    iVar13 = 0;
    do {
      if (((uint)local_b8 & 0xffff &
          *(uint *)(&DAT_03a9f40c + uVar16 * 4 + (ulong)((int)local_a0 - 1) * 0x20)) != 0) {
        lVar34 = (ulong)(*(uint *)(&DAT_03a9f40c + uVar16 * 4 + (ulong)((int)local_a0 - 1) * 0x20)
                        >> 0x10) * (uVar38 & 0x1fc);
        pfVar11 = (float *)(lVar40 + (ulong)(iVar13 * uVar35) * 4);
        pfVar19 = pfVar11 + uVar35;
        pauVar27 = (undefined1 (*) [16])(local_a8 + lVar34);
        do {
          fVar52 = pfVar11[2];
          fVar57 = *pfVar11;
          pfVar11 = pfVar11 + 4;
          if (((uVar36 & 0xfffff000) == 0x3000) && (*(int *)(param_11 + 0x54) == 1)) {
            fVar62 = fVar57 * (fVar57 * -0.20710677 + 0.5) + 0.70710677;
            fVar62 = fVar62 * fVar62;
            fVar57 = 1.0 - fVar62;
            if (1.0 < fVar62) {
              fVar57 = 0.0;
            }
            *(float *)*pauVar27 = *(float *)*pauVar27 + fVar57;
            pfVar23 = (float *)((long)*pauVar27 + 4);
          }
          else {
            if (pfVar42 == (float *)0x0) {
              fVar66 = -(pfVar41[3] * fVar52);
              fVar60 = *pfVar41 * fVar57;
              fVar62 = pfVar41[2] * fVar57;
              bVar7 = true;
              bVar8 = false;
              if (-(pfVar41[1] * fVar52) <= fVar60) {
                bVar7 = false;
                bVar8 = true;
                if (!NAN(fVar62) && !NAN(fVar66)) {
                  bVar7 = fVar62 < fVar66;
                  bVar8 = false;
                }
              }
              if (bVar7 == bVar8) {
                uVar44 = 0;
                fVar57 = pfVar41[1] * fVar52;
                fVar52 = pfVar41[3] * fVar52;
                uVar47 = 1;
              }
              else {
                fVar66 = -(pfVar41[7] * fVar52);
                fVar60 = pfVar41[4] * fVar57;
                fVar62 = pfVar41[6] * fVar57;
                bVar7 = true;
                bVar8 = false;
                if (-(pfVar41[5] * fVar52) <= fVar60) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(fVar62) && !NAN(fVar66)) {
                    bVar7 = fVar62 < fVar66;
                    bVar8 = false;
                  }
                }
                if (bVar7 == bVar8) {
                  fVar57 = pfVar41[5] * fVar52;
                  fVar52 = pfVar41[7] * fVar52;
                  uVar47 = 2;
                  uVar44 = 1;
                }
                else {
                  fVar60 = pfVar41[8] * fVar57;
                  if (-(pfVar41[9] * fVar52) <= fVar60) {
                    fVar62 = pfVar41[10] * fVar57;
                    if (-(pfVar41[0xb] * fVar52) <= fVar62) {
                      fVar57 = pfVar41[9] * fVar52;
                      fVar52 = pfVar41[0xb] * fVar52;
                      uVar47 = 3;
                      uVar44 = 2;
                      goto LAB_02ef9b80;
                    }
                  }
                  fVar60 = pfVar41[0xc] * fVar57;
                  if (-(pfVar41[0xd] * fVar52) <= fVar60) {
                    fVar62 = pfVar41[0xe] * fVar57;
                    if (-(pfVar41[0xf] * fVar52) <= fVar62) {
                      fVar57 = pfVar41[0xd] * fVar52;
                      fVar52 = pfVar41[0xf] * fVar52;
                      uVar47 = 4;
                      uVar44 = 3;
                      goto LAB_02ef9b80;
                    }
                  }
                  fVar60 = pfVar41[0x10] * fVar57;
                  if (-(pfVar41[0x11] * fVar52) <= fVar60) {
                    fVar62 = pfVar41[0x12] * fVar57;
                    if (-(pfVar41[0x13] * fVar52) <= fVar62) {
                      fVar57 = pfVar41[0x11] * fVar52;
                      fVar52 = pfVar41[0x13] * fVar52;
                      uVar44 = 4;
                      uVar47 = 5;
                      goto LAB_02ef9b80;
                    }
                  }
                  uVar44 = 4;
                  do {
                    iVar12 = (int)uVar44;
                    uVar44 = (ulong)(iVar12 + 1);
                    pfVar23 = pfVar41 + uVar44 * 4;
                    fVar66 = -(pfVar23[3] * fVar52);
                    fVar60 = *pfVar23 * fVar57;
                    fVar62 = pfVar23[2] * fVar57;
                    bVar7 = true;
                    bVar8 = false;
                    if (-(pfVar23[1] * fVar52) <= fVar60) {
                      bVar7 = false;
                      bVar8 = true;
                      if (!NAN(fVar62) && !NAN(fVar66)) {
                        bVar7 = fVar62 < fVar66;
                        bVar8 = false;
                      }
                    }
                  } while (bVar7 != bVar8);
                  fVar57 = pfVar23[1] * fVar52;
                  fVar52 = pfVar23[3] * fVar52;
                  uVar47 = (ulong)(iVar12 + 2);
                }
              }
LAB_02ef9b80:
              fVar60 = fVar60 + fVar57 + 1.1920929e-07;
              fVar62 = fVar62 + fVar52 + 1.1920929e-07;
              fVar60 = fVar60 * fVar60;
              fVar62 = fVar62 * fVar62;
              fVar57 = 1.0 / (fVar62 + fVar60);
              uVar44 = (ulong)(*(uint *)(&DAT_03a9f40c + uVar44 * 4 + lVar31 * 0x20) >> 0xe) &
                       0x3fffc;
              fVar52 = *(float *)((long)*pauVar27 + uVar44);
              uVar43 = *(uint *)(&DAT_03a9f40c + uVar47 * 4 + lVar31 * 0x20);
            }
            else {
              fVar66 = -(pfVar41[3] * fVar52);
              fVar60 = *pfVar41 * fVar57;
              fVar62 = pfVar41[2] * fVar57;
              bVar7 = true;
              bVar8 = false;
              if (-(pfVar41[1] * fVar52) <= fVar60) {
                bVar7 = false;
                bVar8 = true;
                if (!NAN(fVar62) && !NAN(fVar66)) {
                  bVar7 = fVar62 < fVar66;
                  bVar8 = false;
                }
              }
              if (bVar7 == bVar8) {
                uVar44 = 0;
                fVar66 = pfVar41[1] * fVar52;
                fVar65 = pfVar41[3] * fVar52;
                uVar47 = 1;
              }
              else {
                fVar66 = -(pfVar41[7] * fVar52);
                fVar60 = pfVar41[4] * fVar57;
                fVar62 = pfVar41[6] * fVar57;
                bVar7 = true;
                bVar8 = false;
                if (-(pfVar41[5] * fVar52) <= fVar60) {
                  bVar7 = false;
                  bVar8 = true;
                  if (!NAN(fVar62) && !NAN(fVar66)) {
                    bVar7 = fVar62 < fVar66;
                    bVar8 = false;
                  }
                }
                if (bVar7 == bVar8) {
                  fVar66 = pfVar41[5] * fVar52;
                  fVar65 = pfVar41[7] * fVar52;
                  uVar47 = 2;
                  uVar44 = 1;
                }
                else {
                  fVar60 = pfVar41[8] * fVar57;
                  if (-(pfVar41[9] * fVar52) <= fVar60) {
                    fVar62 = pfVar41[10] * fVar57;
                    if (-(pfVar41[0xb] * fVar52) <= fVar62) {
                      fVar66 = pfVar41[9] * fVar52;
                      fVar65 = pfVar41[0xb] * fVar52;
                      uVar47 = 3;
                      uVar44 = 2;
                      goto LAB_02efab4c;
                    }
                  }
                  fVar60 = pfVar41[0xc] * fVar57;
                  if (-(pfVar41[0xd] * fVar52) <= fVar60) {
                    fVar62 = pfVar41[0xe] * fVar57;
                    if (-(pfVar41[0xf] * fVar52) <= fVar62) {
                      fVar66 = pfVar41[0xd] * fVar52;
                      fVar65 = pfVar41[0xf] * fVar52;
                      uVar47 = 4;
                      uVar44 = 3;
                      goto LAB_02efab4c;
                    }
                  }
                  fVar60 = pfVar41[0x10] * fVar57;
                  if (-(pfVar41[0x11] * fVar52) <= fVar60) {
                    fVar62 = pfVar41[0x12] * fVar57;
                    if (-(pfVar41[0x13] * fVar52) <= fVar62) {
                      fVar66 = pfVar41[0x11] * fVar52;
                      fVar65 = pfVar41[0x13] * fVar52;
                      uVar44 = 4;
                      uVar47 = 5;
                      goto LAB_02efab4c;
                    }
                  }
                  uVar44 = 4;
                  do {
                    iVar12 = (int)uVar44;
                    uVar44 = (ulong)(iVar12 + 1);
                    pfVar23 = pfVar41 + uVar44 * 4;
                    fVar66 = -(pfVar23[3] * fVar52);
                    fVar60 = *pfVar23 * fVar57;
                    fVar62 = pfVar23[2] * fVar57;
                    bVar7 = true;
                    bVar8 = false;
                    if (-(pfVar23[1] * fVar52) <= fVar60) {
                      bVar7 = false;
                      bVar8 = true;
                      if (!NAN(fVar62) && !NAN(fVar66)) {
                        bVar7 = fVar62 < fVar66;
                        bVar8 = false;
                      }
                    }
                  } while (bVar7 != bVar8);
                  fVar66 = pfVar23[1] * fVar52;
                  fVar65 = pfVar23[3] * fVar52;
                  uVar47 = (ulong)(iVar12 + 2);
                }
              }
LAB_02efab4c:
              fVar60 = fVar60 + fVar66 + 1.1920929e-07;
              fVar62 = fVar62 + fVar65 + 1.1920929e-07;
              fVar60 = fVar60 * fVar60;
              fVar62 = fVar62 * fVar62;
              fVar66 = param_1 / (fVar62 + fVar60);
              uVar44 = (ulong)(*(uint *)(&DAT_03a9f40c + uVar44 * 4 + lVar31 * 0x20) >> 0xe) &
                       0x3fffc;
              *(float *)((long)*pauVar27 + uVar44) =
                   *(float *)((long)*pauVar27 + uVar44) + fVar60 * fVar66;
              uVar44 = (ulong)(*(uint *)(&DAT_03a9f40c + uVar47 * 4 + lVar31 * 0x20) >> 0xe) &
                       0x3fffc;
              *(float *)((long)*pauVar27 + uVar44) =
                   *(float *)((long)*pauVar27 + uVar44) + fVar62 * fVar66;
              fVar60 = *pfVar42 * fVar57;
              if (fVar60 < -(pfVar42[1] * fVar52)) {
LAB_02efabcc:
                fVar60 = pfVar42[4] * fVar57;
                if (-(pfVar42[5] * fVar52) <= fVar60) {
                  fVar62 = pfVar42[6] * fVar57;
                  if (-(pfVar42[7] * fVar52) <= fVar62) {
                    fVar57 = pfVar42[5] * fVar52;
                    fVar52 = pfVar42[7] * fVar52;
                    uVar47 = 2;
                    uVar44 = 1;
                    goto LAB_02efac2c;
                  }
                }
                fVar60 = pfVar42[8] * fVar57;
                if (-(pfVar42[9] * fVar52) <= fVar60) {
                  fVar62 = pfVar42[10] * fVar57;
                  if (-(pfVar42[0xb] * fVar52) <= fVar62) {
                    fVar57 = pfVar42[9] * fVar52;
                    fVar52 = pfVar42[0xb] * fVar52;
                    uVar47 = 3;
                    uVar44 = 2;
                    goto LAB_02efac2c;
                  }
                }
                fVar60 = pfVar42[0xc] * fVar57;
                if (-(pfVar42[0xd] * fVar52) <= fVar60) {
                  fVar62 = pfVar42[0xe] * fVar57;
                  if (-(pfVar42[0xf] * fVar52) <= fVar62) {
                    fVar57 = pfVar42[0xd] * fVar52;
                    fVar52 = pfVar42[0xf] * fVar52;
                    uVar47 = 4;
                    uVar44 = 3;
                    goto LAB_02efac2c;
                  }
                }
                fVar60 = pfVar42[0x10] * fVar57;
                if (-(pfVar42[0x11] * fVar52) <= fVar60) {
                  fVar62 = pfVar42[0x12] * fVar57;
                  if (-(pfVar42[0x13] * fVar52) <= fVar62) {
                    fVar57 = pfVar42[0x11] * fVar52;
                    fVar52 = pfVar42[0x13] * fVar52;
                    uVar44 = 4;
                    uVar47 = 5;
                    goto LAB_02efac2c;
                  }
                }
                uVar44 = 4;
                do {
                  iVar12 = (int)uVar44;
                  uVar44 = (ulong)(iVar12 + 1);
                  pfVar23 = pfVar42 + uVar44 * 4;
                  fVar66 = -(pfVar23[3] * fVar52);
                  fVar60 = *pfVar23 * fVar57;
                  fVar62 = pfVar23[2] * fVar57;
                  bVar7 = true;
                  bVar8 = false;
                  if (-(pfVar23[1] * fVar52) <= fVar60) {
                    bVar7 = false;
                    bVar8 = true;
                    if (!NAN(fVar62) && !NAN(fVar66)) {
                      bVar7 = fVar62 < fVar66;
                      bVar8 = false;
                    }
                  }
                } while (bVar7 != bVar8);
                fVar57 = pfVar23[1] * fVar52;
                fVar52 = pfVar23[3] * fVar52;
                uVar47 = (ulong)(iVar12 + 2);
              }
              else {
                fVar62 = pfVar42[2] * fVar57;
                if (fVar62 < -(pfVar42[3] * fVar52)) goto LAB_02efabcc;
                uVar44 = 0;
                fVar57 = pfVar42[1] * fVar52;
                fVar52 = pfVar42[3] * fVar52;
                uVar47 = 1;
              }
LAB_02efac2c:
              uVar44 = (ulong)(*(uint *)(&DAT_03a9f4ac + uVar44 * 4 + local_b0 * 0x20) >> 0xe) &
                       0x3fffc;
              uVar43 = *(uint *)(&DAT_03a9f4ac + uVar47 * 4 + local_b0 * 0x20);
              fVar60 = fVar60 + fVar57 + 1.1920929e-07;
              fVar62 = fVar62 + fVar52 + 1.1920929e-07;
              fVar52 = *(float *)((long)*pauVar27 + uVar44);
              fVar60 = fVar60 * fVar60;
              fVar62 = fVar62 * fVar62;
              fVar57 = (1.0 - param_1) / (fVar62 + fVar60);
            }
            fVar62 = fVar57 * fVar62;
            *(float *)((long)*pauVar27 + uVar44) = fVar52 + fVar60 * fVar57;
            pfVar23 = (float *)((long)*pauVar27 + ((ulong)(uVar43 >> 0xe) & 0x3fffc));
          }
          *pfVar23 = *pfVar23 + fVar62;
        } while (pfVar11 < pfVar19);
        iVar12 = (int)(param_8 & 0xff);
        if (((iVar12 != 0) &&
            (*(float *)*pauVar27 = *(float *)*pauVar27 * fVar64 * fVar49, iVar12 != 1)) &&
           (*(float *)((long)*pauVar27 + 4) = *(float *)((long)*pauVar27 + 4) * fVar64 * fVar49,
           iVar12 != 2)) {
          pfVar11 = (float *)(local_a8 + lVar34 + 2);
          lVar34 = (param_8 & 0xff) - 2;
          do {
            *pfVar11 = *pfVar11 * fVar64 * fVar49;
            lVar34 = lVar34 + -1;
            pfVar11 = pfVar11 + 1;
          } while (lVar34 != 0);
        }
        pauVar32 = pauVar27 + (uVar38 >> 2);
        if (pauVar27 < pauVar32) {
          auVar55 = NEON_frsqrte(*pauVar27,4);
          auVar55 = NEON_frecpe(auVar55,4);
          *(long *)((long)*pauVar27 + 8) = auVar55._8_8_;
          *(long *)*pauVar27 = auVar55._0_8_;
          if (pauVar27 + 1 < pauVar32) {
            pauVar27 = pauVar27 + 1;
            do {
              pauVar17 = pauVar27 + 1;
              auVar55 = NEON_frsqrte(*pauVar27,4);
              auVar55 = NEON_frecpe(auVar55,4);
              *(long *)((long)*pauVar27 + 8) = auVar55._8_8_;
              *(long *)*pauVar27 = auVar55._0_8_;
              pauVar27 = pauVar17;
            } while (pauVar17 < pauVar32);
          }
        }
        iVar13 = iVar13 + 1;
      }
      uVar16 = uVar16 + 1;
      if (local_a0 <= uVar16) {
        return;
      }
    } while( true );
  }
  local_c8 = CONCAT44(local_c8._4_4_,fVar64);
  local_c0 = param_9;
  if (param_2 <= 0.0) {
    pfVar41 = (float *)((long)afStack_140 - (ulong)(uVar43 << 4));
    local_d0 = (undefined1 *)pfVar41;
    FUN_02efcd10(uVar16,param_4,param_10,param_9);
    uVar46 = 1;
  }
  else {
    pMVar2 = (MutexType *)(param_11 + 0xb8);
    local_d0 = (undefined1 *)param_4;
    nn::os::LockMutex(pMVar2);
    puVar15 = *(uint **)(param_11 + 0xa8);
    uVar46 = *(uint *)(param_11 + 0xb0);
    if ((uVar46 == 0) || (*puVar15 == (uVar43 | 0x80000000))) {
      puVar9 = puVar15;
    }
    else {
      lVar40 = (ulong)uVar46 * 0x18;
      puVar30 = puVar15;
      do {
        lVar40 = lVar40 + -0x18;
        if (lVar40 == 0) goto LAB_02efc448;
        puVar9 = puVar30 + 6;
        puVar1 = puVar30 + 6;
        puVar30 = puVar9;
      } while (*puVar1 != (uVar43 | 0x80000000));
    }
    if (puVar9 == puVar15 + (ulong)uVar46 * 6) {
LAB_02efc448:
      puVar9 = (uint *)FUN_02ec89d0(param_11);
      nn::os::UnlockMutex(pMVar2);
      if (puVar9 == (uint *)0x0) {
        return;
      }
    }
    else {
      puVar9 = puVar9 + 2;
      nn::os::UnlockMutex(pMVar2);
    }
    uVar46 = puVar9[2];
    uVar44 = (ulong)uVar46;
    pauVar27 = (undefined1 (*) [16])(afStack_140 + uVar44 * -4);
    fVar64 = param_3 * -0.01 + 1.0;
    if (fVar64 == 1.0) {
      memcpy(pauVar27,*(void **)puVar9,uVar44 << 4);
    }
    else if (fVar64 <= 0.5) {
      FUN_02efce28(*(undefined8 *)puVar9,uVar44,pauVar27);
    }
    else {
      FUN_02efcf58();
    }
    uVar10 = (ulong)(uVar46 * uVar43);
    pauVar17 = pauVar27 + -uVar10;
    uVar47 = 0;
    pauVar32 = pauVar17;
    do {
      auVar55 = *pauVar27;
      auVar67 = *(undefined1 (*) [16])(&local_130 + uVar44 * -2);
      pfVar41 = (float *)(&DAT_03a9ff5c + uVar47 * 0xc + (ulong)(uVar43 - 1) * 0x54);
      auVar51 = *(undefined1 (*) [16])(&local_120 + uVar44 * -2);
      auVar6 = *(undefined1 (*) [16])(&local_110 + uVar44 * -2);
      auVar48 = NEON_ext(auVar55,auVar55,8,1);
      auVar50 = NEON_ext(auVar67,auVar67,8,1);
      auVar56 = NEON_ext(auVar51,auVar51,8,1);
      auVar59 = NEON_ext(auVar6,auVar6,8,1);
      fVar64 = auVar48._0_4_;
      fVar57 = auVar50._0_4_;
      fVar49 = auVar56._0_4_;
      fVar52 = auVar59._0_4_;
      fVar66 = *pfVar41;
      fVar65 = pfVar41[1];
      fVar60 = pfVar41[2];
      fVar62 = -fVar66;
      auVar63._0_4_ = auVar55._4_4_ + fVar64 * fVar65;
      auVar63._4_4_ = auVar67._4_4_ + fVar57 * fVar65;
      auVar63._8_4_ = auVar51._4_4_ + fVar49 * fVar65;
      auVar63._12_4_ = auVar6._4_4_ + fVar52 * fVar65;
      fVar70 = auVar55._0_4_ * fVar60 + fVar64 * fVar66;
      register0x00005084 = auVar67._0_4_ * fVar60 + fVar57 * fVar66;
      register0x00005088 = auVar51._0_4_ * fVar60 + fVar49 * fVar66;
      register0x0000508c = auVar6._0_4_ * fVar60 + fVar52 * fVar66;
      fVar64 = auVar55._0_4_ * fVar62 + fVar64 * fVar60;
      fVar57 = auVar67._0_4_ * fVar62 + fVar57 * fVar60;
      fVar49 = auVar51._0_4_ * fVar62 + fVar49 * fVar60;
      fVar52 = auVar6._0_4_ * fVar62 + fVar52 * fVar60;
      auVar55 = NEON_ext(auVar63,auVar63,8,1);
      auVar67 = NEON_ext(_fVar70,_fVar70,8,1);
      uVar54 = CONCAT44(auVar63._0_4_,fVar70);
      *(ulong *)(*pauVar32 + 8) = CONCAT44(fVar64,fVar64);
      *(undefined8 *)*pauVar32 = uVar54;
      *(ulong *)(pauVar32[1] + 8) = CONCAT44(fVar57,fVar57);
      uVar54 = CONCAT44(auVar63._4_4_,register0x00005084);
      *(undefined8 *)pauVar32[1] = uVar54;
      *(ulong *)(pauVar32[2] + 8) = CONCAT44(fVar49,fVar49);
      *(ulong *)pauVar32[2] = CONCAT44(auVar55._0_4_,auVar67._0_4_);
      *(ulong *)(pauVar32[3] + 8) = CONCAT44(fVar52,fVar52);
      *(ulong *)pauVar32[3] = CONCAT44(auVar55._4_4_,auVar67._4_4_);
      pauVar32 = pauVar32 + 4;
      if (0x10 < uVar46 << 2) {
        pauVar33 = (undefined1 (*) [16])(&local_100 + uVar44 * -2);
        do {
          auVar55 = *pauVar33;
          auVar67 = pauVar33[1];
          auVar48 = NEON_ext(auVar55,auVar55,8,1);
          auVar51 = pauVar33[2];
          auVar6 = pauVar33[3];
          auVar50 = NEON_ext(auVar67,auVar67,8,1);
          auVar56 = NEON_ext(auVar51,auVar51,8,1);
          auVar59 = NEON_ext(auVar6,auVar6,8,1);
          pauVar33 = pauVar33 + 4;
          fVar64 = auVar48._0_4_;
          fVar57 = auVar50._0_4_;
          fVar49 = auVar56._0_4_;
          fVar52 = auVar59._0_4_;
          auVar68._0_4_ = auVar55._4_4_ + fVar65 * fVar64;
          auVar68._4_4_ = auVar67._4_4_ + fVar65 * fVar57;
          auVar68._8_4_ = auVar51._4_4_ + fVar65 * fVar49;
          auVar68._12_4_ = auVar6._4_4_ + fVar65 * fVar52;
          auVar61._0_4_ = auVar55._0_4_ * fVar60 + fVar66 * fVar64;
          auVar61._4_4_ = auVar67._0_4_ * fVar60 + fVar66 * fVar57;
          auVar61._8_4_ = auVar51._0_4_ * fVar60 + fVar66 * fVar49;
          auVar61._12_4_ = auVar6._0_4_ * fVar60 + fVar66 * fVar52;
          fVar64 = auVar55._0_4_ * fVar62 + fVar60 * fVar64;
          fVar57 = auVar67._0_4_ * fVar62 + fVar60 * fVar57;
          fVar49 = auVar51._0_4_ * fVar62 + fVar60 * fVar49;
          fVar52 = auVar6._0_4_ * fVar62 + fVar60 * fVar52;
          uVar54 = CONCAT44(auVar68._0_4_,auVar61._0_4_);
          auVar55 = NEON_ext(auVar61,auVar61,8,1);
          auVar67 = NEON_ext(auVar68,auVar68,8,1);
          *(ulong *)(*pauVar32 + 8) = CONCAT44(fVar64,fVar64);
          *(undefined8 *)*pauVar32 = uVar54;
          *(ulong *)(pauVar32[1] + 8) = CONCAT44(fVar57,fVar57);
          uVar54 = CONCAT44(auVar68._4_4_,auVar61._4_4_);
          *(undefined8 *)pauVar32[1] = uVar54;
          *(ulong *)(pauVar32[2] + 8) = CONCAT44(fVar49,fVar49);
          *(ulong *)pauVar32[2] = CONCAT44(auVar67._0_4_,auVar55._0_4_);
          *(ulong *)(pauVar32[3] + 8) = CONCAT44(fVar52,fVar52);
          *(ulong *)pauVar32[3] = CONCAT44(auVar67._4_4_,auVar55._4_4_);
          pauVar32 = pauVar32 + 4;
        } while (pauVar33 < (undefined1 (*) [16])(*pauVar27 + (ulong)(uVar46 << 2) * 4));
      }
      puVar24 = local_d0;
      uVar47 = uVar47 + 1;
    } while (uVar47 != uVar16);
    pfVar41 = (float *)((long)pauVar17 - (uVar10 * 0x10 + 0xf & 0x1ffffffff0));
    local_d0 = (undefined1 *)pfVar41;
    FUN_02efc7a0(pauVar17,uVar10,puVar24,param_10);
  }
  uVar43 = uVar36 >> 8 & 0xf;
  if (uVar43 == 2) {
    local_d8 = (undefined *)(param_8 & 0xff);
    cVar3 = (&DAT_03a9f3e4)[(long)local_d8];
    lVar40 = (long)pfVar41 - (ulong)(((uint)((long)local_d8 + 3U) & 0x1fc) << 2);
    uVar38 = (ulong)((int)local_a0 - 1);
    local_c0 = CONCAT44(local_c0._4_4_,(uint)local_b8) & 0xffffffff0000ffff;
    local_e0 = (ulong)(uVar46 << 2);
    if ((int)local_d8 == 0) {
      uVar16 = 0;
      iVar13 = 0;
      do {
        if ((*(uint *)(&DAT_03a9f40c + uVar16 * 4 + uVar38 * 0x20) & (uint)local_c0) != 0) {
          puVar24 = local_d0 + (ulong)(uint)(iVar13 * (int)local_e0) * 4;
          puVar39 = puVar24 + local_e0 * 4;
          do {
            FUN_02ef9108(cVar3 + 1,1,lVar40);
            puVar24 = puVar24 + 0x10;
          } while (puVar24 < puVar39);
          iVar13 = iVar13 + 1;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < local_a0);
      return;
    }
    fVar64 = 1.0 / (float)uVar46;
    local_f0 = (float *)((long)local_d8 + 3U & 0x1fc);
    local_f8 = local_a8 + 2;
    param_8 = param_8 & 3;
    local_e8 = &DAT_03a9f40c + uVar38 * 0x20;
    uVar38 = (long)local_d8 - 1;
    lVar31 = (long)local_d8 - param_8;
    local_100 = (long)local_d8 - 2;
    local_b0 = 0;
    local_b8 = (float *)((ulong)local_b8 & 0xffffffff00000000);
    do {
      if ((*(uint *)(local_e8 + local_b0 * 4) & (uint)local_c0) != 0) {
        lVar34 = (ulong)(*(uint *)(local_e8 + local_b0 * 4) >> 0x10) * (long)local_f0;
        pfVar41 = (float *)(local_a8 + lVar34);
        puVar24 = local_d0 + (ulong)((uint)local_b8 * (int)local_e0) * 4;
        puVar39 = puVar24 + local_e0 * 4;
        pfVar42 = (float *)(local_f8 + lVar34);
        do {
          FUN_02ef9108(cVar3 + 1,1,lVar40);
          if (uVar38 < 3) {
            lVar34 = 0;
          }
          else {
            lVar34 = 0;
            pfVar19 = pfVar42;
            pfVar11 = (float *)(lVar40 + 8);
            do {
              lVar34 = lVar34 + 4;
              pfVar19[-2] = pfVar19[-2] + pfVar11[-2];
              pfVar19[-1] = pfVar19[-1] + pfVar11[-1];
              *pfVar19 = *pfVar19 + *pfVar11;
              pfVar23 = pfVar11 + 1;
              pfVar11 = pfVar11 + 4;
              pfVar19[1] = pfVar19[1] + *pfVar23;
              pfVar19 = pfVar19 + 4;
            } while (lVar31 != lVar34);
          }
          if (param_8 != 0) {
            pfVar11 = pfVar41 + lVar34;
            pfVar19 = (float *)(lVar40 + lVar34 * 4);
            uVar16 = param_8;
            do {
              uVar16 = uVar16 - 1;
              *pfVar11 = *pfVar11 + *pfVar19;
              pfVar11 = pfVar11 + 1;
              pfVar19 = pfVar19 + 1;
            } while (uVar16 != 0);
          }
          puVar24 = puVar24 + 0x10;
        } while (puVar24 < puVar39);
        *pfVar41 = *pfVar41 * (float)local_c8 * fVar64;
        if (((int)local_d8 != 1) &&
           (pfVar41[1] = pfVar41[1] * (float)local_c8 * fVar64, (int)local_d8 != 2)) {
          uVar16 = local_100;
          do {
            uVar16 = uVar16 - 1;
            *pfVar42 = *pfVar42 * (float)local_c8 * fVar64;
            pfVar42 = pfVar42 + 1;
          } while (uVar16 != 0);
        }
        local_b8 = (float *)CONCAT44(local_b8._4_4_,(uint)local_b8 + 1);
      }
      local_b0 = local_b0 + 1;
    } while (local_b0 < local_a0);
    return;
  }
  if (uVar43 != 1) {
    return;
  }
  uVar43 = uVar36 >> 0xc & 0xffffb;
  uVar43 = uVar36 & 0xf00 | uVar43 << 0xc | uVar36 - ((uVar36 >> 0xc) - uVar43 >> 2) & 0xff;
  if ((uVar36 >> 0xe & 1) == 0) {
    nn::os::LockMutex((MutexType *)(param_11 + 0x88));
    puVar15 = *(uint **)(param_11 + 0x78);
    uVar37 = *(uint *)(param_11 + 0x80);
    if ((uVar37 == 0) || (*puVar15 == uVar43)) {
      puVar9 = puVar15;
    }
    else {
      lVar40 = (ulong)uVar37 * 0x10;
      puVar30 = puVar15;
      do {
        lVar40 = lVar40 + -0x10;
        if (lVar40 == 0) goto LAB_02efc4d4;
        puVar9 = puVar30 + 4;
        puVar1 = puVar30 + 4;
        puVar30 = puVar9;
      } while (*puVar1 != uVar43);
    }
    if (puVar9 != puVar15 + (ulong)uVar37 * 4) goto LAB_02efa6d4;
LAB_02efc4d4:
    uVar38 = (ulong)uVar43;
LAB_02efc4dc:
    local_c0 = FUN_02ec87f4(param_11,uVar38);
LAB_02efa6e0:
    lVar40 = 0;
    iVar13 = (int)local_b0;
  }
  else {
    pMVar2 = (MutexType *)(param_11 + 0x88);
    if (param_1 == 1.0) {
      nn::os::LockMutex(pMVar2);
      puVar15 = *(uint **)(param_11 + 0x78);
      uVar43 = *(uint *)(param_11 + 0x80);
      if ((uVar43 == 0) || (*puVar15 == uVar36)) {
        puVar9 = puVar15;
      }
      else {
        lVar40 = (ulong)uVar43 * 0x10;
        puVar30 = puVar15;
        do {
          lVar40 = lVar40 + -0x10;
          if (lVar40 == 0) goto LAB_02efc4dc;
          puVar9 = puVar30 + 4;
          puVar1 = puVar30 + 4;
          puVar30 = puVar9;
        } while (*puVar1 != uVar36);
      }
      if (puVar9 == puVar15 + (ulong)uVar43 * 4) goto LAB_02efc4dc;
LAB_02efa6d4:
      local_c0 = *(ulong *)(puVar9 + 2);
      goto LAB_02efa6e0;
    }
    nn::os::LockMutex(pMVar2);
    puVar15 = *(uint **)(param_11 + 0x78);
    uVar37 = *(uint *)(param_11 + 0x80);
    if ((uVar37 == 0) || (*puVar15 == uVar43)) {
      puVar9 = puVar15;
    }
    else {
      lVar40 = (ulong)uVar37 * 0x10;
      puVar30 = puVar15;
      do {
        lVar40 = lVar40 + -0x10;
        if (lVar40 == 0) goto LAB_02efc584;
        puVar9 = puVar30 + 4;
        puVar1 = puVar30 + 4;
        puVar30 = puVar9;
      } while (*puVar1 != uVar43);
    }
    if (puVar9 == puVar15 + (ulong)uVar37 * 4) {
LAB_02efc584:
      local_c0 = FUN_02ec87f4(param_11,(ulong)uVar43);
    }
    else {
      local_c0 = *(ulong *)(puVar9 + 2);
    }
    nn::os::UnlockMutex(pMVar2);
    if (param_1 == 0.0) {
      lVar40 = 0;
      goto joined_r0x02efbba8;
    }
    nn::os::LockMutex(pMVar2);
    puVar15 = *(uint **)(param_11 + 0x78);
    uVar43 = *(uint *)(param_11 + 0x80);
    if ((uVar43 == 0) || (*puVar15 == uVar36)) {
      puVar9 = puVar15;
    }
    else {
      lVar40 = (ulong)uVar43 * 0x10;
      puVar30 = puVar15;
      do {
        lVar40 = lVar40 + -0x10;
        if (lVar40 == 0) goto LAB_02efc5c4;
        puVar9 = puVar30 + 4;
        puVar1 = puVar30 + 4;
        puVar30 = puVar9;
      } while (*puVar1 != uVar36);
    }
    if (puVar9 == puVar15 + (ulong)uVar43 * 4) {
LAB_02efc5c4:
      lVar40 = FUN_02ec87f4(param_11,uVar38);
    }
    else {
      lVar40 = *(long *)(puVar9 + 2);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_11 + 0x88));
joined_r0x02efbba8:
  if (local_c0 != 0) {
    iVar14 = (int)local_b0;
    uVar43 = iVar14 + 3U >> 2;
    local_120 = (ulong)uVar43;
    iVar12 = uVar43 * 0x10;
    local_e8 = (undefined *)(ulong)(uVar46 << 2);
    if (lVar40 == 0) {
      local_d8 = (undefined *)(CONCAT44(local_d8._4_4_,(uint)local_b8) & 0xffffffff0000ffff);
      local_f8 = (undefined4 *)((ulong)((uVar35 & 0xff) + 3) & 0x1fc);
      uVar38 = (ulong)((int)local_a0 - 1);
      local_100 = (ulong)(uint)(iVar14 - iVar13);
      if (iVar14 == 0) {
        local_b8 = (float *)(&DAT_03a9f40c + uVar38 * 0x20);
        uVar38 = 0;
        iVar12 = 0;
        local_120 = 0;
        do {
          if ((*(uint *)((long)local_b8 + uVar38 * 4) & (uint)local_d8) != 0) {
            pfVar42 = (float *)(local_a8 +
                               (ulong)(*(uint *)((long)local_b8 + uVar38 * 4) >> 0x10) *
                               (long)local_f8);
            puVar24 = local_d0 + (ulong)(uint)(iVar12 * (int)local_e8) * 4;
            puVar39 = puVar24 + (long)local_e8 * 4;
            pfVar11 = pfVar42 + local_b0;
            lVar40 = local_100 + 2;
            do {
              FUN_02f12cd8(local_c0,iVar13,pfVar41);
              *pfVar42 = *pfVar42 + *pfVar41;
              pfVar42[1] = pfVar42[1] + pfVar41[1];
              pfVar19 = pfVar41 + 2;
              pfVar23 = pfVar42 + lVar40;
              do {
                pfVar18 = pfVar23 + 1;
                *pfVar23 = *pfVar23 + *pfVar19;
                pfVar19 = pfVar19 + 1;
                pfVar23 = pfVar18;
              } while (pfVar18 < pfVar11);
              puVar24 = puVar24 + 0x10;
            } while (puVar24 < puVar39);
            iVar12 = iVar12 + 1;
          }
          uVar38 = uVar38 + 1;
        } while (uVar38 < local_a0);
      }
      else {
        local_118 = local_b0 - 1;
        local_b8 = (float *)((ulong)local_b8 & 0xffffffff00000000);
        local_108 = local_b0 & 7;
        lVar40 = local_b0 - local_108;
        local_128 = local_a8 + 4;
        local_110 = &DAT_03a9f40c + uVar38 * 0x20;
        uVar38 = 0;
        local_130 = local_b0 - 2;
        do {
          if ((*(uint *)(local_110 + uVar38 * 4) & (uint)local_d8) != 0) {
            local_e0 = (ulong)(*(uint *)(local_110 + uVar38 * 4) >> 0x10) * (long)local_f8;
            pauVar27 = (undefined1 (*) [16])(local_a8 + local_e0);
            puVar24 = local_d0 + (ulong)((uint)local_b8 * (int)local_e8) * 4;
            pfVar42 = (float *)((long)*pauVar27 + local_b0 * 4);
            local_f0 = (float *)((long)*pauVar27 + 8);
            puVar39 = puVar24 + (long)local_e8 * 4;
            pfVar11 = local_f0 + local_100;
            do {
              pfVar41 = (float *)((long)pfVar41 - ((ulong)(iVar12 + 0xf) & 0xff0));
              FUN_02f12cd8(local_c0,iVar13,pfVar41);
              fVar64 = *(float *)((long)*pauVar27 + 4);
              *(float *)*pauVar27 = *(float *)*pauVar27 + *pfVar41;
              *(float *)((long)*pauVar27 + 4) = fVar64 + pfVar41[1];
              pfVar19 = pfVar41 + 2;
              pfVar23 = pfVar11;
              do {
                pfVar18 = pfVar23 + 1;
                *pfVar23 = *pfVar23 + *pfVar19;
                pfVar19 = pfVar19 + 1;
                pfVar23 = pfVar18;
              } while (pfVar18 < pfVar42);
              puVar24 = puVar24 + 0x10;
            } while (puVar24 < puVar39);
            if (local_118 < 7) {
              lVar31 = 0;
              fVar64 = 0.0;
            }
            else {
              fVar64 = 0.0;
              pfVar42 = (float *)(local_128 + local_e0);
              lVar31 = 0;
              do {
                pfVar11 = pfVar42 + -4;
                pfVar18 = pfVar42 + -3;
                pfVar19 = pfVar42 + -2;
                pfVar21 = pfVar42 + -1;
                fVar49 = *pfVar42;
                pfVar22 = pfVar42 + 1;
                pfVar23 = pfVar42 + 2;
                pfVar4 = pfVar42 + 3;
                pfVar42 = pfVar42 + 8;
                fVar64 = *pfVar11 + fVar64 + *pfVar18 + *pfVar19 + *pfVar21 + fVar49 + *pfVar22 +
                         *pfVar23 + *pfVar4;
                lVar31 = lVar31 + 8;
              } while (lVar40 != lVar31);
            }
            if (local_108 != 0) {
              pfVar42 = (float *)(local_a8 + lVar31 + local_e0);
              uVar16 = local_108;
              do {
                fVar64 = *pfVar42 + fVar64;
                uVar16 = uVar16 - 1;
                pfVar42 = pfVar42 + 1;
              } while (uVar16 != 0);
            }
            if (0.0 < fVar64) {
              *(float *)*pauVar27 = (*(float *)*pauVar27 * (float)local_c8) / fVar64;
              if (((int)local_b0 != 1) &&
                 (*(float *)((long)*pauVar27 + 4) =
                       (*(float *)((long)*pauVar27 + 4) * (float)local_c8) / fVar64,
                 (int)local_b0 != 2)) {
                lVar31 = local_130;
                do {
                  lVar31 = lVar31 + -1;
                  *local_f0 = *local_f0 * (float)local_c8 * (1.0 / fVar64);
                  local_f0 = local_f0 + 1;
                } while (lVar31 != 0);
              }
              pauVar32 = pauVar27 + local_120;
              if (pauVar27 < pauVar32) {
                auVar55 = NEON_frsqrte(*pauVar27,4);
                auVar55 = NEON_frecpe(auVar55,4);
                *(long *)((long)*pauVar27 + 8) = auVar55._8_8_;
                *(long *)*pauVar27 = auVar55._0_8_;
                if (pauVar27 + 1 < pauVar32) {
                  pauVar27 = pauVar27 + 1;
                  do {
                    pauVar17 = pauVar27 + 1;
                    auVar55 = NEON_frsqrte(*pauVar27,4);
                    auVar55 = NEON_frecpe(auVar55,4);
                    *(long *)((long)*pauVar27 + 8) = auVar55._8_8_;
                    *(long *)*pauVar27 = auVar55._0_8_;
                    pauVar27 = pauVar17;
                  } while (pauVar17 < pauVar32);
                }
              }
            }
            local_b8 = (float *)CONCAT44(local_b8._4_4_,(uint)local_b8 + 1);
          }
          uVar38 = uVar38 + 1;
        } while (uVar38 < local_a0);
      }
    }
    else {
      uVar16 = (ulong)(iVar13 * 4 + 0xcU & 0xfffffff0);
      local_f0 = (float *)(CONCAT44(local_f0._4_4_,(uint)local_b8) & 0xffffffff0000ffff);
      fVar64 = 1.0 - param_1;
      uVar38 = (ulong)((int)local_a0 - 1);
      local_100 = (ulong)((uVar35 & 0xff) + 3) & 0x1fc;
      if (iVar14 == 0) {
        local_d8 = &DAT_03a9f40c + uVar38 * 0x20;
        local_b8 = (float *)0x0;
        local_c8 = local_c8 & 0xffffffff00000000;
        local_120 = 0;
        do {
          if ((*(uint *)(local_d8 + (long)local_b8 * 4) & (uint)local_f0) != 0) {
            pfVar11 = (float *)(local_a8 +
                               (*(uint *)(local_d8 + (long)local_b8 * 4) >> 0x10) * local_100);
            pfVar42 = (float *)(local_d0 + (ulong)(uint)((int)(float)local_c8 * (int)local_e8) * 4);
            pfVar19 = pfVar42 + (long)local_e8;
            pfVar23 = pfVar11 + local_b0;
            do {
              fVar52 = pfVar42[2];
              fVar49 = *pfVar42;
              fVar57 = pfVar42[1];
              pfVar41 = (float *)((long)pfVar41 - (uVar16 + 0xf & 0x1fffffff0));
              FUN_02f12cd8(fVar52,-fVar49,fVar57,local_c0,iVar13,pfVar41);
              *pfVar11 = *pfVar11 + fVar64 * *pfVar41;
              pfVar11[1] = pfVar11[1] + fVar64 * pfVar41[1];
              pfVar18 = pfVar41 + 2;
              pfVar21 = pfVar11 + 3;
              do {
                pfVar22 = pfVar21 + 1;
                *pfVar21 = *pfVar21 + fVar64 * *pfVar18;
                pfVar18 = pfVar18 + 1;
                pfVar21 = pfVar22;
              } while (pfVar22 < pfVar23);
              FUN_02f12cd8(fVar52,-fVar49,fVar57,lVar40,0,pfVar41);
              pfVar18 = pfVar11;
              pfVar21 = pfVar41;
              do {
                pfVar22 = pfVar18 + 1;
                *pfVar18 = *pfVar18 + param_1 * *pfVar21;
                pfVar18 = pfVar22;
                pfVar21 = pfVar21 + 1;
              } while (pfVar22 < pfVar23);
              pfVar42 = pfVar42 + 4;
            } while (pfVar42 < pfVar19);
            local_c8 = CONCAT44(local_c8._4_4_,(int)(float)local_c8 + 1);
          }
          local_b8 = (float *)((long)local_b8 + 1);
        } while (local_b8 < local_a0);
      }
      else {
        local_118 = local_b0 - 1;
        local_d8 = (undefined *)0x0;
        local_e0 = (ulong)local_e0._4_4_ << 0x20;
        local_108 = local_b0 & 7;
        local_b8 = (float *)(local_b0 - local_108);
        local_130 = local_b0 - 2;
        local_128 = local_a8 + 4;
        local_110 = &DAT_03a9f40c + uVar38 * 0x20;
        local_138 = local_a8 + 2;
        do {
          if ((*(uint *)(local_110 + (long)local_d8 * 4) & (uint)local_f0) != 0) {
            local_f8 = (undefined4 *)
                       ((*(uint *)(local_110 + (long)local_d8 * 4) >> 0x10) * local_100);
            pauVar27 = (undefined1 (*) [16])(local_a8 + (long)local_f8);
            pfVar42 = (float *)(local_d0 + (ulong)(uint)((int)local_e0 * (int)local_e8) * 4);
            pfVar11 = pfVar42 + (long)local_e8;
            pauVar32 = (undefined1 (*) [16])((long)*pauVar27 + local_b0 * 4);
            do {
              fVar60 = pfVar42[2];
              fVar49 = *pfVar42;
              fVar52 = pfVar42[1];
              pfVar41 = (float *)((long)pfVar41 - (uVar16 + 0xf & 0x1fffffff0));
              FUN_02f12cd8(fVar60,-fVar49,fVar52,local_c0,iVar13,pfVar41);
              fVar57 = *(float *)((long)*pauVar27 + 4);
              *(float *)*pauVar27 = *(float *)*pauVar27 + fVar64 * *pfVar41;
              *(float *)((long)*pauVar27 + 4) = fVar57 + fVar64 * pfVar41[1];
              pfVar19 = pfVar41 + 2;
              pauVar17 = (undefined1 (*) [16])((long)*pauVar27 + 0xc);
              do {
                puVar20 = (undefined4 *)*pauVar17;
                *(float *)*pauVar17 = *(float *)*pauVar17 + fVar64 * *pfVar19;
                pfVar19 = pfVar19 + 1;
                pauVar17 = (undefined1 (*) [16])(puVar20 + 1);
              } while ((undefined1 (*) [16])(puVar20 + 1) < pauVar32);
              pfVar41 = (float *)((long)pfVar41 - ((ulong)(iVar12 + 0xf) & 0xff0));
              FUN_02f12cd8(fVar60,-fVar49,fVar52,lVar40,local_b0,pfVar41);
              pauVar17 = pauVar27;
              pfVar19 = pfVar41;
              do {
                puVar20 = (undefined4 *)*pauVar17;
                *(float *)*pauVar17 = *(float *)*pauVar17 + param_1 * *pfVar19;
                pauVar17 = (undefined1 (*) [16])(puVar20 + 1);
                pfVar19 = pfVar19 + 1;
              } while ((undefined1 (*) [16])(puVar20 + 1) < pauVar32);
              pfVar42 = pfVar42 + 4;
            } while (pfVar42 < pfVar11);
            if (local_118 < 7) {
              lVar31 = 0;
              fVar49 = 0.0;
            }
            else {
              fVar49 = 0.0;
              pfVar42 = (float *)(local_128 + (long)local_f8);
              lVar31 = 0;
              do {
                pfVar11 = pfVar42 + -4;
                pfVar18 = pfVar42 + -3;
                pfVar19 = pfVar42 + -2;
                pfVar21 = pfVar42 + -1;
                fVar57 = *pfVar42;
                pfVar22 = pfVar42 + 1;
                pfVar23 = pfVar42 + 2;
                pfVar4 = pfVar42 + 3;
                pfVar42 = pfVar42 + 8;
                fVar49 = *pfVar11 + fVar49 + *pfVar18 + *pfVar19 + *pfVar21 + fVar57 + *pfVar22 +
                         *pfVar23 + *pfVar4;
                lVar31 = lVar31 + 8;
              } while (local_b8 != (float *)lVar31);
            }
            if (local_108 != 0) {
              pfVar42 = (float *)(local_a8 + lVar31 + (long)local_f8);
              uVar38 = local_108;
              do {
                fVar49 = *pfVar42 + fVar49;
                uVar38 = uVar38 - 1;
                pfVar42 = pfVar42 + 1;
              } while (uVar38 != 0);
            }
            if (0.0 < fVar49) {
              *(float *)*pauVar27 = (*(float *)*pauVar27 * (float)local_c8) / fVar49;
              if (((int)local_b0 != 1) &&
                 (*(float *)((long)*pauVar27 + 4) =
                       (*(float *)((long)*pauVar27 + 4) * (float)local_c8) / fVar49,
                 (int)local_b0 != 2)) {
                pfVar42 = (float *)(local_138 + (long)local_f8);
                lVar31 = local_130;
                do {
                  lVar31 = lVar31 + -1;
                  *pfVar42 = *pfVar42 * (float)local_c8 * (1.0 / fVar49);
                  pfVar42 = pfVar42 + 1;
                } while (lVar31 != 0);
              }
              pauVar32 = pauVar27 + local_120;
              if (pauVar27 < pauVar32) {
                auVar55 = NEON_frsqrte(*pauVar27,4);
                auVar55 = NEON_frecpe(auVar55,4);
                *(long *)((long)*pauVar27 + 8) = auVar55._8_8_;
                *(long *)*pauVar27 = auVar55._0_8_;
                if (pauVar27 + 1 < pauVar32) {
                  pauVar27 = pauVar27 + 1;
                  do {
                    pauVar17 = pauVar27 + 1;
                    auVar55 = NEON_frsqrte(*pauVar27,4);
                    auVar55 = NEON_frecpe(auVar55,4);
                    *(long *)((long)*pauVar27 + 8) = auVar55._8_8_;
                    *(long *)*pauVar27 = auVar55._0_8_;
                    pauVar27 = pauVar17;
                  } while (pauVar17 < pauVar32);
                }
              }
            }
            local_e0 = CONCAT44(local_e0._4_4_,(int)local_e0 + 1);
          }
          local_d8 = (undefined *)((long)local_d8 + 1);
        } while (local_d8 < local_a0);
      }
    }
  }
  return;
}


