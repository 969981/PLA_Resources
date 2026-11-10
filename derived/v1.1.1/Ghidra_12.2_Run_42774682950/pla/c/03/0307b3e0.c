/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307b3e0; name: FUN_0307b3e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0307b3e0(long param_1,undefined8 *param_2,undefined8 param_3,long param_4,uint param_5,
                 long *param_6)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  float *pfVar16;
  ulong uVar17;
  undefined1 (*pauVar18) [12];
  long lVar19;
  float *pfVar20;
  ulong uVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  long *plVar25;
  byte *pbVar26;
  undefined8 uVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  uint uVar43;
  undefined1 auVar44 [12];
  undefined1 auVar46 [16];
  undefined1 auVar45 [12];
  int iVar49;
  int iVar50;
  undefined1 auVar47 [16];
  int iVar51;
  undefined1 auVar48 [16];
  undefined8 uVar52;
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined8 uVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar76;
  undefined8 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined4 uVar84;
  undefined8 uVar85;
  undefined8 local_1ba0;
  uint local_1b88;
  undefined8 local_1b80;
  undefined8 local_1b30;
  undefined8 uStack_1b28;
  uint local_1b20;
  float local_1b1c;
  undefined8 local_1b10;
  undefined8 uStack_1b08;
  undefined8 uStack_1b00;
  undefined8 uStack_1af8;
  uint local_1af0;
  uint local_1aec;
  uint local_1ae8;
  uint local_1ae4;
  undefined8 local_1ae0;
  undefined8 uStack_1ad8;
  undefined8 local_1ad0;
  undefined8 uStack_1ac8;
  undefined8 local_1ac0;
  undefined8 uStack_1ab8;
  undefined8 local_1ab0;
  undefined8 uStack_1aa8;
  undefined8 local_1aa0;
  undefined8 uStack_1a98;
  undefined8 local_1a90;
  long local_1a88;
  undefined8 local_1a80;
  undefined8 local_1a78;
  undefined8 local_1a70;
  undefined8 local_1a68;
  undefined8 local_1a60;
  undefined8 local_1a58;
  undefined8 local_1a50;
  undefined8 local_1a48;
  undefined8 local_1a40;
  undefined8 local_1a38;
  undefined8 local_1a30;
  undefined8 local_1a28;
  undefined8 local_1a20;
  undefined8 uStack_1a18;
  undefined8 local_1a10;
  undefined8 uStack_1a08;
  undefined8 local_1a00;
  undefined8 uStack_19f8;
  undefined8 local_19f0;
  undefined8 uStack_19e8;
  undefined8 local_19e0;
  undefined8 uStack_19d8;
  undefined8 local_19d0;
  undefined4 local_18c8;
  ulong local_18c0;
  undefined8 local_18b0;
  undefined8 uStack_18a8;
  long local_18a0;
  undefined *local_1890;
  long *local_1888;
  undefined1 *local_1880;
  undefined4 local_1878;
  undefined1 auStack_1870 [2632];
  undefined2 local_e28;
  undefined8 local_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined4 local_cb8;
  ulong local_cb0;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  long local_c90;
  undefined *local_c80;
  long *local_c78;
  undefined1 *local_c70;
  undefined4 local_c68;
  undefined1 auStack_c60 [2632];
  undefined2 local_218;
  undefined8 *local_200;
  long local_1f8;
  uint local_1e8;
  long local_1e0;
  long local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  long local_1c0;
  uint local_1b0;
  long local_1a8;
  long local_1a0;
  undefined8 *local_198;
  undefined1 auStack_190 [48];
  long local_160;
  undefined8 local_f0;
  undefined8 uStack_e8;
  
  local_c70 = auStack_c60;
  local_c68 = 0x800;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_e08 = _UNK_03889a88;
  local_e10 = _DAT_03889a80;
  auVar58 = NEON_fmov(0x3f800000,4);
  local_c78 = (long *)0x0;
  uStack_de8 = _UNK_03888d18;
  local_df0 = _DAT_03888d10;
  local_1890 = PTR_DAT_043724f8 + 0x10;
  local_1880 = auStack_1870;
  local_c90 = 0;
  local_dc0 = 0;
  local_cb8 = 0;
  local_cb0 = 0xd;
  local_218 = 0xffff;
  local_1888 = (long *)0x0;
  local_1878 = 0x800;
  local_18a0 = 0;
  local_19d0 = 0;
  local_18c8 = 0;
  local_18c0 = 0xd;
  local_e28 = 0xffff;
  uStack_df8 = DAT_0388a148;
  local_e00 = DAT_0388a140;
  uStack_dc8 = 0;
  local_dd0 = 0;
  uStack_dd8 = _UNK_0388a138;
  local_de0 = _DAT_0388a130;
  uVar63 = auVar58._8_8_;
  uVar57 = auVar58._0_8_;
  uStack_19d8 = 0;
  local_19e0 = 0;
  uStack_1a18 = _UNK_03889a88;
  local_1a20 = _DAT_03889a80;
  uStack_1a08 = DAT_0388a148;
  local_1a10 = DAT_0388a140;
  uStack_19f8 = _UNK_03888d18;
  local_1a00 = _DAT_03888d10;
  uStack_19e8 = _UNK_0388a138;
  local_19f0 = _DAT_0388a130;
  local_18b0 = uVar57;
  uStack_18a8 = uVar63;
  local_ca0 = uVar57;
  uStack_c98 = uVar63;
  local_c80 = local_1890;
  if (param_5 - 1 != 0 && 0 < (int)param_5) {
    FUN_0307c3f0(param_4,0,param_5 - 1);
  }
  local_1c0 = *(long *)(*(long *)(param_1 + 8) + 0x150) + (ulong)*(uint *)(param_2 + 0x10) * 0x80;
  local_1c8 = param_2;
  if (0 < (int)param_5) {
    local_1ba0 = 0xff7fffeeff7fffee;
    pfVar20 = (float *)(param_4 + 0xb0);
    uVar21 = 1;
    local_1b88 = 0xffffffff;
    uVar24 = 0;
    do {
      puVar9 = local_1c8;
      lVar22 = param_4 + uVar24 * 0x60;
      pauVar23 = (undefined1 (*) [16])(lVar22 + 0x30);
      uVar85 = *(undefined8 *)(lVar22 + 0x38);
      uVar34 = *(undefined8 *)*pauVar23;
      fVar32 = (float)((uint)*(ushort *)(*(long *)(lVar22 + 0x20) + 0x38) << 0x10);
      plVar25 = (long *)(lVar22 + 0x18);
      puVar12 = (uint *)*plVar25;
      if (puVar12 == (uint *)0x0) {
        local_1b80 = 0;
LAB_0307b778:
        uVar27 = 0;
      }
      else {
        local_1b0 = puVar12[0x28];
        uVar27 = *(undefined8 *)(param_1 + 0x490);
        local_1a8 = local_1c8[0xf];
        if (*(char *)(local_1a8 + 0x18) == '\x15') {
          plVar15 = (long *)(local_1a8 + ((ulong)(local_1b0 >> 0x1a) & 0x38) + 0x48);
          local_1a8 = *plVar15;
          if (local_1a8 == 0) {
            local_1a8 = 0;
          }
          else {
            local_1a8 = local_1a8 + (long)plVar15;
          }
        }
        if (*(char *)(local_1a8 + 0x19) == '\x03') {
          local_dc0 = 0;
          local_cb8 = 0;
          local_c90 = 0;
          local_cb0 = 8;
          local_e10 = *local_1c8;
          uStack_e08 = local_1c8[1];
          local_e00 = local_1c8[2];
          uStack_df8 = local_1c8[3];
          local_df0 = local_1c8[4];
          uStack_de8 = local_1c8[5];
          local_de0 = local_1c8[6];
          uStack_dd8 = local_1c8[7];
          local_1b20 = 0x34000000;
          uStack_dc8 = SUB168(*(undefined1 (*) [16])(local_1c8 + 8),8);
          local_dd0 = SUB168(*(undefined1 (*) [16])(local_1c8 + 8),0);
          local_ca0 = uVar57;
          uStack_c98 = uVar63;
          uVar11 = FUN_032c91c4(local_1c8,&DAT_03aae430,&local_1b20);
          uVar1 = local_cb0;
          if (((uVar11 & 1) != 0) &&
             (local_cb0 = local_cb0 | 4,
             ABS(*(float *)(puVar9 + 7)) <= 1.1920929e-07 &&
             (ABS(*(float *)(puVar9 + 6)) <= 1.1920929e-07 &&
             ABS(*(float *)((long)puVar9 + 0x34)) <= 1.1920929e-07))) {
            local_cb0 = uVar1 | 5;
          }
          local_218 = 0xffff;
          local_1b20 = local_1b0;
          (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_1c8[0xf] + 0x18) * 0x200 + 0xb8))
                    (local_1c8[0xf],&local_1b20,1,&local_e10);
          if (((byte)local_cb0 >> 4 & 1) == 0) {
            local_1a0 = local_c90;
          }
          else {
            local_1a0 = FUN_02fed7a0(&local_e10,0,uVar27);
          }
          local_198 = &local_e10;
          local_1b80 = CONCAT44(*(undefined4 *)(local_1a0 + 0x20),*(undefined4 *)(local_1a0 + 0x20))
          ;
          puVar12 = (uint *)*plVar25;
          if (puVar12 == (uint *)0x0) goto LAB_0307b778;
        }
        else {
          local_198 = local_1c8;
          local_1b80 = CONCAT44(*(undefined4 *)(local_1a8 + 0x20),*(undefined4 *)(local_1a8 + 0x20))
          ;
          local_1a0 = local_1a8;
        }
        puVar9 = local_1c8;
        if ((*(byte *)(*(long *)(puVar12 + 0x26) + 0xb) & 1) == 0) goto LAB_0307b778;
        local_1b20 = *puVar12;
        local_1b1c = (float)puVar12[1];
        auVar58 = *(undefined1 (*) [16])(puVar12 + 4);
        uStack_1af8 = *(undefined8 *)(puVar12 + 10);
        uStack_1b00 = *(undefined8 *)(puVar12 + 8);
        uStack_1b08 = auVar58._8_8_;
        local_1b10 = auVar58._0_8_;
        local_1af0 = puVar12[0xc];
        uStack_1ad8 = *(undefined8 *)(puVar12 + 0x12);
        local_1ae0 = *(undefined8 *)(puVar12 + 0x10);
        local_1aec = puVar12[0xd];
        uStack_1ac8 = *(undefined8 *)(puVar12 + 0x16);
        local_1ad0 = *(undefined8 *)(puVar12 + 0x14);
        local_1ae8 = puVar12[0xe];
        uStack_1ab8 = *(undefined8 *)(puVar12 + 0x1a);
        local_1ac0 = *(undefined8 *)(puVar12 + 0x18);
        local_1ae4 = puVar12[0xf];
        uStack_1aa8 = *(undefined8 *)(puVar12 + 0x1e);
        local_1ab0 = *(undefined8 *)(puVar12 + 0x1c);
        local_1a28 = *(undefined8 *)(puVar12 + 0x3e);
        local_1a38 = *(undefined8 *)(puVar12 + 0x3a);
        local_1a48 = *(undefined8 *)(puVar12 + 0x36);
        local_1a58 = *(undefined8 *)(puVar12 + 0x32);
        local_1a68 = *(undefined8 *)(puVar12 + 0x2e);
        local_1a78 = *(undefined8 *)(puVar12 + 0x2a);
        local_1a88 = *(long *)(puVar12 + 0x26);
        uStack_1a98 = *(undefined8 *)(puVar12 + 0x22);
        local_1aa0 = *(undefined8 *)*(undefined1 (*) [16])(puVar12 + 0x20);
        auVar61 = *(undefined1 (*) [16])(puVar12 + 0x20);
        local_1a90 = *(undefined8 *)(puVar12 + 0x24);
        local_1a80 = *(undefined8 *)(puVar12 + 0x28);
        local_1a70 = *(undefined8 *)(puVar12 + 0x2c);
        local_1a60 = *(undefined8 *)(puVar12 + 0x30);
        local_1a50 = *(undefined8 *)(puVar12 + 0x34);
        local_1a40 = *(undefined8 *)(puVar12 + 0x38);
        local_1a30 = *(undefined8 *)(puVar12 + 0x3c);
        pbVar26 = (byte *)(param_4 + uVar24 * 0x60 + 0x10);
        if ((*pbVar26 >> 2 & 1) != 0) {
          if ((local_1b1c < 0.001) && (*(char *)(param_4 + uVar24 * 0x60 + 0x11) == '\x03'))
          goto LAB_0307b778;
          auVar60 = *pauVar23;
          iVar49 = -(uint)(auVar58._4_4_ == auVar60._4_4_);
          iVar50 = -(uint)(auVar58._8_4_ == auVar60._8_4_);
          iVar51 = -(uint)(auVar58._12_4_ == auVar60._12_4_);
          uVar43 = (uint)(byte)(-(auVar58._0_4_ == auVar60._0_4_) & (byte)_DAT_03889700);
          auVar45._0_8_ =
               CONCAT17((byte)((uint)iVar49 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x38),
                        (uint7)CONCAT14((byte)iVar49 & (byte)((ulong)_DAT_03889700 >> 0x20),uVar43))
          ;
          auVar45[8] = (byte)iVar50 & (byte)_UNK_03889708;
          auVar45[9] = (byte)((uint)iVar50 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
          auVar45[10] = (byte)((uint)iVar50 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
          auVar45[0xb] = (byte)((uint)iVar50 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
          auVar69[0xc] = (byte)iVar51 & (byte)((ulong)_UNK_03889708 >> 0x20);
          auVar69._0_12_ = auVar45;
          auVar69[0xd] = (byte)((uint)iVar51 >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
          auVar69[0xe] = (byte)((uint)iVar51 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
          auVar69[0xf] = (byte)((uint)iVar51 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
          if ((~(uVar43 + (int)((ulong)auVar45._0_8_ >> 0x20) + auVar45._8_4_ + auVar69._12_4_) & 7)
              != 0) {
            uStack_1b08 = auVar60._8_8_;
            local_1b10 = auVar60._0_8_;
            fVar28 = auVar58._8_4_ * auVar60._8_4_ +
                     auVar58._0_4_ * auVar60._0_4_ + auVar58._4_4_ * auVar60._4_4_;
            auVar58._0_12_ = auVar61._0_12_;
            auVar58._12_4_ = fVar28 * auVar61._12_4_;
            local_1b1c = local_1b1c * fVar28;
            uStack_1a98 = auVar58._8_8_;
            local_1aa0 = auVar61._0_8_;
          }
        }
        lVar13 = *(long *)(param_1 + 8);
        local_200 = (undefined8 *)
                    (*(long *)(lVar13 + 0x38) +
                    ((ulong)*(uint *)(param_4 + uVar24 * 0x60 + 0x14) & 0xffffff) * 0xc0);
        local_1f8 = *(long *)(lVar13 + 0x150) + (ulong)*(uint *)(local_200 + 0x10) * 0x80;
        uVar43 = puVar12[0x28];
        if (local_1b88 != uVar43) {
          uVar27 = *(undefined8 *)(param_1 + 0x490);
          local_1a8 = local_1c8[0xf];
          if (*(char *)(local_1a8 + 0x18) == '\x15') {
            plVar15 = (long *)(local_1a8 + ((ulong)(uVar43 >> 0x1a) & 0x38) + 0x48);
            local_1a8 = *plVar15;
            if (local_1a8 == 0) {
              local_1a8 = 0;
            }
            else {
              local_1a8 = local_1a8 + (long)plVar15;
            }
          }
          local_1b0 = uVar43;
          if (*(char *)(local_1a8 + 0x19) == '\x03') {
            local_dc0 = 0;
            local_cb8 = 0;
            local_c90 = 0;
            local_cb0 = 8;
            local_e10 = *local_1c8;
            uStack_e08 = local_1c8[1];
            local_e00 = local_1c8[2];
            uStack_df8 = local_1c8[3];
            local_df0 = local_1c8[4];
            uStack_de8 = local_1c8[5];
            local_de0 = local_1c8[6];
            uStack_dd8 = local_1c8[7];
            local_1b30._0_4_ = 0x34000000;
            uStack_dc8 = SUB168(*(undefined1 (*) [16])(local_1c8 + 8),8);
            local_dd0 = SUB168(*(undefined1 (*) [16])(local_1c8 + 8),0);
            local_ca0 = uVar57;
            uStack_c98 = uVar63;
            uVar11 = FUN_032c91c4(local_1c8,&DAT_03aae430,&local_1b30);
            uVar1 = local_cb0;
            if (((uVar11 & 1) != 0) &&
               (local_cb0 = local_cb0 | 4,
               ABS(*(float *)(puVar9 + 7)) <= 1.1920929e-07 &&
               (ABS(*(float *)(puVar9 + 6)) <= 1.1920929e-07 &&
               ABS(*(float *)((long)puVar9 + 0x34)) <= 1.1920929e-07))) {
              local_cb0 = uVar1 | 5;
            }
            local_218 = 0xffff;
            local_1b30 = CONCAT44(local_1b30._4_4_,local_1b0);
            (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_1c8[0xf] + 0x18) * 0x200 + 0xb8))
                      (local_1c8[0xf],&local_1b30,1,&local_e10);
            if (((byte)local_cb0 >> 4 & 1) == 0) {
              local_1a0 = local_c90;
            }
            else {
              local_1a0 = FUN_02fed7a0(&local_e10,0,uVar27);
            }
            local_198 = &local_e10;
            lVar13 = *(long *)(param_1 + 8);
            local_1b88 = *(uint *)(*plVar25 + 0xa0);
          }
          else {
            local_198 = local_1c8;
            local_1a0 = local_1a8;
            local_1b88 = uVar43;
          }
          local_1b80 = CONCAT44(*(undefined4 *)(local_1a0 + 0x20),*(undefined4 *)(local_1a0 + 0x20))
          ;
        }
        iVar49 = FUN_0307ade0(lVar13 + 0x518,param_3,&local_1c8,&local_200,auStack_190);
        puVar9 = local_200;
        local_1a0 = local_160;
        if (iVar49 < 0) {
LAB_0307c010:
          uVar27 = 0;
        }
        else {
          lVar13 = *plVar25;
          local_1e8 = *(uint *)(lVar13 + 0xa4);
          lVar19 = *(long *)(param_1 + 0x498);
          local_1e0 = local_200[0xf];
          if (*(char *)(local_1e0 + 0x18) == '\x15') {
            plVar15 = (long *)(local_1e0 + ((ulong)(local_1e8 >> 0x1a) & 0x38) + 0x48);
            local_1e0 = *plVar15;
            if (local_1e0 == 0) {
              local_1e0 = 0;
            }
            else {
              local_1e0 = local_1e0 + (long)plVar15;
            }
          }
          if (*(char *)(local_1e0 + 0x19) == '\x03') {
            lVar3 = 0;
            if ((*(byte *)(lVar13 + 0x95) & 4) != 0) {
              lVar3 = lVar13 + 0xc0;
            }
            if ((*(byte *)(lVar13 + 0x95) >> 2 & 1) == 0) {
              local_19d0 = 0;
              local_18c8 = 0;
              local_18a0 = 0;
              local_18c0 = 8;
              local_1a20 = *local_200;
              uStack_1a18 = local_200[1];
              local_1a10 = local_200[2];
              uStack_1a08 = local_200[3];
              local_1a00 = local_200[4];
              uStack_19f8 = local_200[5];
              local_19f0 = local_200[6];
              uStack_19e8 = local_200[7];
              local_1b30._0_4_ = 0x34000000;
              uStack_19d8 = SUB168(*(undefined1 (*) [16])(local_200 + 8),8);
              local_19e0 = SUB168(*(undefined1 (*) [16])(local_200 + 8),0);
              local_18b0 = uVar57;
              uStack_18a8 = uVar63;
              uVar11 = FUN_032c91c4(local_200,&DAT_03aae430,&local_1b30);
              uVar1 = local_18c0;
              if (((uVar11 & 1) != 0) &&
                 (local_18c0 = local_18c0 | 4,
                 ABS(*(float *)(puVar9 + 7)) <= 1.1920929e-07 &&
                 (ABS(*(float *)(puVar9 + 6)) <= 1.1920929e-07 &&
                 ABS(*(float *)((long)puVar9 + 0x34)) <= 1.1920929e-07))) {
                local_18c0 = uVar1 | 5;
              }
              local_e28 = 0xffff;
              local_1b30 = CONCAT44(local_1b30._4_4_,local_1e8);
              (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_200[0xf] + 0x18) * 0x200 + 0xb8))
                        (local_200[0xf],&local_1b30,1,&local_1a20);
              if (((byte)local_18c0 >> 4 & 1) == 0) {
                local_1d8 = local_18a0;
              }
              else {
                local_1d8 = FUN_02fed7a0(&local_1a20,0,lVar19);
              }
              local_1d0 = &local_1a20;
            }
            else {
              FUN_02fda8b8(lVar19,lVar3,lVar3 + 0x10,lVar3 + 0x20,lVar3 + 0x30);
              *(undefined4 *)(lVar19 + 0x20) = *(undefined4 *)(lVar3 + 0x3c);
              if (*(float *)(lVar3 + 0x2c) == (float)((ulong)*(undefined8 *)(lVar3 + 0x38) >> 0x20)
                  && (*(float *)(lVar3 + 0x28) == (float)*(undefined8 *)(lVar3 + 0x38) &&
                     (*(float *)(lVar3 + 0x20) == (float)*(undefined8 *)(lVar3 + 0x30) &&
                     *(float *)(lVar3 + 0x24) ==
                     (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20)))) {
                iVar49 = *(int *)(lVar19 + 0x40);
                if (iVar49 == 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = (long)iVar49 + lVar19 + 0x40;
                }
                *(undefined8 *)(lVar13 + 0x24) = *(undefined8 *)(lVar13 + 0x18);
                *(undefined4 *)(lVar13 + 0x2c) = *(undefined4 *)(lVar13 + 0x20);
                *(undefined4 *)(lVar19 + 0x44) = 3;
              }
              local_1d0 = local_200;
              local_1d8 = lVar19;
            }
          }
          else {
            local_1d0 = local_200;
            local_1d8 = local_1e0;
          }
          iVar49 = FUN_0307abf0(&local_1c8,&local_200,&local_1b20,&local_1b10,auStack_190);
          if (iVar49 - 2U < 2) {
            local_1b1c = *(float *)(*plVar25 + 4);
            uVar10 = (**(code **)(*param_6 + 0x20))
                               (param_6,param_1,&local_1c8,&local_200,&local_1b20,auStack_190);
            uVar27 = 0;
            *(undefined1 *)(*plVar25 + 0x90) = uVar10;
          }
          else {
            if (iVar49 != 0) goto LAB_0307c010;
            local_1b30 = local_1b10;
            uStack_1b28 = uStack_1b08;
            if (*(char *)(local_1d8 + 0x19) == '\x04') {
              iVar49 = FUN_0307afb0(&local_1c8,&local_200,auStack_190,local_1a88,&local_1b30);
            }
            else {
              iVar49 = FUN_030769b0(&LAB_0307c380,&LAB_0307c3c0,auStack_190,local_1a88 + 0x10,
                                    &local_1b30);
            }
            local_1b1c = *(float *)(*plVar25 + 4);
            uVar10 = (**(code **)(*param_6 + 0x20))
                               (param_6,param_1,&local_1c8,&local_200,&local_1b20,auStack_190);
            uVar27 = 0;
            *(undefined1 *)(*plVar25 + 0x90) = uVar10;
            if (-1 < iVar49) {
              uVar34 = NEON_fmov(0x3e800000,4);
              lVar13 = *plVar25;
              local_1ba0 = CONCAT44(fVar32 * (float)((ulong)uVar34 >> 0x20),fVar32 * (float)uVar34);
              if (*(char *)(lVar13 + 0x90) != '\x02') {
                local_1ba0 = 0xff7fffeeff7fffee;
              }
              *pbVar26 = *pbVar26 | 2;
              *(byte *)(lVar13 + 0x96) = *(byte *)(lVar13 + 0x96) | 2;
              uVar27 = CONCAT44(*(undefined4 *)(local_1d8 + 0x20),*(undefined4 *)(local_1d8 + 0x20))
              ;
              uVar34 = local_1b30;
              uVar85 = uStack_1b28;
            }
          }
        }
      }
      uVar1 = uVar24 + 1;
      fVar28 = (float)uVar34;
      fVar35 = (float)((ulong)uVar34 >> 0x20);
      fVar38 = (float)uVar85;
      fVar41 = (float)((ulong)uVar85 >> 0x20);
      if ((long)uVar1 < (long)(int)param_5) {
        lVar13 = param_4 + uVar24 * 0x60;
        uVar37 = *(undefined8 *)(lVar13 + 0x48);
        uVar33 = *(undefined8 *)(lVar13 + 0x40);
        lVar13 = param_4 + uVar24 * 0x60;
        auVar58 = *pauVar23;
        pfVar16 = pfVar20;
        uVar17 = (ulong)param_5;
        uVar11 = uVar21;
        do {
          cVar5 = *(char *)((long)pfVar16 + -0x3f);
          if ((cVar5 != '\x03') && ((*(byte *)(pfVar16 + -0x10) & 5) == 1)) {
            lVar19 = *plVar25;
            fVar76 = auVar58._0_4_;
            fVar36 = auVar58._4_4_;
            fVar39 = auVar58._8_4_;
            if (lVar19 == 0) {
              pauVar18 = (undefined1 (*) [12])(param_4 + uVar11 * 0x60 + 0x30);
            }
            else {
              if ((*(char *)(lVar19 + 0x90) == '\x02') &&
                 (fVar66 = pfVar16[-4] * pfVar16[-8], fVar73 = pfVar16[-3] * pfVar16[-7],
                 fVar75 = pfVar16[-2] * pfVar16[-6], fVar67 = fVar66 + fVar73 + fVar75,
                 fVar75 = fVar66 + fVar73 + fVar75,
                 auVar61._0_4_ = fVar28 * (pfVar16[-8] - pfVar16[-4] * fVar67),
                 auVar61._4_4_ = fVar35 * (pfVar16[-7] - pfVar16[-3] * fVar75),
                 auVar61._8_4_ = fVar38 * (pfVar16[-6] - pfVar16[-2] * fVar67),
                 auVar61._12_4_ = fVar41 * (pfVar16[-5] - pfVar16[-1] * fVar75),
                 auVar60 = NEON_ext(auVar61,auVar61,8,1),
                 auVar61._0_4_ + auVar61._4_4_ + auVar60._0_4_ < 0.0)) goto LAB_0307b80c;
              pauVar18 = (undefined1 (*) [12])(pfVar16 + -8);
              if (*(long *)(pfVar16 + -0xe) != 0) {
                if (*(int *)(lVar19 + 0xa0) != *(int *)(*(long *)(pfVar16 + -0xe) + 0xa0)) break;
                auVar60._0_4_ = (*pfVar16 - *(float *)(lVar13 + 0x50)) * fVar76;
                auVar60._4_4_ = (pfVar16[1] - *(float *)(lVar13 + 0x54)) * fVar36;
                auVar60._8_4_ = (pfVar16[2] - *(float *)(lVar13 + 0x58)) * fVar39;
                auVar60._12_4_ = (pfVar16[3] - *(float *)(lVar13 + 0x5c)) * auVar58._12_4_;
                auVar61 = NEON_ext(auVar60,auVar60,8,1);
                if (fVar32 < auVar60._0_4_ + auVar60._4_4_ + auVar61._0_4_) goto LAB_0307b80c;
              }
            }
            uVar52 = *(undefined8 *)*(undefined1 (*) [16])(pfVar16 + -4);
            auVar61 = *(undefined1 (*) [16])(pfVar16 + -4);
            fVar75 = auVar61._0_4_;
            fVar55 = auVar61._4_4_;
            fVar56 = auVar61._8_4_;
            fVar67 = (float)uVar33;
            fVar73 = (float)((ulong)uVar33 >> 0x20);
            fVar66 = (float)uVar37;
            if (cVar5 == '\x01') {
              fVar66 = fVar66 * fVar56 + fVar67 * fVar75 + fVar73 * fVar55;
              if (fVar66 * fVar66 < 0.5) goto LAB_0307b80c;
            }
            else if (cVar5 == '\x02') {
              auVar60 = *(undefined1 (*) [16])(pfVar16 + -8);
              auVar69 = NEON_ext(auVar61,auVar61,8,1);
              uVar68 = NEON_ext(auVar61._0_8_,auVar69._0_8_,4,1);
              auVar69 = NEON_ext(auVar60,auVar60,8,1);
              uVar77 = NEON_ext(auVar60._0_8_,auVar69._0_8_,4,1);
              auVar70._0_4_ = (float)uVar77 * fVar75 - (float)uVar68 * auVar60._0_4_;
              auVar70._4_4_ =
                   (float)((ulong)uVar77 >> 0x20) * fVar55 -
                   (float)((ulong)uVar68 >> 0x20) * auVar60._4_4_;
              auVar70._8_4_ = auVar60._0_4_ * fVar56 - fVar75 * auVar60._8_4_;
              auVar70._12_4_ = auVar60._4_4_ * auVar61._12_4_ - fVar55 * auVar60._12_4_;
              auVar60 = NEON_ext(auVar70,auVar70,4,1);
              if ((*(byte *)(lVar13 + 0x10) & 1) == 0) {
                fVar67 = auVar70._0_4_ * *(float *)(lVar22 + 0x38);
                fVar66 = auVar60._0_4_ * *(float *)*pauVar23 +
                         auVar60._4_4_ * *(float *)(lVar22 + 0x34);
              }
              else {
                fVar66 = fVar66 * auVar70._0_4_;
                fVar67 = fVar67 * auVar60._0_4_ + fVar73 * auVar60._4_4_;
              }
              if (0.003921569 < (fVar66 + fVar67) * (fVar66 + fVar67)) goto LAB_0307b80c;
            }
            *(byte *)(pfVar16 + -0x10) = *(byte *)(pfVar16 + -0x10) | 4;
            lVar19 = *(long *)(pfVar16 + -0xe);
            *(short *)((long)pfVar16 + -0x3e) = (short)uVar24;
            if (lVar19 != 0) {
              *(byte *)(lVar19 + 0x96) = *(byte *)(lVar19 + 0x96) | 4;
            }
            fVar64 = pfVar16[-8] * fVar76;
            fVar72 = pfVar16[-7] * fVar36;
            fVar74 = pfVar16[-6] * fVar39;
            fVar66 = (float)uVar52;
            fVar67 = pfVar16[-8] * fVar66;
            fVar73 = pfVar16[-7] * fVar55;
            fVar75 = pfVar16[-6] * fVar56;
            fVar65 = fVar64 + fVar72 + fVar74;
            fVar74 = fVar64 + fVar72 + fVar74;
            fVar76 = fVar76 * fVar66;
            auVar78._0_8_ =
                 CONCAT44(-(uint)(fVar74 < fVar39 * fVar56 + fVar76 + fVar36 * fVar55),
                          -(uint)(fVar65 < fVar39 * fVar56 + fVar76 + fVar36 * fVar55));
            auVar78._8_8_ = auVar78._0_8_;
            uVar84 = (undefined4)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20);
            auVar6._12_4_ = uVar84;
            auVar6._0_12_ = *pauVar18;
            auVar79._12_4_ = uVar84;
            auVar79._0_12_ = *pauVar18;
            auVar79 = auVar79 ^ (auVar6 ^ auVar61) & auVar78;
            auVar54._0_8_ =
                 CONCAT44(-(uint)(fVar67 + fVar73 + fVar75 < fVar74),
                          -(uint)(fVar67 + fVar73 + fVar75 < fVar65));
            auVar54._8_8_ = auVar54._0_8_;
            auVar79 = auVar79 ^ (auVar79 ^ auVar58) & auVar54;
            *(long *)(pfVar16 + -6) = auVar79._8_8_;
            *(long *)(pfVar16 + -8) = auVar79._0_8_;
          }
LAB_0307b80c:
          uVar17 = uVar17 - 1;
          uVar11 = uVar11 + 1;
          pfVar16 = pfVar16 + 0x18;
        } while (uVar21 != uVar17);
      }
      piVar14 = (int *)*plVar25;
      if (piVar14 != (int *)0x0) {
        bVar4 = *(byte *)(param_4 + uVar24 * 0x60 + 0x10);
        if ((bVar4 >> 1 & 1) == 0) {
          if ((bVar4 >> 2 & 1) == 0) goto LAB_0307b628;
          bVar8 = false;
          uVar33 = *(undefined8 *)*pauVar23;
          uVar37 = *(undefined8 *)(lVar22 + 0x38);
        }
        else if ((bVar4 >> 2 & 1) == 0) {
LAB_0307bb18:
          bVar8 = true;
          *(undefined8 *)(lVar22 + 0x38) = uVar85;
          *(undefined8 *)*pauVar23 = uVar34;
          uVar33 = uVar34;
          uVar37 = uVar85;
        }
        else {
          uVar37 = *(undefined8 *)(lVar22 + 0x38);
          uVar33 = *(undefined8 *)*pauVar23;
          fVar32 = (float)uVar33;
          fVar76 = (float)((ulong)uVar33 >> 0x20);
          fVar36 = (float)uVar37;
          fVar39 = (float)((ulong)uVar37 >> 0x20);
          if (1.5378702e-05 < ABS(fVar36 - fVar38) ||
              (1.5378702e-05 < ABS(fVar32 - fVar28) || 1.5378702e-05 < ABS(fVar76 - fVar35))) {
            auVar42._0_4_ = fVar32 * fVar32;
            auVar42._4_4_ = fVar76 * fVar76;
            auVar42._8_4_ = fVar36 * fVar36;
            auVar42._12_4_ = fVar39 * fVar39;
            auVar58 = NEON_ext(auVar42,auVar42,8,1);
            auVar48._0_4_ = fVar28 * fVar32;
            auVar48._4_4_ = fVar35 * fVar76;
            auVar48._8_4_ = fVar38 * fVar36;
            auVar48._12_4_ = fVar41 * fVar39;
            auVar61 = NEON_ext(auVar48,auVar48,8,1);
            fVar66 = *(float *)(param_4 + uVar24 * 0x60);
            auVar71._0_4_ = fVar28 * (float)local_f0;
            auVar71._4_4_ = fVar35 * local_f0._4_4_;
            auVar71._8_4_ = fVar38 * (float)uStack_e8;
            auVar71._12_4_ = fVar41 * uStack_e8._4_4_;
            auVar62._0_4_ = fVar32 * (float)local_f0;
            auVar62._4_4_ = fVar76 * local_f0._4_4_;
            auVar62._8_4_ = fVar36 * (float)uStack_e8;
            auVar62._12_4_ = fVar39 * uStack_e8._4_4_;
            auVar69 = NEON_ext(auVar71,auVar71,8,1);
            auVar60 = NEON_ext(auVar62,auVar62,8,1);
            if ((auVar58._0_4_ + auVar42._0_4_ + auVar42._4_4_) * fVar66 +
                auVar62._0_4_ + auVar62._4_4_ + auVar60._0_4_ <
                (auVar61._0_4_ + auVar48._0_4_ + auVar48._4_4_) * fVar66 +
                auVar71._0_4_ + auVar71._4_4_ + auVar69._0_4_) goto LAB_0307bb18;
          }
          bVar8 = false;
        }
        auVar58 = *(undefined1 (*) [16])(piVar14 + 4);
        fVar32 = (float)uVar33;
        fVar41 = auVar58._0_4_;
        fVar28 = (float)((ulong)uVar33 >> 0x20);
        fVar76 = auVar58._4_4_;
        fVar35 = (float)uVar37;
        fVar36 = auVar58._8_4_;
        iVar49 = -(uint)(fVar36 == fVar35);
        fVar38 = (float)((ulong)uVar37 >> 0x20);
        fVar39 = auVar58._12_4_;
        iVar50 = -(uint)(fVar39 == fVar38);
        uVar43 = (uint)(byte)(-(fVar41 == fVar32) & (byte)_DAT_03889700);
        auVar44._0_8_ =
             CONCAT17((byte)(-(uint)(fVar76 == fVar28) >> 0x18) &
                      (byte)((ulong)_DAT_03889700 >> 0x38),
                      (uint7)CONCAT14((byte)-(uint)(fVar76 == fVar28) &
                                      (byte)((ulong)_DAT_03889700 >> 0x20),uVar43));
        auVar44[8] = (byte)iVar49 & (byte)_UNK_03889708;
        auVar44[9] = (byte)((uint)iVar49 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
        auVar44[10] = (byte)((uint)iVar49 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
        auVar44[0xb] = (byte)((uint)iVar49 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
        auVar47[0xc] = (byte)iVar50 & (byte)((ulong)_UNK_03889708 >> 0x20);
        auVar47._0_12_ = auVar44;
        auVar47[0xd] = (byte)((uint)iVar50 >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
        auVar47[0xe] = (byte)((uint)iVar50 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
        auVar47[0xf] = (byte)((uint)iVar50 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
        if ((~(uVar43 + (int)((ulong)auVar44._0_8_ >> 0x20) + auVar44._8_4_ + auVar47._12_4_) & 7)
            != 0) {
          fVar65 = (float)local_1b80;
          fVar56 = fVar65 + (float)uVar27;
          fVar67 = (float)((ulong)uVar27 >> 0x20);
          fVar72 = (float)((ulong)local_1b80 >> 0x20);
          fVar64 = fVar72 + fVar67;
          fVar75 = ABS(fVar35 * fVar36 + fVar32 * fVar41 + fVar28 * fVar76);
          fVar55 = ABS(fVar35 * fVar36 + fVar32 * fVar41 + fVar28 * fVar76);
          fVar66 = 0.0;
          fVar73 = 0.0;
          if (bVar8) {
            fVar66 = (fVar75 * (fVar56 + (float)piVar14[1]) - fVar56) - fVar38;
            fVar73 = (fVar55 * (fVar64 + (float)piVar14[1]) - fVar64) - fVar38;
          }
          if (*piVar14 < 1) {
            auVar31._8_4_ = 0x7f7fffee;
            auVar31._0_8_ = 0x7f7fffee7f7fffee;
            auVar31._12_4_ = 0x7f7fffee;
          }
          else {
            fVar66 = (float)uVar27 + fVar66;
            fVar67 = fVar67 + fVar73;
            fVar80 = fVar65 + (float)piVar14[0xc];
            fVar81 = fVar72 + (float)piVar14[0xd];
            fVar82 = fVar65 + (float)piVar14[0xe];
            fVar83 = fVar72 + (float)piVar14[0xf];
            fVar40 = (float)*(undefined8 *)*(undefined1 (*) [16])(piVar14 + 4);
            fVar73 = fVar75 * (fVar56 + (float)piVar14[0xc]) - fVar66;
            fVar74 = fVar55 * (fVar64 + (float)piVar14[0xd]) - fVar67;
            fVar66 = fVar75 * (fVar56 + (float)piVar14[0xe]) - fVar66;
            fVar67 = fVar55 * (fVar64 + (float)piVar14[0xf]) - fVar67;
            auVar53._0_8_ =
                 CONCAT44(((float)piVar14[0x15] + fVar76 * fVar81) - fVar28 * fVar74,
                          ((float)piVar14[0x14] + fVar40 * fVar81) - fVar32 * fVar74);
            auVar53._8_4_ = ((float)piVar14[0x16] + fVar36 * fVar81) - fVar35 * fVar74;
            auVar53._12_4_ = ((float)piVar14[0x17] + fVar39 * fVar81) - fVar38 * fVar74;
            auVar46._0_8_ =
                 CONCAT44(((float)piVar14[0x11] + fVar76 * fVar80) - fVar28 * fVar73,
                          ((float)piVar14[0x10] + fVar40 * fVar80) - fVar32 * fVar73);
            auVar46._8_4_ = ((float)piVar14[0x12] + fVar36 * fVar80) - fVar35 * fVar73;
            auVar46._12_4_ = ((float)piVar14[0x13] + fVar39 * fVar80) - fVar38 * fVar73;
            auVar29._0_4_ = fVar73 - fVar65;
            auVar29._4_4_ = fVar74 - fVar72;
            auVar29._8_4_ = fVar66 - fVar65;
            auVar29._12_4_ = fVar67 - fVar72;
            auVar59._0_8_ =
                 CONCAT44((fVar76 * fVar82 + (float)piVar14[0x19]) - fVar28 * fVar66,
                          (fVar41 * fVar82 + (float)piVar14[0x18]) - fVar32 * fVar66);
            auVar59._8_4_ = (fVar36 * fVar82 + (float)piVar14[0x1a]) - fVar35 * fVar66;
            auVar59._12_4_ = (fVar39 * fVar82 + (float)piVar14[0x1b]) - fVar38 * fVar66;
            *(long *)(piVar14 + 0x12) = auVar46._8_8_;
            *(undefined8 *)(piVar14 + 0x10) = auVar46._0_8_;
            *(long *)(piVar14 + 0x16) = auVar53._8_8_;
            *(undefined8 *)(piVar14 + 0x14) = auVar53._0_8_;
            *(long *)(piVar14 + 0x1a) = auVar59._8_8_;
            *(undefined8 *)(piVar14 + 0x18) = auVar59._0_8_;
            piVar14[0x1e] = (int)((fVar36 * fVar83 + (float)piVar14[0x1e]) - fVar35 * fVar67);
            piVar14[0x1f] = (int)((fVar39 * fVar83 + (float)piVar14[0x1f]) - fVar38 * fVar67);
            piVar14[0x1c] = (int)((fVar41 * fVar83 + (float)piVar14[0x1c]) - fVar32 * fVar67);
            piVar14[0x1d] = (int)((fVar76 * fVar83 + (float)piVar14[0x1d]) - fVar28 * fVar67);
            auVar7._8_4_ = (int)local_1ba0;
            auVar7._0_8_ = local_1ba0;
            auVar7._12_4_ = (int)((ulong)local_1ba0 >> 0x20);
            auVar58 = NEON_fmax(auVar29,auVar7,4);
            auVar30._8_4_ = 0x7f7fffee;
            auVar30._0_8_ = 0x7f7fffee7f7fffee;
            auVar30._12_4_ = 0x7f7fffee;
            *(long *)(piVar14 + 0xe) = auVar58._8_8_;
            *(long *)(piVar14 + 0xc) = auVar58._0_8_;
            auVar31 = NEON_fmin(auVar58,auVar30,4);
          }
          iVar49 = NEON_fminnmv(auVar31,4);
          piVar14[1] = iVar49;
          *(undefined8 *)(piVar14 + 6) = uVar37;
          *(undefined8 *)(piVar14 + 4) = uVar33;
        }
      }
LAB_0307b628:
      uVar21 = uVar21 + 1;
      pfVar20 = pfVar20 + 0x18;
      uVar24 = uVar1;
    } while (uVar1 != param_5);
  }
  puVar2 = PTR_DAT_043724f0 + 0x10;
  local_1890 = puVar2;
  if (local_1888 != (long *)0x0) {
    (**(code **)(*local_1888 + 8))();
  }
  if (local_c78 != (long *)0x0) {
    local_c80 = puVar2;
    (**(code **)(*local_c78 + 8))();
  }
  return;
}


