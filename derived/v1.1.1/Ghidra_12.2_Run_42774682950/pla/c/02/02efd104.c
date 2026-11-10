/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02efd104; name: FUN_02efd104
 */


void FUN_02efd104(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5,ulong param_6,undefined8 *param_7,long param_8)

{
  undefined4 *puVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  ulong uVar7;
  char cVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  bool bVar15;
  bool bVar16;
  undefined *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  ulong uVar21;
  uint *puVar22;
  float *pfVar23;
  uint uVar24;
  uint *puVar25;
  undefined *puVar26;
  undefined1 *puVar27;
  long lVar28;
  undefined1 (*pauVar29) [16];
  ulong uVar30;
  long lVar31;
  int iVar32;
  uint *puVar33;
  undefined4 *puVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  undefined4 *puVar40;
  undefined **ppuVar41;
  uint uVar42;
  ulong uVar43;
  uint uVar44;
  uint uVar45;
  long lVar46;
  undefined8 *puVar47;
  undefined1 *puVar48;
  float *pfVar49;
  undefined *puVar50;
  ulong uVar51;
  float fVar52;
  undefined1 extraout_var [12];
  undefined1 auVar53 [16];
  undefined8 uVar57;
  undefined1 extraout_var_00 [12];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStack_120 [8];
  undefined8 *local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  ulong local_d8;
  undefined1 *local_d0;
  ulong local_c8;
  undefined1 *local_c0;
  ulong local_b8;
  undefined *local_b0;
  uint local_a4;
  ulong local_a0;
  undefined1 *local_98;
  undefined *local_90 [2];
  
  uVar57 = param_1._8_8_;
  auVar56._0_8_ = param_1._0_8_;
  uVar43 = param_6 & 0xff;
  uVar42 = (uint)uVar43;
  uVar45 = uVar42 + 3;
  uVar35 = param_5 & 0xff;
  uVar24 = uVar45 & 0x1fc;
  if (uVar24 * uVar35 != 0) {
    memset(param_7,0,(ulong)(uVar24 * uVar35 * 4));
  }
  uVar37 = param_5 >> 8 & 0xf;
  uVar44 = (uint)param_6;
  uVar9 = uVar44 >> 8 & 0xf;
  if (uVar37 == uVar9) {
    if (uVar37 == 1) {
      auVar56._8_8_ = uVar57;
      FUN_02efe3f0(auVar56,param_2,param_3,param_4,param_5,param_6 & 0xffffffff,param_7);
      return;
    }
    uVar44 = uVar44 & 0xff;
    uVar45 = param_5 & 0xff;
    uVar35 = uVar44 + 3 & 0x1fc;
    if (uVar35 * uVar45 != 0) {
      memset(param_7,0,(ulong)(uVar35 * uVar45 * 4));
    }
    if ((param_5 & 0xf00) == 0x200) {
      if (((param_5 & 0xff) != 0) && ((param_6 & 0xff) != 0)) {
        if (uVar45 < 0xc) {
          uVar42 = *(uint *)(&DAT_03a9ff30 + (ulong)(uVar45 - 1) * 4);
          uVar43 = 0;
          uVar24 = 0;
          do {
            if ((1 << (ulong)((uint)uVar43 & 0x1f) & uVar42) == 0) {
              uVar37 = uVar24 * uVar35;
              uVar24 = uVar24 + 1;
              *(undefined4 *)((long)param_7 + uVar43 * 4 + (ulong)uVar37 * 4) = 0x3f800000;
            }
            uVar43 = uVar43 + 1;
          } while ((uVar43 < uVar44) && (uVar24 < uVar45));
        }
        else {
          uVar43 = 1;
          do {
            *(undefined4 *)param_7 = 0x3f800000;
            if (uVar44 <= uVar43) {
              return;
            }
            param_7 = (undefined8 *)((long)param_7 + ((ulong)(uVar44 * 4 + 0xc) & 0x7f0 | 4));
            bVar16 = uVar43 < uVar45;
            uVar43 = uVar43 + 1;
          } while (bVar16);
        }
      }
    }
    else {
      if (uVar44 <= uVar45) {
        uVar45 = uVar44;
      }
      uVar43 = (ulong)uVar45;
      if (uVar45 != 0) {
        uVar21 = uVar43 & 3;
        uVar24 = uVar44 + 3 >> 2;
        if (uVar43 - 1 < 3) {
          lVar28 = 0;
        }
        else {
          uVar30 = 0;
          lVar28 = 0;
          iVar36 = uVar24 * 0x10;
          uVar44 = uVar24 << 3;
          uVar37 = uVar24 * 0xc;
          uVar42 = uVar35;
          do {
            lVar20 = lVar28 * 4;
            lVar28 = lVar28 + 4;
            *(undefined4 *)((long)param_7 + lVar20 + uVar30 * 4) = 0x3f800000;
            uVar51 = (ulong)uVar42;
            uVar42 = uVar42 + iVar36;
            *(undefined4 *)((long)param_7 + lVar20 + uVar51 * 4 + 4) = 0x3f800000;
            uVar51 = (ulong)uVar44;
            uVar44 = uVar44 + iVar36;
            uVar30 = (ulong)(uint)((int)uVar30 + iVar36);
            *(undefined4 *)((long)param_7 + lVar20 + uVar51 * 4 + 8) = 0x3f800000;
            uVar51 = (ulong)uVar37;
            uVar37 = uVar37 + iVar36;
            *(undefined4 *)((long)param_7 + lVar20 + uVar51 * 4 + 0xc) = 0x3f800000;
          } while (uVar43 - uVar21 != lVar28);
        }
        if ((uVar45 & 3) != 0) {
          uVar45 = uVar24 * (int)lVar28 * 4;
          lVar28 = (long)param_7 + lVar28 * 4;
          do {
            *(undefined4 *)(lVar28 + (ulong)uVar45 * 4) = 0x3f800000;
            uVar21 = uVar21 - 1;
            lVar28 = lVar28 + 4;
            uVar45 = uVar45 + uVar35;
          } while (uVar21 != 0);
        }
      }
    }
    return;
  }
  if ((uVar37 != 2) || (uVar9 == 2)) {
    uVar37 = param_5 & 0xf00;
    if ((uVar37 == 0x100) && (uVar9 == 2)) {
      if ((param_5 - (param_5 >> 0xf & 1) & 0xff) == 1) {
        *(undefined4 *)param_7 = 0x3f800000;
      }
      else {
        uVar42 = param_5 >> 0xc & 0x637;
        uVar35 = uVar42 - (uVar42 >> 1 & 0xf1f1f1f1);
        uVar35 = (uVar35 & 0x33333333) + (uVar35 >> 2 & 0x33333333);
        uVar35 = (uVar35 + (uVar35 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        if (uVar42 != 0) {
          cVar8 = (&DAT_03a9f3e4)[uVar43];
          uVar21 = 0;
          puVar47 = param_7;
          do {
            fVar63 = *(float *)(&DAT_03a9f5c4 + uVar21 * 4 + (ulong)uVar35 * 0x1c);
            auVar53._0_4_ = cosf(fVar63);
            auVar53._4_12_ = extraout_var;
            uVar57 = extraout_var._4_8_;
            auVar55._0_8_ = auVar53._0_8_;
            auVar54._0_4_ = sinf(fVar63);
            auVar54._4_12_ = extraout_var_00;
            auVar55._8_8_ = uVar57;
            FUN_02ef9108(auVar55,auVar54._0_8_,0,cVar8 + 1,1,puVar47);
            uVar21 = uVar21 + 1;
            puVar47 = (undefined8 *)((long)puVar47 + ((ulong)((uVar44 & 0xff) * 4 + 0xc) & 0x7f0));
          } while (uVar21 < uVar35);
        }
        uVar42 = param_5 >> 0xc & 0xff9c0;
        if (uVar42 != 0) {
          uVar42 = uVar42 - (uVar42 >> 1 & 0x55555555);
          uVar42 = (uVar42 & 0x33333333) + (uVar42 >> 2 & 0x33333333);
          uVar30 = (ulong)((uVar42 + (uVar42 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
          lVar28 = uVar30 * 0x18;
          uVar21 = 0;
          uVar45 = uVar35 * (uVar45 >> 2) * 4;
          do {
            FUN_02ef9078(-*(float *)(&DAT_03a9f68c + uVar21 * 4 + lVar28),
                         *(undefined4 *)(&DAT_03a9f71c + uVar21 * 4 + lVar28),
                         (long)param_7 + (ulong)uVar45 * 4,uVar43);
            uVar21 = uVar21 + 1;
            uVar45 = uVar45 + uVar24;
          } while (uVar21 < uVar30);
        }
      }
    }
    else if ((uVar37 == 0 && uVar9 == 1) || (uVar37 == 0x100 && uVar9 == 0)) {
      if (uVar42 <= uVar35) {
        uVar35 = uVar42;
      }
      uVar43 = (ulong)uVar35;
      if (uVar35 != 0) {
        uVar21 = uVar43 & 3;
        uVar45 = uVar45 >> 2;
        if (uVar43 - 1 < 3) {
          lVar28 = 0;
        }
        else {
          uVar30 = 0;
          lVar28 = 0;
          iVar36 = uVar45 * 0x10;
          uVar44 = uVar45 << 3;
          uVar37 = uVar45 * 0xc;
          uVar42 = uVar24;
          do {
            lVar20 = lVar28 * 4;
            lVar28 = lVar28 + 4;
            *(undefined4 *)((long)param_7 + lVar20 + uVar30 * 4) = 0x3f800000;
            uVar51 = (ulong)uVar42;
            uVar42 = uVar42 + iVar36;
            *(undefined4 *)((long)param_7 + lVar20 + uVar51 * 4 + 4) = 0x3f800000;
            uVar51 = (ulong)uVar44;
            uVar44 = uVar44 + iVar36;
            uVar30 = (ulong)(uint)((int)uVar30 + iVar36);
            *(undefined4 *)((long)param_7 + lVar20 + uVar51 * 4 + 8) = 0x3f800000;
            uVar51 = (ulong)uVar37;
            uVar37 = uVar37 + iVar36;
            *(undefined4 *)((long)param_7 + lVar20 + uVar51 * 4 + 0xc) = 0x3f800000;
          } while (uVar43 - uVar21 != lVar28);
        }
        if ((uVar35 & 3) != 0) {
          uVar45 = uVar45 * (int)lVar28 * 4;
          lVar28 = (long)param_7 + lVar28 * 4;
          do {
            *(undefined4 *)(lVar28 + (ulong)uVar45 * 4) = 0x3f800000;
            uVar21 = uVar21 - 1;
            lVar28 = lVar28 + 4;
            uVar45 = uVar45 + uVar24;
          } while (uVar21 != 0);
        }
      }
    }
    return;
  }
  uVar43 = (ulong)param_5;
  param_6 = param_6 & 0xffffffff;
  uVar45 = (uint)(param_6 >> 0xc);
  uVar42 = uVar45 & 0xffff7;
  uVar35 = uVar45 - uVar42 >> 3;
  uVar24 = uVar44 - uVar35;
  uVar21 = (ulong)uVar24;
  uVar30 = uVar21 & 0xff;
  uVar45 = (uint)uVar30;
  if (uVar45 == 1) {
    *(undefined4 *)param_7 = 0x3f800000;
    return;
  }
  if ((uVar42 | 4) == 7) {
    *param_7 = &DAT_3f0000003f000000;
    if ((param_5 & 0xfe) == 0) {
      return;
    }
    *(undefined8 *)((long)param_7 + ((ulong)((uVar44 & 0xff) + 3) & 0x1fc) * 4) = 0xbf0000003f000000
    ;
    return;
  }
  if (param_8 == 0) {
    return;
  }
  if (uVar45 == 0) {
    return;
  }
  puVar47 = (undefined8 *)(param_8 + 0x68);
  puVar25 = (uint *)*puVar47;
  uVar37 = *(uint *)(param_8 + 0x70);
  puVar22 = puVar25;
  if (uVar37 == 0) {
LAB_02efd614:
    if (puVar22 != puVar25 + (ulong)uVar37 * 4) {
      puVar22 = puVar22 + 2;
      param_5 = param_5 & 0xff;
      goto LAB_02efd628;
    }
  }
  else {
    lVar28 = (ulong)uVar37 << 4;
    do {
      if ((*puVar22 == param_5) && (puVar22[1] == uVar44)) goto LAB_02efd614;
      lVar28 = lVar28 + -0x10;
      puVar22 = puVar22 + 4;
    } while (lVar28 != 0);
  }
  puVar48 = (undefined1 *)(uVar43 & 0xff);
  cVar8 = (&DAT_03a9f3e4)[(long)puVar48];
  local_90[0] = (undefined *)0x0;
  local_c0 = puVar48;
  if ((uVar44 & 0xf00) == 0x100) {
    uVar37 = uVar42 << 0xc | 0x100 | uVar45;
    nn::os::LockMutex((MutexType *)(param_8 + 0x88));
    puVar22 = *(uint **)(param_8 + 0x78);
    uVar42 = *(uint *)(param_8 + 0x80);
    if ((uVar42 == 0) || (*puVar22 == uVar37)) {
      puVar25 = puVar22;
    }
    else {
      lVar28 = (ulong)uVar42 * 0x10;
      puVar33 = puVar22;
      do {
        lVar28 = lVar28 + -0x10;
        if (lVar28 == 0) goto LAB_02efe160;
        puVar25 = puVar33 + 4;
        puVar2 = puVar33 + 4;
        puVar33 = puVar25;
      } while (*puVar2 != uVar37);
    }
    if (puVar25 == puVar22 + (ulong)uVar42 * 4) {
LAB_02efe160:
      pfVar49 = (float *)FUN_02ec87f4(param_8,uVar37);
    }
    else {
      pfVar49 = *(float **)(puVar25 + 2);
    }
    nn::os::UnlockMutex((MutexType *)(param_8 + 0x88));
    if (pfVar49 == (float *)0x0) {
      return;
    }
    uVar51 = (ulong)(int)cVar8;
    local_100 = uVar43;
    local_f8 = uVar51;
    local_f0 = (long)cVar8;
    local_e8 = puVar47;
    if ((uVar44 & 0xff9c0f00) == 0x100) {
      uVar42 = *(uint *)(&DAT_03a9f5cc + uVar51 * 4);
      fVar63 = 1.0 / (float)uVar42;
      uVar44 = uVar45 + 3 >> 2;
      uVar24 = uVar45 + 3 & 0x1fc;
      uVar37 = uVar42 * uVar24;
      local_a0 = (ulong)uVar42;
      local_98 = auStack_120 + -(ulong)(uVar44 * uVar42 * 0x10);
      if (uVar37 != 0) {
        memset(auStack_120 + -(ulong)(uVar44 * uVar42 * 0x10),0,(ulong)uVar37 << 2);
      }
      puVar48 = local_98;
      uVar21 = local_a0;
      fVar62 = fVar63 * 6.2831855;
      puVar26 = (&PTR_DAT_042ab758)[local_f8];
      uVar43 = 0;
      do {
        fVar60 = *(float *)(puVar26 + uVar43 * 0x10);
        fVar59 = *(float *)((long)(puVar26 + uVar43 * 0x10) + 8);
        fVar52 = *pfVar49 * fVar60;
        fVar58 = pfVar49[2] * fVar60;
        fVar61 = -(pfVar49[3] * fVar59);
        bVar16 = true;
        bVar15 = false;
        if (-(pfVar49[1] * fVar59) <= fVar52) {
          bVar16 = false;
          bVar15 = true;
          if (!NAN(fVar58) && !NAN(fVar61)) {
            bVar16 = fVar58 < fVar61;
            bVar15 = false;
          }
        }
        if (bVar16 == bVar15) {
          uVar51 = 0;
          fVar60 = pfVar49[1] * fVar59;
          fVar59 = pfVar49[3] * fVar59;
          uVar38 = 1;
        }
        else {
          fVar61 = -(pfVar49[7] * fVar59);
          fVar52 = pfVar49[4] * fVar60;
          fVar58 = pfVar49[6] * fVar60;
          bVar16 = true;
          bVar15 = false;
          if (-(pfVar49[5] * fVar59) <= fVar52) {
            bVar16 = false;
            bVar15 = true;
            if (!NAN(fVar58) && !NAN(fVar61)) {
              bVar16 = fVar58 < fVar61;
              bVar15 = false;
            }
          }
          if (bVar16 == bVar15) {
            fVar60 = pfVar49[5] * fVar59;
            fVar59 = pfVar49[7] * fVar59;
            uVar38 = 2;
            uVar51 = 1;
          }
          else {
            fVar52 = pfVar49[8] * fVar60;
            if (-(pfVar49[9] * fVar59) <= fVar52) {
              fVar58 = pfVar49[10] * fVar60;
              if (-(pfVar49[0xb] * fVar59) <= fVar58) {
                fVar60 = pfVar49[9] * fVar59;
                fVar59 = pfVar49[0xb] * fVar59;
                uVar38 = 3;
                uVar51 = 2;
                goto LAB_02efd81c;
              }
            }
            fVar52 = pfVar49[0xc] * fVar60;
            if (-(pfVar49[0xd] * fVar59) <= fVar52) {
              fVar58 = pfVar49[0xe] * fVar60;
              if (-(pfVar49[0xf] * fVar59) <= fVar58) {
                fVar60 = pfVar49[0xd] * fVar59;
                fVar59 = pfVar49[0xf] * fVar59;
                uVar38 = 4;
                uVar51 = 3;
                goto LAB_02efd81c;
              }
            }
            fVar52 = pfVar49[0x10] * fVar60;
            if (-(pfVar49[0x11] * fVar59) <= fVar52) {
              fVar58 = pfVar49[0x12] * fVar60;
              if (-(pfVar49[0x13] * fVar59) <= fVar58) {
                fVar60 = pfVar49[0x11] * fVar59;
                fVar59 = pfVar49[0x13] * fVar59;
                uVar51 = 4;
                uVar38 = 5;
                goto LAB_02efd81c;
              }
            }
            uVar51 = 4;
            do {
              iVar36 = (int)uVar51;
              uVar51 = (ulong)(iVar36 + 1);
              pfVar23 = pfVar49 + uVar51 * 4;
              fVar61 = -(pfVar23[3] * fVar59);
              fVar52 = *pfVar23 * fVar60;
              fVar58 = pfVar23[2] * fVar60;
              bVar16 = true;
              bVar15 = false;
              if (-(pfVar23[1] * fVar59) <= fVar52) {
                bVar16 = false;
                bVar15 = true;
                if (!NAN(fVar58) && !NAN(fVar61)) {
                  bVar16 = fVar58 < fVar61;
                  bVar15 = false;
                }
              }
            } while (bVar16 != bVar15);
            fVar60 = pfVar23[1] * fVar59;
            fVar59 = pfVar23[3] * fVar59;
            uVar38 = (ulong)(iVar36 + 2);
          }
        }
LAB_02efd81c:
        uVar38 = (ulong)(*(uint *)(&DAT_03a9f40c + uVar38 * 4 + (uVar30 - 1) * 0x20) >> 0xe) &
                 0x3fffc;
        pauVar29 = (undefined1 (*) [16])(puVar48 + (ulong)(uVar24 * (int)uVar43) * 4);
        fVar52 = fVar52 + fVar60 + 1.1920929e-07;
        fVar58 = fVar58 + fVar59 + 1.1920929e-07;
        fVar52 = fVar52 * fVar52;
        fVar58 = fVar58 * fVar58;
        uVar51 = (ulong)(*(uint *)(&DAT_03a9f40c + uVar51 * 4 + (uVar30 - 1) * 0x20) >> 0xe) &
                 0x3fffc;
        fVar59 = fVar63 / (fVar58 + fVar52);
        *(float *)(*pauVar29 + uVar51) = *(float *)(*pauVar29 + uVar51) + fVar52 * fVar59;
        pauVar6 = pauVar29 + uVar44;
        *(float *)(*pauVar29 + uVar38) = *(float *)(*pauVar29 + uVar38) + fVar58 * fVar59;
        if (pauVar29 < pauVar6) {
          auVar56 = NEON_frsqrte(*pauVar29,4);
          auVar56 = NEON_frecpe(auVar56,4);
          *(long *)(*pauVar29 + 8) = auVar56._8_8_;
          *(long *)*pauVar29 = auVar56._0_8_;
          if (pauVar29 + 1 < pauVar6) {
            pauVar29 = pauVar29 + 1;
            do {
              pauVar39 = pauVar29 + 1;
              auVar56 = NEON_frsqrte(*pauVar29,4);
              auVar56 = NEON_frecpe(auVar56,4);
              *(long *)(*pauVar29 + 8) = auVar56._8_8_;
              *(long *)*pauVar29 = auVar56._0_8_;
              pauVar29 = pauVar39;
            } while (pauVar39 < pauVar6);
          }
        }
        uVar43 = uVar43 + 1;
      } while (uVar43 < uVar21);
      lVar28 = FUN_02efe180((int)cVar8);
      ppuVar41 = &PTR_DAT_042ab780;
      puVar47 = local_e8;
    }
    else {
      uVar42 = *(uint *)(&DAT_03a9f3d0 + uVar51 * 4);
      local_a0 = (ulong)uVar42;
      fVar63 = 1.0 / (float)local_a0;
      uVar44 = uVar45 + 3 >> 2;
      local_c8 = (ulong)uVar44;
      local_98 = auStack_120 + -(ulong)(uVar44 * uVar42 * 0x10);
      local_a4 = uVar45 + 3 & 0x1fc;
      local_108 = param_6;
      if (uVar42 * local_a4 != 0) {
        memset(local_98,0,(ulong)(uVar42 * local_a4) << 2);
      }
      fVar62 = fVar63 * 12.566371;
      local_b0 = (&PTR_DAT_042ab730)[uVar51];
      local_b8 = uVar30 - 1;
      local_d0 = local_98 + 0x10;
      local_d8 = uVar30 - 2;
      uVar42 = 0;
      uVar43 = 0;
      local_e0 = local_98 + 8;
      puVar48 = local_98;
      do {
        lVar28 = (ulong)uVar42 * 4;
        pauVar29 = (undefined1 (*) [16])(puVar48 + (ulong)(local_a4 * (int)uVar43) * 4);
        pfVar23 = (float *)(local_b0 + uVar43 * 0x10);
        FUN_02f12cd8(pfVar23[2],-*pfVar23,pfVar23[1],pfVar49,uVar30,pauVar29);
        puVar48 = local_98;
        uVar51 = local_a0;
        if (local_b8 < 7) {
          lVar20 = 0;
          fVar52 = 0.0;
        }
        else {
          fVar52 = 0.0;
          lVar20 = 0;
          pfVar23 = (float *)(local_d0 + lVar28);
          do {
            pfVar3 = pfVar23 + -4;
            pfVar10 = pfVar23 + -3;
            pfVar4 = pfVar23 + -2;
            pfVar11 = pfVar23 + -1;
            fVar58 = *pfVar23;
            pfVar12 = pfVar23 + 1;
            pfVar5 = pfVar23 + 2;
            pfVar13 = pfVar23 + 3;
            pfVar23 = pfVar23 + 8;
            fVar52 = *pfVar3 + fVar52 + *pfVar10 + *pfVar4 + *pfVar11 + fVar58 + *pfVar12 +
                     *pfVar5 + *pfVar13;
            lVar20 = lVar20 + 8;
          } while (uVar30 - (uVar21 & 7) != lVar20);
        }
        if ((uVar24 & 7) != 0) {
          pfVar23 = (float *)(local_98 + lVar28 + lVar20 * 4);
          uVar38 = uVar21 & 7;
          do {
            fVar52 = *pfVar23 + fVar52;
            uVar38 = uVar38 - 1;
            pfVar23 = pfVar23 + 1;
          } while (uVar38 != 0);
        }
        if (0.0 < fVar52) {
          *(float *)*pauVar29 = (*(float *)*pauVar29 * fVar63) / fVar52;
          if ((uVar45 != 1) &&
             (*(float *)(*pauVar29 + 4) = (*(float *)(*pauVar29 + 4) * fVar63) / fVar52, uVar45 != 2
             )) {
            pfVar23 = (float *)(local_e0 + lVar28);
            uVar38 = local_d8;
            do {
              *pfVar23 = *pfVar23 * fVar63 * (1.0 / fVar52);
              uVar38 = uVar38 - 1;
              pfVar23 = pfVar23 + 1;
            } while (uVar38 != 0);
          }
          pauVar6 = pauVar29 + local_c8;
          if (pauVar29 < pauVar6) {
            auVar56 = NEON_frsqrte(*pauVar29,4);
            auVar56 = NEON_frecpe(auVar56,4);
            *(long *)(*pauVar29 + 8) = auVar56._8_8_;
            *(long *)*pauVar29 = auVar56._0_8_;
            if (pauVar29 + 1 < pauVar6) {
              pauVar29 = pauVar29 + 1;
              do {
                pauVar39 = pauVar29 + 1;
                auVar56 = NEON_frsqrte(*pauVar29,4);
                auVar56 = NEON_frecpe(auVar56,4);
                *(long *)(*pauVar29 + 8) = auVar56._8_8_;
                *(long *)*pauVar29 = auVar56._0_8_;
                pauVar29 = pauVar39;
              } while (pauVar39 < pauVar6);
            }
          }
        }
        uVar43 = uVar43 + 1;
        uVar42 = uVar42 + local_a4;
      } while (uVar43 < uVar51);
      lVar28 = FUN_02ef8fe0(local_f0);
      ppuVar41 = &PTR_DAT_042ab708;
      param_6 = local_108;
      puVar47 = local_e8;
    }
    if (lVar28 == 0) {
      return;
    }
    uVar42 = (uint)param_6;
    local_a4 = uVar42 & 0xff;
    uVar24 = local_a4 + 3;
    iVar36 = (int)local_c0;
    local_e8 = puVar47;
    local_90[0] = (undefined *)FUN_02f59e30(0,iVar36 * (uVar24 >> 2) * 0x10);
    uVar43 = local_100;
    if (local_90[0] == (undefined *)0x0) {
      puVar26 = local_90[0];
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar26 = local_90[0];
      puVar17 = local_90[0];
      local_b0 = local_90[0];
      if (iVar36 != 0) {
        iVar36 = (int)local_f0 + 2;
        uVar44 = iVar36 * iVar36;
        puVar26 = local_90[0];
        puVar17 = local_90[0];
        if (uVar44 != 0) {
          puVar50 = ppuVar41[local_f8];
          local_b8 = (ulong)(uVar24 & 0x1fc);
          local_c8 = (ulong)(local_a4 << 2);
          uVar45 = uVar45 + 3;
          uVar24 = uVar45 & 0x1fc;
          local_118 = param_7;
          local_108 = param_6;
          if ((uint)local_c0 < 0xc) {
            local_110 = (ulong)((uVar42 - uVar35) * 4) & 0x3fc;
            uVar38 = (ulong)uVar44;
            uVar42 = *(uint *)(&DAT_03a9ff30 + (ulong)((uint)local_c0 - 1) * 4);
            local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,uVar42);
            uVar51 = local_a0 & 0xffffffff;
            local_f8 = local_a0 & 1;
            lVar20 = 0;
            uVar21 = 0;
            uVar35 = 0;
            lVar46 = uVar51 - local_f8;
            puVar48 = local_c0;
            local_f0 = uVar51;
            local_d8 = uVar38;
            do {
              if ((1 << (ulong)((uint)uVar21 & 0x1f) & uVar42) == 0) {
                puVar26 = local_b0 + (ulong)(uVar35 * (int)local_b8) * 4;
                local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,uVar35);
                if (local_a4 != 0) {
                  memset(puVar26,0,local_c8);
                }
                iVar36 = (int)local_a0;
                if (iVar36 == 0) {
                  memset(puVar26,0,local_110);
                }
                else {
                  uVar51 = 0;
                  do {
                    fVar63 = *(float *)(puVar50 + uVar21 * 4) * fVar62;
                    if (iVar36 == 1) {
                      fVar52 = 0.0;
                      lVar31 = 0;
                    }
                    else {
                      fVar52 = 0.0;
                      uVar38 = 0;
                      lVar31 = 0;
                      do {
                        uVar7 = lVar20 + lVar31;
                        lVar31 = lVar31 + 2;
                        lVar14 = uVar38 * 4;
                        iVar32 = (int)uVar38;
                        uVar38 = (ulong)(iVar32 + (uVar45 * 2 & 0x3f8));
                        fVar52 = fVar52 + *(float *)(local_98 + lVar14 + uVar51 * 4) *
                                          fVar63 * *(float *)(lVar28 + (uVar7 & 0xffffffff) * 4) +
                                 *(float *)(local_98 + (ulong)(uVar24 + iVar32) * 4 + uVar51 * 4) *
                                 fVar63 * *(float *)(lVar28 + (ulong)((int)uVar7 + 1) * 4);
                      } while (lVar46 != lVar31);
                    }
                    if (local_f8 != 0) {
                      fVar52 = fVar52 + *(float *)(local_98 +
                                                  (ulong)(uVar24 * (int)lVar31) * 4 + uVar51 * 4) *
                                        fVar63 * *(float *)(lVar28 + (ulong)(iVar36 * (uint)uVar21 +
                                                                            (int)lVar31) * 4);
                    }
                    *(float *)(puVar26 + uVar51 * 4) = fVar52;
                    uVar51 = uVar51 + 1;
                  } while (uVar51 != uVar30);
                }
                uVar35 = (int)local_d0 + 1;
                uVar51 = local_f0;
                uVar38 = local_d8;
                puVar48 = local_c0;
                uVar42 = (uint)local_e0;
              }
              uVar21 = uVar21 + 1;
              param_6 = local_108;
              puVar47 = local_e8;
              puVar26 = local_b0;
              puVar17 = local_b0;
              param_7 = local_118;
              if (uVar38 <= uVar21) break;
              lVar20 = lVar20 + uVar51;
            } while (uVar35 < (uint)puVar48);
          }
          else {
            local_d0 = (undefined1 *)(ulong)uVar44;
            local_e0 = (undefined1 *)((ulong)((uVar42 - uVar35) * 4) & 0x3fc);
            local_d8 = local_a0 & 0xffffffff;
            uVar21 = local_a0 & 1;
            lVar20 = 0;
            puVar48 = (undefined1 *)0x0;
            lVar46 = local_d8 - uVar21;
            do {
              puVar26 = local_b0 + (long)puVar48 * local_b8 * 4;
              if (local_a4 != 0) {
                memset(puVar26,0,local_c8);
              }
              iVar36 = (int)local_a0;
              if (iVar36 == 0) {
                memset(puVar26,0,(size_t)local_e0);
              }
              else {
                uVar43 = 0;
                do {
                  fVar63 = *(float *)(puVar50 + (long)puVar48 * 4) * fVar62;
                  if (iVar36 == 1) {
                    lVar31 = 0;
                    fVar52 = 0.0;
                  }
                  else {
                    fVar52 = 0.0;
                    uVar51 = 0;
                    lVar31 = 0;
                    do {
                      uVar38 = lVar20 + lVar31;
                      lVar31 = lVar31 + 2;
                      lVar14 = uVar51 * 4;
                      iVar32 = (int)uVar51;
                      uVar51 = (ulong)(iVar32 + (uVar45 * 2 & 0x3f8));
                      fVar52 = fVar52 + *(float *)(local_98 + lVar14 + uVar43 * 4) *
                                        fVar63 * *(float *)(lVar28 + (uVar38 & 0xffffffff) * 4) +
                               *(float *)(local_98 + (ulong)(uVar24 + iVar32) * 4 + uVar43 * 4) *
                               fVar63 * *(float *)(lVar28 + (ulong)((int)uVar38 + 1) * 4);
                    } while (lVar46 != lVar31);
                  }
                  if (uVar21 != 0) {
                    fVar52 = fVar52 + *(float *)(local_98 +
                                                (ulong)(uVar24 * (int)lVar31) * 4 + uVar43 * 4) *
                                      fVar63 * *(float *)(lVar28 + (ulong)(uint)(iVar36 * (int)
                                                  puVar48 + (int)lVar31) * 4);
                  }
                  *(float *)(puVar26 + uVar43 * 4) = fVar52;
                  uVar43 = uVar43 + 1;
                } while (uVar43 != uVar30);
              }
              puVar48 = puVar48 + 1;
              uVar43 = local_100;
              param_6 = local_108;
              puVar47 = local_e8;
              puVar26 = local_b0;
              puVar17 = local_b0;
              param_7 = local_118;
            } while ((puVar48 < local_c0) && (lVar20 = lVar20 + local_d8, puVar48 < local_d0));
          }
        }
      }
    }
  }
  else {
    uVar44 = uVar44 & 0xff;
    lVar28 = FUN_02ef8fe0((long)cVar8);
    puVar17 = (undefined *)FUN_02f59e30(0,(int)puVar48 * (uVar44 + 3 >> 2) * 0x10);
    puVar26 = puVar17;
    local_90[0] = puVar17;
    if (puVar17 != (undefined *)0x0) {
      if ((int)puVar48 != 0) {
        puVar26 = (undefined *)0x0;
        puVar27 = (undefined1 *)0x0;
        puVar34 = (undefined4 *)(lVar28 + 8);
        puVar40 = (undefined4 *)(puVar17 + 8);
        uVar51 = (ulong)(uVar44 * 4 + 0xc) & 0x7f0;
        puVar50 = puVar17;
        if (uVar30 - 1 < 3) goto LAB_02efda3c;
        do {
          lVar20 = 0;
          puVar18 = puVar40;
          puVar19 = puVar34;
          do {
            puVar18[-2] = puVar19[-2];
            puVar18[-1] = puVar19[-1];
            *puVar18 = *puVar19;
            puVar1 = puVar19 + 1;
            lVar20 = lVar20 + 4;
            puVar19 = puVar19 + 4;
            puVar18[1] = *puVar1;
            puVar18 = puVar18 + 4;
          } while (uVar30 - (uVar21 & 3) != lVar20);
          while( true ) {
            if ((uVar24 & 3) != 0) {
              puVar19 = (undefined4 *)(puVar50 + lVar20 * 4);
              uVar38 = uVar21 & 3;
              puVar18 = (undefined4 *)(lVar28 + (long)(puVar26 + lVar20) * 4);
              do {
                uVar38 = uVar38 - 1;
                *puVar19 = *puVar18;
                puVar19 = puVar19 + 1;
                puVar18 = puVar18 + 1;
              } while (uVar38 != 0);
            }
            puVar27 = puVar27 + 1;
            puVar34 = puVar34 + uVar44;
            puVar40 = (undefined4 *)((long)puVar40 + uVar51);
            puVar50 = puVar50 + uVar51;
            puVar26 = puVar26 + uVar44;
            if (puVar27 == puVar48) goto LAB_02efdab8;
            if (2 < uVar30 - 1) break;
LAB_02efda3c:
            lVar20 = 0;
          }
        } while( true );
      }
    }
  }
  if (puVar26 == (undefined *)0x0) {
    return;
  }
LAB_02efdab8:
  puVar22 = (uint *)FUN_02efe350(puVar26,puVar47,uVar43 & 0xffffffff | param_6 << 0x20,local_90);
  if (puVar22 == (uint *)0x0) {
    FUN_02f59e60(0,puVar17);
    return;
  }
  param_5 = (uint)local_c0;
LAB_02efd628:
  iVar36 = (((uint)param_6 & 0xff) + 3 & 0x1fc) * param_5;
  if (iVar36 != 0) {
    memcpy(param_7,*(void **)puVar22,(ulong)(uint)(iVar36 * 4));
  }
  return;
}


