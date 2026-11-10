/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f992dc; name: FUN_02f992dc
 */


void FUN_02f992dc(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined *puVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined1 (*pauVar24) [12];
  undefined1 (*pauVar25) [16];
  uint uVar26;
  long lVar27;
  byte bVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  uint uVar32;
  ulong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  ulong local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  
  lVar21 = tpidr_el0;
  if (*(long *)(lVar21 + 0x38d490) == 0) {
    lVar30 = FUN_0333d16c(0,1);
    *(long *)(lVar21 + 0x38d490) = lVar30;
    lVar30 = *(long *)(lVar30 + 0x10);
  }
  else {
    lVar30 = *(long *)(*(long *)(lVar21 + 0x38d490) + 0x10);
  }
  if (lVar30 != 0) {
    puVar19 = *(undefined8 **)(lVar30 + 8);
    uVar22 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar30 + 0x10)) &&
       (*(ulong *)(lVar30 + 8) = uVar22, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = "TtBuildBoundingVolume";
      uVar18 = nn::os::GetSystemTick();
      puVar19[1] = uVar18;
    }
  }
  *(char *)(param_1 + 0x100) = (char)param_2;
  if (param_2 == 2) {
    FUN_02f9a080(param_1);
    goto joined_r0x02f99f74;
  }
  plVar1 = (long *)(param_1 + 200);
  FUN_02f9c618(plVar1,*(int *)(param_1 + 0x50) << 1);
  if (*(int *)(param_1 + 0x50) < 1) goto joined_r0x02f99f74;
  if (*(long *)(lVar21 + 0x38d490) == 0) {
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar21 + 0x38d490) = lVar23;
    lVar23 = *(long *)(lVar23 + 0x10);
  }
  else {
    lVar23 = *(long *)(*(long *)(lVar21 + 0x38d490) + 0x10);
  }
  if (lVar23 != 0) {
    puVar19 = *(undefined8 **)(lVar23 + 8);
    uVar22 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar23 + 0x10)) &&
       (*(ulong *)(lVar23 + 8) = uVar22, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = "TtInsertAabbs";
      uVar18 = nn::os::GetSystemTick();
      puVar19[1] = uVar18;
    }
  }
  plVar2 = (long *)(param_1 + 0x48);
  uVar26 = 0;
  do {
    uVar32 = uVar26;
    if (*(int *)(param_1 + 0x50) <= (int)uVar32) {
      uVar26 = 0;
      goto LAB_02f998b8;
    }
    lVar23 = *plVar2;
    uVar26 = uVar32 + 1;
  } while ((*(byte *)((long)plVar2 + (ulong)(uVar32 & 0xffff) * 0x40 + lVar23 + 0x1e) & 1) != 0);
  uVar26 = 0;
  if (uVar32 + 1 != 0) {
    uVar18 = NEON_fmov(0x3f800000,4);
    do {
      pauVar25 = (undefined1 (*) [16])((long)plVar2 + (ulong)(uVar32 & 0xffff) * 0x40 + lVar23);
      auVar37 = *pauVar25;
      fVar50 = auVar37._0_4_;
      auVar42._0_4_ = fVar50 + fVar50;
      fVar52 = auVar37._4_4_;
      auVar42._4_4_ = fVar52 + fVar52;
      auVar42._8_4_ = auVar37._8_4_ + auVar37._8_4_;
      fVar45 = auVar37._12_4_;
      auVar42._12_4_ = fVar45 + fVar45;
      auVar37 = NEON_ext(auVar37,auVar37,8,1);
      auVar39 = NEON_ext(auVar42,auVar42,8,1);
      fVar36 = auVar37._0_4_ * auVar39._0_4_;
      fVar53 = (float)uVar18;
      local_b0 = (undefined8 *)
                 CONCAT44(fVar53 - (auVar42._0_4_ * fVar50 + fVar36),
                          auVar42._4_4_ * fVar50 - auVar42._8_4_ * fVar45);
      local_c0 = (undefined8 *)
                 CONCAT44(auVar42._4_4_ * fVar50 + auVar42._8_4_ * fVar45,
                          fVar53 - (auVar42._4_4_ * fVar52 + fVar36));
      uStack_b8 = (float *)(ulong)(uint)(auVar42._8_4_ * fVar50 - auVar42._4_4_ * fVar45);
      local_a8 = (ulong)(uint)(auVar42._8_4_ * fVar52 + auVar42._0_4_ * fVar45);
      uStack_98 = (ulong)(uint)(fVar53 - (auVar42._0_4_ * fVar50 + auVar42._4_4_ * fVar52));
      local_a0 = CONCAT44(auVar42._8_4_ * fVar52 - auVar42._0_4_ * fVar45,
                          auVar42._8_4_ * fVar50 + auVar42._4_4_ * fVar45);
      uStack_88 = (ulong)SUB164(pauVar25[1],8);
      uStack_90 = SUB168(pauVar25[1],0);
      lVar23 = *(long *)pauVar25[3];
      bVar28 = pauVar25[1][0xe];
      if (lVar23 == 0) {
        puVar20 = (undefined1 *)0x0;
        if ((bVar28 >> 3 & 1) == 0) goto LAB_02f99560;
LAB_02f99880:
        auVar37._0_12_ = SUB1612(pauVar25[2],0);
        auVar37._12_4_ = 0x3f800000;
        uStack_c8 = auVar37._8_8_;
        local_d0 = SUB168(pauVar25[2],0);
        FUN_02ffe574(puVar20,&local_c0,&local_d0,(bVar28 >> 5 ^ 0xff) & 1,&local_f0);
        uVar4 = *(ushort *)(param_1 + 0xd8);
      }
      else {
        puVar20 = pauVar25[3] + lVar23;
        if ((bVar28 >> 3 & 1) != 0) goto LAB_02f99880;
LAB_02f99560:
        (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar20[0x18] * 0x200 + 0x18))
                  (puVar20,&local_c0,&local_f0);
        uVar4 = *(ushort *)(param_1 + 0xd8);
      }
      if (uVar4 == 0) {
        FUN_02f9c618(plVar1,1);
        uVar4 = *(ushort *)(param_1 + 0xd8);
      }
      uVar22 = (ulong)uVar4;
      lVar23 = *(long *)(param_1 + 200) + (long)plVar1;
      *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar23 + uVar22 * 0x20);
      if (*(long *)(param_1 + 200) == 0) {
        lVar23 = 0;
      }
      puVar3 = (undefined4 *)(lVar23 + uVar22 * 0x20);
      *(undefined2 *)(puVar3 + 7) = 0;
      *(short *)((long)puVar3 + 0x1e) = (short)uVar32;
      puVar3[2] = uStack_e8;
      puVar3[3] = puVar3[3];
      *puVar3 = local_f0;
      puVar3[1] = uStack_ec;
      auVar39._0_12_ = local_e0._0_12_;
      auVar39._12_4_ = puVar3[7];
      *(long *)(puVar3 + 6) = auVar39._8_8_;
      *(long *)(puVar3 + 4) = local_e0._0_8_;
      lVar27 = *(long *)(param_1 + 200);
      uVar5 = *(ushort *)(param_1 + 0xe4);
      lVar23 = lVar27 + (long)plVar1;
      if (lVar27 == 0) {
        pauVar24 = (undefined1 (*) [12])(uVar22 << 5);
        if (uVar5 == 0) goto LAB_02f9986c;
LAB_02f99600:
        auVar15 = *pauVar24;
        auVar14 = *pauVar24;
        fStack_108 = (float)*(undefined8 *)(*pauVar24 + 8);
        fStack_104 = (float)((ulong)*(undefined8 *)(*pauVar24 + 8) >> 0x20);
        local_110 = (float)*(undefined8 *)*pauVar24;
        fStack_10c = (float)((ulong)*(undefined8 *)*pauVar24 >> 0x20);
        auVar37 = *(undefined1 (*) [16])(pauVar24[1] + 4);
        uVar6 = *(ushort *)(param_1 + 0xd8);
        fStack_f8 = auVar37._8_4_;
        local_100 = auVar37._0_4_;
        fStack_fc = auVar37._4_4_;
        if (uVar6 == 0) {
          FUN_02f9c618(plVar1,1);
          lVar27 = *(long *)(param_1 + 200);
          lVar23 = lVar27 + (long)plVar1;
          uVar6 = *(ushort *)(param_1 + 0xd8);
        }
        *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar23 + (ulong)uVar6 * 0x20);
        if (lVar27 == 0) {
          lVar23 = 0;
        }
        puVar19 = (undefined8 *)(lVar23 + (ulong)uVar6 * 0x20);
        pauVar25 = (undefined1 (*) [16])(lVar23 + (ulong)uVar5 * 0x20);
        uVar5 = *(ushort *)(pauVar25[1] + 0xc);
        if (uVar5 != 0) {
          while( true ) {
            lVar23 = 0;
            if (lVar27 != 0) {
              lVar23 = lVar27 + (long)plVar1;
            }
            local_c0 = (undefined8 *)(lVar23 + (ulong)uVar5 * 0x20);
            auVar11._12_4_ = fStack_104;
            auVar11._0_12_ = auVar14;
            uStack_b8 = (float *)(lVar23 + (ulong)*(ushort *)(pauVar25[1] + 0xe) * 0x20);
            auVar41._0_12_ = SUB1612(pauVar25[1],0);
            auVar41._12_4_ = 0;
            uVar47 = (undefined4)((ulong)*(undefined8 *)(*pauVar25 + 8) >> 0x20);
            auVar54._12_4_ = uVar47;
            auVar54._0_12_ = *(undefined1 (*) [12])*pauVar25;
            auVar39 = NEON_fmin(auVar11,auVar54,4);
            auVar10._12_4_ = 0;
            auVar10._0_12_ = auVar37._0_12_;
            auVar42 = NEON_fmax(auVar10,auVar41,4);
            auVar51._0_12_ = auVar39._0_12_;
            auVar51._12_4_ = uVar47;
            auVar43._0_12_ = auVar42._0_12_;
            auVar43._12_4_ = SUB164(pauVar25[1],0xc);
            *(long *)(*pauVar25 + 8) = auVar51._8_8_;
            *(long *)*pauVar25 = auVar39._0_8_;
            *(long *)(pauVar25[1] + 8) = auVar43._8_8_;
            *(long *)pauVar25[1] = auVar42._0_8_;
            fVar53 = (float)local_c0[1];
            fVar48 = (float)((ulong)local_c0[1] >> 0x20);
            fVar50 = (float)*local_c0;
            fVar52 = (float)((ulong)*local_c0 >> 0x20);
            fVar36 = (fVar50 + *(float *)(local_c0 + 2)) - (local_110 + local_100);
            fVar45 = (fVar52 + *(float *)((long)local_c0 + 0x14)) - (fStack_10c + fStack_fc);
            fVar46 = (fVar53 + *(float *)(local_c0 + 3)) - (fStack_108 + fStack_f8);
            fVar49 = (fVar48 + 0.0) - (fStack_104 + 0.0);
            auVar40._0_4_ = (local_100 - local_110) + (*(float *)(local_c0 + 2) - fVar50);
            auVar40._4_4_ = (fStack_fc - fStack_10c) + (*(float *)((long)local_c0 + 0x14) - fVar52);
            auVar40._8_4_ = (fStack_f8 - fStack_108) + (*(float *)(local_c0 + 3) - fVar53);
            auVar40._12_4_ = (0.0 - fStack_104) + (0.0 - fVar48);
            fVar36 = fVar36 * fVar36;
            fVar45 = fVar45 * fVar45;
            fVar46 = fVar46 * fVar46;
            fVar49 = fVar49 * fVar49;
            auVar55._4_4_ = fVar45;
            auVar55._0_4_ = fVar36;
            auVar55._8_4_ = fVar46;
            auVar55._12_4_ = fVar49;
            auVar7._4_4_ = fVar45;
            auVar7._0_4_ = fVar36;
            auVar7._8_4_ = fVar46;
            auVar7._12_4_ = fVar49;
            auVar54 = NEON_ext(auVar55,auVar7,8,1);
            auVar55 = NEON_ext(auVar40,auVar40,8,1);
            fVar50 = (*uStack_b8 + uStack_b8[4]) - (local_110 + local_100);
            fVar52 = (uStack_b8[1] + uStack_b8[5]) - (fStack_10c + fStack_fc);
            fVar53 = (uStack_b8[2] + uStack_b8[6]) - (fStack_108 + fStack_f8);
            fVar46 = (uStack_b8[3] + 0.0) - (fStack_104 + 0.0);
            fVar50 = fVar50 * fVar50;
            fVar52 = fVar52 * fVar52;
            fVar53 = fVar53 * fVar53;
            fVar46 = fVar46 * fVar46;
            auVar8._4_4_ = fVar52;
            auVar8._0_4_ = fVar50;
            auVar8._8_4_ = fVar53;
            auVar8._12_4_ = fVar46;
            auVar9._4_4_ = fVar52;
            auVar9._0_4_ = fVar50;
            auVar9._8_4_ = fVar53;
            auVar9._12_4_ = fVar46;
            auVar42 = NEON_ext(auVar8,auVar9,8,1);
            auVar44._0_4_ = (local_100 - local_110) + (uStack_b8[4] - *uStack_b8);
            auVar44._4_4_ = (fStack_fc - fStack_10c) + (uStack_b8[5] - uStack_b8[1]);
            auVar44._8_4_ = (fStack_f8 - fStack_108) + (uStack_b8[6] - uStack_b8[2]);
            auVar44._12_4_ = (0.0 - fStack_104) + (0.0 - uStack_b8[3]);
            auVar39 = NEON_ext(auVar44,auVar44,8,1);
            pauVar25 = (undefined1 (*) [16])
                       (&local_c0)
                       [(fVar50 + fVar52 + auVar42._0_4_) *
                        (auVar39._0_4_ + auVar44._0_4_ + auVar44._4_4_) <
                        (fVar36 + fVar45 + auVar54._0_4_) *
                        (auVar55._0_4_ + auVar40._0_4_ + auVar40._4_4_)];
            uVar5 = *(ushort *)(pauVar25[1] + 0xc);
            if (uVar5 == 0) break;
            lVar27 = *plVar1;
          }
        }
        if ((*(uint *)(*pauVar25 + 0xc) & 0xffff) == 0) {
          *(ushort *)(param_1 + 0xe4) = uVar6;
        }
        else {
          lVar27 = *plVar1;
          lVar23 = 0;
          if (lVar27 != 0) {
            lVar23 = lVar27 + (long)plVar1;
          }
          lVar29 = 0;
          if (lVar27 != 0) {
            lVar29 = lVar27 + (long)plVar1;
          }
          lVar29 = lVar29 + ((ulong)*(uint *)(*pauVar25 + 0xc) & 0xffff) * 0x20;
          *(ushort *)
           (lVar29 + (ulong)((uint)*(ushort *)(lVar29 + 0x1e) ==
                            ((uint)((ulong)((long)pauVar25 - lVar23) >> 5) & 0xffff)) * 2 + 0x1c) =
               uVar6;
        }
        *(uint *)((long)puVar19 + 0xc) = *(ushort *)(*pauVar25 + 0xc) | 0x3f000000;
        lVar23 = *plVar1;
        *(ushort *)((long)puVar19 + 0x1e) = uVar4;
        iVar31 = 0;
        if (lVar23 != 0) {
          iVar31 = (int)lVar23 + (int)plVar1;
        }
        *(short *)((long)puVar19 + 0x1c) = (short)((uint)((int)pauVar25 - iVar31) >> 5);
        *(uint *)(*pauVar25 + 0xc) = uVar6 | 0x3f000000;
        lVar23 = *plVar1;
        if (lVar23 != 0) {
          lVar23 = lVar23 + (long)plVar1;
        }
        *(uint *)(lVar23 + uVar22 * 0x20 + 0xc) = uVar6 | 0x3f000000;
        auVar34._0_12_ = SUB1612(pauVar25[1],0);
        auVar34._12_4_ = 0;
        auVar12._12_4_ = fStack_104;
        auVar12._0_12_ = auVar15;
        auVar42 = NEON_fmin(*pauVar25,auVar12,4);
        auVar13._12_4_ = 0;
        auVar13._0_12_ = auVar37._0_12_;
        auVar37 = NEON_fmax(auVar34,auVar13,4);
        auVar38._0_12_ = auVar42._0_12_;
        auVar38._12_4_ = *(undefined4 *)((long)puVar19 + 0xc);
        auVar35._0_12_ = auVar37._0_12_;
        auVar35._12_4_ = *(undefined4 *)((long)puVar19 + 0x1c);
        puVar19[1] = auVar38._8_8_;
        *puVar19 = auVar42._0_8_;
        puVar19[3] = auVar35._8_8_;
        puVar19[2] = auVar37._0_8_;
      }
      else {
        pauVar24 = (undefined1 (*) [12])(lVar23 + uVar22 * 0x20);
        if (uVar5 != 0) goto LAB_02f99600;
LAB_02f9986c:
        *(ushort *)(param_1 + 0xe4) = uVar4;
        *(undefined4 *)pauVar24[1] = 0x3f000000;
      }
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
      uVar26 = uVar26 + 1;
      uVar17 = uVar32 + 1;
      do {
        uVar32 = uVar17;
        if (*(int *)(param_1 + 0x50) <= (int)uVar32) goto LAB_02f998b8;
        lVar23 = *plVar2;
        uVar17 = uVar32 + 1;
      } while ((*(byte *)((long)plVar2 + (ulong)(uVar32 & 0xffff) * 0x40 + lVar23 + 0x1e) & 1) != 0)
      ;
    } while (uVar32 + 1 != 0);
  }
