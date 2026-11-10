/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f9a080; name: FUN_02f9a080
 */


void FUN_02f9a080(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  void *__dest;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  void *__src;
  uint uVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  float fVar32;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar33;
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 uVar43;
  undefined1 auVar42 [16];
  float fVar44;
  undefined8 uVar45;
  uint local_150;
  undefined **local_120;
  undefined *puStack_118;
  ulong *local_110;
  float local_108;
  undefined4 local_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  uint uStack_f4;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  float local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  uint local_64;
  
  if (*(char *)(param_1 + 0x100) != '\x02') {
    plVar2 = (long *)(param_1 + 200);
    FUN_02f9ca70(plVar2,*(undefined2 *)(param_1 + 0xe4));
    FUN_02f9f020(plVar2);
    uVar7 = *(ushort *)(param_1 + 0xe4);
    if ((ulong)uVar7 == 0) {
      return;
    }
    lVar26 = *plVar2;
    lVar20 = 0;
    if (lVar26 != 0) {
      lVar20 = lVar26 + (long)plVar2;
    }
    lVar20 = lVar20 + (ulong)uVar7 * 0x20;
    uVar8 = *(ushort *)(lVar20 + 0x1c);
    uVar14 = (ulong)uVar8;
    if (uVar8 == 0) {
      *(ushort *)
       (param_1 + 0x48 + (ulong)*(ushort *)(lVar20 + 0x1e) * 0x40 + *(long *)(param_1 + 0x48) + 0x1c
       ) = uVar7;
      return;
    }
    do {
      lVar20 = lVar26 + (long)plVar2;
      lVar17 = 0;
      if (lVar26 != 0) {
        lVar17 = lVar20;
      }
      lVar17 = lVar17 + uVar14 * 0x20;
      if (*(short *)(lVar17 + 0x1c) == 0) {
        *(short *)(param_1 + 0x48 +
                  (ulong)*(ushort *)(lVar17 + 0x1e) * 0x40 + *(long *)(param_1 + 0x48) + 0x1c) =
             (short)uVar14;
        lVar26 = *plVar2;
        lVar20 = lVar26 + (long)plVar2;
      }
      lVar17 = 0;
      if (lVar26 != 0) {
        lVar17 = lVar20;
      }
      uVar24 = (uint)*(ushort *)(lVar17 + uVar14 * 0x20 + 0x1c);
      if (uVar24 == 0) {
        do {
          uVar24 = *(uint *)(lVar17 + uVar14 * 0x20 + 0xc);
          uVar23 = (ulong)uVar24 & 0xffff;
          uVar27 = (uint)uVar14;
          if ((uint)uVar7 == (uVar24 & 0xffff)) {
            bVar28 = 1;
            goto joined_r0x02f9addc;
          }
          uVar14 = uVar23;
        } while (*(ushort *)(lVar17 + uVar23 * 0x20 + 0x1e) == uVar27);
        bVar28 = 0;
joined_r0x02f9addc:
        uVar24 = uVar27;
        if ((int)uVar23 != 0) {
          uVar24 = (uint)*(ushort *)(lVar17 + uVar23 * 0x20 + 0x1e);
        }
        if ((bool)(bVar28 & uVar24 == uVar27)) {
          return;
        }
      }
      uVar14 = (ulong)uVar24;
      if (uVar24 == 0) {
        return;
      }
    } while( true );
  }
  uVar24 = *(uint *)(param_1 + 0x5c);
  plVar2 = (long *)(param_1 + 0xe8);
  if ((int)uVar24 < 5) {
    uVar24 = *(uint *)(param_1 + 0xf0);
    if (uVar24 != 3) {
      uVar27 = *(uint *)(param_1 + 0xf4);
      if (uVar27 == 0) {
        *(uint *)(param_1 + 0xf4) = uVar24;
        uVar27 = uVar24;
      }
      if ((int)uVar24 < 3) {
        uVar15 = uVar27 & 0x7fffffff;
        if ((int)(uVar27 & 0x7fffffff) <= (int)uVar24) {
          uVar15 = uVar24;
        }
        if ((int)uVar15 < 3) {
          lVar20 = tpidr_el0;
          lVar26 = *(long *)(lVar20 + 0x38d490);
          if (lVar26 == 0) {
            lVar26 = FUN_0333d16c(0,1);
            *(long *)(lVar20 + 0x38d490) = lVar26;
          }
          plVar11 = *(long **)(*(long *)(lVar26 + 8) + 0x58);
          __dest = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x200,0);
          if (*(long *)(param_1 + 0xe8) == 0) {
            __src = (void *)0x0;
          }
          else {
            __src = (void *)(*(long *)(param_1 + 0xe8) + (long)plVar2);
          }
          memcpy(__dest,__src,(long)*(int *)(param_1 + 0xf0) << 7);
          if ((int)*(uint *)(param_1 + 0xf4) < 0) {
            uVar24 = *(uint *)(param_1 + 0xf4) & 0x7fffffff;
            if ((int)uVar24 <= (int)*(uint *)(param_1 + 0xf0)) {
              uVar24 = *(uint *)(param_1 + 0xf0);
            }
            if (*(long *)(param_1 + 0xe8) == 0) {
              lVar26 = 0;
            }
            else {
              lVar26 = *(long *)(param_1 + 0xe8) + (long)plVar2;
            }
            lVar17 = *(long *)(lVar20 + 0x38d490);
            if (lVar17 == 0) {
              lVar17 = FUN_0333d16c(0,1);
              *(long *)(lVar20 + 0x38d490) = lVar17;
            }
            plVar11 = *(long **)(*(long *)(lVar17 + 8) + 0x58);
            (**(code **)(*plVar11 + 0x18))(plVar11,lVar26,(ulong)uVar24 << 7);
          }
          if (__dest == (void *)0x0) {
            lVar20 = 0;
          }
          else {
            lVar20 = (long)__dest - (long)plVar2;
          }
          *(long *)(param_1 + 0xe8) = lVar20;
          *(undefined4 *)(param_1 + 0xf4) = 0x80000004;
        }
      }
      *(undefined4 *)(param_1 + 0xf0) = 3;
    }
    auVar42._8_4_ = 0x7f7fffee;
    auVar42._0_8_ = 0x7f7fffee7f7fffee;
    auVar42._12_4_ = 0x7f7fffee;
    auVar41._8_4_ = 0xff7fffee;
    auVar41._0_8_ = 0xff7fffeeff7fffee;
    auVar41._12_4_ = 0xff7fffee;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (long)plVar2);
    *(undefined2 *)(puVar4 + 0xe) = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    uVar43 = auVar42._8_8_;
    puVar4[1] = uVar43;
    *puVar4 = 0x7f7fffee7f7fffee;
    uVar45 = auVar41._8_8_;
    puVar4[3] = uVar45;
    puVar4[2] = 0xff7fffeeff7fffee;
    puVar4[5] = uVar43;
    puVar4[4] = 0x7f7fffee7f7fffee;
    puVar4[7] = uVar45;
    puVar4[6] = 0xff7fffeeff7fffee;
    plVar11 = (long *)(param_1 + 0x48);
    puVar4[9] = uVar43;
    puVar4[8] = 0x7f7fffee7f7fffee;
    puVar4[0xb] = uVar45;
    puVar4[10] = 0xff7fffeeff7fffee;
    lVar20 = *(long *)(param_1 + 0xe8);
    *(undefined8 *)((long)plVar2 + lVar20 + 0xe0) = 0;
    *(undefined8 *)((long)plVar2 + lVar20 + 0xe8) = 0;
    *(undefined2 *)((long)plVar2 + lVar20 + 0xf0) = 0;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x88) = uVar43;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x80) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x98) = uVar45;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x90) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 0xa8) = uVar43;
    *(undefined8 *)((long)plVar2 + lVar20 + 0xa0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 0xb8) = uVar45;
    *(undefined8 *)((long)plVar2 + lVar20 + 0xb0) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 200) = uVar43;
    *(undefined8 *)((long)plVar2 + lVar20 + 0xc0) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 0xd8) = uVar45;
    *(undefined8 *)((long)plVar2 + lVar20 + 0xd0) = 0xff7fffeeff7fffee;
    lVar20 = *(long *)(param_1 + 0xe8);
    *(undefined1 *)((long)plVar2 + lVar20 + 0x170) = 1;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x168) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x160) = 0xffffffffffffffff;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x108) = uVar43;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x100) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x118) = uVar45;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x110) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x128) = uVar43;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x120) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x138) = uVar45;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x130) = 0xff7fffeeff7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x148) = uVar43;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x140) = 0x7f7fffee7f7fffee;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x158) = uVar45;
    *(undefined8 *)((long)plVar2 + lVar20 + 0x150) = 0xff7fffeeff7fffee;
    *(undefined1 *)(param_1 + 0xf8) = 1;
    uVar24 = 0;
    do {
      uVar27 = uVar24;
      if (*(int *)(param_1 + 0x50) <= (int)uVar27) {
        return;
      }
      lVar20 = *plVar11;
      uVar24 = uVar27 + 1;
    } while ((*(byte *)((long)plVar11 + (ulong)(uVar27 & 0xffff) * 0x40 + lVar20 + 0x1e) & 1) != 0);
    if (uVar27 + 1 == 0) {
      return;
    }
    uVar45 = NEON_fmov(0x3f800000,4);
    lVar26 = 0;
    do {
      pauVar5 = (undefined1 (*) [16])((long)plVar11 + (ulong)(uVar27 & 0xffff) * 0x40 + lVar20);
      local_f0 = *(long *)pauVar5[1];
      auVar34 = *pauVar5;
      fVar32 = auVar34._0_4_;
      auVar38._0_4_ = fVar32 + fVar32;
      fVar36 = auVar34._4_4_;
      auVar38._4_4_ = fVar36 + fVar36;
      auVar38._8_4_ = auVar34._8_4_ + auVar34._8_4_;
      fVar37 = auVar34._12_4_;
      auVar38._12_4_ = fVar37 + fVar37;
      auVar34 = NEON_ext(auVar34,auVar34,8,1);
      auVar39 = NEON_ext(auVar38,auVar38,8,1);
      fVar33 = auVar34._0_4_ * auVar39._0_4_;
      local_108 = auVar38._8_4_ * fVar36 + auVar38._0_4_ * fVar37;
      fStack_fc = auVar38._8_4_ * fVar36 - auVar38._0_4_ * fVar37;
      fVar44 = (float)uVar45;
      fStack_f8 = fVar44 - (auVar38._0_4_ * fVar32 + auVar38._4_4_ * fVar36);
      local_110 = (ulong *)CONCAT44(fVar44 - (auVar38._0_4_ * fVar32 + fVar33),
                                    auVar38._4_4_ * fVar32 - auVar38._8_4_ * fVar37);
      fStack_100 = auVar38._8_4_ * fVar32 + auVar38._4_4_ * fVar37;
      local_120 = (undefined **)
                  CONCAT44(auVar38._4_4_ * fVar32 + auVar38._8_4_ * fVar37,
                           fVar44 - (auVar38._4_4_ * fVar36 + fVar33));
      puStack_118 = (undefined *)(ulong)(uint)(auVar38._8_4_ * fVar32 - auVar38._4_4_ * fVar37);
      local_104 = 0;
      uStack_f4 = 0;
      local_e8 = *(ulong *)(pauVar5[1] + 8) & 0xffffffff;
      lVar20 = *(long *)pauVar5[3];
      bVar28 = pauVar5[1][0xe];
      if (lVar20 == 0) {
        puVar12 = (undefined1 *)0x0;
        if ((bVar28 >> 3 & 1) == 0) goto LAB_02f9a294;
LAB_02f9aa00:
        local_d0 = *(ulong *)pauVar5[2];
        uStack_c8 = CONCAT17(SUB161(ZEXT816(0x3f800000),3),
                             CONCAT16(SUB161(ZEXT816(0x3f800000),2),
                                      (uint6)(uint)*(undefined8 *)(pauVar5[2] + 8)));
        FUN_02ffe574(puVar12,&local_120,&local_d0,(bVar28 >> 5 ^ 0xff) & 1,&local_c0);
      }
      else {
        puVar12 = pauVar5[3] + lVar20;
        if ((bVar28 >> 3 & 1) != 0) goto LAB_02f9aa00;
LAB_02f9a294:
        (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar12[0x18] * 0x200 + 0x18))
                  (puVar12,&local_120,&local_c0);
      }
      auVar39._4_4_ = fStack_bc;
      auVar39._0_4_ = local_c0;
      auVar39._8_4_ = fStack_b8;
      auVar39._12_4_ = uStack_b4;
      auVar34._4_4_ = local_b0._4_4_;
      auVar34._0_4_ = (float)local_b0;
      auVar34[8] = local_a8._0_1_;
      lVar20 = *plVar2;
      iVar25 = (int)lVar26;
      if (iVar25 == 0) {
        *(float *)((long)plVar2 + lVar20 + 0x100) = local_c0;
        *(float *)((long)plVar2 + lVar20 + 0x110) = (float)local_b0;
        *(float *)((long)plVar2 + lVar20 + 0x120) = fStack_bc;
        *(float *)((long)plVar2 + lVar20 + 0x130) = local_b0._4_4_;
        *(float *)((long)plVar2 + lVar20 + 0x140) = fStack_b8;
        pfVar16 = (float *)((long)plVar2 + lVar20 + 0x150);
      }
      else if (iVar25 == 1) {
        *(float *)((long)plVar2 + lVar20 + 0x104) = local_c0;
        *(float *)((long)plVar2 + lVar20 + 0x114) = (float)local_b0;
        *(float *)((long)plVar2 + lVar20 + 0x124) = fStack_bc;
        *(float *)((long)plVar2 + lVar20 + 0x134) = local_b0._4_4_;
        *(float *)((long)plVar2 + lVar20 + 0x144) = fStack_b8;
        pfVar16 = (float *)((long)plVar2 + lVar20 + 0x154);
      }
      else if (iVar25 == 2) {
        *(float *)((long)plVar2 + lVar20 + 0x108) = local_c0;
        *(float *)((long)plVar2 + lVar20 + 0x118) = (float)local_b0;
        *(float *)((long)plVar2 + lVar20 + 0x128) = fStack_bc;
        *(float *)((long)plVar2 + lVar20 + 0x138) = local_b0._4_4_;
        *(float *)((long)plVar2 + lVar20 + 0x148) = fStack_b8;
        pfVar16 = (float *)((long)plVar2 + lVar20 + 0x158);
      }
      else {
        *(float *)((long)plVar2 + lVar20 + 0x10c) = local_c0;
        *(float *)((long)plVar2 + lVar20 + 0x11c) = (float)local_b0;
        *(float *)((long)plVar2 + lVar20 + 300) = fStack_bc;
        *(float *)((long)plVar2 + lVar20 + 0x13c) = local_b0._4_4_;
        *(float *)((long)plVar2 + lVar20 + 0x14c) = fStack_b8;
        pfVar16 = (float *)((long)plVar2 + lVar20 + 0x15c);
      }
      *pfVar16 = local_a8;
      auVar42 = NEON_fmin(auVar42,auVar39,4);
      auVar34[9] = (char)((uint)local_a8 >> 8);
      auVar34[10] = (char)((uint)local_a8 >> 0x10);
      auVar34[0xb] = (char)((uint)local_a8 >> 0x18);
      auVar34[0xc] = (char)uStack_a4;
      auVar34[0xd] = (char)((uint)uStack_a4 >> 8);
      auVar34[0xe] = (char)((uint)uStack_a4 >> 0x10);
      auVar34[0xf] = (char)((uint)uStack_a4 >> 0x18);
      auVar41 = NEON_fmax(auVar41,auVar34,4);
      lVar20 = lVar26 * 4;
      lVar26 = lVar26 + 1;
      *(uint *)((long)plVar2 + lVar20 + *(long *)(param_1 + 0xe8) + 0x160) = uVar27 & 0xffff;
      uVar24 = uVar27 + 1;
      do {
        uVar27 = uVar24;
        if (*(int *)(param_1 + 0x50) <= (int)uVar27) goto LAB_02f9a384;
        lVar20 = *plVar11;
        uVar24 = uVar27 + 1;
      } while ((*(byte *)((long)plVar11 + (ulong)(uVar27 & 0xffff) * 0x40 + lVar20 + 0x1e) & 1) != 0
              );
      if (uVar27 + 1 == 0) {
LAB_02f9a384:
        lVar20 = *plVar2;
        uVar45 = *(undefined8 *)((long)plVar2 + lVar20 + 0x80);
        *(undefined4 *)((long)plVar2 + lVar20 + 0xa8) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0xa8);
        *(undefined4 *)((long)plVar2 + lVar20 + 0xac) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0xac);
        *(int *)((long)plVar2 + lVar20 + 0xa0) = auVar42._4_4_;
        *(undefined4 *)((long)plVar2 + lVar20 + 0xa4) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0xa4);
        *(undefined8 *)((long)plVar2 + lVar20 + 0xb8) =
             *(undefined8 *)((long)plVar2 + lVar20 + 0xb8);
        *(ulong *)((long)plVar2 + lVar20 + 0xb0) =
             CONCAT44((int)((ulong)*(undefined8 *)((long)plVar2 + lVar20 + 0xb0) >> 0x20),
                      auVar41._4_4_);
        *(undefined8 *)((long)plVar2 + lVar20 + 0x88) =
             *(undefined8 *)((long)plVar2 + lVar20 + 0x88);
        *(ulong *)((long)plVar2 + lVar20 + 0x80) =
             CONCAT17((char)((ulong)uVar45 >> 0x38),
                      CONCAT16((char)((ulong)uVar45 >> 0x30),
                               CONCAT15((char)((ulong)uVar45 >> 0x28),
                                        CONCAT14((char)((ulong)uVar45 >> 0x20),auVar42._0_4_))));
        *(undefined4 *)((long)plVar2 + lVar20 + 0x98) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0x98);
        *(undefined4 *)((long)plVar2 + lVar20 + 0x9c) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0x9c);
        *(int *)((long)plVar2 + lVar20 + 0x90) = auVar41._0_4_;
        *(undefined4 *)((long)plVar2 + lVar20 + 0x94) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0x94);
        *(undefined4 *)((long)plVar2 + lVar20 + 200) = *(undefined4 *)((long)plVar2 + lVar20 + 200);
        *(undefined4 *)((long)plVar2 + lVar20 + 0xcc) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0xcc);
        *(int *)((long)plVar2 + lVar20 + 0xc0) = auVar42._8_4_;
        *(undefined4 *)((long)plVar2 + lVar20 + 0xc4) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0xc4);
        *(undefined4 *)((long)plVar2 + lVar20 + 0xd8) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0xd8);
        *(undefined4 *)((long)plVar2 + lVar20 + 0xdc) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0xdc);
        *(int *)((long)plVar2 + lVar20 + 0xd0) = auVar41._8_4_;
        *(undefined4 *)((long)plVar2 + lVar20 + 0xd4) =
             *(undefined4 *)((long)plVar2 + lVar20 + 0xd4);
        *(undefined4 *)((long)plVar2 + *plVar2 + 0xe0) = 2;
        return;
      }
    } while( true );
  }
  uVar27 = *(uint *)(param_1 + 0x50);
  lVar20 = tpidr_el0;
  if (uVar27 == 0) {
    lVar26 = 0;
    lVar17 = 0;
    local_150 = 0x80000000;
    plVar11 = (long *)PTR_PTR_0434a080;
    goto LAB_02f9a59c;
  }
  lVar26 = *(long *)(lVar20 + 0x38d490);
  if (lVar26 == 0) {
    lVar26 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar26;
  }
  lVar17 = *(long *)(lVar26 + 8);
  uVar14 = (ulong)(int)(uVar27 * 0x20 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar17 + 0x10) < uVar14) {
LAB_02f9ac4c:
    lVar26 = FUN_032ce670();
  }
  else {
    lVar26 = *(long *)(lVar17 + 0x18);
    uVar14 = lVar26 + uVar14;
    if (*(ulong *)(lVar17 + 0x20) < uVar14) goto LAB_02f9ac4c;
    *(ulong *)(lVar17 + 0x18) = uVar14;
  }
  plVar11 = (long *)PTR_PTR_0434a080;
  if ((int)uVar27 < 0x40000000) {
    local_150 = uVar27 | 0x80000000;
    lVar17 = lVar26;
  }
  else {
    FUN_032bd0a8(uVar27);
    uVar15 = (uVar27 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar15) {
      uVar15 = 0x3fffffff;
    }
    uVar1 = uVar27;
    if ((int)uVar27 <= (int)uVar15) {
      uVar1 = uVar15;
    }
    lVar17 = (ulong)uVar1 << 5;
    local_d0 = CONCAT44(local_d0._4_4_,uVar1);
    local_c0 = (float)lVar17;
    fStack_bc = (float)((ulong)lVar17 >> 0x20);
    if (((int)uVar1 < (int)(uVar27 & 0x3fffffff)) || (0x3fffffff < (int)uVar1)) {
      local_120 = (undefined **)0x1;
      local_110 = &local_d0;
      puStack_118 = &DAT_0411b3b8;
      FUN_03320b50(0x65816502,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                   ,0x5a,"Invalid requestedCapacity {}",&local_120);
      lVar17 = CONCAT44(fStack_bc,local_c0);
    }
    lVar17 = (**(code **)(*plVar11 + 0x10))(plVar11,lVar17,&local_c0);
    if (CONCAT44(fStack_bc,local_c0) < 0x7ffffffe0) {
      local_150 = (uint)(CONCAT44(fStack_bc,local_c0) >> 5);
    }
    else {
      local_150 = 0x3fffffff;
    }
  }
