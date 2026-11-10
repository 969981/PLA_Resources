/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00195d4c; name: FUN_00195d4c
 */


/* WARNING: Removing unreachable block (ram,0x00196878) */

void FUN_00195d4c(long param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  ushort *puVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  float fVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  undefined8 *puVar31;
  long lVar32;
  long *plVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  undefined2 *puVar37;
  undefined1 (*pauVar38) [16];
  undefined8 *puVar39;
  uint uVar40;
  float *pfVar41;
  undefined2 *puVar42;
  undefined8 *puVar43;
  uint *puVar44;
  int iVar45;
  undefined8 *puVar46;
  ulong uVar47;
  byte *pbVar48;
  ulong *puVar49;
  long *plVar50;
  long lVar51;
  float *pfVar52;
  long *plVar53;
  ulong *puVar54;
  float fVar55;
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  float fVar68;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar70 [12];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar83 [16];
  float local_ff0;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined4 local_f88;
  undefined8 local_f80;
  undefined8 local_f70;
  undefined8 uStack_f68;
  long local_f60;
  long lStack_f58;
  undefined1 auStack_f50 [128];
  long *local_ed0 [2];
  long local_ec0;
  long local_eb8;
  long local_eb0;
  undefined8 local_ea8;
  float *local_ea0;
  undefined8 uStack_e98;
  undefined1 local_e90;
  undefined4 local_e8c;
  undefined4 local_e88;
  long local_e80;
  long lStack_e78;
  long local_e70;
  long local_e68;
  long local_e60;
  long local_e58;
  long local_e50;
  undefined8 local_e48;
  long local_e40;
  undefined8 local_e38;
  undefined1 local_e30;
  undefined4 local_e2c;
  undefined4 local_e28;
  long local_e20;
  long lStack_e18;
  long local_e10;
  long lStack_e08;
  long *local_df8 [2];
  long local_de8 [2];
  int local_dd8 [2];
  long local_dd0 [2];
  uint local_dc0 [2];
  undefined8 *local_db8;
  undefined8 local_db0;
  undefined8 local_da8 [5];
  uint local_d80 [2];
  undefined1 *local_d78;
  undefined8 local_d70;
  undefined8 local_d68;
  undefined8 local_d60;
  undefined8 local_d40;
  undefined8 local_d34 [10];
  float local_ce4 [313];
  undefined1 local_800 [1348];
  undefined2 local_2bc [2];
  uint local_2b8 [2];
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  long local_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  float fStack_248;
  float fStack_244;
  undefined2 local_240;
  undefined4 local_23c;
  ulong uStack_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_220;
  undefined1 local_21c;
  undefined2 local_218;
  undefined4 local_214;
  ulong uStack_210;
  undefined4 local_208;
  undefined4 local_204;
  uint local_68 [2];
  
  bVar7 = *(byte *)(*(long *)(param_2 + 0x28) + 3) >> 1;
  bVar8 = *(byte *)(*(long *)(param_3 + 0x28) + 3) >> 1;
  local_68[0] = (uint)bVar7;
  local_68[1] = (uint)bVar8;
  lVar51 = *(long *)(param_1 + 0x68) + (ulong)bVar7 * 4;
  uVar34 = (uint)*(byte *)(lVar51 + 2);
  if (uVar34 != 3) {
    uVar34 = 0;
  }
  uVar25 = (uint)*(byte *)(lVar51 + 2);
  local_2b8[0] = uVar25;
  if (uVar25 != 4) {
    local_2b8[0] = uVar34;
  }
  uVar34 = 1;
  if (uVar25 != *(byte *)(lVar51 + 3)) {
    uVar34 = 2;
  }
  if ((uint)*(byte *)(lVar51 + 1) != (uint)*(byte *)(lVar51 + 3)) {
    local_2b8[0] = uVar34;
  }
  lVar51 = *(long *)(param_1 + 0xf8) + (ulong)bVar8 * 4;
  uVar34 = (uint)*(byte *)(lVar51 + 2);
  if (uVar34 != 3) {
    uVar34 = 0;
  }
  uVar25 = (uint)*(byte *)(lVar51 + 2);
  local_2b8[1] = uVar25;
  if (uVar25 != 4) {
    local_2b8[1] = uVar34;
  }
  uVar34 = 1;
  if (uVar25 != *(byte *)(lVar51 + 3)) {
    uVar34 = 2;
  }
  if ((uint)*(byte *)(lVar51 + 1) != (uint)*(byte *)(lVar51 + 3)) {
    local_2b8[1] = uVar34;
  }
  if (local_2b8[0] == 0 || local_2b8[1] == 0) {
    return;
  }
  local_da8[1] = 0;
  local_da8[0] = 0;
  local_d60 = 0;
  local_d68 = 0;
  lVar51 = 0;
  local_db0 = 0;
  plVar30 = &local_e60;
  local_db8 = &local_d40;
  puVar31 = local_d34;
  local_dc0[0] = 3;
  local_d80[0] = 3;
  local_d70 = 0;
  local_d78 = local_800;
  uVar17 = *(undefined8 *)(PTR_DAT_04372370 + 0x60);
  local_de8[0] = *(long *)(param_1 + 0x148);
  local_df8[1] = *(long **)(param_1 + 0x160);
  local_de8[1] = *(undefined8 *)(param_1 + 0x158);
  local_df8[0] = *(long **)(param_1 + 0x150);
  local_e60 = *local_df8[0];
  local_e58 = local_df8[0][1];
  local_e50 = local_df8[0][2];
  local_e48 = local_df8[0][3];
  local_e38 = 0;
  local_e40 = local_df8[0][4];
  local_e30 = (char)local_df8[0][6];
  local_e2c = *(undefined4 *)((long)local_df8[0] + 0x34);
  lStack_e18 = local_df8[0][9];
  local_e20 = local_df8[0][8];
  lStack_e08 = local_df8[0][0xb];
  local_e10 = local_df8[0][10];
  local_e28 = (int)local_df8[0][7];
  local_ec0 = *local_df8[1];
  local_eb8 = local_df8[1][1];
  local_eb0 = local_df8[1][2];
  local_ea8 = local_df8[1][3];
  local_ea0 = (float *)local_df8[1][4];
  uStack_e98 = 0;
  local_e90 = (char)local_df8[1][6];
  local_e8c = *(undefined4 *)((long)local_df8[1] + 0x34);
  lStack_e78 = local_df8[1][9];
  local_e80 = local_df8[1][8];
  local_e68 = local_df8[1][0xb];
  local_e70 = local_df8[1][10];
  auVar83 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x1e0);
  auVar71 = NEON_ext(auVar83,auVar83,8,1);
  auVar83 = NEON_ext(auVar71,auVar83,8,1);
  local_ed0[1] = &local_ec0;
  local_e88 = (int)local_df8[1][7];
  local_ed0[0] = plVar30;
  do {
    puVar4 = local_dc0 + lVar51 * 0x10;
    lVar32 = local_de8[lVar51];
    uVar34 = local_2b8[lVar51];
    if (uVar34 == 4) {
      plVar50 = local_df8[lVar51];
      lVar29 = param_1 + lVar51 * 0x90;
      lVar36 = *(long *)(lVar29 + 0x80);
      uVar26 = (ulong)*(byte *)(*(long *)(lVar29 + 0x68) + (long)(int)local_68[lVar51] * 4);
      puVar5 = (ushort *)
               (lVar36 + (((ulong)(*(ushort *)(lVar36 + uVar26 * 2) >> 6) & 3) + uVar26) * 2);
      plVar33 = (long *)(lVar32 + 0x70);
      local_ff0 = (float)uVar17;
      puVar39 = (undefined8 *)
                ((long)plVar33 +
                ((long)(int)((uint)puVar5[1] << 0x10) | (ulong)*puVar5) * 0x40 + *plVar33);
      fVar55 = *(float *)*(undefined1 (*) [12])(puVar39 + 4);
      fVar68 = *(float *)((long)puVar39 + 0x24);
      fVar69 = *(float *)(puVar39 + 5);
      auVar70 = *(undefined1 (*) [12])(puVar39 + 4);
      bVar7 = *(byte *)((long)puVar39 + 0x1e);
      local_fb0 = *puVar39;
      uStack_fa8 = puVar39[1];
      uStack_f98 = (ulong)SUB164(*(undefined1 (*) [16])(puVar39 + 2),8);
      local_fa0 = SUB168(*(undefined1 (*) [16])(puVar39 + 2),0);
      FUN_032c9fc0(&local_280,&local_fb0);
      fStack_248 = (float)uStack_f98;
      fStack_244 = uStack_f98._4_4_;
      local_250 = local_fa0;
      if ((char)plVar50[6] == '\0') {
        auVar59._12_4_ = local_ff0;
        auVar59._0_12_ = auVar70;
        if ((bVar7 >> 3 & 1) != 0) goto LAB_00196310;
      }
      else {
        auVar71 = *(undefined1 (*) [16])(plVar50 + 8);
        fStack_248 = (float)uStack_f98 * auVar71._8_4_;
        fStack_244 = uStack_f98._4_4_ * auVar71._12_4_;
        auVar59._0_4_ = fVar55 * auVar71._0_4_;
        auVar59._4_4_ = fVar68 * auVar71._4_4_;
        auVar59._8_4_ = fVar69 * auVar71._8_4_;
        auVar59._12_4_ = local_ff0 * auVar71._12_4_;
        local_250 = CONCAT44(local_fa0._4_4_ * auVar71._4_4_,(float)local_fa0 * auVar71._0_4_);
LAB_00196310:
        plVar30[9] = auVar59._8_8_;
        plVar30[8] = auVar59._0_8_;
        *(undefined1 *)(plVar30 + 6) = 1;
        *(undefined4 *)(plVar30 + 10) = 0;
        plVar30[0xb] = 0;
        *(undefined4 *)((long)plVar30 + 0x54) = 0;
        bVar7 = *(byte *)((long)puVar39 + 0x1e);
        if ((bVar7 >> 3 & 1) == 0) {
          uVar34 = *(uint *)((long)plVar50 + 0x34);
        }
        else {
          uVar34 = (bVar7 >> 5 ^ 0xffffffff) & 1;
        }
        *(uint *)((long)plVar30 + 0x34) = uVar34;
        lVar29 = puVar39[6];
        lVar32 = 0;
        if (lVar29 != 0) {
          lVar32 = lVar29 + (long)(puVar39 + 6);
        }
        *(undefined4 *)(plVar30 + 7) = *(undefined4 *)(lVar32 + 0x20);
        if (lVar32 != 0 && (*(ushort *)(lVar32 + 0x1a) & 1) != 0) {
          iVar22 = *(int *)(lVar32 + 0x40);
          lVar29 = 0;
          if (iVar22 != 0) {
            lVar29 = (long)iVar22 + lVar32 + 0x40;
          }
          FUN_02ffe20c(lVar29,*(undefined4 *)(lVar32 + 0x44));
        }
      }
      FUN_032ca410(auStack_f50 + lVar51 * 0x40,plVar50[4],&local_280);
      plVar30[4] = (long)(auStack_f50 + lVar51 * 0x40);
      lVar29 = puVar39[6];
      lVar32 = 0;
      if (lVar29 != 0) {
        lVar32 = lVar29 + (long)(puVar39 + 6);
      }
      lVar29 = 0;
      if ((*(ushort *)(lVar32 + 0x1a) & 1) != 0) {
        lVar29 = lVar32;
      }
      iVar22 = (**(code **)(*(long *)PTR_DAT_043723b0 + (ulong)*(byte *)(lVar29 + 0x18) * 0x200 +
                           0xa8))(lVar29,puVar4,local_ce4 + lVar51 * 0x150 + -0x17,
                                  local_800 + lVar51 * 0x540);
      if ((-1 < iVar22) && ((char)plVar30[6] != '\0')) {
        uVar34 = *(uint *)(&local_db0 + lVar51 * 8);
        if (0 < (int)uVar34) {
          auVar66 = *(undefined1 (*) [16])(plVar30 + 8);
          auVar71 = *(undefined1 (*) [16])(plVar30 + 10);
          lVar32 = 0;
          lVar29 = *(long *)(local_dc0 + lVar51 * 0x10 + 2);
          fVar80 = auVar66._0_4_;
          fVar55 = auVar71._0_4_;
          fVar81 = auVar66._4_4_;
          fVar68 = auVar71._4_4_;
          fVar82 = auVar66._8_4_;
          fVar69 = auVar71._8_4_;
          if (uVar34 != 1) {
            puVar43 = (undefined8 *)(lVar29 + 0xc);
            puVar46 = puVar31;
            do {
              fVar12 = *(float *)((long)puVar43 + -4);
              lVar32 = lVar32 + 2;
              *(ulong *)((long)puVar46 + -0xc) =
                   CONCAT44(fVar68 + fVar81 * (float)((ulong)*(undefined8 *)((long)puVar43 + -0xc)
                                                     >> 0x20),
                            fVar55 + fVar80 * (float)*(undefined8 *)((long)puVar43 + -0xc));
              *(float *)((long)puVar46 + -4) = fVar69 + fVar82 * fVar12;
              fVar12 = *(float *)(puVar43 + 1);
              *puVar46 = CONCAT44(fVar68 + fVar81 * (float)((ulong)*puVar43 >> 0x20),
                                  fVar55 + fVar80 * (float)*puVar43);
              *(float *)(puVar46 + 1) = fVar69 + fVar82 * fVar12;
              puVar43 = puVar43 + 3;
              puVar46 = puVar46 + 3;
            } while ((ulong)uVar34 - ((ulong)uVar34 & 1) != lVar32);
          }
          if ((uVar34 & 1) != 0) {
            puVar43 = (undefined8 *)(lVar29 + lVar32 * 0xc);
            fVar12 = *(float *)(puVar43 + 1);
            auVar66._0_8_ = *puVar43;
            *(ulong *)(local_ce4 + lVar51 * 0x150 + lVar32 * 3 + -0x17) =
                 CONCAT44(fVar68 + fVar81 * (float)((ulong)auVar66._0_8_ >> 0x20),
                          fVar55 + fVar80 * (float)auVar66._0_8_);
            (local_ce4 + lVar51 * 0x150 + lVar32 * 3 + -0x17)[2] = fVar69 + fVar82 * fVar12;
          }
        }
        *(float **)((ulong)puVar4 | 8) = local_ce4 + lVar51 * 0x150 + -0x17;
        *(int *)((long)&local_db0 + (lVar51 * 0x10 + 1) * 4) = (int)plVar30[7];
        local_da8[lVar51 * 8] = 0;
        local_da8[lVar51 * 8 + 1] = 0;
      }
      local_dd0[lVar51] = *(long *)(local_dc0 + lVar51 * 0x10 + 2);
      local_dd8[lVar51] = 1;
      local_2bc[lVar51] = *(undefined2 *)((long)puVar39 + 0x2c);
      iVar22 = local_dd8[1];
      lVar32 = local_dd0[0];
      lVar29 = local_dd0[1];
      uVar18 = local_2bc[0];
      uVar19 = local_2bc[1];
    }
    else {
      uVar25 = local_68[lVar51];
      lVar36 = (long)(int)uVar25;
      lVar29 = param_1 + lVar51 * 0x90;
      plVar33 = *(long **)(lVar29 + 0x60);
      puVar37 = *(undefined2 **)(lVar29 + 0x88);
      iVar22 = *(byte *)((long)plVar33 + 0x5a) - 1;
      if (iVar22 < 4) {
        bVar7 = *(byte *)(puVar37 + 1);
        puVar42 = puVar37;
      }
      else {
        iVar23 = 0;
        do {
          while( true ) {
            iVar45 = iVar23 + iVar22 >> 1;
            if ((int)(uVar25 - *(byte *)(puVar37 + (long)iVar45 * 2 + 1)) < 0) break;
            puVar42 = puVar37 + ((long)((ulong)(uint)(iVar23 + iVar22) << 0x20) >> 0x21) * 2;
            if ((int)(uVar25 - *(byte *)(puVar37 + (long)iVar45 * 2 + 1)) <
                (int)(uint)*(byte *)((long)puVar42 + 3)) goto LAB_0019611c;
            iVar23 = iVar45 + 1;
            if (iVar22 - iVar23 < 4) goto LAB_001960d8;
          }
          iVar22 = iVar45;
        } while (3 < iVar45 - iVar23);
LAB_001960d8:
        puVar42 = puVar37 + (long)iVar23 * 2;
        bVar7 = *(byte *)(puVar42 + 1);
      }
      iVar22 = uVar25 - bVar7;
      puVar37 = puVar42;
      if (-1 < iVar22) goto LAB_00196110;
      do {
        do {
          puVar42 = puVar37 + 2;
          iVar22 = uVar25 - *(byte *)(puVar37 + 3);
          puVar37 = puVar42;
        } while (iVar22 < 0);
LAB_00196110:
        puVar37 = puVar42;
      } while ((int)(uint)*(byte *)((long)puVar42 + 3) <= iVar22);
LAB_0019611c:
      pauVar1 = (undefined1 (*) [16])(lVar29 + 0x10);
      local_2bc[lVar51] = *puVar42;
      pfVar52 = local_ce4 + lVar51 * 0x150 + -0x17;
      iVar22 = *(int *)(lVar32 + 0x20);
      puVar2 = (uint *)(&local_db0 + lVar51 * 8);
      piVar3 = (int *)((long)&local_db0 + (lVar51 * 0x10 + 1) * 4);
      if ((int)uVar34 < 3) {
        lVar29 = param_1 + lVar51 * 0x90;
        *puVar2 = 3;
        lVar32 = *(long *)(lVar29 + 0x68);
        uVar25 = *(uint *)(lVar29 + 0x90);
        bVar7 = *(byte *)(lVar32 + lVar36 * 4);
        lVar29 = param_1 + lVar51 * 0x90;
        if ((int)(uint)bVar7 < (int)uVar25) {
          auVar70 = SUB1612(*(undefined1 (*) [16])(lVar29 + 0x40),0);
          uVar35 = *(uint *)(*(long *)(lVar29 + 0x70) + (ulong)bVar7 * 4);
          auVar56._0_8_ = CONCAT44(uVar35 >> 0xb,uVar35) & 0x7ff000007ff;
          auVar56._8_4_ = uVar35 >> 0x16;
          pauVar38 = (undefined1 (*) [16])(lVar29 + 0x30);
        }
        else {
          auVar70 = SUB1612(*(undefined1 (*) [16])(lVar29 + 0x20),0);
          uVar26 = *(ulong *)(*(long *)(lVar29 + 0x78) +
                             (ulong)*(ushort *)(*(long *)(lVar29 + 0x80) + (ulong)bVar7 * 2) * 8);
          auVar56._0_8_ = CONCAT44((int)(uVar26 >> 0x15),(int)uVar26) & 0x1fffff001fffff;
          auVar56._8_4_ = (uint)(uVar26 >> 0x2a);
          pauVar38 = pauVar1;
        }
        auVar58._12_4_ = 0;
        auVar58._0_12_ = auVar56;
        auVar71 = NEON_scvtf(auVar58,4);
        fVar55 = *(float *)(*pauVar38 + 8);
        lVar32 = lVar32 + lVar36 * 4;
        lVar29 = param_1 + lVar51 * 0x90;
        *(ulong *)pfVar52 =
             CONCAT44(*(float *)(*pauVar38 + 4) + auVar70._4_4_ * auVar71._4_4_,
                      *(float *)*pauVar38 + auVar70._0_4_ * auVar71._0_4_);
        local_ce4[lVar51 * 0x150 + -0x15] = fVar55 + auVar70._8_4_ * auVar71._8_4_;
        bVar7 = *(byte *)(lVar32 + 1);
        if ((int)(uint)bVar7 < (int)uVar25) {
          auVar70 = SUB1612(*(undefined1 (*) [16])(lVar29 + 0x40),0);
          uVar35 = *(uint *)(*(long *)(lVar29 + 0x70) + (ulong)bVar7 * 4);
          auVar57._0_8_ = CONCAT44(uVar35 >> 0xb,uVar35) & 0x7ff000007ff;
          auVar57._8_4_ = uVar35 >> 0x16;
          pauVar38 = (undefined1 (*) [16])(lVar29 + 0x30);
        }
        else {
          auVar70 = SUB1612(*(undefined1 (*) [16])(lVar29 + 0x20),0);
          uVar26 = *(ulong *)(*(long *)(lVar29 + 0x78) +
                             (ulong)*(ushort *)(*(long *)(lVar29 + 0x80) + (ulong)bVar7 * 2) * 8);
          auVar57._0_8_ = CONCAT44((int)(uVar26 >> 0x15),(int)uVar26) & 0x1fffff001fffff;
          auVar57._8_4_ = (uint)(uVar26 >> 0x2a);
          pauVar38 = pauVar1;
        }
        auVar60._12_4_ = 0;
        auVar60._0_12_ = auVar57;
        auVar71 = NEON_scvtf(auVar60,4);
        fVar55 = *(float *)(*pauVar38 + 8);
        *(ulong *)(local_ce4 + lVar51 * 0x150 + -0x14) =
             CONCAT44(*(float *)(*pauVar38 + 4) + auVar70._4_4_ * auVar71._4_4_,
                      *(float *)*pauVar38 + auVar70._0_4_ * auVar71._0_4_);
        local_ce4[lVar51 * 0x150 + -0x12] = fVar55 + auVar70._8_4_ * auVar71._8_4_;
        bVar7 = *(byte *)(lVar32 + 2);
        pfVar41 = local_ce4 + lVar51 * 0x150 + -0x11;
        if ((int)(uint)bVar7 < (int)uVar25) {
          lVar29 = param_1 + lVar51 * 0x90;
          uVar35 = *(uint *)(*(long *)(lVar29 + 0x70) + (ulong)bVar7 * 4);
          auVar61._0_8_ = CONCAT44(uVar35 >> 0xb,uVar35) & 0x7ff000007ff;
          auVar61._8_4_ = uVar35 >> 0x16;
          auVar61._12_4_ = 0;
          fVar55 = *(float *)(lVar29 + 0x40);
          fVar68 = *(float *)(lVar29 + 0x44);
          fVar69 = *(float *)(lVar29 + 0x48);
          auVar71 = NEON_scvtf(auVar61,4);
          auVar70 = auVar71._0_12_;
          pauVar38 = (undefined1 (*) [16])(lVar29 + 0x30);
        }
        else {
          lVar29 = param_1 + lVar51 * 0x90;
          uVar26 = *(ulong *)(*(long *)(lVar29 + 0x78) +
                             (ulong)*(ushort *)(*(long *)(lVar29 + 0x80) + (ulong)bVar7 * 2) * 8);
          auVar62._0_8_ = CONCAT44((int)(uVar26 >> 0x15),(int)uVar26) & 0x1fffff001fffff;
          auVar62._8_4_ = (uint)(uVar26 >> 0x2a);
          auVar62._12_4_ = 0;
          fVar55 = *(float *)(lVar29 + 0x20);
          fVar68 = *(float *)(lVar29 + 0x24);
          fVar69 = *(float *)(lVar29 + 0x28);
          auVar71 = NEON_scvtf(auVar62,4);
          auVar70 = auVar71._0_12_;
          pauVar38 = pauVar1;
        }
        auVar71 = *pauVar38;
        *(ulong *)pfVar41 =
             CONCAT44(auVar71._4_4_ + fVar68 * auVar70._4_4_,auVar71._0_4_ + fVar55 * auVar70._0_4_)
        ;
        local_ce4[lVar51 * 0x150 + -0xf] = auVar71._8_4_ + fVar69 * auVar70._8_4_;
        bVar8 = *(byte *)(lVar32 + 3);
        if ((uint)bVar7 == (uint)bVar8) {
          local_ce4[lVar51 * 0x150 + -0xc] = local_ce4[lVar51 * 0x150 + -0xf];
          *(undefined8 *)(local_ce4 + lVar51 * 0x150 + -0xe) = *(undefined8 *)pfVar41;
          if (uVar34 == 2) goto LAB_00196790;
LAB_001966e0:
          iVar23 = 1;
        }
        else {
          if (uVar25 == bVar8 || (int)uVar25 < (int)(uint)bVar8) {
            lVar29 = param_1 + lVar51 * 0x90;
            uVar26 = *(ulong *)(*(long *)(lVar29 + 0x78) +
                               (ulong)*(ushort *)(*(long *)(lVar29 + 0x80) + (ulong)bVar8 * 2) * 8);
            auVar64._0_8_ = CONCAT44((int)(uVar26 >> 0x15),(int)uVar26) & 0x1fffff001fffff;
            auVar64._8_4_ = (uint)(uVar26 >> 0x2a);
            auVar64._12_4_ = 0;
            auVar71 = NEON_scvtf(auVar64,4);
            fVar55 = *(float *)(lVar29 + 0x20) * auVar71._0_4_;
            fVar68 = *(float *)(lVar29 + 0x24) * auVar71._4_4_;
            fVar69 = *(float *)(lVar29 + 0x28) * auVar71._8_4_;
            auVar70 = SUB1612(*pauVar1,0);
          }
          else {
            lVar29 = param_1 + lVar51 * 0x90;
            uVar25 = *(uint *)(*(long *)(lVar29 + 0x70) + (ulong)(uint)bVar8 * 4);
            auVar63._0_8_ = CONCAT44(uVar25 >> 0xb,uVar25) & 0x7ff000007ff;
            auVar63._8_4_ = uVar25 >> 0x16;
            auVar63._12_4_ = 0;
            auVar71 = NEON_scvtf(auVar63,4);
            fVar55 = *(float *)(lVar29 + 0x40) * auVar71._0_4_;
            fVar68 = *(float *)(lVar29 + 0x44) * auVar71._4_4_;
            fVar69 = *(float *)(lVar29 + 0x48) * auVar71._8_4_;
            auVar70 = SUB1612(*(undefined1 (*) [16])(lVar29 + 0x30),0);
          }
          *(ulong *)(local_ce4 + lVar51 * 0x150 + -0xe) =
               CONCAT44(auVar70._4_4_ + fVar68,auVar70._0_4_ + fVar55);
          local_ce4[lVar51 * 0x150 + -0xc] = auVar70._8_4_ + fVar69;
          if (uVar34 != 2) goto LAB_001966e0;
LAB_00196790:
          if (*(byte *)(lVar32 + 3) <
              (*(byte *)(lVar32 + 1) & *(byte *)(param_1 + lVar51 * 0x90 + 0x58))) {
            *puVar2 = 4;
            iVar23 = 1;
          }
          else {
            local_ce4[lVar51 * 0x150 + -9] = local_ce4[lVar51 * 0x150 + -0x15];
            *(undefined8 *)(local_ce4 + lVar51 * 0x150 + -0xb) = *(undefined8 *)pfVar52;
            *(undefined8 *)(local_ce4 + lVar51 * 0x150 + -8) = *(undefined8 *)pfVar41;
            *(undefined8 *)(local_ce4 + lVar51 * 0x150 + -5) =
                 *(undefined8 *)(local_ce4 + lVar51 * 0x150 + -0xe);
            local_ce4[lVar51 * 0x150 + -6] = local_ce4[lVar51 * 0x150 + -0xf];
            local_ce4[lVar51 * 0x150 + -3] = local_ce4[lVar51 * 0x150 + -0xc];
            *(undefined8 *)(local_ce4 + lVar51 * 0x150 + -2) = *(undefined8 *)pfVar52;
            local_ce4[lVar51 * 0x150] = local_ce4[lVar51 * 0x150 + -0x15];
            local_ce4[lVar51 * 0x150 + -0xc] = local_ce4[lVar51 * 0x150 + -0x15];
            iVar23 = 2;
            *(undefined8 *)(local_ce4 + lVar51 * 0x150 + -0xe) = *(undefined8 *)pfVar52;
          }
        }
        local_dd8[lVar51] = iVar23;
        plVar33 = local_dd0 + lVar51;
        *piVar3 = iVar22;
        *plVar33 = (long)pfVar52;
LAB_00196834:
        cVar9 = (char)plVar30[6];
      }
      else {
        if (uVar34 != 3) goto LAB_001966e0;
        lVar32 = param_1 + lVar51 * 0x90;
        plVar53 = (long *)(lVar32 + 0x68);
        lVar29 = *plVar53;
        plVar50 = (long *)(lVar32 + 0x80);
        lVar32 = *plVar50;
        uVar26 = (ulong)*(byte *)(lVar29 + lVar36 * 4);
        uVar10 = *(ushort *)(lVar32 + uVar26 * 2);
        uVar11 = uVar10 >> 4 & 3;
        if (uVar11 == 0) {
          uVar34 = (uint)(uVar10 >> 8);
          if (0x6f < uVar34) {
            uVar34 = 0x70;
          }
          uVar26 = (ulong)*(ushort *)(lVar32 + uVar26 * 2 + 2);
LAB_00196ae8:
          lVar27 = *(long *)(param_1 + lVar51 * 0x90 + 0x78);
          if ((int)(uVar34 - 1) < 1) {
            uVar24 = 0;
            if (uVar34 != 0) goto LAB_00196bb4;
          }
          else {
            auVar71 = *(undefined1 (*) [16])(param_1 + lVar51 * 0x90 + 0x20);
            auVar66 = *pauVar1;
            uVar24 = 0;
            puVar49 = (ulong *)(lVar27 + uVar26 * 8 + 8);
            puVar39 = puVar31;
            do {
              uVar47 = puVar49[-1];
              auVar72._0_8_ = CONCAT44((int)(uVar47 >> 0x15),(int)uVar47) & 0x1fffff001fffff;
              auVar72._8_4_ = (uint)(uVar47 >> 0x2a);
              auVar72._12_4_ = 0;
              auVar73 = NEON_scvtf(auVar72,4);
              uVar24 = uVar24 + 2;
              *(ulong *)((long)puVar39 + -0xc) =
                   CONCAT44(auVar66._4_4_ + auVar71._4_4_ * auVar73._4_4_,
                            auVar66._0_4_ + auVar71._0_4_ * auVar73._0_4_);
              *(float *)((long)puVar39 + -4) = auVar66._8_4_ + auVar71._8_4_ * auVar73._8_4_;
              uVar47 = *puVar49;
              auVar74._0_8_ = CONCAT44((int)(uVar47 >> 0x15),(int)uVar47) & 0x1fffff001fffff;
              auVar74._8_4_ = (uint)(uVar47 >> 0x2a);
              auVar74._12_4_ = 0;
              auVar73 = NEON_scvtf(auVar74,4);
              *puVar39 = CONCAT44(auVar66._4_4_ + auVar71._4_4_ * auVar73._4_4_,
                                  auVar66._0_4_ + auVar71._0_4_ * auVar73._0_4_);
              *(float *)(puVar39 + 1) = auVar66._8_4_ + auVar71._8_4_ * auVar73._8_4_;
              puVar49 = puVar49 + 2;
              puVar39 = puVar39 + 3;
            } while ((long)uVar24 < (long)(int)(uVar34 - 1));
            if ((int)uVar24 < (int)uVar34) {
LAB_00196bb4:
              uVar26 = *(ulong *)(lVar27 + uVar26 * 8 + (uVar24 & 0xffffffff) * 8);
              pfVar41 = local_ce4 + lVar51 * 0x150 + (uVar24 & 0xffffffff) * 3 + -0x17;
              auVar65._0_8_ = CONCAT44((int)(uVar26 >> 0x15),(int)uVar26) & 0x1fffff001fffff;
              auVar65._8_4_ = (uint)(uVar26 >> 0x2a);
              auVar65._12_4_ = 0;
              lVar27 = param_1 + lVar51 * 0x90;
              auVar66 = NEON_scvtf(auVar65,4);
              auVar71 = *pauVar1;
              auVar67._0_8_ =
                   CONCAT44(auVar71._4_4_ + *(float *)(lVar27 + 0x24) * auVar66._4_4_,
                            auVar71._0_4_ + *(float *)(lVar27 + 0x20) * auVar66._0_4_);
              auVar67._8_4_ = auVar71._8_4_ + *(float *)(lVar27 + 0x28) * auVar66._8_4_;
              auVar67._12_4_ = auVar71._12_4_ + *(float *)(lVar27 + 0x2c) * auVar66._12_4_;
              *(undefined8 *)pfVar41 = auVar67._0_8_;
LAB_00196ed8:
              pfVar41[2] = auVar67._8_4_;
            }
          }
        }
        else {
          lVar27 = lVar29 + lVar36 * 4;
          bVar7 = *(byte *)(lVar27 + 1);
          if ((bVar7 == *(byte *)(lVar27 + 3)) && (*(char *)(lVar27 + 2) == '\x03')) {
            uVar24 = plVar33[3];
            auVar66 = *(undefined1 (*) [16])(plVar33 + 2);
            auVar71 = *(undefined1 (*) [16])(plVar33 + 4);
            if (bVar7 != 0) {
              lVar27 = 0;
              auVar66._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(plVar33 + 2);
              do {
                iVar45 = (int)lVar27;
                fVar55 = auVar71._0_4_;
                fVar69 = (float)((ulong)auVar66._0_8_ >> 0x20);
                fVar68 = auVar71._8_4_;
                iVar23 = iVar45 + (*(byte *)((long)plVar33 + (long)iVar45 * 4 + *plVar33 + 3) & 0xfe
                                  );
                fVar80 = auVar83._0_4_ * (fVar55 - (float)auVar66._0_8_);
                fVar81 = auVar83._4_4_ * (auVar71._4_4_ - fVar69);
                fVar82 = auVar83._8_4_ * (fVar68 - (float)uVar24);
                local_280 = CONCAT44(iVar23,iVar45 + 1);
                uVar34 = *(uint *)((ulong)&local_280 | (ulong)(iVar23 <= (int)(uint)bVar7) << 2);
                lVar27 = (long)(int)uVar34;
                pbVar48 = (byte *)((long)plVar33 + lVar27 * 4 + *plVar33);
                bVar13 = *pbVar48 >> 4;
                bVar8 = *pbVar48 & 0xf;
                bVar14 = pbVar48[1] >> 4;
                bVar6 = pbVar48[1] & 0xf;
                bVar15 = pbVar48[2] >> 4;
                bVar16 = pbVar48[2] & 0xf;
                auVar66._0_8_ =
                     CONCAT44(fVar69 + (float)(byte)(bVar14 * bVar14) * fVar81,
                              (float)auVar66._0_8_ + (float)(byte)(bVar13 * bVar13) * fVar80);
                fVar69 = (float)uVar24 + (float)(byte)(bVar15 * bVar15) * fVar82;
                auVar66._8_4_ = fVar69;
                auVar66._12_4_ = 0;
                auVar71._4_4_ = auVar71._4_4_ - (float)(byte)(bVar6 * bVar6) * fVar81;
                auVar71._0_4_ = fVar55 - (float)(byte)(bVar8 * bVar8) * fVar80;
                uVar24 = (ulong)(uint)fVar69;
                auVar71._8_4_ = fVar68 - (float)(byte)(bVar16 * bVar16) * fVar82;
                auVar71._12_4_ = 0;
              } while (uVar34 != bVar7);
            }
          }
          else {
            lVar27 = *plVar33;
            if ((int)*(uint *)(plVar33 + 1) < 1) {
LAB_0019699c:
              auVar66 = *(undefined1 (*) [16])(plVar33 + 2);
              auVar71 = *(undefined1 (*) [16])(plVar33 + 4);
              uVar24 = 0xffffffff;
            }
            else {
              uVar24 = 0;
              pbVar48 = (byte *)((long)plVar33 + lVar27 + 3);
              bVar7 = *pbVar48;
              if ((bVar7 & 1) == 0) goto LAB_00196988;
              do {
                do {
                  uVar24 = uVar24 + 1;
                  pbVar48 = pbVar48 + 4;
                  if (*(uint *)(plVar33 + 1) == uVar24) goto LAB_0019699c;
                  bVar7 = *pbVar48;
                } while ((bVar7 & 1) != 0);
LAB_00196988:
              } while (uVar25 != bVar7 >> 1);
              auVar66 = *(undefined1 (*) [16])(plVar33 + 2);
              auVar71 = *(undefined1 (*) [16])(plVar33 + 4);
              if ((int)uVar24 == 0) goto LAB_00196abc;
            }
            uVar47 = auVar66._8_8_;
            lVar28 = 0;
            do {
              iVar45 = (int)lVar28;
              fVar55 = auVar71._0_4_;
              fVar69 = (float)((ulong)auVar66._0_8_ >> 0x20);
              fVar68 = auVar71._8_4_;
              iVar23 = iVar45 + (*(byte *)((long)plVar33 + (long)iVar45 * 4 + lVar27 + 3) & 0xfe);
              fVar80 = auVar83._0_4_ * (fVar55 - (float)auVar66._0_8_);
              fVar81 = auVar83._4_4_ * (auVar71._4_4_ - fVar69);
              fVar82 = auVar83._8_4_ * (fVar68 - (float)uVar47);
              local_280 = CONCAT44(iVar23,iVar45 + 1);
              iVar23 = *(int *)((ulong)&local_280 | (ulong)(iVar23 <= (int)uVar24) << 2);
              lVar28 = (long)iVar23;
              pbVar48 = (byte *)((long)plVar33 + lVar28 * 4 + lVar27);
              bVar16 = *pbVar48 >> 4;
              bVar7 = *pbVar48 & 0xf;
              bVar13 = pbVar48[1] >> 4;
              bVar8 = pbVar48[1] & 0xf;
              bVar14 = pbVar48[2] >> 4;
              bVar6 = pbVar48[2] & 0xf;
              auVar66._0_8_ =
                   CONCAT44(fVar69 + (float)(byte)(bVar13 * bVar13) * fVar81,
                            (float)auVar66._0_8_ + (float)(byte)(bVar16 * bVar16) * fVar80);
              fVar69 = (float)uVar47 + (float)(byte)(bVar14 * bVar14) * fVar82;
              auVar66._8_4_ = fVar69;
              auVar66._12_4_ = 0;
              auVar71._4_4_ = auVar71._4_4_ - (float)(byte)(bVar8 * bVar8) * fVar81;
              auVar71._0_4_ = fVar55 - (float)(byte)(bVar7 * bVar7) * fVar80;
              uVar47 = (ulong)(uint)fVar69;
              auVar71._8_4_ = fVar68 - (float)(byte)(bVar6 * bVar6) * fVar82;
              auVar71._12_4_ = 0;
            } while (iVar23 != (int)uVar24);
          }
LAB_00196abc:
          uVar26 = (ulong)*(ushort *)(lVar32 + uVar26 * 2 + 2);
          uVar34 = (uint)(byte)(uVar10 >> 8);
          if (0x6f < uVar34) {
            uVar34 = 0x70;
          }
          fVar55 = auVar66._0_4_;
          fVar68 = auVar66._4_4_;
          fVar69 = auVar66._8_4_;
          fVar80 = auVar66._12_4_;
          if (uVar11 == 2) {
            auVar66 = *(undefined1 (*) [16])PTR_DAT_04372428;
            lVar27 = *(long *)(param_1 + lVar51 * 0x90 + 0x78) + uVar26 * 8;
            auVar73._0_4_ = (auVar71._0_4_ - fVar55) * auVar66._0_4_;
            auVar73._4_4_ = (auVar71._4_4_ - fVar68) * auVar66._4_4_;
            auVar73._8_4_ = (auVar71._8_4_ - fVar69) * auVar66._8_4_;
            auVar73._12_4_ = (auVar71._12_4_ - fVar80) * auVar66._12_4_;
            if ((int)(uVar34 - 1) < 1) {
              uVar26 = 0;
              if (uVar34 != 0) goto LAB_00196e60;
            }
            else {
              uVar26 = 0;
              puVar39 = puVar31;
              do {
                uVar10 = *(ushort *)(lVar27 + (uVar26 ^ 3) * 2);
                auVar75._0_8_ = (ulong)CONCAT24(uVar10 >> 5,(uint)uVar10) & 0x1f0000001f;
                uVar24 = uVar26 ^ 2;
                uVar26 = uVar26 + 2;
                auVar75._8_2_ = uVar10 >> 10;
                auVar75._10_6_ = 0;
                auVar71 = NEON_scvtf(auVar75,4);
                *(ulong *)((long)puVar39 + -0xc) =
                     CONCAT44(fVar68 + auVar73._4_4_ * auVar71._4_4_,
                              fVar55 + auVar73._0_4_ * auVar71._0_4_);
                *(float *)((long)puVar39 + -4) = fVar69 + auVar73._8_4_ * auVar71._8_4_;
                uVar10 = *(ushort *)(lVar27 + uVar24 * 2);
                auVar76._0_8_ = (ulong)CONCAT24(uVar10 >> 5,(uint)uVar10) & 0x1f0000001f;
                auVar76._8_2_ = uVar10 >> 10;
                auVar76._10_6_ = 0;
                auVar71 = NEON_scvtf(auVar76,4);
                *puVar39 = CONCAT44(fVar68 + auVar73._4_4_ * auVar71._4_4_,
                                    fVar55 + auVar73._0_4_ * auVar71._0_4_);
                *(float *)(puVar39 + 1) = fVar69 + auVar73._8_4_ * auVar71._8_4_;
                puVar39 = puVar39 + 3;
              } while ((long)uVar26 < (long)(int)(uVar34 - 1));
              if ((int)uVar26 < (int)uVar34) {
LAB_00196e60:
                uVar10 = *(ushort *)(lVar27 + (ulong)((uint)uVar26 ^ 3) * 2);
                uVar25 = uVar10 & 0x1f;
                uVar40 = uVar10 >> 5 & 0x1f;
                uVar35 = (uint)(uVar10 >> 10);
LAB_00196eac:
                auVar79._4_4_ = uVar40;
                auVar79._0_4_ = uVar25;
                auVar79._8_4_ = uVar35;
                auVar79._12_4_ = 0;
                auVar71 = NEON_scvtf(auVar79,4);
                auVar67._0_8_ =
                     CONCAT44(fVar68 + auVar73._4_4_ * auVar71._4_4_,
                              fVar55 + auVar73._0_4_ * auVar71._0_4_);
                auVar67._8_4_ = fVar69 + auVar73._8_4_ * auVar71._8_4_;
                auVar67._12_4_ = fVar80 + auVar73._12_4_ * auVar71._12_4_;
                pfVar41 = local_ce4 + lVar51 * 0x150 + (uVar26 & 0xffffffff) * 3 + -0x17;
                *(undefined8 *)pfVar41 = auVar67._0_8_;
                goto LAB_00196ed8;
              }
            }
          }
          else if (uVar11 == 1) {
            auVar66 = *(undefined1 (*) [16])PTR_DAT_04372430;
            lVar27 = *(long *)(param_1 + lVar51 * 0x90 + 0x78) + uVar26 * 8;
            auVar73._0_4_ = (auVar71._0_4_ - fVar55) * auVar66._0_4_;
            auVar73._4_4_ = (auVar71._4_4_ - fVar68) * auVar66._4_4_;
            auVar73._8_4_ = (auVar71._8_4_ - fVar69) * auVar66._8_4_;
            auVar73._12_4_ = (auVar71._12_4_ - fVar80) * auVar66._12_4_;
            if ((int)(uVar34 - 1) < 1) {
              uVar26 = 0;
              if (uVar34 != 0) goto LAB_00196e90;
            }
            else {
              uVar26 = 0;
              puVar44 = (uint *)(lVar27 + 4);
              puVar39 = puVar31;
              do {
                uVar25 = *puVar44;
                auVar77._0_8_ = CONCAT44(uVar25 >> 0xb,uVar25) & 0x7ff000007ff;
                auVar77._8_4_ = uVar25 >> 0x16;
                auVar77._12_4_ = 0;
                auVar71 = NEON_scvtf(auVar77,4);
                uVar26 = uVar26 + 2;
                *(ulong *)((long)puVar39 + -0xc) =
                     CONCAT44(fVar68 + auVar73._4_4_ * auVar71._4_4_,
                              fVar55 + auVar73._0_4_ * auVar71._0_4_);
                *(float *)((long)puVar39 + -4) = fVar69 + auVar73._8_4_ * auVar71._8_4_;
                uVar25 = puVar44[-1];
                puVar44 = puVar44 + 2;
                auVar78._0_8_ = CONCAT44(uVar25 >> 0xb,uVar25) & 0x7ff000007ff;
                auVar78._8_4_ = uVar25 >> 0x16;
                auVar78._12_4_ = 0;
                auVar71 = NEON_scvtf(auVar78,4);
                *puVar39 = CONCAT44(fVar68 + auVar73._4_4_ * auVar71._4_4_,
                                    fVar55 + auVar73._0_4_ * auVar71._0_4_);
                *(float *)(puVar39 + 1) = fVar69 + auVar73._8_4_ * auVar71._8_4_;
                puVar39 = puVar39 + 3;
              } while ((long)uVar26 < (long)(int)(uVar34 - 1));
              if ((int)uVar26 < (int)uVar34) {
LAB_00196e90:
                uVar35 = *(uint *)(lVar27 + (ulong)((uint)uVar26 | 1) * 4);
                uVar25 = uVar35 & 0x7ff;
                uVar40 = uVar35 >> 0xb & 0x7ff;
                uVar35 = uVar35 >> 0x16;
                goto LAB_00196eac;
              }
            }
          }
          else {
            if (uVar11 == 0) goto LAB_00196ae8;
            FUN_0331fefc(&local_fb0,&local_280,0x200);
            auVar66._0_8_ = FUN_0332448c(&local_fb0,"Compression method #");
            auVar66._0_8_ =
                 FUN_0332452c(auVar66._0_8_,
                              *(ushort *)(*plVar50 + (ulong)*(byte *)(*plVar53 + lVar36 * 4) * 2) >>
                              4 & 3);
            FUN_0332448c(auVar66._0_8_," not implemented");
            iVar23 = FUN_03320b30(0x902f09ed,&local_280,
                                  "../..\\Geometry/Collide/DataStructures/StaticMeshTree/hkcdStaticMeshTreeDecoder.inl"
                                  ,0x95);
            if (iVar23 != 0) {
              CallSupervisor(0x26);
            }
            FUN_0331ff7c(&local_fb0);
            lVar32 = *plVar50;
            lVar29 = *plVar53;
          }
        }
        pbVar48 = (byte *)(lVar29 + lVar36 * 4);
        *puVar2 = uVar34;
        uVar26 = (ulong)*pbVar48;
        if ((*(ushort *)(lVar32 + uVar26 * 2) & 0xc0) != 0) {
          iVar22 = (uint)*(ushort *)(lVar32 + uVar26 * 2 + 4) << 0x10;
        }
        iVar23 = 1;
        *piVar3 = iVar22;
        local_dd8[lVar51] = 1;
        plVar33 = local_dd0 + lVar51;
        *plVar33 = (long)pfVar52;
        uVar34 = *(ushort *)(lVar32 + (ulong)*pbVar48 * 2) & 0xf;
        uVar25 = uVar34 << 1;
        if (2 < uVar34) {
          uVar25 = 7;
        }
        *puVar4 = uVar25;
        if ((char)plVar30[6] == '\0') goto LAB_00196834;
        *(int *)(plVar30 + 7) = iVar22;
        FUN_02ffe20c(pfVar52,*puVar2,*(undefined4 *)((long)plVar30 + 0x34),plVar30 + 8,plVar30 + 7,
                     plVar30 + 10);
        iVar23 = 1;
        cVar9 = (char)plVar30[6];
      }
      iVar22 = local_dd8[1];
      lVar32 = local_dd0[0];
      lVar29 = local_dd0[1];
      uVar18 = local_2bc[0];
      uVar19 = local_2bc[1];
      if (cVar9 != '\0') {
        *plVar33 = (long)pfVar52;
        if (iVar23 == 1) {
          uVar34 = *puVar2;
          if (0 < (int)uVar34) goto LAB_0019685c;
        }
        else {
          uVar34 = 8;
LAB_0019685c:
          auVar66 = *(undefined1 (*) [16])(plVar30 + 8);
          auVar71 = *(undefined1 (*) [16])(plVar30 + 10);
          fVar80 = auVar66._0_4_;
          fVar55 = auVar71._0_4_;
          fVar81 = auVar66._4_4_;
          fVar68 = auVar71._4_4_;
          fVar82 = auVar66._8_4_;
          fVar69 = auVar71._8_4_;
          if (uVar34 == 1) {
            lVar32 = 0;
          }
          else {
            lVar32 = 0;
            puVar39 = puVar31;
            do {
              lVar32 = lVar32 + 2;
              *(ulong *)((long)puVar39 + -0xc) =
                   CONCAT44(fVar68 + fVar81 * (float)((ulong)*(undefined8 *)((long)puVar39 + -0xc)
                                                     >> 0x20),
                            fVar55 + fVar80 * (float)*(undefined8 *)((long)puVar39 + -0xc));
              *(float *)((long)puVar39 + -4) = fVar69 + fVar82 * *(float *)((long)puVar39 + -4);
              *puVar39 = CONCAT44(fVar68 + fVar81 * (float)((ulong)*puVar39 >> 0x20),
                                  fVar55 + fVar80 * (float)*puVar39);
              *(float *)(puVar39 + 1) = fVar69 + fVar82 * *(float *)(puVar39 + 1);
              puVar39 = puVar39 + 3;
            } while ((ulong)uVar34 - ((ulong)uVar34 & 1) != lVar32);
            if ((uVar34 & 1) == 0) goto LAB_0019690c;
          }
          pfVar52 = local_ce4 + lVar51 * 0x150 + lVar32 * 3 + -0x17;
          *(ulong *)pfVar52 =
               CONCAT44(fVar68 + fVar81 * (float)((ulong)*(undefined8 *)pfVar52 >> 0x20),
                        fVar55 + fVar80 * (float)*(undefined8 *)pfVar52);
          pfVar52[2] = fVar69 + fVar82 * pfVar52[2];
        }
LAB_0019690c:
        *piVar3 = (int)plVar30[7];
        lVar32 = local_dd0[0];
        lVar29 = local_dd0[1];
        uVar18 = local_2bc[0];
        uVar19 = local_2bc[1];
      }
    }
    if (lVar51 == 1) break;
    lVar51 = lVar51 + 1;
    plVar30 = local_ed0[lVar51];
    puVar31 = puVar31 + 0xa8;
    local_dd8[1] = iVar22;
    local_dd0[0] = lVar32;
    local_dd0[1] = lVar29;
    local_2bc[0] = uVar18;
    local_2bc[1] = uVar19;
  } while( true );
  if (0 < local_dd8[0]) {
    uVar34 = local_68[1] << 1;
    uVar25 = local_68[0] << 1;
    bVar20 = local_2b8[0] == 4;
    puVar49 = (ulong *)((ulong)&local_f60 | 4);
    puVar54 = (ulong *)((ulong)&local_f70 | 4);
    bVar21 = local_2b8[1] == 4;
    lVar51 = 0;
    do {
      uVar35 = uVar25 | (uint)lVar51 | *(int *)(param_1 + 0x94) << 8;
      lVar27 = *(long *)(param_1 + 0x150);
      lVar36 = *(long *)(lVar27 + 0x28);
      if (lVar36 == 0) {
LAB_00197098:
        iVar23 = *(int *)(*(long *)(param_1 + 0x50) + 0x34) + *(int *)(lVar27 + 0x1c);
        local_e48 = CONCAT44(iVar23,(uVar35 + 1 << (ulong)(-iVar23 & 0x1f)) - 1 |
                                    *(uint *)(PTR_DAT_04372420 + (long)*(int *)(lVar27 + 0x1c) * 4)
                                    & *(uint *)(lVar27 + 0x18));
        local_db8 = (undefined8 *)(lVar32 + (ulong)((uint)lVar51 << 2) * 0xc);
        if (0 < iVar22) {
          uVar26 = 0;
          lVar36 = 0;
          do {
            while( true ) {
              uVar35 = uVar34 | (uint)lVar36 | *(int *)(param_1 + 0x124) << 8;
              lVar28 = *(long *)(param_1 + 0x160);
              lVar27 = *(long *)(lVar28 + 0x28);
              if (lVar27 == 0) break;
              uVar24 = (**(code **)(*(long *)PTR_DAT_043723b0 +
                                    (ulong)*(byte *)(lVar27 + 0x18) * 0x40 + 0x4020))
                                 (lVar27,uVar35 << (ulong)(*(uint *)(param_1 + 0x134) & 0x1f));
              if ((uVar24 & 1) != 0) {
                lVar28 = *(long *)(param_1 + 0x160);
                break;
              }
LAB_00197130:
              lVar36 = lVar36 + 1;
              uVar26 = uVar26 + 4;
              if (iVar22 <= lVar36) goto LAB_00197034;
            }
            plVar30 = *(long **)(param_1 + 0x140);
            local_f60 = plVar30[2];
            lStack_f58 = plVar30[3];
            local_f70 = **(undefined8 **)(param_1 + 0x168);
            uStack_f68 = (*(undefined8 **)(param_1 + 0x168))[1];
            iVar23 = *(int *)(*(long *)(param_1 + 0xe0) + 0x34) + *(int *)(lVar28 + 0x1c);
            local_ea8 = CONCAT44(iVar23,(uVar35 + 1 << (ulong)(-iVar23 & 0x1f)) - 1 |
                                        *(uint *)(PTR_DAT_04372420 +
                                                 (long)*(int *)(lVar28 + 0x1c) * 4) &
                                        *(uint *)(lVar28 + 0x18));
            plVar30 = (long *)*plVar30;
            if (plVar30 != (long *)0x0) {
              (**(code **)(*plVar30 + 0x40))
                        (plVar30,uVar18,5,**(undefined8 **)(param_1 + 0x150),
                         (*(undefined8 **)(param_1 + 0x150))[1],*(undefined8 *)(param_1 + 0x148),
                         local_e48 & 0xffffffff,0,&local_f60);
              (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x140) + 0x40))
                        ((long *)**(undefined8 **)(param_1 + 0x140),uVar19,5,
                         **(undefined8 **)(param_1 + 0x160),(*(undefined8 **)(param_1 + 0x160))[1],
                         *(undefined8 *)(param_1 + 0x158),local_ea8 & 0xffffffff,0,&local_f70);
              lVar27 = *(long *)(param_1 + 0x140);
              if (*(long *)(lVar27 + 8) != 0) {
                local_280 = CONCAT62(local_280._2_6_,(undefined2)local_f60);
                uVar24 = *puVar49;
                *(int *)((ulong *)((ulong)&local_280 | 4) + 1) = (int)puVar49[1];
                *(ulong *)((ulong)&local_280 | 4) = uVar24;
                puVar31 = *(undefined8 **)(param_1 + 0x150);
                local_270 = *puVar31;
                uStack_268 = puVar31[1];
                local_260 = (undefined4)puVar31[2];
                uStack_25c = (undefined4)((ulong)puVar31[2] >> 0x20);
                uStack_258 = (float)local_e48;
                local_fb0 = CONCAT62(local_fb0._2_6_,(undefined2)local_f70);
                uVar24 = *puVar54;
                local_250 = 0;
                *(int *)((ulong *)((ulong)&local_fb0 | 4) + 1) = (int)puVar54[1];
                *(ulong *)((ulong)&local_fb0 | 4) = uVar24;
                local_fa0 = **(undefined8 **)(param_1 + 0x160);
                uStack_f98 = (*(undefined8 **)(param_1 + 0x160))[1];
                local_f90 = *(undefined8 *)(param_1 + 0x158);
                local_f88 = (undefined4)local_ea8;
                local_f80 = 0;
                plVar30 = *(long **)(lVar27 + 8);
                uVar24 = (**(code **)(*plVar30 + 0x40))
                                   (plVar30,5,*(char *)(param_1 + 0x1f0) == '\0',&local_280,
                                    &local_fb0);
                if ((uVar24 & 1) == 0) goto LAB_00197130;
              }
            }
            local_d78 = (undefined1 *)(lVar29 + (uVar26 & 0xfffffffc) * 0xc);
            puVar31 = (undefined8 *)(param_1 + 0x170);
            if (bVar20 || bVar21) {
              puVar31 = &local_fb0;
              FUN_032ca498(&local_fb0,local_ea0,local_e40);
            }
            lVar27 = *(long *)(param_1 + 0x140);
            plVar30 = *(long **)(param_1 + 0x1f8);
            if ((*(byte *)(plVar30 + 1) >> 1 & 1) != 0) {
              (**(code **)(*plVar30 + 0x30))
                        (plVar30,**(long **)(param_1 + 0x138),lVar27,local_dc0,&local_f60,&local_e60
                         ,local_d80,&local_f70,&local_ec0,puVar31);
              goto LAB_00197130;
            }
            local_290 = plVar30[2];
            uVar24 = (**(code **)(**(long **)(param_1 + 0x138) + (ulong)local_dc0[0] * 0x38 +
                                  (ulong)local_d80[0] * 8 + 0x3cb8))
                               (local_dc0,local_d80,puVar31,*(byte *)(plVar30 + 1),&local_2b0);
            if ((uVar24 & 1) == 0) goto LAB_00197130;
            local_208 = 5;
            local_204 = 0;
            local_260 = (undefined4)local_290;
            fVar55 = (float)*(undefined8 *)(local_ea0 + 8);
            fVar68 = (float)((ulong)*(undefined8 *)(local_ea0 + 8) >> 0x20);
            fVar69 = (float)*(undefined8 *)(local_ea0 + 10);
            fVar80 = (float)((ulong)*(undefined8 *)(local_ea0 + 10) >> 0x20);
            uStack_278 = CONCAT44((float)((ulong)*(undefined8 *)(local_ea0 + 0xe) >> 0x20) +
                                  fVar80 * fStack_2a8 +
                                  local_ea0[3] * local_2b0 + local_ea0[7] * fStack_2ac,
                                  (float)*(undefined8 *)(local_ea0 + 0xe) +
                                  fVar69 * fStack_2a8 +
                                  local_ea0[2] * local_2b0 + local_ea0[6] * fStack_2ac);
            local_280 = CONCAT44((float)((ulong)*(undefined8 *)(local_ea0 + 0xc) >> 0x20) +
                                 fVar68 * fStack_2a8 +
                                 local_ea0[1] * local_2b0 + local_ea0[5] * fStack_2ac,
                                 (float)*(undefined8 *)(local_ea0 + 0xc) +
                                 fVar55 * fStack_2a8 +
                                 *local_ea0 * local_2b0 + local_ea0[4] * fStack_2ac);
            auVar83._0_8_ =
                 CONCAT44(fVar68 * fStack_298 + local_ea0[1] * local_2a0 + local_ea0[5] * fStack_29c
                          ,fVar55 * fStack_298 + *local_ea0 * local_2a0 + local_ea0[4] * fStack_29c)
            ;
            auVar83._8_4_ =
                 fVar69 * fStack_298 + local_ea0[2] * local_2a0 + local_ea0[6] * fStack_29c;
            auVar83._12_4_ =
                 fVar80 * fStack_298 + local_ea0[3] * local_2a0 + local_ea0[7] * fStack_29c;
            uStack_268 = auVar83._8_8_;
            fStack_248 = (float)local_e48;
            local_240 = (undefined2)local_f60;
            local_23c = (undefined4)*puVar49;
            uStack_238 = *puVar49 >> 0x20;
            fStack_244 = (float)CONCAT31((int3)((uint)fStack_244 >> 8),0xf);
            if (local_e60 == 0) {
              uStack_258 = 0xffffffff;
              uStack_254 = 0xffffffff;
              local_250 = CONCAT44(local_250._4_4_,0xffffff);
              if (local_ec0 != 0) goto LAB_001974b4;
LAB_001974d8:
              local_228 = 0xffffff;
              local_230 = 0xffffffffffffffff;
            }
            else {
              uStack_258 = (undefined4)*(undefined8 *)(local_e60 + 0xb0);
              uStack_254 = (undefined4)((ulong)*(undefined8 *)(local_e60 + 0xb0) >> 0x20);
              local_250 = CONCAT44(local_250._4_4_,*(undefined4 *)(local_e60 + 0x50));
              if (local_ec0 == 0) goto LAB_001974d8;
LAB_001974b4:
              local_230 = *(undefined8 *)(local_ec0 + 0xb0);
              local_228 = *(undefined4 *)(local_ec0 + 0x50);
            }
            local_220 = (undefined4)local_ea8;
            local_218 = (undefined2)local_f70;
            local_214 = (undefined4)*puVar54;
            uStack_210 = *puVar54 >> 0x20;
            local_21c = *(undefined1 *)(lVar27 + 0x20);
            local_270 = auVar83._0_8_;
            (**(code **)(*plVar30 + 0x28))(plVar30,&local_280);
            lVar36 = lVar36 + 1;
            uVar26 = uVar26 + 4;
          } while (lVar36 < iVar22);
        }
      }
      else {
        uVar26 = (**(code **)(*(long *)PTR_DAT_043723b0 + (ulong)*(byte *)(lVar36 + 0x18) * 0x40 +
                             0x4020))(lVar36,uVar35 << (ulong)(*(uint *)(param_1 + 0x130) & 0x1f));
        if ((uVar26 & 1) != 0) {
          lVar27 = *(long *)(param_1 + 0x150);
          goto LAB_00197098;
        }
      }
LAB_00197034:
      lVar51 = lVar51 + 1;
    } while (lVar51 < local_dd8[0]);
  }
  return;
}