LAB_02f998b8:
  lVar23 = *(long *)(lVar21 + 0x38d490);
  if (lVar23 == 0) {
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar21 + 0x38d490) = lVar23;
    lVar27 = *(long *)(lVar23 + 0x10);
    if (lVar27 != 0) goto LAB_02f998dc;
LAB_02f998f0:
    if (lVar23 != 0) goto LAB_02f998f4;
LAB_02f99b3c:
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar21 + 0x38d490) = lVar23;
    lVar23 = *(long *)(lVar23 + 0x10);
  }
  else {
    lVar27 = *(long *)(lVar23 + 0x10);
    if (lVar27 == 0) goto LAB_02f998f0;
LAB_02f998dc:
    puVar19 = *(undefined8 **)(lVar27 + 8);
    uVar22 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(lVar27 + 0x10) < uVar22) ||
       (*(ulong *)(lVar27 + 8) = uVar22, puVar19 == (undefined8 *)0x0)) goto LAB_02f998f0;
    *puVar19 = &DAT_0390f40e;
    uVar18 = nn::os::GetSystemTick();
    puVar19[1] = uVar18;
    lVar23 = *(long *)(lVar21 + 0x38d490);
    if (lVar23 == 0) goto LAB_02f99b3c;
LAB_02f998f4:
    lVar23 = *(long *)(lVar23 + 0x10);
  }
  if (lVar23 != 0) {
    puVar19 = *(undefined8 **)(lVar23 + 8);
    uVar22 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar23 + 0x10)) &&
       (*(ulong *)(lVar23 + 8) = uVar22, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = "TtrebuildSAH";
      uVar18 = nn::os::GetSystemTick();
      puVar19[1] = uVar18;
    }
  }
  FUN_02f9ca70(plVar1,*(undefined2 *)(param_1 + 0xe4));
  FUN_02f9f020(plVar1);
  lVar23 = *(long *)(lVar21 + 0x38d490);
  if (lVar23 == 0) {
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar21 + 0x38d490) = lVar23;
    lVar27 = *(long *)(lVar23 + 0x10);
    if (lVar27 != 0) goto LAB_02f99948;