LAB_02f9a59c:
  local_108 = 1.4013e-45;
  local_120 = &PTR_LAB_04363a18;
  puStack_118 = (undefined *)0x0;
  local_110 = (ulong *)0x0;
  local_104 = 1;
  fStack_100 = 0.0;
  fStack_fc = 0.0;
  fStack_f8 = 0.0;
  uStack_f4 = 0x80000000;
  local_e0 = 0;
  local_f0 = 0;
  local_e8 = -0x8000000000000000;
  if (0x3fffffff < (int)uVar24) {
    FUN_032bd0a8(uVar24);
  }
  uVar15 = (uStack_f4 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar15) {
    uVar15 = 0x3fffffff;
  }
  local_64 = uVar24;
  if ((int)uVar24 <= (int)uVar15) {
    local_64 = uVar15;
  }
  local_d0 = (ulong)local_64 << 4;
  if (((int)local_64 < (int)(uStack_f4 & 0x3fffffff)) || (0x3fffffff < (int)local_64)) {
    local_c0 = 1.4013e-45;
    fStack_bc = 0.0;
    local_b0 = &local_64;
    fStack_b8 = 1.712719e-36;
    uStack_b4 = 0;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_c0);
  }
  uVar24 = uStack_f4;
  uVar45 = (**(code **)(*plVar11 + 0x10))(plVar11,local_d0,&local_d0);
  if (-1 < (int)uVar24) {
    (**(code **)(*plVar11 + 0x18))(plVar11,0,(ulong)(uVar24 & 0x3fffffff) << 4);
  }
  if (local_d0 < 0x3fffffff0) {
    uStack_f4 = (uint)(local_d0 >> 4);
  }
  else {
    uStack_f4 = 0x3fffffff;
  }
  fStack_100 = (float)uVar45;
  fStack_fc = (float)((ulong)uVar45 >> 0x20);
  plVar3 = (long *)(param_1 + 0x48);
  uVar24 = 0;
  do {
    uVar15 = uVar24;
    if (*(int *)(param_1 + 0x50) <= (int)uVar15) goto LAB_02f9a898;
    lVar18 = *plVar3;
    uVar24 = uVar15 + 1;
  } while ((*(byte *)((long)plVar3 + (ulong)(uVar15 & 0xffff) * 0x40 + lVar18 + 0x1e) & 1) != 0);
  if (uVar15 + 1 != 0) {
    uVar45 = NEON_fmov(0x3f800000,4);
    do {
      uVar24 = uVar15 & 0xffff;
      pauVar5 = (undefined1 (*) [16])((long)plVar3 + (ulong)uVar24 * 0x40 + lVar18);
      uStack_90 = *(undefined8 *)pauVar5[1];
      auVar41 = *pauVar5;
      fVar32 = auVar41._0_4_;
      auVar40._0_4_ = fVar32 + fVar32;
      fVar36 = auVar41._4_4_;
      auVar40._4_4_ = fVar36 + fVar36;
      auVar40._8_4_ = auVar41._8_4_ + auVar41._8_4_;
      fVar37 = auVar41._12_4_;
      auVar40._12_4_ = fVar37 + fVar37;
      auVar41 = NEON_ext(auVar41,auVar41,8,1);
      auVar42 = NEON_ext(auVar40,auVar40,8,1);
      fVar33 = auVar41._0_4_ * auVar42._0_4_;
      fStack_bc = auVar40._4_4_ * fVar32 + auVar40._8_4_ * fVar37;
      fStack_b8 = auVar40._8_4_ * fVar32 - auVar40._4_4_ * fVar37;
      local_b0._0_4_ = auVar40._4_4_ * fVar32 - auVar40._8_4_ * fVar37;
      local_a8 = auVar40._8_4_ * fVar36 + auVar40._0_4_ * fVar37;
      fVar44 = (float)uVar45;
      local_b0._4_4_ = fVar44 - (auVar40._0_4_ * fVar32 + fVar33);
      local_c0 = fVar44 - (auVar40._4_4_ * fVar36 + fVar33);
      uStack_98 = (ulong)(uint)(fVar44 - (auVar40._0_4_ * fVar32 + auVar40._4_4_ * fVar36));
      local_a0 = CONCAT44(auVar40._8_4_ * fVar36 - auVar40._0_4_ * fVar37,
                          auVar40._8_4_ * fVar32 + auVar40._4_4_ * fVar37);
      puVar4 = (undefined8 *)(lVar17 + (ulong)uVar24 * 0x20);
      uStack_b4 = 0;
      uStack_a4 = 0;
      uStack_88 = *(ulong *)(pauVar5[1] + 8) & 0xffffffff;
      lVar18 = *(long *)pauVar5[3];
      bVar28 = pauVar5[1][0xe];
      if (lVar18 == 0) {
        puVar12 = (undefined1 *)0x0;
        if ((bVar28 >> 3 & 1) == 0) goto LAB_02f9a7d4;
LAB_02f9a86c:
        local_d0 = *(ulong *)pauVar5[2];
        uStack_c8 = CONCAT17(SUB161(ZEXT816(0x3f800000),3),
                             CONCAT16(SUB161(ZEXT816(0x3f800000),2),
                                      (uint6)(uint)*(undefined8 *)(pauVar5[2] + 8)));
        FUN_02ffe574(puVar12,&local_c0,&local_d0,(bVar28 >> 5 ^ 0xff) & 1,puVar4);
      }
      else {
        puVar12 = pauVar5[3] + lVar18;
        if ((bVar28 >> 3 & 1) != 0) goto LAB_02f9a86c;
LAB_02f9a7d4:
        (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar12[0x18] * 0x200 + 0x18))
                  (puVar12,&local_c0,puVar4);
      }
      fVar32 = fStack_f8;
      auVar35._0_8_ =
           CONCAT44((float)((ulong)*puVar4 >> 0x20) + *(float *)((long)puVar4 + 0x14),
                    (float)*puVar4 + *(float *)(puVar4 + 2));
      auVar35._8_4_ = (float)puVar4[1] + *(float *)(puVar4 + 3);
      auVar35._12_4_ = (float)((ulong)puVar4[1] >> 0x20) + *(float *)((long)puVar4 + 0x1c);
      puVar4 = (undefined8 *)CONCAT44(fStack_fc,fStack_100);
      uVar14 = (ulong)(uint)fStack_f8;
      uVar6 = uStack_f4 & 0x3fffffff;
      uVar1 = (int)fStack_f8 + 1;
      if ((int)fStack_f8 < (int)uVar6) {
        puVar13 = puVar4;
      }
      else {
        if (0x3ffffffe < (int)fStack_f8) {
          FUN_032bd0a8(uVar1);
          uVar6 = uStack_f4 & 0x3fffffff;
        }
        uVar19 = (uStack_f4 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar19) {
          uVar19 = 0x3fffffff;
        }
        local_64 = uVar1;
        if ((int)uVar1 <= (int)uVar19) {
          local_64 = uVar19;
        }
        local_d0 = (ulong)local_64 << 4;
        if (((int)local_64 < (int)uVar6) || (0x3fffffff < (int)local_64)) {
          local_c0 = 1.4013e-45;
          fStack_bc = 0.0;
          local_b0 = &local_64;
          fStack_b8 = 1.712719e-36;
          uStack_b4 = 0;
          FUN_03320b50(0x65816502,
                       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                       ,0x5a,"Invalid requestedCapacity {}",&local_c0);
          uVar6 = uStack_f4 & 0x3fffffff;
        }
        uVar19 = uStack_f4;
        puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,local_d0,&local_d0);
        if (0 < (int)fVar32) {
          puVar13[1] = puVar4[1];
          *puVar13 = *puVar4;
          if (fVar32 != 1.4013e-45) {
            puVar13[3] = puVar4[3];
            puVar13[2] = puVar4[2];
            if (fVar32 != 2.8026e-45) {
              puVar13[5] = puVar4[5];
              puVar13[4] = puVar4[4];
              if (fVar32 != 4.2039e-45) {
                lVar18 = uVar14 - 3;
                puVar21 = puVar4 + 6;
                puVar22 = puVar13 + 6;
                do {
                  puVar22[1] = puVar21[1];
                  lVar18 = lVar18 + -1;
                  *puVar22 = *puVar21;
                  puVar21 = puVar21 + 2;
                  puVar22 = puVar22 + 2;
                } while (lVar18 != 0);
              }
            }
          }
        }
        if (-1 < (int)uVar19) {
          (**(code **)(*plVar11 + 0x18))(plVar11,puVar4,(ulong)uVar6 << 4);
        }
        auVar35._8_8_ = auVar35._8_8_;
        if (local_d0 < 0x3fffffff0) {
          uStack_f4 = (uint)(local_d0 >> 4);
        }
        else {
          uStack_f4 = 0x3fffffff;
        }
        fStack_100 = SUB84(puVar13,0);
        fStack_fc = (float)((ulong)puVar13 >> 0x20);
      }
      bVar28 = (char)auVar35[3] >> 7;
      bVar29 = (char)auVar35[7] >> 7;
      bVar30 = (char)auVar35[0xb] >> 7;
      bVar31 = (char)auVar35[0xf] >> 7;
      uVar6 = CONCAT13(bVar28,CONCAT12(bVar28,CONCAT11(bVar28,bVar28))) >> 1;
      uVar19 = CONCAT13(bVar29,CONCAT12(bVar29,CONCAT11(bVar29,bVar29))) >> 1;
      uVar9 = CONCAT13(bVar30,CONCAT12(bVar30,CONCAT11(bVar30,bVar30))) >> 1;
      uVar10 = CONCAT13(bVar31,CONCAT12(bVar31,CONCAT11(bVar31,bVar31))) >> 1;
      puVar13 = puVar13 + (long)(int)fStack_f8 * 2;
      puVar13[1] = CONCAT17(bVar31 >> 1 ^ auVar35[0xf],
                            CONCAT16((byte)(uVar10 >> 0x10) ^ auVar35[0xe],
                                     CONCAT15((byte)(uVar10 >> 8) ^ auVar35[0xd],
                                              CONCAT14((byte)uVar10 ^ auVar35[0xc],
                                                       CONCAT13(bVar30 >> 1 ^ auVar35[0xb],
                                                                CONCAT12((byte)(uVar9 >> 0x10) ^
                                                                         auVar35[10],
                                                                         CONCAT11((byte)(uVar9 >> 8)
                                                                                  ^ auVar35[9],
                                                                                  (byte)uVar9 ^
                                                                                  auVar35[8])))))));
      *puVar13 = CONCAT17(bVar29 >> 1 ^ auVar35[7],
                          CONCAT16((byte)(uVar19 >> 0x10) ^ auVar35[6],
                                   CONCAT15((byte)(uVar19 >> 8) ^ auVar35[5],
                                            CONCAT14((byte)uVar19 ^ auVar35[4],
                                                     CONCAT13(bVar28 >> 1 ^ auVar35[3],
                                                              CONCAT12((byte)(uVar6 >> 0x10) ^
                                                                       auVar35[2],
                                                                       CONCAT11((byte)(uVar6 >> 8) ^
                                                                                auVar35[1],
                                                                                (byte)uVar6 ^
                                                                                auVar35[0])))))));
      *(uint *)((long)puVar13 + 0xc) = uVar24;
      uVar24 = uVar15 + 1;
      do {
        uVar15 = uVar24;
        fStack_f8 = (float)uVar1;
        if (*(int *)(param_1 + 0x50) <= (int)uVar15) goto LAB_02f9a898;
        lVar18 = *plVar3;
        uVar24 = uVar15 + 1;
      } while ((*(byte *)((long)plVar3 + (ulong)(uVar15 & 0xffff) * 0x40 + lVar18 + 0x1e) & 1) != 0)
      ;
    } while (uVar15 + 1 != 0);
  }
