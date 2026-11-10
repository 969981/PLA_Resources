/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a2520; name: FUN_001a2520
 */


undefined8 FUN_001a2520(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,long param_4)

{
  undefined1 **ppuVar1;
  ushort *puVar2;
  ushort uVar3;
  float *pfVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined2 uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  ushort uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  undefined *puVar20;
  undefined *puVar21;
  bool bVar22;
  int iVar23;
  undefined1 *puVar24;
  uint uVar25;
  uint uVar26;
  undefined2 *puVar27;
  long *plVar28;
  byte *pbVar29;
  ulong uVar30;
  ulong uVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined2 *puVar34;
  byte *pbVar35;
  byte *pbVar36;
  int *piVar37;
  long lVar38;
  ulong *puVar39;
  uint *puVar40;
  undefined8 *puVar41;
  undefined8 uVar42;
  uint uVar44;
  uint uVar43;
  long lVar45;
  undefined1 **ppuVar46;
  undefined *puVar47;
  uint uVar48;
  ulong uVar49;
  undefined1 auVar51 [12];
  float fVar50;
  undefined1 auVar52 [12];
  float fVar58;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [12];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar73;
  undefined8 uVar74;
  float fVar80;
  undefined1 auVar75 [16];
  float fVar79;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar81 [12];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 uVar84;
  undefined1 auVar85 [12];
  undefined1 auVar86 [12];
  undefined1 auVar87 [16];
  int iVar88;
  int iVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined *local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined1 local_e68;
  long local_e60;
  undefined1 *local_e50;
  float fStack_e48;
  float fStack_e44;
  float fStack_e40;
  float local_e3c;
  undefined8 local_e38;
  float local_e30;
  float fStack_e2c;
  float fStack_e28;
  float fStack_e24;
  float local_e20;
  float fStack_e1c;
  float fStack_e18;
  float fStack_e14;
  undefined8 local_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined8 local_df8;
  undefined8 *local_df0;
  undefined8 uStack_de8;
  char local_de0;
  uint local_ddc;
  undefined4 local_dd8 [2];
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined *local_db0;
  long *local_da8;
  undefined1 *puStack_da0;
  undefined4 local_d98;
  undefined1 auStack_d90 [2048];
  undefined8 local_590;
  undefined8 uStack_588;
  undefined1 local_580 [768];
  undefined1 *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  
  puVar47 = PTR_DAT_04372370;
  lVar38 = *(long *)(param_3 + 0x68);
  bVar6 = *(byte *)(*(long *)(param_4 + 0x28) + 3);
  bVar8 = bVar6 >> 1;
  uVar49 = (ulong)bVar8;
  lVar45 = lVar38 + uVar49 * 4;
  pbVar36 = (byte *)(lVar45 + 1);
  pbVar35 = (byte *)(lVar45 + 2);
  uVar25 = (uint)*pbVar35;
  pbVar29 = (byte *)(lVar45 + 3);
  if ((uint)*pbVar36 == (uint)*pbVar29) {
    if ((uVar25 != 4) && (uVar25 != 3)) {
      return 1;
    }
  }
  else {
    bVar22 = uVar25 != *pbVar29;
    uVar25 = 1;
    if (bVar22) {
      uVar25 = 2;
    }
  }
  local_da8 = (long *)0x0;
  puStack_da0 = auStack_d90;
  uVar84 = *(undefined8 *)(PTR_DAT_04372370 + 0x68);
  uVar62 = *(undefined8 *)(PTR_DAT_04372370 + 0x60);
  local_d98 = 0x800;
  local_db0 = PTR_DAT_043724f8 + 0x10;
  puVar41 = *(undefined8 **)(param_3 + 0xe0);
  local_e10 = *puVar41;
  local_e08 = puVar41[1];
  local_e00 = puVar41[2];
  local_df8 = puVar41[3];
  lVar45 = uVar49 * 4;
  local_df0 = (undefined8 *)puVar41[4];
  uStack_de8 = 0;
  local_de0 = *(char *)(puVar41 + 6);
  local_ddc = *(uint *)((long)puVar41 + 0x34);
  auVar63 = *(undefined1 (*) [16])(puVar41 + 8);
  auVar69 = *(undefined1 (*) [16])(puVar41 + 10);
  uStack_dc8 = auVar63._8_8_;
  local_dd0 = auVar63._0_8_;
  uStack_db8 = auVar69._8_8_;
  local_dc0 = auVar69._0_8_;
  local_dd8[0] = *(undefined4 *)(puVar41 + 7);
  puVar41 = *(undefined8 **)(param_3 + 0xb8);
  uVar74 = puVar41[1];
  *(undefined8 *)(param_3 + 0xf0) = *puVar41;
  *(undefined8 *)(param_3 + 0xf8) = uVar74;
  *(undefined2 *)(param_3 + 0x100) = *(undefined2 *)(puVar41 + 2);
  uVar5 = *(undefined4 *)((long)puVar41 + 0x1c);
  *(undefined8 *)(param_3 + 0x104) = *(undefined8 *)((long)puVar41 + 0x14);
  ppuVar1 = (undefined1 **)(param_3 + 0x170);
  *(undefined4 *)(param_3 + 0x10c) = uVar5;
  uVar7 = *(undefined1 *)((long)puVar41 + 0x22);
  *(undefined2 *)(param_3 + 0x110) = *(undefined2 *)(puVar41 + 4);
  *(undefined1 *)(param_3 + 0x112) = uVar7;
  uVar42 = puVar41[5];
  uVar74 = puVar41[6];
  *(undefined8 *)(param_3 + 0x128) = puVar41[7];
  *(undefined8 *)(param_3 + 0x118) = uVar42;
  *(undefined8 *)(param_3 + 0x120) = uVar74;
  uVar48 = (uint)bVar8;
  if (1 < uVar25 - 1) {
    fVar50 = (float)uVar62;
    if (uVar25 == 3) {
      uVar13 = *(ushort *)(*(long *)(param_3 + 0x80) + (ulong)*(byte *)(lVar38 + lVar45) * 2);
      if ((uVar13 & 0xc0) == 0) {
        fVar58 = *(float *)(*(long *)(param_3 + 0xd0) + 0x20);
        if ((uVar13 & 0x30) != 0) goto LAB_001a2714;
LAB_001a2e94:
        auVar63 = *(undefined1 (*) [16])(puVar47 + 0x240);
        auVar85 = auVar63._0_12_;
        auVar81._0_4_ = -auVar63._0_4_;
        auVar81._4_4_ = -auVar63._4_4_;
        auVar81._8_4_ = -auVar63._8_4_;
      }
      else {
        fVar58 = (float)((uint)*(ushort *)
                                (*(long *)(param_3 + 0x80) + (ulong)*(byte *)(lVar38 + lVar45) * 2 +
                                4) << 0x10);
        if ((uVar13 & 0x30) == 0) goto LAB_001a2e94;
LAB_001a2714:
        if ((*pbVar35 == 4) || (bVar8 = *pbVar36, bVar8 != *pbVar29)) {
          plVar28 = *(long **)(param_3 + 0x60);
LAB_001a2f60:
          lVar38 = *plVar28;
          if ((int)*(uint *)(plVar28 + 1) < 1) {
LAB_001a2fb4:
            auVar54 = *(undefined1 (*) [16])(plVar28 + 2);
            uVar49 = 0xffffffff;
            auVar63 = *(undefined1 (*) [16])(plVar28 + 4);
          }
          else {
            uVar49 = 0;
            pbVar29 = (byte *)((long)plVar28 + lVar38 + 3);
            bVar8 = *pbVar29;
            if ((bVar8 & 1) == 0) goto LAB_001a2f9c;
            do {
              do {
                uVar49 = uVar49 + 1;
                pbVar29 = pbVar29 + 4;
                if (*(uint *)(plVar28 + 1) == uVar49) goto LAB_001a2fb4;
                bVar8 = *pbVar29;
              } while ((bVar8 & 1) != 0);
LAB_001a2f9c:
            } while (bVar8 >> 1 != uVar48);
            auVar54 = *(undefined1 (*) [16])(plVar28 + 2);
            auVar85 = auVar54._0_12_;
            auVar81 = SUB1612(*(undefined1 (*) [16])(plVar28 + 4),0);
            auVar63 = *(undefined1 (*) [16])(plVar28 + 4);
            if ((int)uVar49 == 0) goto LAB_001a30d8;
          }
          auVar69 = auVar63;
          auVar63 = *(undefined1 (*) [16])(puVar47 + 0x1e0);
          auVar60 = NEON_ext(auVar63,auVar63,8,1);
          auVar63 = NEON_ext(auVar60,auVar63,8,1);
          param_2 = ZEXT816(0);
          lVar32 = 0;
          do {
            iVar88 = (int)lVar32;
            iVar23 = iVar88 + (*(byte *)((long)plVar28 + (long)iVar88 * 4 + lVar38 + 3) & 0xfe);
            fVar73 = auVar63._0_4_ * (auVar69._0_4_ - auVar54._0_4_);
            fVar79 = auVar63._4_4_ * (auVar69._4_4_ - auVar54._4_4_);
            fVar80 = auVar63._8_4_ * (auVar69._8_4_ - auVar54._8_4_);
            local_590 = (undefined1 *)CONCAT44(iVar23,iVar88 + 1);
            iVar23 = *(int *)((ulong)&local_590 | (ulong)(iVar23 <= (int)uVar49) << 2);
            lVar32 = (long)iVar23;
            pbVar29 = (byte *)((long)plVar28 + lVar32 * 4 + lVar38);
            bVar19 = *pbVar29 >> 4;
            bVar8 = *pbVar29 & 0xf;
            bVar16 = pbVar29[1] >> 4;
            bVar10 = pbVar29[1] & 0xf;
            bVar17 = pbVar29[2] >> 4;
            bVar9 = pbVar29[2] & 0xf;
            auVar85._4_4_ = auVar54._4_4_ + (float)(byte)(bVar16 * bVar16) * fVar79;
            auVar85._0_4_ = auVar54._0_4_ + (float)(byte)(bVar19 * bVar19) * fVar73;
            auVar85._8_4_ = auVar54._8_4_ + (float)(byte)(bVar17 * bVar17) * fVar80;
            auVar54._12_4_ = 0;
            auVar54._0_12_ = auVar85;
            auVar81._4_4_ = auVar69._4_4_ - (float)(byte)(bVar10 * bVar10) * fVar79;
            auVar81._0_4_ = auVar69._0_4_ - (float)(byte)(bVar8 * bVar8) * fVar73;
            auVar81._8_4_ = auVar69._8_4_ - (float)(byte)(bVar9 * bVar9) * fVar80;
            auVar69._12_4_ = 0;
            auVar69._0_12_ = auVar81;
          } while (iVar23 != (int)uVar49);
        }
        else {
          plVar28 = *(long **)(param_3 + 0x60);
          if (*pbVar35 != 3) goto LAB_001a2f60;
          auVar60 = *(undefined1 (*) [16])(plVar28 + 2);
          auVar85 = auVar60._0_12_;
          param_2 = *(undefined1 (*) [16])(plVar28 + 4);
          auVar81 = param_2._0_12_;
          if (bVar8 != 0) {
            auVar69 = *(undefined1 (*) [16])(puVar47 + 0x1e0);
            auVar63 = NEON_ext(auVar69,auVar69,8,1);
            auVar63 = NEON_ext(auVar63,auVar69,8,1);
            auVar69 = ZEXT816(0);
            lVar38 = 0;
            do {
              iVar88 = (int)lVar38;
              iVar23 = iVar88 + (*(byte *)((long)plVar28 + (long)iVar88 * 4 + *plVar28 + 3) & 0xfe);
              fVar73 = auVar63._0_4_ * (param_2._0_4_ - auVar60._0_4_);
              fVar79 = auVar63._4_4_ * (param_2._4_4_ - auVar60._4_4_);
              fVar80 = auVar63._8_4_ * (param_2._8_4_ - auVar60._8_4_);
              local_590 = (undefined1 *)CONCAT44(iVar23,iVar88 + 1);
              uVar25 = *(uint *)((ulong)&local_590 | (ulong)(iVar23 <= (int)(uint)bVar8) << 2);
              lVar38 = (long)(int)uVar25;
              pbVar29 = (byte *)((long)plVar28 + lVar38 * 4 + *plVar28);
              bVar16 = *pbVar29 >> 4;
              bVar10 = *pbVar29 & 0xf;
              bVar17 = pbVar29[1] >> 4;
              bVar9 = pbVar29[1] & 0xf;
              bVar18 = pbVar29[2] >> 4;
              bVar19 = pbVar29[2] & 0xf;
              auVar85._4_4_ = auVar60._4_4_ + (float)(byte)(bVar17 * bVar17) * fVar79;
              auVar85._0_4_ = auVar60._0_4_ + (float)(byte)(bVar16 * bVar16) * fVar73;
              auVar85._8_4_ = auVar60._8_4_ + (float)(byte)(bVar18 * bVar18) * fVar80;
              auVar60._12_4_ = 0;
              auVar60._0_12_ = auVar85;
              auVar81._4_4_ = param_2._4_4_ - (float)(byte)(bVar9 * bVar9) * fVar79;
              auVar81._0_4_ = param_2._0_4_ - (float)(byte)(bVar10 * bVar10) * fVar73;
              auVar81._8_4_ = param_2._8_4_ - (float)(byte)(bVar19 * bVar19) * fVar80;
              param_2._12_4_ = 0;
              param_2._0_12_ = auVar81;
            } while (uVar25 != bVar8);
          }
        }
      }
LAB_001a30d8:
      uVar15 = uVar13 >> 8;
      uVar49 = (ulong)uVar15;
      uVar3 = uVar13 & 0xf;
      uVar25 = uVar15 + 3 & 0x1fc;
      if (uVar3 == 2) {
        lVar38 = FUN_02fde8d4(fVar58,param_2,auVar69,&local_db0);
        iVar23 = *(int *)(lVar38 + 0x40);
        ppuVar46 = (undefined1 **)0x0;
        if (iVar23 != 0) {
          ppuVar46 = (undefined1 **)((long)iVar23 + lVar38 + 0x40);
        }
      }
      else {
        fVar58 = fVar58 * fVar50;
        lVar38 = 0;
        ppuVar46 = &local_e50;
      }
      puVar24 = local_580;
      uStack_588 = 0x8000004000000000;
      local_590 = puVar24;
      uVar74 = *(undefined8 *)PTR_PTR_04372408;
      uVar43 = (uint)uVar15;
      uVar44 = (uint)uVar15;
      if (uVar13 >> 8 < 0x41) {
        if (uVar15 != 0) goto LAB_001a31b4;
      }
      else {
        uVar26 = uVar44;
        if (uVar44 < 0x81) {
          uVar26 = 0x80;
        }
        puVar24 = (undefined1 *)FUN_032bd1d4(uVar74,uVar26,0xc,puVar24,0,(long)&uStack_588 + 4);
        local_590 = puVar24;
        if ((uint)uStack_588 != uVar44) {
LAB_001a31b4:
          uStack_588 = CONCAT44(uStack_588._4_4_,uVar43);
          local_590 = puVar24;
        }
      }
      puVar2 = (ushort *)
               (*(long *)(param_3 + 0x80) + (ulong)*(byte *)(*(long *)(param_3 + 0x68) + lVar45) * 2
               );
      uVar12 = *puVar2;
      uVar30 = (ulong)puVar2[1];
      uVar26 = (uint)(byte)(uVar12 >> 8);
      uVar12 = uVar12 >> 4 & 3;
      if (uVar43 <= uVar26) {
        uVar26 = uVar43;
      }
      fVar79 = auVar85._0_4_;
      fVar80 = auVar85._4_4_;
      fVar73 = auVar85._8_4_;
      if (uVar12 == 2) {
        lVar45 = *(long *)(param_3 + 0x78) + uVar30 * 8;
        auVar52._0_4_ = (auVar81._0_4_ - fVar79) * *(float *)PTR_DAT_04372428;
        auVar52._4_4_ = (auVar81._4_4_ - fVar80) * *(float *)(PTR_DAT_04372428 + 4);
        auVar52._8_4_ = (auVar81._8_4_ - fVar73) * *(float *)(PTR_DAT_04372428 + 8);
        if ((int)(uVar26 - 1) < 1) {
          uVar31 = 0;
          if (uVar26 != 0) goto LAB_001a3508;
        }
        else {
          uVar31 = 0;
          puVar41 = (undefined8 *)(local_590 + 0xc);
          do {
            uVar12 = *(ushort *)(lVar45 + (uVar31 ^ 3) * 2);
            auVar65._0_8_ = (ulong)CONCAT24(uVar12 >> 5,(uint)uVar12) & 0x1f0000001f;
            uVar30 = uVar31 ^ 2;
            uVar31 = uVar31 + 2;
            auVar65._8_2_ = uVar12 >> 10;
            auVar65._10_6_ = 0;
            auVar69 = NEON_scvtf(auVar65,4);
            *(ulong *)((long)puVar41 + -0xc) =
                 CONCAT44(fVar80 + auVar52._4_4_ * auVar69._4_4_,
                          fVar79 + auVar52._0_4_ * auVar69._0_4_);
            *(float *)((long)puVar41 + -4) = fVar73 + auVar52._8_4_ * auVar69._8_4_;
            uVar12 = *(ushort *)(lVar45 + uVar30 * 2);
            auVar66._0_8_ = (ulong)CONCAT24(uVar12 >> 5,(uint)uVar12) & 0x1f0000001f;
            auVar66._8_2_ = uVar12 >> 10;
            auVar66._10_6_ = 0;
            auVar69 = NEON_scvtf(auVar66,4);
            *puVar41 = CONCAT44(fVar80 + auVar52._4_4_ * auVar69._4_4_,
                                fVar79 + auVar52._0_4_ * auVar69._0_4_);
            *(float *)(puVar41 + 1) = fVar73 + auVar52._8_4_ * auVar69._8_4_;
            puVar41 = puVar41 + 3;
          } while ((long)uVar31 < (long)(int)(uVar26 - 1));
          if ((int)uVar31 < (int)uVar26) {
LAB_001a3508:
            uVar12 = *(ushort *)(lVar45 + (ulong)((uint)uVar31 ^ 3) * 2);
            auVar59._0_8_ = (ulong)CONCAT24(uVar12 >> 5,(uint)uVar12) & 0x1f0000001f;
            auVar59._8_2_ = uVar12 >> 10;
            auVar59._10_2_ = 0;
LAB_001a3574:
            auVar61._12_4_ = 0;
            auVar61._0_12_ = auVar59;
            auVar69 = NEON_scvtf(auVar61,4);
            uVar42 = CONCAT44(fVar80 + auVar52._4_4_ * auVar69._4_4_,
                              fVar79 + auVar52._0_4_ * auVar69._0_4_);
            fVar73 = fVar73 + auVar52._8_4_ * auVar69._8_4_;
LAB_001a3580:
            *(undefined8 *)(local_590 + (uVar31 & 0xffffffff) * 0xc) = uVar42;
            *(float *)((long)(local_590 + (uVar31 & 0xffffffff) * 0xc) + 8) = fVar73;
          }
        }
      }
      else if (uVar12 == 1) {
        lVar45 = *(long *)(param_3 + 0x78);
        auVar52._0_4_ = (auVar81._0_4_ - fVar79) * *(float *)PTR_DAT_04372430;
        auVar52._4_4_ = (auVar81._4_4_ - fVar80) * *(float *)(PTR_DAT_04372430 + 4);
        auVar52._8_4_ = (auVar81._8_4_ - fVar73) * *(float *)(PTR_DAT_04372430 + 8);
        if ((int)(uVar26 - 1) < 1) {
          uVar31 = 0;
          if (uVar26 != 0) goto LAB_001a3544;
        }
        else {
          uVar31 = 0;
          puVar40 = (uint *)(lVar45 + uVar30 * 8 + 4);
          puVar41 = (undefined8 *)(local_590 + 0xc);
          do {
            uVar43 = *puVar40;
            auVar67._0_8_ = CONCAT44(uVar43 >> 0xb,uVar43) & 0x7ff000007ff;
            auVar67._8_4_ = uVar43 >> 0x16;
            auVar67._12_4_ = 0;
            auVar69 = NEON_scvtf(auVar67,4);
            uVar31 = uVar31 + 2;
            *(ulong *)((long)puVar41 + -0xc) =
                 CONCAT44(fVar80 + auVar52._4_4_ * auVar69._4_4_,
                          fVar79 + auVar52._0_4_ * auVar69._0_4_);
            *(float *)((long)puVar41 + -4) = fVar73 + auVar52._8_4_ * auVar69._8_4_;
            uVar43 = puVar40[-1];
            puVar40 = puVar40 + 2;
            auVar68._0_8_ = CONCAT44(uVar43 >> 0xb,uVar43) & 0x7ff000007ff;
            auVar68._8_4_ = uVar43 >> 0x16;
            auVar68._12_4_ = 0;
            auVar69 = NEON_scvtf(auVar68,4);
            *puVar41 = CONCAT44(fVar80 + auVar52._4_4_ * auVar69._4_4_,
                                fVar79 + auVar52._0_4_ * auVar69._0_4_);
            *(float *)(puVar41 + 1) = fVar73 + auVar52._8_4_ * auVar69._8_4_;
            puVar41 = puVar41 + 3;
          } while ((long)uVar31 < (long)(int)(uVar26 - 1));
          if ((int)uVar31 < (int)uVar26) {
LAB_001a3544:
            uVar43 = *(uint *)(lVar45 + uVar30 * 8 + (ulong)((uint)uVar31 | 1) * 4);
            auVar59._0_8_ = CONCAT44(uVar43 >> 0xb,uVar43) & 0x7ff000007ff;
            auVar59._8_4_ = uVar43 >> 0x16;
            goto LAB_001a3574;
          }
        }
      }
      else if (uVar12 == 0) {
        lVar45 = *(long *)(param_3 + 0x78) + uVar30 * 8;
        if ((int)(uVar26 - 1) < 1) {
          uVar31 = 0;
          if (uVar26 != 0) goto LAB_001a34c0;
        }
        else {
          auVar69 = *(undefined1 (*) [16])(param_3 + 0x10);
          fVar73 = *(float *)(param_3 + 0x20);
          fVar79 = *(float *)(param_3 + 0x24);
          fVar80 = *(float *)(param_3 + 0x28);
          uVar31 = 0;
          puVar41 = (undefined8 *)(local_590 + 0xc);
          puVar39 = (ulong *)(lVar45 + 8);
          do {
            uVar30 = puVar39[-1];
            auVar70._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
            auVar70._8_4_ = (uint)(uVar30 >> 0x2a);
            auVar70._12_4_ = 0;
            auVar63 = NEON_scvtf(auVar70,4);
            uVar31 = uVar31 + 2;
            *(ulong *)((long)puVar41 + -0xc) =
                 CONCAT44(auVar69._4_4_ + fVar79 * auVar63._4_4_,
                          auVar69._0_4_ + fVar73 * auVar63._0_4_);
            *(float *)((long)puVar41 + -4) = auVar69._8_4_ + fVar80 * auVar63._8_4_;
            uVar30 = *puVar39;
            auVar71._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
            auVar71._8_4_ = (uint)(uVar30 >> 0x2a);
            auVar71._12_4_ = 0;
            auVar63 = NEON_scvtf(auVar71,4);
            *puVar41 = CONCAT44(auVar69._4_4_ + fVar79 * auVar63._4_4_,
                                auVar69._0_4_ + fVar73 * auVar63._0_4_);
            *(float *)(puVar41 + 1) = auVar69._8_4_ + fVar80 * auVar63._8_4_;
            puVar41 = puVar41 + 3;
            puVar39 = puVar39 + 2;
          } while ((long)uVar31 < (long)(int)(uVar26 - 1));
          if ((int)uVar31 < (int)uVar26) {
LAB_001a34c0:
            uVar30 = *(ulong *)(lVar45 + (uVar31 & 0xffffffff) * 8);
            auVar69 = *(undefined1 (*) [16])(param_3 + 0x20);
            auVar56._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
            auVar56._8_4_ = (uint)(uVar30 >> 0x2a);
            auVar56._12_4_ = 0;
            auVar63 = NEON_scvtf(auVar56,4);
            uVar42 = CONCAT44(*(float *)(param_3 + 0x14) + auVar69._4_4_ * auVar63._4_4_,
                              *(float *)(param_3 + 0x10) + auVar69._0_4_ * auVar63._0_4_);
            fVar73 = *(float *)(param_3 + 0x18) + auVar69._8_4_ * auVar63._8_4_;
            goto LAB_001a3580;
          }
        }
      }
      else {
        FUN_0331fefc(&local_e80,&local_280,0x200);
        uVar42 = FUN_0332448c(&local_e80,"Compression method #");
        uVar42 = FUN_0332452c(uVar42,*(ushort *)
                                      (*(long *)(param_3 + 0x80) +
                                      (ulong)*(byte *)(*(long *)(param_3 + 0x68) + lVar45) * 2) >> 4
                                     & 3);
        FUN_0332448c(uVar42," not implemented");
        iVar23 = FUN_03320b30(0x902f09ed,&local_280,
                              "../..\\Geometry/Collide/DataStructures/StaticMeshTree/hkcdStaticMeshTreeDecoder.inl"
                              ,0x95);
        if (iVar23 != 0) {
          CallSupervisor(0x26);
        }
        FUN_0331ff7c(&local_e80);
      }
      if (uVar15 != 0) {
        lVar45 = 0;
        do {
          puVar41 = (undefined8 *)(local_590 + lVar45);
          uVar5 = *(undefined4 *)(puVar41 + 1);
          puVar33 = (undefined8 *)((long)ppuVar46 + lVar45);
          lVar45 = lVar45 + 0xc;
          *puVar33 = *puVar41;
          *(undefined4 *)(puVar33 + 1) = uVar5;
          *puVar33 = CONCAT44((float)((ulong)uVar62 >> 0x20) * (float)((ulong)*puVar33 >> 0x20),
                              fVar50 * (float)*puVar33);
          *(float *)(puVar33 + 1) = (float)uVar84 * *(float *)(puVar33 + 1);
        } while (uVar49 * 0xc != lVar45);
      }
      if ((uVar13 & 0xf) == 0) {
        uStack_278 = CONCAT44(*(undefined4 *)(ppuVar46 + 1),*(undefined4 *)(ppuVar46 + 1));
        local_280 = *ppuVar46;
        lVar38 = FUN_02fd8ea4(fVar58,&local_db0,&local_280);
LAB_001a36e8:
      }
      else {
        if (uVar3 == 1) {
          uStack_278 = CONCAT44(*(undefined4 *)(ppuVar46 + 1),*(undefined4 *)(ppuVar46 + 1));
          local_280 = *ppuVar46;
          uStack_e78 = CONCAT44(*(undefined4 *)((long)ppuVar46 + 0x14),
                                *(undefined4 *)((long)ppuVar46 + 0x14));
          local_e80 = *(undefined **)((long)ppuVar46 + 0xc);
          lVar38 = FUN_02fd8830(fVar58,&local_db0,&local_280,&local_e80);
          goto LAB_001a36e8;
        }
        if ((uVar3 != 2) || (uVar25 <= uVar44)) goto LAB_001a36e8;
        puVar41 = (undefined8 *)((long)ppuVar46 + (long)(int)(uVar44 - 1) * 0xc);
        uVar30 = ~uVar49;
        if ((uVar15 & 1) != 0) {
          puVar33 = (undefined8 *)((long)ppuVar46 + uVar49 * 0xc);
          uVar42 = *puVar41;
          *(undefined4 *)(puVar33 + 1) = *(undefined4 *)(puVar41 + 1);
          *puVar33 = uVar42;
          uVar49 = uVar49 + 1;
        }
        if (uVar30 + uVar25 != 0) {
          lVar45 = uVar49 - uVar25;
          puVar33 = (undefined8 *)((long)ppuVar46 + uVar49 * 0xc);
          do {
            uVar42 = *puVar41;
            lVar45 = lVar45 + 2;
            *(undefined4 *)(puVar33 + 1) = *(undefined4 *)(puVar41 + 1);
            *puVar33 = uVar42;
            uVar42 = *puVar41;
            *(undefined4 *)((long)puVar33 + 0x14) = *(undefined4 *)(puVar41 + 1);
            *(undefined8 *)((long)puVar33 + 0xc) = uVar42;
            puVar33 = puVar33 + 3;
          } while (lVar45 != 0);
        }
      }
      uVar25 = uStack_588._4_4_;
      puVar47 = PTR_DAT_04372370;
      uStack_588 = (ulong)uStack_588._4_4_ << 0x20;
      if ((-1 < (int)uVar25) && (local_590 != (undefined1 *)0x0)) {
        FUN_032cf244(uVar74,local_590,0xc,uVar25 & 0x3fffffff);
      }
      *(long *)(param_3 + 0x118) = lVar38;
      puVar27 = *(undefined2 **)(param_3 + 0x88);
      iVar23 = *(byte *)(*(long *)(param_3 + 0x60) + 0x5a) - 1;
      if (iVar23 < 4) {
        bVar8 = *(byte *)(puVar27 + 1);
        puVar34 = puVar27;
      }
      else {
        iVar88 = 0;
        do {
          while( true ) {
            iVar89 = iVar88 + iVar23 >> 1;
            if ((int)(uVar48 - *(byte *)(puVar27 + (long)iVar89 * 2 + 1)) < 0) break;
            puVar34 = puVar27 + ((long)((ulong)(uint)(iVar88 + iVar23) << 0x20) >> 0x21) * 2;
            if ((int)(uVar48 - *(byte *)(puVar27 + (long)iVar89 * 2 + 1)) <
                (int)(uint)*(byte *)((long)puVar34 + 3)) goto LAB_001a37c8;
            iVar88 = iVar89 + 1;
            if (iVar23 - iVar88 < 4) goto LAB_001a3784;
          }
          iVar23 = iVar89;
        } while (3 < iVar89 - iVar88);
LAB_001a3784:
        puVar34 = puVar27 + (long)iVar88 * 2;
        bVar8 = *(byte *)(puVar34 + 1);
      }
      iVar23 = uVar48 - bVar8;
      puVar27 = puVar34;
      if (-1 < iVar23) goto LAB_001a37bc;
      do {
        do {
          puVar34 = puVar27 + 2;
          iVar23 = uVar48 - *(byte *)(puVar27 + 3);
          puVar27 = puVar34;
        } while (iVar23 < 0);
LAB_001a37bc:
        puVar27 = puVar34;
      } while ((int)(uint)*(byte *)((long)puVar34 + 3) <= iVar23);
LAB_001a37c8:
      uVar11 = *puVar34;
    }
    else {
      puVar2 = (ushort *)
               (*(long *)(param_3 + 0x80) +
               (((ulong)(*(ushort *)
                          (*(long *)(param_3 + 0x80) + (ulong)*(byte *)(lVar38 + lVar45) * 2) >> 6)
                & 3) + (ulong)*(byte *)(lVar38 + lVar45)) * 2);
      plVar28 = (long *)(*(long *)(param_3 + 0xd0) + 0x70);
      puVar41 = (undefined8 *)
                ((long)plVar28 +
                ((long)(int)((uint)puVar2[1] << 0x10) | (ulong)*puVar2) * 0x40 + *plVar28);
      plVar28 = puVar41 + 6;
      lVar45 = 0;
      if (*plVar28 != 0) {
        lVar45 = *plVar28 + (long)plVar28;
      }
      lVar38 = 0;
      if ((*(ushort *)(lVar45 + 0x1a) & 1) != 0) {
        lVar38 = lVar45;
      }
      *(long *)(param_3 + 0x118) = lVar38;
      fVar58 = *(float *)*(undefined1 (*) [12])(puVar41 + 4);
      fVar73 = *(float *)((long)puVar41 + 0x24);
      fVar79 = *(float *)(puVar41 + 5);
      auVar81 = *(undefined1 (*) [12])(puVar41 + 4);
      bVar8 = *(byte *)((long)puVar41 + 0x1e);
      local_280 = (undefined1 *)*puVar41;
      uStack_278 = puVar41[1];
      uStack_268 = (ulong)SUB164(*(undefined1 (*) [16])(puVar41 + 2),8);
      local_270 = SUB168(*(undefined1 (*) [16])(puVar41 + 2),0);
      FUN_032c9fc0(&local_590,&local_280);
      fStack_e48 = (float)uStack_588;
      fStack_e44 = (float)((ulong)uStack_588 >> 0x20);
      local_e50 = local_590;
      local_e38 = local_580._8_8_;
      fStack_e40 = local_580._0_4_;
      local_e3c = local_580._4_4_;
      fStack_e28 = local_580._24_4_;
      fStack_e24 = local_580._28_4_;
      local_e30 = local_580._16_4_;
      fStack_e2c = local_580._20_4_;
      fStack_e18 = (float)uStack_268;
      fStack_e14 = uStack_268._4_4_;
      local_e20 = (float)local_270;
      fStack_e1c = local_270._4_4_;
      if (local_de0 == '\0') {
        auVar63._12_4_ = fVar50;
        auVar63._0_12_ = auVar81;
        if ((bVar8 >> 3 & 1) != 0) goto LAB_001a2ea8;
      }
      else {
        local_e20 = (float)local_270 * (float)local_dd0;
        fVar80 = (float)((ulong)local_dd0 >> 0x20);
        fStack_e1c = local_270._4_4_ * fVar80;
        fStack_e18 = (float)uStack_268 * (float)uStack_dc8;
        fVar90 = (float)((ulong)uStack_dc8 >> 0x20);
        fStack_e14 = uStack_268._4_4_ * fVar90;
        auVar63._0_4_ = fVar58 * (float)local_dd0;
        auVar63._4_4_ = fVar73 * fVar80;
        auVar63._8_4_ = fVar79 * (float)uStack_dc8;
        auVar63._12_4_ = fVar50 * fVar90;
LAB_001a2ea8:
        local_de0 = '\x01';
        uStack_dc8 = auVar63._8_8_;
        local_dd0 = auVar63._0_8_;
        local_dc0 = 0;
        uStack_db8 = 0;
        bVar8 = *(byte *)((long)puVar41 + 0x1e);
        if ((bVar8 >> 3 & 1) != 0) {
          local_ddc = (bVar8 >> 5 ^ 0xffffffff) & 1;
        }
        lVar45 = 0;
        if (*plVar28 != 0) {
          lVar45 = *plVar28 + (long)plVar28;
        }
        local_dd8[0] = *(undefined4 *)(lVar45 + 0x20);
        if ((lVar45 != 0) && ((*(ushort *)(lVar45 + 0x1a) & 1) != 0)) {
          iVar23 = *(int *)(lVar45 + 0x40);
          lVar38 = 0;
          if (iVar23 != 0) {
            lVar38 = (long)iVar23 + lVar45 + 0x40;
          }
          FUN_02ffe20c(lVar38,*(undefined4 *)(lVar45 + 0x44),local_ddc,&local_dd0,local_dd8,
                       &local_dc0);
        }
      }
      FUN_032ca410(&local_590,local_df0,&local_e50);
      ppuVar1 = &local_280;
      local_df0 = &local_590;
      FUN_032ca498(&local_280,*(undefined8 *)(*(long *)(param_3 + 200) + 0x20),&local_590);
      uVar11 = *(undefined2 *)((long)puVar41 + 0x2c);
    }
    uVar25 = 1;
    goto LAB_001a37d0;
  }
  bVar10 = *(byte *)(lVar38 + lVar45);
  uVar43 = *(uint *)(param_3 + 0x90);
  if ((int)(uint)bVar10 < (int)uVar43) {
    uVar44 = *(uint *)(*(long *)(param_3 + 0x70) + (ulong)bVar10 * 4);
    auVar53._0_8_ = CONCAT44(uVar44 >> 0xb,uVar44) & 0x7ff000007ff;
    auVar53._8_4_ = uVar44 >> 0x16;
    auVar53._12_4_ = 0;
    auVar54 = NEON_scvtf(auVar53,4);
    auVar51._0_4_ = *(float *)(param_3 + 0x40) * auVar54._0_4_;
    auVar51._4_4_ = *(float *)(param_3 + 0x44) * auVar54._4_4_;
    auVar51._8_4_ = *(float *)(param_3 + 0x48) * auVar54._8_4_;
    auVar81 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x30),0);
  }
  else {
    uVar30 = *(ulong *)(*(long *)(param_3 + 0x78) +
                       (ulong)*(ushort *)(*(long *)(param_3 + 0x80) + (ulong)bVar10 * 2) * 8);
    auVar55._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
    auVar55._8_4_ = (uint)(uVar30 >> 0x2a);
    auVar55._12_4_ = 0;
    auVar54 = NEON_scvtf(auVar55,4);
    auVar51._0_4_ = *(float *)(param_3 + 0x20) * auVar54._0_4_;
    auVar51._4_4_ = *(float *)(param_3 + 0x24) * auVar54._4_4_;
    auVar51._8_4_ = *(float *)(param_3 + 0x28) * auVar54._8_4_;
    auVar81 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x10),0);
  }
  fVar50 = auVar81._0_4_ + auVar51._0_4_;
  fVar58 = auVar81._4_4_ + auVar51._4_4_;
  local_e50 = (undefined1 *)CONCAT44(fVar58,fVar50);
  fStack_e48 = auVar81._8_4_ + auVar51._8_4_;
  bVar10 = *pbVar36;
  if ((int)(uint)bVar10 < (int)uVar43) {
    uVar44 = *(uint *)(*(long *)(param_3 + 0x70) + (ulong)bVar10 * 4);
    auVar75._0_8_ = CONCAT44(uVar44 >> 0xb,uVar44) & 0x7ff000007ff;
    auVar75._8_4_ = uVar44 >> 0x16;
    auVar75._12_4_ = 0;
    auVar54 = NEON_scvtf(auVar75,4);
    fVar73 = *(float *)(param_3 + 0x40) * auVar54._0_4_;
    fVar79 = *(float *)(param_3 + 0x44) * auVar54._4_4_;
    fVar80 = *(float *)(param_3 + 0x48) * auVar54._8_4_;
    fStack_e44 = *(float *)(param_3 + 0x30);
    fStack_e40 = *(float *)(param_3 + 0x34);
    local_e3c = *(float *)(param_3 + 0x38);
  }
  else {
    uVar30 = *(ulong *)(*(long *)(param_3 + 0x78) +
                       (ulong)*(ushort *)(*(long *)(param_3 + 0x80) + (ulong)bVar10 * 2) * 8);
    auVar76._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
    auVar76._8_4_ = (uint)(uVar30 >> 0x2a);
    auVar76._12_4_ = 0;
    auVar54 = NEON_scvtf(auVar76,4);
    fVar73 = *(float *)(param_3 + 0x20) * auVar54._0_4_;
    fVar79 = *(float *)(param_3 + 0x24) * auVar54._4_4_;
    fVar80 = *(float *)(param_3 + 0x28) * auVar54._8_4_;
    fStack_e44 = *(float *)(param_3 + 0x10);
    fStack_e40 = *(float *)(param_3 + 0x14);
    local_e3c = *(float *)(param_3 + 0x18);
  }
  fStack_e44 = fStack_e44 + fVar73;
  fStack_e40 = fStack_e40 + fVar79;
  uVar74 = CONCAT44(fStack_e40,fStack_e44);
  local_e3c = local_e3c + fVar80;
  bVar10 = *pbVar35;
  if ((int)(uint)bVar10 < (int)uVar43) {
    uVar44 = *(uint *)(*(long *)(param_3 + 0x70) + (ulong)bVar10 * 4);
    auVar82._0_8_ = CONCAT44(uVar44 >> 0xb,uVar44) & 0x7ff000007ff;
    auVar82._8_4_ = uVar44 >> 0x16;
    auVar82._12_4_ = 0;
    auVar54 = NEON_scvtf(auVar82,4);
    fVar73 = (float)*(undefined8 *)(param_3 + 0x40) * auVar54._0_4_;
    fVar79 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) * auVar54._4_4_;
    fVar80 = (float)*(undefined8 *)(param_3 + 0x48) * auVar54._8_4_;
    fVar90 = (float)*(undefined8 *)(param_3 + 0x38);
    uVar42 = *(undefined8 *)(param_3 + 0x30);
  }
  else {
    uVar30 = *(ulong *)(*(long *)(param_3 + 0x78) +
                       (ulong)*(ushort *)(*(long *)(param_3 + 0x80) + (ulong)bVar10 * 2) * 8);
    auVar83._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
    auVar83._8_4_ = (uint)(uVar30 >> 0x2a);
    auVar83._12_4_ = 0;
    auVar54 = NEON_scvtf(auVar83,4);
    fVar73 = (float)*(undefined8 *)(param_3 + 0x20) * auVar54._0_4_;
    fVar79 = (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) * auVar54._4_4_;
    fVar80 = (float)*(undefined8 *)(param_3 + 0x28) * auVar54._8_4_;
    fVar90 = (float)*(undefined8 *)(param_3 + 0x18);
    uVar42 = *(undefined8 *)(param_3 + 0x10);
  }
  fVar73 = (float)uVar42 + fVar73;
  fVar79 = (float)((ulong)uVar42 >> 0x20) + fVar79;
  local_e38 = CONCAT44(fVar79,fVar73);
  local_e30 = fVar90 + fVar80;
  bVar9 = *pbVar29;
  if ((uint)bVar10 == (uint)bVar9) {
    fStack_e2c = fVar73;
    fStack_e28 = fVar79;
    fStack_e24 = local_e30;
    if (local_de0 != '\0') goto LAB_001a2b64;
LAB_001a2ad8:
    uVar42 = CONCAT44(fStack_e28,fStack_e2c);
  }
  else {
    if (uVar43 == bVar9 || (int)uVar43 < (int)(uint)bVar9) {
      fVar80 = (float)*(undefined8 *)(param_3 + 0x18);
      uVar42 = *(undefined8 *)(param_3 + 0x10);
      fVar90 = (float)*(undefined8 *)(param_3 + 0x28);
      uVar62 = *(undefined8 *)(param_3 + 0x20);
      uVar30 = *(ulong *)(*(long *)(param_3 + 0x78) +
                         (ulong)*(ushort *)(*(long *)(param_3 + 0x80) + (ulong)bVar9 * 2) * 8);
      auVar86._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
      auVar86._8_4_ = (uint)(uVar30 >> 0x2a);
    }
    else {
      uVar43 = *(uint *)(*(long *)(param_3 + 0x70) + (ulong)(uint)bVar9 * 4);
      fVar80 = (float)*(undefined8 *)(param_3 + 0x38);
      uVar42 = *(undefined8 *)(param_3 + 0x30);
      fVar90 = (float)*(undefined8 *)(param_3 + 0x48);
      uVar62 = *(undefined8 *)(param_3 + 0x40);
      auVar86._0_8_ = CONCAT44(uVar43 >> 0xb,uVar43) & 0x7ff000007ff;
      auVar86._8_4_ = uVar43 >> 0x16;
    }
    auVar87._12_4_ = 0;
    auVar87._0_12_ = auVar86;
    auVar54 = NEON_scvtf(auVar87,4);
    fStack_e2c = (float)uVar42 + (float)uVar62 * auVar54._0_4_;
    fStack_e28 = (float)((ulong)uVar42 >> 0x20) + (float)((ulong)uVar62 >> 0x20) * auVar54._4_4_;
    fStack_e24 = fVar80 + fVar90 * auVar54._8_4_;
    if (local_de0 == '\0') goto LAB_001a2ad8;
LAB_001a2b64:
    local_de0 = '\0';
    fVar91 = auVar63._0_4_;
    fVar92 = auVar63._4_4_;
    fVar72 = auVar63._8_4_;
    fVar80 = auVar69._0_4_;
    fVar90 = auVar69._4_4_;
    local_e50 = (undefined1 *)CONCAT44(fVar90 + fVar92 * fVar58,fVar80 + fVar91 * fVar50);
    fVar50 = auVar69._8_4_;
    fStack_e48 = fVar50 + fVar72 * fStack_e48;
    fStack_e44 = fVar80 + fVar91 * fStack_e44;
    fStack_e40 = fVar90 + fVar92 * fStack_e40;
    uVar74 = CONCAT44(fStack_e40,fStack_e44);
    local_e3c = fVar50 + fVar72 * local_e3c;
    local_e38 = CONCAT44(fVar90 + fVar92 * fVar79,fVar80 + fVar91 * fVar73);
    local_e30 = fVar50 + fVar72 * local_e30;
    local_dc0 = 0;
    uStack_db8 = 0;
    fStack_e2c = fVar80 + fVar91 * fStack_e2c;
    fStack_e28 = fVar90 + fVar92 * fStack_e28;
    uVar42 = CONCAT44(fStack_e28,fStack_e2c);
    fStack_e24 = fVar50 + fVar72 * fStack_e24;
    auVar69 = NEON_fmov(0x3f800000,4);
    uStack_dc8 = auVar69._8_8_;
    local_dd0 = auVar69._0_8_;
  }
  lVar45 = *(long *)(*(long *)(param_3 + 0xb0) + 8);
  fVar50 = SUB84(local_e50,0);
  fVar91 = (float)local_e38 - fVar50;
  fVar58 = (float)((ulong)local_e50 >> 0x20);
  fVar73 = (float)((ulong)local_e38 >> 0x20);
  fVar92 = fVar73 - fVar58;
  piVar37 = (int *)(lVar45 + 0x40);
  uVar62 = NEON_ext(CONCAT44(fVar92,fVar91),CONCAT44(local_e30 - fStack_e48,local_e30 - fStack_e48),
                    4,1);
  fVar79 = (float)((ulong)uVar74 >> 0x20);
  fVar80 = (float)uVar74 - fVar50;
  fVar90 = fVar79 - fVar58;
  puVar41 = (undefined8 *)0x0;
  if (*piVar37 != 0) {
    puVar41 = (undefined8 *)((long)*piVar37 + (long)piVar37);
  }
  uVar84 = NEON_ext(CONCAT44(fVar90,fVar80),CONCAT44(local_e3c - fStack_e48,local_e3c - fStack_e48),
                    4,1);
  iVar23 = *(int *)(lVar45 + 0x48);
  *puVar41 = local_e50;
  *(undefined8 *)((long)puVar41 + 0x24) = uVar42;
  auVar64._0_4_ =
       ((float)uVar74 - fVar50) * (float)uVar62 - ((float)local_e38 - fVar50) * (float)uVar84;
  auVar64._4_4_ =
       (fVar79 - fVar58) * (float)((ulong)uVar62 >> 0x20) -
       (fVar73 - fVar58) * (float)((ulong)uVar84 >> 0x20);
  auVar64._8_4_ = (local_e3c - fStack_e48) * fVar91 - (local_e30 - fStack_e48) * fVar80;
  auVar64._12_4_ = (local_e3c - fStack_e48) * fVar92 - (local_e30 - fStack_e48) * fVar90;
  auVar69 = NEON_ext(auVar64,auVar64,4,1);
  fVar91 = auVar69._0_4_;
  fVar92 = auVar69._4_4_;
  fVar73 = fVar91 * fVar91 + fVar92 * fVar92 + auVar64._0_4_ * auVar64._0_4_;
  fVar80 = fVar91 * fVar91 + fVar92 * fVar92 + auVar64._0_4_ * auVar64._0_4_;
  uVar42 = CONCAT44(fVar80,fVar73);
  uVar62 = NEON_frsqrte(uVar42,4);
  fVar79 = (float)uVar62;
  fVar90 = (float)((ulong)uVar62 >> 0x20);
  uVar62 = NEON_frsqrts(uVar42,CONCAT44(fVar90 * fVar90,fVar79 * fVar79),4);
  fVar79 = fVar79 * (float)uVar62;
  fVar90 = fVar90 * (float)((ulong)uVar62 >> 0x20);
  iVar88 = -(uint)(fVar73 <= 0.0);
  iVar89 = -(uint)(fVar80 <= 0.0);
  uVar42 = NEON_frsqrts(uVar42,CONCAT44(fVar90 * fVar90,fVar79 * fVar79),4);
  fVar79 = (float)uVar42 * fVar79;
  fVar90 = (float)((ulong)uVar42 >> 0x20) * fVar90;
  fVar80 = (float)CONCAT13((byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar88 >> 0x18),
                           CONCAT12((byte)((uint)fVar79 >> 0x10) & ~(byte)((uint)iVar88 >> 0x10),
                                    CONCAT11((byte)((uint)fVar79 >> 8) & ~(byte)((uint)iVar88 >> 8),
                                             SUB41(fVar79,0) & ~(byte)iVar88)));
  *(float *)(puVar41 + 1) = fStack_e48;
  fVar73 = fVar91 * fVar80;
  fVar90 = (float)(CONCAT17((byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                            CONCAT16((byte)((uint)fVar90 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10),
                                     CONCAT15((byte)((uint)fVar90 >> 8) & ~(byte)((uint)iVar89 >> 8)
                                              ,CONCAT14(SUB41(fVar90,0) & ~(byte)iVar89,fVar80))))
                  >> 0x20);
  fVar79 = fVar92 * fVar90;
  fVar80 = auVar64._0_4_ * fVar80;
  fVar90 = -(fVar50 * fVar91 + fVar58 * fVar92 + auVar64._0_4_ * fStack_e48) * fVar90;
  *(undefined8 *)((long)puVar41 + 0xc) = uVar74;
  *(float *)((long)puVar41 + 0x14) = local_e3c;
  puVar41[3] = local_e38;
  *(float *)(puVar41 + 4) = local_e30;
  *(float *)((long)puVar41 + 0x2c) = fStack_e24;
  *(undefined4 *)(lVar45 + 0x44) = 4;
  iVar88 = *(int *)(lVar45 + 0x58);
  pfVar4 = (float *)0x0;
  if (iVar23 != 0) {
    pfVar4 = (float *)((long)iVar23 + lVar45 + 0x48);
  }
  lVar38 = 0;
  if (iVar88 != 0) {
    lVar38 = (long)iVar88 + lVar45 + 0x58;
  }
  *(undefined1 *)(lVar38 + 3) = 3;
  *(undefined1 *)(lVar38 + 7) = 3;
  pfVar4[10] = fVar80;
  pfVar4[0xb] = fVar90;
  pfVar4[8] = fVar73;
  pfVar4[9] = fVar79;
  pfVar4[0xe] = fVar80;
  pfVar4[0xf] = fVar90;
  pfVar4[0xc] = fVar73;
  pfVar4[0xd] = fVar79;
  pfVar4[2] = fVar80;
  pfVar4[3] = fVar90;
  *pfVar4 = fVar73;
  pfVar4[1] = fVar79;
  pfVar4[6] = -fVar80;
  pfVar4[7] = -fVar90;
  pfVar4[4] = -fVar73;
  pfVar4[5] = -fVar79;
  *(undefined4 *)(lVar45 + 0x20) = *(undefined4 *)(*(long *)(param_3 + 0xd0) + 0x20);
  if ((uVar25 == 2) &&
     (lVar38 = *(long *)(param_3 + 0x68) + uVar49 * 4,
     (*(byte *)(lVar38 + 1) & *(byte *)(param_3 + 0x58)) <= *(byte *)(lVar38 + 3))) {
    lVar38 = 0;
    if (*(int *)(lVar45 + 0x40) != 0) {
      lVar38 = (long)*(int *)(lVar45 + 0x40) + (long)piVar37;
    }
    *(undefined8 *)(lVar38 + 0x24) = *(undefined8 *)(lVar38 + 0x18);
    *(undefined4 *)(lVar38 + 0x2c) = *(undefined4 *)(lVar38 + 0x20);
    uVar25 = 2;
    *(undefined4 *)(lVar45 + 0x44) = 3;
  }
  else {
    uVar25 = 1;
  }
  *(long *)(param_3 + 0x118) = lVar45;
  puVar27 = *(undefined2 **)(param_3 + 0x88);
  iVar23 = *(byte *)(*(long *)(param_3 + 0x60) + 0x5a) - 1;
  if (iVar23 < 4) {
    iVar23 = uVar48 - *(byte *)(puVar27 + 1);
    puVar34 = puVar27;
  }
  else {
    iVar88 = 0;
    do {
      while( true ) {
        iVar89 = iVar88 + iVar23 >> 1;
        iVar14 = (uint)bVar8 - (uint)*(byte *)(puVar27 + (long)iVar89 * 2 + 1);
        if (iVar14 < 0) break;
        puVar34 = puVar27 + ((long)((ulong)(uint)(iVar88 + iVar23) << 0x20) >> 0x21) * 2;
        if (iVar14 < (int)(uint)*(byte *)((long)puVar34 + 3)) goto LAB_001a2e7c;
        iVar88 = iVar89 + 1;
        if (iVar23 - iVar88 < 4) goto LAB_001a2e38;
      }
      iVar23 = iVar89;
    } while (3 < iVar89 - iVar88);
LAB_001a2e38:
    puVar34 = puVar27 + (long)iVar88 * 2;
    iVar23 = (uint)bVar8 - (uint)*(byte *)(puVar34 + 1);
  }
  puVar27 = puVar34;
  if (-1 < iVar23) goto LAB_001a2e70;
  do {
    do {
      puVar34 = puVar27 + 2;
      iVar23 = uVar48 - *(byte *)(puVar27 + 3);
      puVar27 = puVar34;
    } while (iVar23 < 0);
LAB_001a2e70:
    puVar27 = puVar34;
  } while ((int)(uint)*(byte *)((long)puVar34 + 3) <= iVar23);
LAB_001a2e7c:
  uVar11 = *puVar34;
LAB_001a37d0:
  puVar21 = PTR_DAT_04372420;
  puVar20 = PTR_DAT_043723b0;
  local_e60 = *(long *)(param_3 + 0xe8);
  local_e80 = PTR_DAT_04372500 + 0x10;
  local_e70 = NEON_fmin(*(undefined8 *)(puVar47 + 0x250),*(undefined8 *)(local_e60 + 0x10),4);
  local_e68 = *(char *)(local_e60 + 0x18) != '\0';
  uStack_e78 = CONCAT44(*(undefined4 *)(local_e60 + 0xc),
                        (int)CONCAT71((int7)((ulong)uStack_e78 >> 8),*(undefined1 *)(local_e60 + 8))
                       );
  uVar48 = 0;
  do {
    uVar43 = uVar48 | bVar6 & 0xfe | *(int *)(param_3 + 0x94) << 8;
    lVar45 = *(long *)(*(long *)(param_3 + 0xe0) + 0x28);
    if ((lVar45 == 0) ||
       (uVar49 = (**(code **)(*(long *)puVar20 + (ulong)*(byte *)(lVar45 + 0x18) * 0x40 + 0x4020))
                           (lVar45,uVar43 << (ulong)(*(uint *)(param_3 + 0xa0) & 0x1f)),
       (uVar49 & 1) != 0)) {
      if (uVar48 == 1) {
        fVar50 = SUB84(local_e50,0);
        fVar79 = (float)local_e38 - fVar50;
        fVar58 = (float)((ulong)local_e50 >> 0x20);
        fVar73 = (float)((ulong)local_e38 >> 0x20);
        fVar80 = fVar73 - fVar58;
        lVar45 = *(long *)(*(long *)(param_3 + 0xb0) + 8);
        iVar23 = *(int *)(lVar45 + 0x40);
        puVar41 = (undefined8 *)0x0;
        if (iVar23 != 0) {
          puVar41 = (undefined8 *)((long)iVar23 + lVar45 + 0x40);
        }
        iVar23 = *(int *)(lVar45 + 0x48);
        *(undefined8 *)((long)puVar41 + 0xc) = local_e38;
        uVar42 = NEON_ext(CONCAT44(fVar80,fVar79),
                          CONCAT44(local_e30 - fStack_e48,local_e30 - fStack_e48),4,1);
        uVar74 = NEON_ext(CONCAT44(fStack_e28 - fVar58,fStack_e2c - fVar50),
                          CONCAT44(fStack_e24 - fStack_e48,fStack_e24 - fStack_e48),4,1);
        puVar41[3] = CONCAT44(fStack_e28,fStack_e2c);
        *(ulong *)((long)puVar41 + 0x24) = CONCAT44(fStack_e28,fStack_e2c);
        *puVar41 = local_e50;
        auVar77._0_4_ =
             ((float)local_e38 - fVar50) * (float)uVar74 - (fStack_e2c - fVar50) * (float)uVar42;
        auVar77._4_4_ =
             (fVar73 - fVar58) * (float)((ulong)uVar74 >> 0x20) -
             (fStack_e28 - fVar58) * (float)((ulong)uVar42 >> 0x20);
        auVar77._8_4_ =
             (local_e30 - fStack_e48) * (fStack_e2c - fVar50) - (fStack_e24 - fStack_e48) * fVar79;
        auVar77._12_4_ =
             (local_e30 - fStack_e48) * (fStack_e28 - fVar58) - (fStack_e24 - fStack_e48) * fVar80;
        auVar69 = NEON_ext(auVar77,auVar77,4,1);
        fVar90 = auVar69._0_4_;
        fVar91 = auVar69._4_4_;
        fVar73 = fVar90 * fVar90 + fVar91 * fVar91 + auVar77._0_4_ * auVar77._0_4_;
        fVar80 = fVar90 * fVar90 + fVar91 * fVar91 + auVar77._0_4_ * auVar77._0_4_;
        uVar74 = CONCAT44(fVar80,fVar73);
        uVar42 = NEON_frsqrte(uVar74,4);
        fVar79 = (float)uVar42;
        fVar92 = (float)((ulong)uVar42 >> 0x20);
        uVar42 = NEON_frsqrts(uVar74,CONCAT44(fVar92 * fVar92,fVar79 * fVar79),4);
        fVar79 = fVar79 * (float)uVar42;
        fVar92 = fVar92 * (float)((ulong)uVar42 >> 0x20);
        iVar88 = -(uint)(fVar73 <= 0.0);
        iVar89 = -(uint)(fVar80 <= 0.0);
        uVar74 = NEON_frsqrts(uVar74,CONCAT44(fVar92 * fVar92,fVar79 * fVar79),4);
        fVar79 = (float)uVar74 * fVar79;
        fVar92 = (float)((ulong)uVar74 >> 0x20) * fVar92;
        fVar73 = (float)CONCAT13((byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar88 >> 0x18),
                                 CONCAT12((byte)((uint)fVar79 >> 0x10) &
                                          ~(byte)((uint)iVar88 >> 0x10),
                                          CONCAT11((byte)((uint)fVar79 >> 8) &
                                                   ~(byte)((uint)iVar88 >> 8),
                                                   SUB41(fVar79,0) & ~(byte)iVar88)));
        *(float *)(puVar41 + 1) = fStack_e48;
        *(float *)((long)puVar41 + 0x14) = local_e30;
        fVar80 = (float)(CONCAT17((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                                  CONCAT16((byte)((uint)fVar92 >> 0x10) &
                                           ~(byte)((uint)iVar89 >> 0x10),
                                           CONCAT15((byte)((uint)fVar92 >> 8) &
                                                    ~(byte)((uint)iVar89 >> 8),
                                                    CONCAT14(SUB41(fVar92,0) & ~(byte)iVar89,fVar73)
                                                   ))) >> 0x20);
        fVar79 = fVar91 * fVar80;
        auVar78._0_8_ = CONCAT44(fVar79,fVar90 * fVar73);
        auVar78._8_4_ = auVar77._0_4_ * fVar73;
        auVar78._12_4_ = -(fVar50 * fVar90 + fVar58 * fVar91 + auVar77._0_4_ * fStack_e48) * fVar80;
        *(float *)(puVar41 + 4) = fStack_e24;
        *(float *)((long)puVar41 + 0x2c) = fStack_e24;
        iVar88 = *(int *)(lVar45 + 0x58);
        puVar41 = (undefined8 *)0x0;
        if (iVar23 != 0) {
          puVar41 = (undefined8 *)((long)iVar23 + lVar45 + 0x48);
        }
        *(undefined4 *)(lVar45 + 0x44) = 3;
        lVar38 = 0;
        if (iVar88 != 0) {
          lVar38 = (long)iVar88 + lVar45 + 0x58;
        }
        *(undefined1 *)(lVar38 + 3) = 0;
        *(undefined1 *)(lVar38 + 7) = 0;
        auVar57._0_8_ = CONCAT44(-fVar79,-(fVar90 * fVar73));
        auVar57._8_4_ = -auVar78._8_4_;
        auVar57._12_4_ = -auVar78._12_4_;
        uVar74 = auVar78._8_8_;
        puVar41[1] = uVar74;
        *puVar41 = auVar78._0_8_;
        puVar41[3] = auVar57._8_8_;
        puVar41[2] = auVar57._0_8_;
        puVar41[5] = uVar74;
        puVar41[4] = auVar78._0_8_;
        puVar41[7] = uVar74;
        puVar41[6] = auVar78._0_8_;
        *(undefined4 *)(lVar45 + 0x20) = *(undefined4 *)(*(long *)(param_3 + 0xd0) + 0x20);
      }
      iVar23 = local_df8._4_4_ + *(int *)(*(long *)(param_3 + 0x50) + 0x34);
      uVar43 = *(uint *)(puVar21 + (long)local_df8._4_4_ * 4) & (uint)local_df8 |
               (uVar43 + 1 << (ulong)(-iVar23 & 0x1f)) - 1;
      local_df8 = CONCAT44(iVar23,uVar43);
      plVar28 = *(long **)(param_3 + 0xb8);
      if (*plVar28 != 0) {
        puVar27 = *(undefined2 **)(param_3 + 0xd8);
        *(undefined2 *)(param_3 + 0x100) = *puVar27;
        uVar74 = *(undefined8 *)(puVar27 + 2);
        *(undefined4 *)(param_3 + 0x10c) = *(undefined4 *)(puVar27 + 6);
        *(undefined8 *)(param_3 + 0x104) = uVar74;
        (**(code **)(*(long *)*plVar28 + 0x40))
                  ((long *)*plVar28,uVar11,5,**(undefined8 **)(param_3 + 0xe0),
                   (*(undefined8 **)(param_3 + 0xe0))[1],*(undefined8 *)(param_3 + 0xd0),uVar43,
                   *(undefined8 *)(param_3 + 0x118),param_3 + 0x100);
        plVar28 = *(long **)(param_3 + 0xb8);
      }
      FUN_02fa94e8(*(undefined8 *)(param_3 + 0xb0),(undefined8 *)(param_3 + 0xf0),&local_e10,
                   *(undefined8 *)(param_3 + 0xc0),plVar28 + 2,*(undefined8 *)(param_3 + 200),
                   ppuVar1,*(char *)(param_3 + 0x1b0) == '\0',&local_e80);
    }
    uVar48 = uVar48 + 1;
  } while (uVar25 != uVar48);
  local_db0 = PTR_DAT_043724f0 + 0x10;
  if (local_da8 != (long *)0x0) {
    (**(code **)(*local_da8 + 8))();
  }
  return 1;
}