LAB_02f9995c:
    if (lVar23 != 0) goto LAB_02f99960;
LAB_02f99bc8:
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar21 + 0x38d490) = lVar23;
    lVar23 = *(long *)(lVar23 + 0x10);
  }
  else {
    lVar27 = *(long *)(lVar23 + 0x10);
    if (lVar27 == 0) goto LAB_02f9995c;
LAB_02f99948:
    puVar19 = *(undefined8 **)(lVar27 + 8);
    uVar22 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((*(ulong *)(lVar27 + 0x10) < uVar22) ||
       (*(ulong *)(lVar27 + 8) = uVar22, puVar19 == (undefined8 *)0x0)) goto LAB_02f9995c;
    *puVar19 = &DAT_0390f40e;
    uVar18 = nn::os::GetSystemTick();
    puVar19[1] = uVar18;
    lVar23 = *(long *)(lVar21 + 0x38d490);
    if (lVar23 == 0) goto LAB_02f99bc8;
LAB_02f99960:
    lVar23 = *(long *)(lVar23 + 0x10);
  }
  if (lVar23 != 0) {
    puVar19 = *(undefined8 **)(lVar23 + 8);
    uVar22 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar23 + 0x10)) &&
       (*(ulong *)(lVar23 + 8) = uVar22, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = "TtMapInstances";
      uVar18 = nn::os::GetSystemTick();
      puVar19[1] = uVar18;
    }
  }
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = (float *)0x8000000000000000;
  local_a8 = CONCAT44(local_a8._4_4_,uVar26);
  if (uVar26 == 0) {
    puVar19 = (undefined8 *)0x0;
  }
  else {
    lVar23 = *(long *)(lVar21 + 0x38d490);
    if (lVar23 == 0) {
      lVar23 = FUN_0333d16c(0,1);
      *(long *)(lVar21 + 0x38d490) = lVar23;
    }
    lVar23 = *(long *)(lVar23 + 8);
    uVar22 = (ulong)(int)(uVar26 * 2 + 0x7f & 0xffffff80);
    if (uVar22 <= *(ulong *)(lVar23 + 0x10)) {
      puVar19 = *(undefined8 **)(lVar23 + 0x18);
      uVar22 = (long)puVar19 + uVar22;
      if (uVar22 <= *(ulong *)(lVar23 + 0x20)) {
        *(ulong *)(lVar23 + 0x18) = uVar22;
        goto LAB_02f999e0;
      }
    }
    puVar19 = (undefined8 *)FUN_032ce670();
  }