LAB_02f9a898:
  local_c0 = 2.142106e-36;
  fStack_bc = 0.0;
  fStack_b8 = 0.0;
  uStack_b4 = 0;
  local_b0._0_4_ = (float)lVar17;
  local_b0._4_4_ = (float)((ulong)lVar17 >> 0x20);
  FUN_0334dd84(&local_120,plVar2,&local_c0);
  lVar18 = local_e8;
  local_120 = &PTR_LAB_04363a18;
  uVar14 = (ulong)local_e8._4_4_;
  local_e8 = (ulong)local_e8._4_4_ << 0x20;
  if ((-1 < lVar18) && (local_f0 != 0)) {
    (**(code **)(*plVar11 + 0x18))(plVar11,local_f0,(uVar14 & 0x3fffffff) << 5);
  }
  local_e8 = CONCAT44(0x80000000,(undefined4)local_e8);
  local_f0 = 0;
  fStack_f8 = 0.0;
  if ((-1 < (int)uStack_f4) && (CONCAT44(fStack_fc,fStack_100) != 0)) {
    (**(code **)(*plVar11 + 0x18))
              (plVar11,CONCAT44(fStack_fc,fStack_100),((ulong)uStack_f4 & 0x3fffffff) << 4);
  }
  lVar18 = *(long *)(lVar20 + 0x38d490);
  if (lVar18 == 0) {
    lVar18 = FUN_0333d16c(0,1);
    *(long *)(lVar20 + 0x38d490) = lVar18;
  }
  lVar20 = *(long *)(lVar18 + 8);
  uVar14 = (ulong)(int)(uVar27 * 0x20 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar20 + 0x10) < uVar14) || (*(long *)(lVar20 + 0x18) != lVar26 + uVar14)) ||
     (*(long *)(lVar20 + 0x28) == lVar26)) {
    if (lVar26 != 0) {
      if (*(ulong *)(lVar20 + 0x10) < uVar14) {
        *(int *)(*(long *)(lVar20 + 8) + 0x20) = *(int *)(*(long *)(lVar20 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar20 + 0x40) + 0x18))(*(long **)(lVar20 + 0x40),lVar26);
      }
      else if (*(long *)(lVar20 + 0x18) == lVar26 + uVar14) {
        *(long *)(lVar20 + 0x18) = lVar26;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar20,lVar26);
      }
    }
  }
  else {
    *(long *)(lVar20 + 0x18) = lVar26;
  }
  if ((lVar17 != 0) && (-1 < (int)local_150)) {
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar17,(ulong)(local_150 & 0x3fffffff) << 5);
  }
  return;
}