LAB_02f999e0:
  uVar22 = (ulong)uStack_b8;
  puVar16 = PTR_PTR_0434a080;
  iVar31 = (uint)uStack_b8;
  uStack_b8 = (float *)(CONCAT44(uVar26,(uint)uStack_b8) | 0x8000000000000000);
  uVar4 = *(ushort *)(param_1 + 0xe4);
  local_c0 = puVar19;
  local_b0 = puVar19;
  if ((ulong)uVar4 == 0) {
LAB_02f99e40:
    uVar32 = (uint)uStack_b8;
  }
  else {
    lVar27 = *plVar1;
    lVar23 = 0;
    if (lVar27 != 0) {
      lVar23 = lVar27 + (long)plVar1;
    }
    uVar5 = *(ushort *)(lVar23 + (ulong)uVar4 * 0x20 + 0x1c);
    uVar33 = (ulong)uVar5;
    if (uVar5 != 0) {
      do {
        uVar22 = (ulong)uStack_b8;
        puVar19 = local_c0;
        lVar23 = lVar27 + (long)plVar1;
        lVar29 = 0;
        if (lVar27 != 0) {
          lVar29 = lVar23;
        }
        if (*(short *)(lVar29 + uVar33 * 0x20 + 0x1c) == 0) {
          uVar26 = (uint)uStack_b8 + 1;
          if ((int)(uStack_b8._4_4_ & 0x3fffffff) <= (int)(uint)uStack_b8) {
            if (0x3ffffffe < (int)(uint)uStack_b8) {
              FUN_032bd0a8(uVar26);
            }
            uVar32 = (uStack_b8._4_4_ & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar32) {
              uVar32 = 0x3fffffff;
            }
            uVar17 = uVar26;
            if ((int)uVar26 <= (int)uVar32) {
              uVar17 = uVar32;
            }
            local_c0 = (undefined8 *)
                       FUN_032bd1d4(puVar16,uVar17,2,puVar19,uVar22 & 0xffffffff,
                                    (long)&uStack_b8 + 4);
          }
          *(short *)((long)local_c0 + (long)(int)(uint)uStack_b8 * 2) = (short)uVar33;
          uStack_b8 = (float *)CONCAT44(uStack_b8._4_4_,uVar26);
          lVar27 = *plVar1;
          lVar23 = lVar27 + (long)plVar1;
        }
        lVar29 = 0;
        if (lVar27 != 0) {
          lVar29 = lVar23;
        }
        uVar26 = (uint)*(ushort *)(lVar29 + uVar33 * 0x20 + 0x1c);
        if (uVar26 == 0) {
          do {
            uVar26 = *(uint *)(lVar29 + uVar33 * 0x20 + 0xc);
            uVar22 = (ulong)uVar26 & 0xffff;
            uVar32 = (uint)uVar33;
            if ((uint)uVar4 == (uVar26 & 0xffff)) {
              bVar28 = 1;
              goto joined_r0x02f99e30;
            }
            uVar33 = uVar22;
          } while (*(ushort *)(lVar29 + uVar22 * 0x20 + 0x1e) == uVar32);
          bVar28 = 0;
joined_r0x02f99e30:
          uVar26 = uVar32;
          if ((int)uVar22 != 0) {
            uVar26 = (uint)*(ushort *)(lVar29 + uVar22 * 0x20 + 0x1e);
          }
          if ((bool)(bVar28 & uVar26 == uVar32)) break;
        }
        uVar33 = (ulong)uVar26;
      } while (uVar26 != 0);
      goto LAB_02f99e40;
    }
    uVar32 = iVar31 + 1;
    if ((int)(uVar26 & 0x3fffffff) <= iVar31) {
      if (0x3ffffffe < iVar31) {
        FUN_032bd0a8(uVar32);
        uVar26 = uStack_b8._4_4_;
      }
      uVar26 = (uVar26 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar26) {
        uVar26 = 0x3fffffff;
      }
      uVar17 = uVar32;
      if ((int)uVar32 <= (int)uVar26) {
        uVar17 = uVar26;
      }
      local_c0 = (undefined8 *)
                 FUN_032bd1d4(puVar16,uVar17,2,puVar19,uVar22 & 0xffffffff,(long)&uStack_b8 + 4);
      iVar31 = (uint)uStack_b8;
    }
    *(ushort *)((long)local_c0 + (long)iVar31 * 2) = uVar4;
    uStack_b8 = (float *)CONCAT44(uStack_b8._4_4_,uVar32);
  }
  if (0 < (int)uVar32) {
    uVar22 = 0;
    do {
      uVar4 = *(ushort *)((long)local_c0 + uVar22 * 2);
      lVar23 = 0;
      if (*plVar1 != 0) {
        lVar23 = *plVar1 + (long)plVar1;
      }
      uVar22 = uVar22 + 1;
      *(ushort *)
       ((long)plVar2 +
       (ulong)*(ushort *)(lVar23 + (ulong)uVar4 * 0x20 + 0x1e) * 0x40 + *plVar2 + 0x1c) = uVar4;
    } while (uVar32 != uVar22);
  }
  if (*(long *)(lVar21 + 0x38d490) == 0) {
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar21 + 0x38d490) = lVar23;
    lVar23 = *(long *)(lVar23 + 0x10);
  }
  else {
    lVar23 = *(long *)(*(long *)(lVar21 + 0x38d490) + 0x10);
  }
  if (lVar23 != 0) {
    puVar19 = *(undefined8 **)(lVar23 + 8);
    uVar22 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar23 + 0x10)) &&
       (*(ulong *)(lVar23 + 8) = uVar22, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = &DAT_0390f40e;
      uVar18 = nn::os::GetSystemTick();
      puVar19[1] = uVar18;
    }
  }
  puVar19 = local_b0;
  if (local_b0 == local_c0) {
    uStack_b8 = (float *)((ulong)uStack_b8 & 0xffffffff00000000);
  }
  iVar31 = (int)local_a8;
  lVar23 = *(long *)(lVar21 + 0x38d490);
  if (lVar23 == 0) {
    lVar23 = FUN_0333d16c(0,1);
    *(long *)(lVar21 + 0x38d490) = lVar23;
  }
  lVar21 = *(long *)(lVar23 + 8);
  uVar22 = (ulong)(int)(iVar31 * 2 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar21 + 0x10) < uVar22) || (*(long *)(lVar21 + 0x18) != uVar22 + (long)puVar19))
     || (*(undefined8 **)(lVar21 + 0x28) == puVar19)) {
    if (puVar19 != (undefined8 *)0x0) {
      if (*(ulong *)(lVar21 + 0x10) < uVar22) {
        *(int *)(*(long *)(lVar21 + 8) + 0x20) = *(int *)(*(long *)(lVar21 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar21 + 0x40) + 0x18))(*(long **)(lVar21 + 0x40),puVar19);
      }
      else if (*(long *)(lVar21 + 0x18) == uVar22 + (long)puVar19) {
        *(undefined8 **)(lVar21 + 0x18) = puVar19;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar21,puVar19);
      }
    }
  }
  else {
    *(undefined8 **)(lVar21 + 0x18) = puVar19;
  }
  uVar22 = (ulong)uStack_b8;
  uVar26 = uStack_b8._4_4_;
  uStack_b8 = (float *)((ulong)uStack_b8._4_4_ << 0x20);
  if ((-1 < (long)uVar22) && (local_c0 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_c0,(uVar26 & 0x3fffffff) << 1);
  }
joined_r0x02f99f74:
  if (lVar30 != 0) {
    puVar19 = *(undefined8 **)(lVar30 + 8);
    uVar22 = (long)puVar19 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(lVar30 + 0x10)) &&
       (*(ulong *)(lVar30 + 8) = uVar22, puVar19 != (undefined8 *)0x0)) {
      *puVar19 = &DAT_0390f40e;
      uVar18 = nn::os::GetSystemTick();
      puVar19[1] = uVar18;
    }
  }
  return;
}


