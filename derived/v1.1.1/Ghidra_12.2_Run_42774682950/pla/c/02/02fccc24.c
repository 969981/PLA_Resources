/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fccc24; name: FUN_02fccc24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fccc24(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5,long *param_6,long *param_7,undefined1 (*param_8) [16])

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  long lVar4;
  undefined2 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int iVar29;
  bool bVar30;
  long *plVar31;
  ulong uVar32;
  long lVar33;
  undefined4 *puVar34;
  int iVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  byte bVar39;
  byte bVar40;
  undefined1 uVar41;
  int iVar42;
  int iVar52;
  undefined1 auVar43 [12];
  int iVar50;
  uint uVar51;
  uint uVar53;
  undefined1 auVar44 [16];
  int iVar54;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  ulong uVar55;
  undefined1 auVar56 [12];
  uint uVar67;
  uint uVar69;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar68;
  int iVar70;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar71;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  byte bVar82;
  byte bVar83;
  ulong uVar72;
  undefined8 uVar73;
  uint uVar84;
  uint uVar85;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  uint uVar95;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  ulong uVar96;
  uint uVar98;
  uint uVar99;
  undefined1 auVar97 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  short sVar103;
  short sVar105;
  short sVar106;
  undefined1 auVar104 [16];
  undefined1 auVar107 [16];
  byte local_c80;
  byte bStack_c7f;
  byte bStack_c7e;
  byte bStack_c7d;
  byte bStack_c7c;
  byte bStack_c7b;
  byte bStack_c7a;
  byte bStack_c79;
  byte bStack_c78;
  byte bStack_c77;
  byte bStack_c76;
  byte bStack_c75;
  byte bStack_c74;
  byte bStack_c73;
  byte bStack_c72;
  byte bStack_c71;
  byte local_c70;
  byte bStack_c6f;
  byte bStack_c6e;
  byte bStack_c6d;
  byte bStack_c6c;
  byte bStack_c6b;
  byte bStack_c6a;
  byte bStack_c69;
  byte bStack_c68;
  byte bStack_c67;
  byte bStack_c66;
  byte bStack_c65;
  byte bStack_c64;
  byte bStack_c63;
  byte bStack_c62;
  byte bStack_c61;
  byte local_c60;
  byte bStack_c5f;
  byte bStack_c5e;
  byte bStack_c5d;
  byte bStack_c5c;
  byte bStack_c5b;
  byte bStack_c5a;
  byte bStack_c59;
  byte bStack_c58;
  byte bStack_c57;
  byte bStack_c56;
  byte bStack_c55;
  byte bStack_c54;
  byte bStack_c53;
  byte bStack_c52;
  byte bStack_c51;
  byte local_c50;
  byte bStack_c4f;
  byte bStack_c4e;
  byte bStack_c4d;
  byte bStack_c4c;
  byte bStack_c4b;
  byte bStack_c4a;
  byte bStack_c49;
  byte bStack_c48;
  byte bStack_c47;
  byte bStack_c46;
  byte bStack_c45;
  byte bStack_c44;
  byte bStack_c43;
  byte bStack_c42;
  byte bStack_c41;
  byte local_c40;
  byte bStack_c3f;
  byte bStack_c3e;
  byte bStack_c3d;
  byte bStack_c3c;
  byte bStack_c3b;
  byte bStack_c3a;
  byte bStack_c39;
  byte bStack_c38;
  byte bStack_c37;
  byte bStack_c36;
  byte bStack_c35;
  byte bStack_c34;
  byte bStack_c33;
  byte bStack_c32;
  byte bStack_c31;
  byte local_c30;
  byte bStack_c2f;
  byte bStack_c2e;
  byte bStack_c2d;
  byte bStack_c2c;
  byte bStack_c2b;
  byte bStack_c2a;
  byte bStack_c29;
  byte bStack_c28;
  byte bStack_c27;
  byte bStack_c26;
  byte bStack_c25;
  byte bStack_c24;
  byte bStack_c23;
  byte bStack_c22;
  byte bStack_c21;
  byte local_c20;
  byte bStack_c1f;
  byte bStack_c1e;
  byte bStack_c1d;
  byte bStack_c1c;
  byte bStack_c1b;
  byte bStack_c1a;
  byte bStack_c19;
  byte bStack_c18;
  byte bStack_c17;
  byte bStack_c16;
  byte bStack_c15;
  byte bStack_c14;
  byte bStack_c13;
  byte bStack_c12;
  byte bStack_c11;
  long *local_bb0;
  undefined8 local_ba8;
  long local_ba0;
  long *local_b98;
  undefined8 *local_b90;
  undefined2 local_b88;
  undefined8 local_b84;
  undefined4 local_b7c;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined4 local_b60;
  undefined8 local_b58;
  uint local_b50;
  int *local_b48;
  long local_b40;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  float local_b00;
  float fStack_afc;
  float fStack_af8;
  float fStack_af4;
  float local_af0;
  float fStack_aec;
  float fStack_ae8;
  float fStack_ae4;
  float local_ae0;
  float fStack_adc;
  float fStack_ad8;
  float fStack_ad4;
  long local_ad0;
  char local_ac8;
  undefined8 *local_ac0;
  long *local_ab8;
  undefined2 local_ab0;
  float local_aa0;
  float fStack_a9c;
  float fStack_a98;
  float fStack_a94;
  float fStack_a90;
  float fStack_a8c;
  float fStack_a88;
  float fStack_a84;
  float local_a80;
  float fStack_a7c;
  float fStack_a78;
  float fStack_a74;
  float fStack_a70;
  float fStack_a6c;
  float fStack_a68;
  float fStack_a64;
  float local_a60;
  float fStack_a5c;
  float fStack_a58;
  float fStack_a54;
  float fStack_a50;
  float fStack_a4c;
  float fStack_a48;
  float fStack_a44;
  undefined8 local_a40;
  undefined4 uStack_a38;
  undefined4 uStack_a34;
  undefined8 uStack_a30;
  undefined4 uStack_a28;
  undefined4 uStack_a24;
  undefined8 local_a20;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  undefined8 uStack_a10;
  undefined4 uStack_a08;
  undefined4 uStack_a04;
  undefined8 local_a00;
  undefined4 uStack_9f8;
  undefined4 uStack_9f4;
  undefined8 uStack_9f0;
  undefined4 uStack_9e8;
  undefined4 uStack_9e4;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined4 local_9c0 [256];
  undefined4 *local_5c0;
  float local_5b0 [4];
  float local_5a0;
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float local_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  float local_580;
  float fStack_57c;
  float fStack_578;
  float fStack_574;
  float local_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  float local_560;
  float fStack_55c;
  float fStack_558;
  float fStack_554;
  undefined4 local_550 [256];
  undefined4 *local_150;
  undefined2 local_138 [8];
  long local_128;
  long local_120;
  long local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  
  uVar28 = _UNK_03889d78;
  uVar27 = _DAT_03889d70;
  uVar26 = _UNK_03889c68;
  uVar25 = _DAT_03889c60;
  uVar24 = _UNK_038899c8;
  uVar23 = _DAT_038899c0;
  uVar22 = _UNK_03889708;
  uVar21 = _DAT_03889700;
  uVar20 = _UNK_038894d8;
  uVar19 = _DAT_038894d0;
  uVar18 = _UNK_03889328;
  uVar17 = _DAT_03889320;
  uVar16 = _UNK_03889088;
  uVar15 = _DAT_03889080;
  local_ac8 = '\0';
  local_ba8 = 0;
  local_b88 = (undefined2)param_3[2];
  local_b7c = *(undefined4 *)((long)param_3 + 0x1c);
  local_b84 = *(undefined8 *)((long)param_3 + 0x14);
  local_b70 = 0;
  uStack_b68 = 0;
  local_b78 = 0;
  local_b58 = 0;
  local_b60 = 0xffffffff;
  lVar33 = *(long *)(param_1 + 0x48);
  if (lVar33 != 0) {
    lVar33 = lVar33 + param_1 + 0x48;
  }
  local_ad0 = lVar33 + 0x20;
  local_ab0._0_1_ = '\0';
  local_ab0._1_1_ = 0;
  auVar57 = *(undefined1 (*) [16])(param_3 + 6);
  auVar44 = *(undefined1 (*) [16])(param_3 + 8);
  uStack_9d8 = auVar57._8_8_;
  local_9e0 = auVar57._0_8_;
  uStack_9c8 = auVar44._8_8_;
  uStack_9d0 = auVar44._0_8_;
  local_bb0 = param_3;
  local_ba0 = param_1;
  local_b98 = param_6;
  local_b90 = param_5;
  local_ac0 = param_4;
  local_ab8 = param_7;
  if (param_8 == (undefined1 (*) [16])0x0) {
    if (((*(byte *)(param_7 + 1) & 1) == 0) || (*(int *)((long)param_7 + 0xc) == 0)) {
      local_ab0 = (ushort)(*(byte *)(param_7 + 1) & 1);
      FUN_02fcd8c0(lVar33 + 0x48,&local_9e0,&local_bb0);
    }
  }
  else {
    local_aa0 = auVar57._0_4_;
    fStack_a90 = auVar44._0_4_;
    local_a80 = auVar57._4_4_;
    local_a60 = auVar57._8_4_;
    fStack_a70 = auVar44._4_4_;
    fStack_a50 = auVar44._8_4_;
    puVar38 = (undefined8 *)((ulong)&local_100 | 4);
    local_9c0[0] = 1;
    uStack_a38 = 0x7f7fffee;
    uStack_a34 = 0x7f7fffee;
    local_a40 = 0x7f7fffee7f7fffee;
    uStack_a28 = 0x7f7fffee;
    uStack_a24 = 0x7f7fffee;
    uStack_a30 = 0x7f7fffee7f7fffee;
    uStack_a18 = 0x7f7fffee;
    uStack_a14 = 0x7f7fffee;
    local_a20 = 0x7f7fffee7f7fffee;
    uStack_a08 = 0x7f7fffee;
    uStack_a04 = 0x7f7fffee;
    uStack_a10 = 0x7f7fffee7f7fffee;
    uStack_9f8 = 0x7f7fffee;
    uStack_9f4 = 0x7f7fffee;
    local_a00 = 0x7f7fffee7f7fffee;
    uStack_9e8 = 0x7f7fffee;
    uStack_9e4 = 0x7f7fffee;
    uStack_9f0 = 0x7f7fffee7f7fffee;
    puVar34 = (undefined4 *)((ulong)local_9c0 | 4);
    fStack_a9c = local_aa0;
    fStack_a98 = local_aa0;
    fStack_a94 = local_aa0;
    fStack_a8c = fStack_a90;
    fStack_a88 = fStack_a90;
    fStack_a84 = fStack_a90;
    fStack_a7c = local_a80;
    fStack_a78 = local_a80;
    fStack_a74 = local_a80;
    fStack_a6c = fStack_a70;
    fStack_a68 = fStack_a70;
    fStack_a64 = fStack_a70;
    fStack_a5c = local_a60;
    fStack_a58 = local_a60;
    fStack_a54 = local_a60;
    fStack_a4c = fStack_a50;
    fStack_a48 = fStack_a50;
    fStack_a44 = fStack_a50;
    do {
      local_5c0 = puVar34 + -1;
      pfVar2 = (float *)(lVar33 + 0x48 + (long)(int)puVar34[-1] * 0x80 + *(long *)(lVar33 + 0x48));
      uVar55 = CONCAT44(fStack_a9c - pfVar2[5],local_aa0 - pfVar2[4]) & 0xffffffe0ffffffe0;
      uVar67 = (uint)(fStack_a98 - pfVar2[6]) & 0xffffffe0;
      uVar69 = (uint)(fStack_a94 - pfVar2[7]) & 0xffffffe0;
      uVar32 = CONCAT44(pfVar2[1] - fStack_a8c,*pfVar2 - fStack_a90) & 0xffffffe0ffffffe0;
      uVar51 = (uint)(pfVar2[2] - fStack_a88) & 0xffffffe0;
      uVar53 = (uint)(pfVar2[3] - fStack_a84) & 0xffffffe0;
      local_c20 = (byte)uVar27;
      bStack_c1f = (byte)((ulong)uVar27 >> 8);
      bStack_c1e = (byte)((ulong)uVar27 >> 0x10);
      bStack_c1d = (byte)((ulong)uVar27 >> 0x18);
      bStack_c1c = (byte)((ulong)uVar27 >> 0x20);
      bStack_c1b = (byte)((ulong)uVar27 >> 0x28);
      bStack_c1a = (byte)((ulong)uVar27 >> 0x30);
      bStack_c19 = (byte)((ulong)uVar27 >> 0x38);
      bStack_c18 = (byte)uVar28;
      bStack_c17 = (byte)((ulong)uVar28 >> 8);
      bStack_c16 = (byte)((ulong)uVar28 >> 0x10);
      bStack_c15 = (byte)((ulong)uVar28 >> 0x18);
      bStack_c14 = (byte)((ulong)uVar28 >> 0x20);
      bStack_c13 = (byte)((ulong)uVar28 >> 0x28);
      bStack_c12 = (byte)((ulong)uVar28 >> 0x30);
      bStack_c11 = (byte)((ulong)uVar28 >> 0x38);
      uVar72 = CONCAT44(pfVar2[9] - fStack_a6c,pfVar2[8] - fStack_a70) & 0xffffffe0ffffffe0;
      uVar84 = (uint)(pfVar2[10] - fStack_a68) & 0xffffffe0;
      uVar85 = (uint)(pfVar2[0xb] - fStack_a64) & 0xffffffe0;
      auVar44[0] = (byte)uVar32 | local_c20;
      auVar44[1] = (byte)(uVar32 >> 8) | bStack_c1f;
      auVar44[2] = (byte)(uVar32 >> 0x10) | bStack_c1e;
      auVar44[3] = (byte)(uVar32 >> 0x18) | bStack_c1d;
      auVar44[4] = (byte)(uVar32 >> 0x20) | bStack_c1c;
      auVar44[5] = (byte)(uVar32 >> 0x28) | bStack_c1b;
      auVar44[6] = (byte)(uVar32 >> 0x30) | bStack_c1a;
      auVar44[7] = (byte)(uVar32 >> 0x38) | bStack_c19;
      auVar44[8] = (byte)uVar51 | bStack_c18;
      auVar44[9] = (byte)(uVar51 >> 8) | bStack_c17;
      auVar44[10] = (byte)(uVar51 >> 0x10) | bStack_c16;
      auVar44[0xb] = (byte)(uVar51 >> 0x18) | bStack_c15;
      auVar44[0xc] = (byte)uVar53 | bStack_c14;
      auVar44[0xd] = (byte)(uVar53 >> 8) | bStack_c13;
      auVar44[0xe] = (byte)(uVar53 >> 0x10) | bStack_c12;
      auVar44[0xf] = (byte)(uVar53 >> 0x18) | bStack_c11;
      local_c30 = (byte)uVar19;
      bStack_c2f = (byte)((ulong)uVar19 >> 8);
      bStack_c2e = (byte)((ulong)uVar19 >> 0x10);
      bStack_c2d = (byte)((ulong)uVar19 >> 0x18);
      bStack_c2c = (byte)((ulong)uVar19 >> 0x20);
      bStack_c2b = (byte)((ulong)uVar19 >> 0x28);
      bStack_c2a = (byte)((ulong)uVar19 >> 0x30);
      bStack_c29 = (byte)((ulong)uVar19 >> 0x38);
      bStack_c28 = (byte)uVar20;
      bStack_c27 = (byte)((ulong)uVar20 >> 8);
      bStack_c26 = (byte)((ulong)uVar20 >> 0x10);
      bStack_c25 = (byte)((ulong)uVar20 >> 0x18);
      bStack_c24 = (byte)((ulong)uVar20 >> 0x20);
      bStack_c23 = (byte)((ulong)uVar20 >> 0x28);
      bStack_c22 = (byte)((ulong)uVar20 >> 0x30);
      bStack_c21 = (byte)((ulong)uVar20 >> 0x38);
      uVar32 = CONCAT44(pfVar2[0x11] - fStack_a4c,pfVar2[0x10] - fStack_a50) & 0xffffffe0ffffffe0;
      uVar51 = (uint)(pfVar2[0x12] - fStack_a48) & 0xffffffe0;
      uVar53 = (uint)(pfVar2[0x13] - fStack_a44) & 0xffffffe0;
      auVar75[0] = (byte)uVar72 | local_c30;
      auVar75[1] = (byte)(uVar72 >> 8) | bStack_c2f;
      auVar75[2] = (byte)(uVar72 >> 0x10) | bStack_c2e;
      auVar75[3] = (byte)(uVar72 >> 0x18) | bStack_c2d;
      auVar75[4] = (byte)(uVar72 >> 0x20) | bStack_c2c;
      auVar75[5] = (byte)(uVar72 >> 0x28) | bStack_c2b;
      auVar75[6] = (byte)(uVar72 >> 0x30) | bStack_c2a;
      auVar75[7] = (byte)(uVar72 >> 0x38) | bStack_c29;
      auVar75[8] = (byte)uVar84 | bStack_c28;
      auVar75[9] = (byte)(uVar84 >> 8) | bStack_c27;
      auVar75[10] = (byte)(uVar84 >> 0x10) | bStack_c26;
      auVar75[0xb] = (byte)(uVar84 >> 0x18) | bStack_c25;
      auVar75[0xc] = (byte)uVar85 | bStack_c24;
      auVar75[0xd] = (byte)(uVar85 >> 8) | bStack_c23;
      auVar75[0xe] = (byte)(uVar85 >> 0x10) | bStack_c22;
      auVar75[0xf] = (byte)(uVar85 >> 0x18) | bStack_c21;
      local_c40 = (byte)uVar23;
      bStack_c3f = (byte)((ulong)uVar23 >> 8);
      bStack_c3e = (byte)((ulong)uVar23 >> 0x10);
      bStack_c3d = (byte)((ulong)uVar23 >> 0x18);
      bStack_c3c = (byte)((ulong)uVar23 >> 0x20);
      bStack_c3b = (byte)((ulong)uVar23 >> 0x28);
      bStack_c3a = (byte)((ulong)uVar23 >> 0x30);
      bStack_c39 = (byte)((ulong)uVar23 >> 0x38);
      bStack_c38 = (byte)uVar24;
      bStack_c37 = (byte)((ulong)uVar24 >> 8);
      bStack_c36 = (byte)((ulong)uVar24 >> 0x10);
      bStack_c35 = (byte)((ulong)uVar24 >> 0x18);
      bStack_c34 = (byte)((ulong)uVar24 >> 0x20);
      bStack_c33 = (byte)((ulong)uVar24 >> 0x28);
      bStack_c32 = (byte)((ulong)uVar24 >> 0x30);
      bStack_c31 = (byte)((ulong)uVar24 >> 0x38);
      auVar78[0] = (byte)uVar32 | local_c40;
      auVar78[1] = (byte)(uVar32 >> 8) | bStack_c3f;
      auVar78[2] = (byte)(uVar32 >> 0x10) | bStack_c3e;
      auVar78[3] = (byte)(uVar32 >> 0x18) | bStack_c3d;
      auVar78[4] = (byte)(uVar32 >> 0x20) | bStack_c3c;
      auVar78[5] = (byte)(uVar32 >> 0x28) | bStack_c3b;
      auVar78[6] = (byte)(uVar32 >> 0x30) | bStack_c3a;
      auVar78[7] = (byte)(uVar32 >> 0x38) | bStack_c39;
      auVar78[8] = (byte)uVar51 | bStack_c38;
      auVar78[9] = (byte)(uVar51 >> 8) | bStack_c37;
      auVar78[10] = (byte)(uVar51 >> 0x10) | bStack_c36;
      auVar78[0xb] = (byte)(uVar51 >> 0x18) | bStack_c35;
      auVar78[0xc] = (byte)uVar53 | bStack_c34;
      auVar78[0xd] = (byte)(uVar53 >> 8) | bStack_c33;
      auVar78[0xe] = (byte)(uVar53 >> 0x10) | bStack_c32;
      auVar78[0xf] = (byte)(uVar53 >> 0x18) | bStack_c31;
      local_c50 = (byte)uVar15;
      bStack_c4f = (byte)((ulong)uVar15 >> 8);
      bStack_c4e = (byte)((ulong)uVar15 >> 0x10);
      bStack_c4d = (byte)((ulong)uVar15 >> 0x18);
      bStack_c4c = (byte)((ulong)uVar15 >> 0x20);
      bStack_c4b = (byte)((ulong)uVar15 >> 0x28);
      bStack_c4a = (byte)((ulong)uVar15 >> 0x30);
      bStack_c49 = (byte)((ulong)uVar15 >> 0x38);
      bStack_c48 = (byte)uVar16;
      bStack_c47 = (byte)((ulong)uVar16 >> 8);
      bStack_c46 = (byte)((ulong)uVar16 >> 0x10);
      bStack_c45 = (byte)((ulong)uVar16 >> 0x18);
      bStack_c44 = (byte)((ulong)uVar16 >> 0x20);
      bStack_c43 = (byte)((ulong)uVar16 >> 0x28);
      bStack_c42 = (byte)((ulong)uVar16 >> 0x30);
      bStack_c41 = (byte)((ulong)uVar16 >> 0x38);
      auVar58[0] = (byte)uVar55 | local_c50;
      auVar58[1] = (byte)(uVar55 >> 8) | bStack_c4f;
      auVar58[2] = (byte)(uVar55 >> 0x10) | bStack_c4e;
      auVar58[3] = (byte)(uVar55 >> 0x18) | bStack_c4d;
      auVar58[4] = (byte)(uVar55 >> 0x20) | bStack_c4c;
      auVar58[5] = (byte)(uVar55 >> 0x28) | bStack_c4b;
      auVar58[6] = (byte)(uVar55 >> 0x30) | bStack_c4a;
      auVar58[7] = (byte)(uVar55 >> 0x38) | bStack_c49;
      auVar58[8] = (byte)uVar67 | bStack_c48;
      auVar58[9] = (byte)(uVar67 >> 8) | bStack_c47;
      auVar58[10] = (byte)(uVar67 >> 0x10) | bStack_c46;
      auVar58[0xb] = (byte)(uVar67 >> 0x18) | bStack_c45;
      auVar58[0xc] = (byte)uVar69 | bStack_c44;
      auVar58[0xd] = (byte)(uVar69 >> 8) | bStack_c43;
      auVar58[0xe] = (byte)(uVar69 >> 0x10) | bStack_c42;
      auVar58[0xf] = (byte)(uVar69 >> 0x18) | bStack_c41;
      uVar32 = CONCAT44(fStack_a7c - pfVar2[0xd],local_a80 - pfVar2[0xc]) & 0xffffffe0ffffffe0;
      uVar51 = (uint)(fStack_a78 - pfVar2[0xe]) & 0xffffffe0;
      uVar53 = (uint)(fStack_a74 - pfVar2[0xf]) & 0xffffffe0;
      auVar44 = NEON_smax(auVar44,auVar58,4);
      local_c70 = (byte)uVar17;
      bStack_c6f = (byte)((ulong)uVar17 >> 8);
      bStack_c6e = (byte)((ulong)uVar17 >> 0x10);
      bStack_c6d = (byte)((ulong)uVar17 >> 0x18);
      bStack_c6c = (byte)((ulong)uVar17 >> 0x20);
      bStack_c6b = (byte)((ulong)uVar17 >> 0x28);
      bStack_c6a = (byte)((ulong)uVar17 >> 0x30);
      bStack_c69 = (byte)((ulong)uVar17 >> 0x38);
      bStack_c68 = (byte)uVar18;
      bStack_c67 = (byte)((ulong)uVar18 >> 8);
      bStack_c66 = (byte)((ulong)uVar18 >> 0x10);
      bStack_c65 = (byte)((ulong)uVar18 >> 0x18);
      bStack_c64 = (byte)((ulong)uVar18 >> 0x20);
      bStack_c63 = (byte)((ulong)uVar18 >> 0x28);
      bStack_c62 = (byte)((ulong)uVar18 >> 0x30);
      bStack_c61 = (byte)((ulong)uVar18 >> 0x38);
      local_c60 = (byte)uVar25;
      bStack_c5f = (byte)((ulong)uVar25 >> 8);
      bStack_c5e = (byte)((ulong)uVar25 >> 0x10);
      bStack_c5d = (byte)((ulong)uVar25 >> 0x18);
      bStack_c5c = (byte)((ulong)uVar25 >> 0x20);
      bStack_c5b = (byte)((ulong)uVar25 >> 0x28);
      bStack_c5a = (byte)((ulong)uVar25 >> 0x30);
      bStack_c59 = (byte)((ulong)uVar25 >> 0x38);
      bStack_c58 = (byte)uVar26;
      bStack_c57 = (byte)((ulong)uVar26 >> 8);
      bStack_c56 = (byte)((ulong)uVar26 >> 0x10);
      bStack_c55 = (byte)((ulong)uVar26 >> 0x18);
      bStack_c54 = (byte)((ulong)uVar26 >> 0x20);
      bStack_c53 = (byte)((ulong)uVar26 >> 0x28);
      bStack_c52 = (byte)((ulong)uVar26 >> 0x30);
      bStack_c51 = (byte)((ulong)uVar26 >> 0x38);
      auVar77[0] = (byte)uVar32 | local_c60;
      auVar77[1] = (byte)(uVar32 >> 8) | bStack_c5f;
      auVar77[2] = (byte)(uVar32 >> 0x10) | bStack_c5e;
      auVar77[3] = (byte)(uVar32 >> 0x18) | bStack_c5d;
      auVar77[4] = (byte)(uVar32 >> 0x20) | bStack_c5c;
      auVar77[5] = (byte)(uVar32 >> 0x28) | bStack_c5b;
      auVar77[6] = (byte)(uVar32 >> 0x30) | bStack_c5a;
      auVar77[7] = (byte)(uVar32 >> 0x38) | bStack_c59;
      auVar77[8] = (byte)uVar51 | bStack_c58;
      auVar77[9] = (byte)(uVar51 >> 8) | bStack_c57;
      auVar77[10] = (byte)(uVar51 >> 0x10) | bStack_c56;
      auVar77[0xb] = (byte)(uVar51 >> 0x18) | bStack_c55;
      auVar77[0xc] = (byte)uVar53 | bStack_c54;
      auVar77[0xd] = (byte)(uVar53 >> 8) | bStack_c53;
      auVar77[0xe] = (byte)(uVar53 >> 0x10) | bStack_c52;
      auVar77[0xf] = (byte)(uVar53 >> 0x18) | bStack_c51;
      auVar57 = NEON_smax(auVar75,auVar77,4);
      uVar32 = CONCAT44(fStack_a5c - pfVar2[0x15],local_a60 - pfVar2[0x14]) & 0xffffffe0ffffffe0;
      uVar51 = (uint)(fStack_a58 - pfVar2[0x16]) & 0xffffffe0;
      uVar53 = (uint)(fStack_a54 - pfVar2[0x17]) & 0xffffffe0;
      auVar44 = NEON_smax(auVar44,auVar57,4);
      auVar90[0] = (byte)uVar32 | local_c70;
      auVar90[1] = (byte)(uVar32 >> 8) | bStack_c6f;
      auVar90[2] = (byte)(uVar32 >> 0x10) | bStack_c6e;
      auVar90[3] = (byte)(uVar32 >> 0x18) | bStack_c6d;
      auVar90[4] = (byte)(uVar32 >> 0x20) | bStack_c6c;
      auVar90[5] = (byte)(uVar32 >> 0x28) | bStack_c6b;
      auVar90[6] = (byte)(uVar32 >> 0x30) | bStack_c6a;
      auVar90[7] = (byte)(uVar32 >> 0x38) | bStack_c69;
      auVar90[8] = (byte)uVar51 | bStack_c68;
      auVar90[9] = (byte)(uVar51 >> 8) | bStack_c67;
      auVar90[10] = (byte)(uVar51 >> 0x10) | bStack_c66;
      auVar90[0xb] = (byte)(uVar51 >> 0x18) | bStack_c65;
      auVar90[0xc] = (byte)uVar53 | bStack_c64;
      auVar90[0xd] = (byte)(uVar53 >> 8) | bStack_c63;
      auVar90[0xe] = (byte)(uVar53 >> 0x10) | bStack_c62;
      auVar90[0xf] = (byte)(uVar53 >> 0x18) | bStack_c61;
      auVar57 = NEON_smax(auVar78,auVar90,4);
      auVar58 = NEON_smax(auVar44,auVar57,4);
      local_c80 = (byte)uVar21;
      bStack_c7f = (byte)((ulong)uVar21 >> 8);
      bStack_c7e = (byte)((ulong)uVar21 >> 0x10);
      bStack_c7d = (byte)((ulong)uVar21 >> 0x18);
      bStack_c7c = (byte)((ulong)uVar21 >> 0x20);
      bStack_c7b = (byte)((ulong)uVar21 >> 0x28);
      bStack_c7a = (byte)((ulong)uVar21 >> 0x30);
      bStack_c79 = (byte)((ulong)uVar21 >> 0x38);
      bStack_c78 = (byte)uVar22;
      bStack_c77 = (byte)((ulong)uVar22 >> 8);
      bStack_c76 = (byte)((ulong)uVar22 >> 0x10);
      bStack_c75 = (byte)((ulong)uVar22 >> 0x18);
      bStack_c74 = (byte)((ulong)uVar22 >> 0x20);
      bStack_c73 = (byte)((ulong)uVar22 >> 0x28);
      bStack_c72 = (byte)((ulong)uVar22 >> 0x30);
      bStack_c71 = (byte)((ulong)uVar22 >> 0x38);
      iVar42 = -(uint)(auVar58._0_4_ < 1);
      iVar50 = -(uint)(auVar58._4_4_ < 1);
      iVar52 = -(uint)(auVar58._8_4_ < 1);
      iVar54 = -(uint)(auVar58._12_4_ < 1);
      iVar42 = CONCAT13((byte)((uint)iVar42 >> 0x18) & bStack_c7d,
                        CONCAT12((byte)((uint)iVar42 >> 0x10) & bStack_c7e,
                                 CONCAT11((byte)((uint)iVar42 >> 8) & bStack_c7f,
                                          (byte)iVar42 & local_c80)));
      auVar43._0_8_ =
           CONCAT17((byte)((uint)iVar50 >> 0x18) & bStack_c79,
                    CONCAT16((byte)((uint)iVar50 >> 0x10) & bStack_c7a,
                             CONCAT15((byte)((uint)iVar50 >> 8) & bStack_c7b,
                                      CONCAT14((byte)iVar50 & bStack_c7c,iVar42))));
      auVar43[8] = (byte)iVar52 & bStack_c78;
      auVar43[9] = (byte)((uint)iVar52 >> 8) & bStack_c77;
      auVar43[10] = (byte)((uint)iVar52 >> 0x10) & bStack_c76;
      auVar43[0xb] = (byte)((uint)iVar52 >> 0x18) & bStack_c75;
      auVar57[0xc] = (byte)iVar54 & bStack_c74;
      auVar57._0_12_ = auVar43;
      auVar57[0xd] = (byte)((uint)iVar54 >> 8) & bStack_c73;
      auVar57[0xe] = (byte)((uint)iVar54 >> 0x10) & bStack_c72;
      auVar57[0xf] = (byte)((uint)iVar54 >> 0x18) & bStack_c71;
      uVar51 = iVar42 + (int)((ulong)auVar43._0_8_ >> 0x20) + auVar43._8_4_ + auVar57._12_4_;
      auVar44 = *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar51 * 0x10);
      iVar42 = *(int *)(&DAT_03aadfe0 + (ulong)uVar51 * 4);
      auVar57 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar2 + 0x18),auVar44);
      if (*(char *)(pfVar2 + 0x1c) == '\0') {
        *(long *)(puVar34 + -1) = auVar57._0_8_;
        auVar57 = NEON_ext(auVar57,auVar57,8,1);
        *(long *)(puVar34 + 1) = auVar57._0_8_;
        local_5c0 = puVar34 + -1 + iVar42;
      }
      else {
        if (uVar51 != 0) {
          iVar50 = 0;
LAB_02fccf28:
          switch(iVar50) {
          case 0:
            iVar52 = auVar57._0_4_;
            break;
          case 1:
            iVar52 = auVar57._4_4_;
            break;
          case 2:
            iVar52 = auVar57._8_4_;
            break;
          case 3:
            iVar52 = auVar57._12_4_;
            break;
          default:
            iVar52 = 0;
          }
          local_b50 = iVar52 << 9;
          lVar36 = *(long *)(local_ba0 + 0x48);
          if (lVar36 == 0) {
            lVar36 = 0;
          }
          else {
            lVar36 = lVar36 + local_ba0 + 0x48;
          }
          local_b48 = (int *)(lVar36 + 0x60 + (long)iVar52 * 0x40 + (long)*(int *)(lVar36 + 0x60));
          local_b40 = 0;
          if (*local_b48 != 0) {
            local_b40 = (long)local_b48 + (long)*local_b48;
          }
          sVar103 = (short)local_b48[0xe];
          if (local_ac8 == '\0') {
            auVar45._0_8_ = CONCAT44((int)sVar103,(int)sVar103);
            auVar45._8_4_ = (int)sVar103;
            auVar45._12_4_ = (int)sVar103;
            uStack_b28 = auVar45._8_8_;
            sVar103 = *(short *)((long)local_b48 + 0x3a);
            auVar86._0_8_ = CONCAT44((int)sVar103,(int)sVar103);
            auVar86._8_4_ = (int)sVar103;
            auVar86._12_4_ = (int)sVar103;
            uStack_b18 = auVar86._8_8_;
            sVar103 = (short)local_b48[0xf];
            auVar59._4_4_ = (int)sVar103;
            auVar59._0_4_ = (int)sVar103;
            auVar59._8_4_ = (int)sVar103;
            auVar59._12_4_ = (int)sVar103;
            local_b30 = auVar45._0_8_;
            local_b20 = auVar86._0_8_;
          }
          else {
            auVar45._0_8_ = CONCAT26(sVar103,CONCAT24(sVar103,CONCAT22(sVar103,sVar103)));
            auVar45._8_2_ = sVar103;
            auVar45._10_2_ = sVar103;
            auVar45._12_2_ = sVar103;
            auVar45._14_2_ = sVar103;
            uStack_b28 = auVar45._8_8_;
            uVar5 = *(undefined2 *)((long)local_b48 + 0x3a);
            auVar86._0_8_ = CONCAT26(uVar5,CONCAT24(uVar5,CONCAT22(uVar5,uVar5)));
            auVar86._8_2_ = uVar5;
            auVar86._10_2_ = uVar5;
            auVar86._12_2_ = uVar5;
            auVar86._14_2_ = uVar5;
            uStack_b18 = auVar86._8_8_;
            uVar5 = (undefined2)local_b48[0xf];
            auVar59._2_2_ = uVar5;
            auVar59._0_2_ = uVar5;
            auVar59._4_2_ = uVar5;
            auVar59._6_2_ = uVar5;
            auVar59._8_2_ = uVar5;
            auVar59._10_2_ = uVar5;
            auVar59._12_2_ = uVar5;
            auVar59._14_2_ = uVar5;
            local_b30 = auVar45._0_8_;
            local_b20 = auVar86._0_8_;
          }
          uStack_b08 = auVar59._8_8_;
          local_b10 = auVar59._0_8_;
          local_b00 = (float)local_b48[0xb];
          local_af0 = (float)local_b48[0xc];
          local_ae0 = (float)local_b48[0xd];
          local_550[0] = 0;
          puVar34 = (undefined4 *)((ulong)local_550 | 4);
          fStack_afc = local_b00;
          fStack_af8 = local_b00;
          fStack_af4 = local_b00;
          fStack_aec = local_af0;
          fStack_ae8 = local_af0;
          fStack_ae4 = local_af0;
          fStack_adc = local_ae0;
          fStack_ad8 = local_ae0;
          fStack_ad4 = local_ae0;
          do {
            local_150 = puVar34 + -1;
            puVar37 = (undefined8 *)(local_b40 + (ulong)(uint)puVar34[-1] * 0x1c);
            uVar73 = *puVar37;
            bVar39 = (byte)((ulong)uVar73 >> 8);
            auVar74._0_4_ = auVar45._0_4_ + (CONCAT12(bVar39,(ushort)(byte)uVar73) & 0xffff);
            auVar74._4_4_ = auVar45._4_4_ + (uint)bVar39;
            auVar74._8_4_ = auVar45._8_4_ + (uint)(byte)((ulong)uVar73 >> 0x10);
            auVar74._12_4_ = auVar45._12_4_ + (uint)(byte)((ulong)uVar73 >> 0x18);
            auVar75 = NEON_scvtf(auVar74,4);
            local_5b0[0] = local_b00 * auVar75._0_4_;
            local_5b0[1] = fStack_afc * auVar75._4_4_;
            local_5b0[2] = fStack_af8 * auVar75._8_4_;
            local_5b0[3] = fStack_af4 * auVar75._12_4_;
            bVar39 = *(byte *)((long)puVar37 + 5);
            auVar46._0_4_ =
                 auVar45._0_4_ + (CONCAT12(bVar39,(ushort)*(byte *)((long)puVar37 + 4)) & 0xffff);
            auVar46._4_4_ = auVar45._4_4_ + (uint)bVar39;
            auVar46._8_4_ = auVar45._8_4_ + (uint)*(byte *)((long)puVar37 + 6);
            auVar46._12_4_ = auVar45._12_4_ + (uint)*(byte *)((long)puVar37 + 7);
            sVar103 = -(ushort)(*(byte *)((long)puVar37 + 4) == 0);
            sVar105 = -(ushort)(*(byte *)((long)puVar37 + 6) == 0);
            sVar106 = -(ushort)(*(byte *)((long)puVar37 + 7) == 0);
            auVar75 = NEON_scvtf(auVar46,4);
            local_5a0 = local_b00 * auVar75._0_4_;
            fStack_59c = fStack_afc * auVar75._4_4_;
            fStack_598 = fStack_af8 * auVar75._8_4_;
            fStack_594 = fStack_af4 * auVar75._12_4_;
            uVar53 = (uint)sVar103;
            uVar67 = (uint)(short)-(ushort)(bVar39 == 0);
            uVar69 = (uint)sVar105;
            uVar84 = (uint)sVar106;
            uVar73 = puVar37[1];
            bVar40 = (byte)((ulong)uVar73 >> 8);
            auVar100._0_4_ = auVar86._0_4_ + (CONCAT12(bVar40,(ushort)(byte)uVar73) & 0xffff);
            auVar100._4_4_ = auVar86._4_4_ + (uint)bVar40;
            auVar100._8_4_ = auVar86._8_4_ + (uint)(byte)((ulong)uVar73 >> 0x10);
            auVar100._12_4_ = auVar86._12_4_ + (uint)(byte)((ulong)uVar73 >> 0x18);
            auVar75 = NEON_scvtf(auVar100,4);
            local_590 = local_af0 * auVar75._0_4_;
            fStack_58c = fStack_aec * auVar75._4_4_;
            fStack_588 = fStack_ae8 * auVar75._8_4_;
            fStack_584 = fStack_ae4 * auVar75._12_4_;
            uVar73 = *(undefined8 *)((long)puVar37 + 0xc);
            bVar40 = (byte)((ulong)uVar73 >> 8);
            auVar87._0_4_ = auVar86._0_4_ + (CONCAT12(bVar40,(ushort)(byte)uVar73) & 0xffff);
            auVar87._4_4_ = auVar86._4_4_ + (uint)bVar40;
            auVar87._8_4_ = auVar86._8_4_ + (uint)(byte)((ulong)uVar73 >> 0x10);
            auVar87._12_4_ = auVar86._12_4_ + (uint)(byte)((ulong)uVar73 >> 0x18);
            auVar75 = NEON_scvtf(auVar87,4);
            local_580 = local_af0 * auVar75._0_4_;
            fStack_57c = fStack_aec * auVar75._4_4_;
            fStack_578 = fStack_ae8 * auVar75._8_4_;
            fStack_574 = fStack_ae4 * auVar75._12_4_;
            uVar73 = puVar37[2];
            bVar40 = (byte)((ulong)uVar73 >> 8);
            auVar102._0_4_ = auVar59._0_4_ + (CONCAT12(bVar40,(ushort)(byte)uVar73) & 0xffff);
            auVar102._4_4_ = auVar59._4_4_ + (uint)bVar40;
            auVar102._8_4_ = auVar59._8_4_ + (uint)(byte)((ulong)uVar73 >> 0x10);
            auVar102._12_4_ = auVar59._12_4_ + (uint)(byte)((ulong)uVar73 >> 0x18);
            auVar75 = NEON_scvtf(auVar102,4);
            local_570 = local_ae0 * auVar75._0_4_;
            fStack_56c = fStack_adc * auVar75._4_4_;
            fStack_568 = fStack_ad8 * auVar75._8_4_;
            fStack_564 = fStack_ad4 * auVar75._12_4_;
            uVar73 = *(undefined8 *)((long)puVar37 + 0x14);
            bVar40 = (byte)((ulong)uVar73 >> 8);
            auVar60._0_4_ = auVar59._0_4_ + (CONCAT12(bVar40,(ushort)(byte)uVar73) & 0xffff);
            auVar60._4_4_ = auVar59._4_4_ + (uint)bVar40;
            auVar60._8_4_ = auVar59._8_4_ + (uint)(byte)((ulong)uVar73 >> 0x10);
            auVar60._12_4_ = auVar59._12_4_ + (uint)(byte)((ulong)uVar73 >> 0x18);
            auVar75 = NEON_scvtf(auVar60,4);
            local_560 = local_ae0 * auVar75._0_4_;
            fStack_55c = fStack_adc * auVar75._4_4_;
            fStack_558 = fStack_ad8 * auVar75._8_4_;
            fStack_554 = fStack_ad4 * auVar75._12_4_;
            if (((sVar103 != 0 || (ushort)-(ushort)(bVar39 == 0) != 0) || sVar105 != 0) ||
                sVar106 != 0) {
              local_560 = (float)((uint)local_560 ^ ((uint)local_560 ^ 0x7f7fffee) & uVar53);
              fStack_55c = (float)((uint)fStack_55c ^ ((uint)fStack_55c ^ 0x7f7fffee) & uVar67);
              fStack_558 = (float)((uint)fStack_558 ^ ((uint)fStack_558 ^ 0x7f7fffee) & uVar69);
              fStack_554 = (float)((uint)fStack_554 ^ ((uint)fStack_554 ^ 0x7f7fffee) & uVar84);
              local_5b0[0] = (float)((uint)local_5b0[0] ^ ((uint)local_5b0[0] ^ 0x7f7fffee) & uVar53
                                    );
              local_5b0[1] = (float)((uint)local_5b0[1] ^ ((uint)local_5b0[1] ^ 0x7f7fffee) & uVar67
                                    );
              local_5b0[2] = (float)((uint)local_5b0[2] ^ ((uint)local_5b0[2] ^ 0x7f7fffee) & uVar69
                                    );
              local_5b0[3] = (float)((uint)local_5b0[3] ^ ((uint)local_5b0[3] ^ 0x7f7fffee) & uVar84
                                    );
              local_590 = (float)((uint)local_590 ^ ((uint)local_590 ^ 0x7f7fffee) & uVar53);
              fStack_58c = (float)((uint)fStack_58c ^ ((uint)fStack_58c ^ 0x7f7fffee) & uVar67);
              fStack_588 = (float)((uint)fStack_588 ^ ((uint)fStack_588 ^ 0x7f7fffee) & uVar69);
              fStack_584 = (float)((uint)fStack_584 ^ ((uint)fStack_584 ^ 0x7f7fffee) & uVar84);
              local_580 = (float)((uint)local_580 ^ ((uint)local_580 ^ 0x7f7fffee) & uVar53);
              fStack_57c = (float)((uint)fStack_57c ^ ((uint)fStack_57c ^ 0x7f7fffee) & uVar67);
              fStack_578 = (float)((uint)fStack_578 ^ ((uint)fStack_578 ^ 0x7f7fffee) & uVar69);
              fStack_574 = (float)((uint)fStack_574 ^ ((uint)fStack_574 ^ 0x7f7fffee) & uVar84);
              local_570 = (float)((uint)local_570 ^ ((uint)local_570 ^ 0x7f7fffee) & uVar53);
              fStack_56c = (float)((uint)fStack_56c ^ ((uint)fStack_56c ^ 0x7f7fffee) & uVar67);
              fStack_568 = (float)((uint)fStack_568 ^ ((uint)fStack_568 ^ 0x7f7fffee) & uVar69);
              fStack_564 = (float)((uint)fStack_564 ^ ((uint)fStack_564 ^ 0x7f7fffee) & uVar84);
              local_5a0 = (float)((uint)local_5a0 ^ ((uint)local_5a0 ^ 0xff7fffee) & uVar53);
              fStack_59c = (float)((uint)fStack_59c ^ ((uint)fStack_59c ^ 0xff7fffee) & uVar67);
              fStack_598 = (float)((uint)fStack_598 ^ ((uint)fStack_598 ^ 0xff7fffee) & uVar69);
              fStack_594 = (float)((uint)fStack_594 ^ ((uint)fStack_594 ^ 0xff7fffee) & uVar84);
            }
            uVar55 = CONCAT44(local_5b0[1] - fStack_a8c,local_5b0[0] - fStack_a90) &
                     0xffffffe0ffffffe0;
            uVar69 = (uint)(local_5b0[2] - fStack_a88) & 0xffffffe0;
            uVar84 = (uint)(local_5b0[3] - fStack_a84) & 0xffffffe0;
            uVar96 = CONCAT44(fStack_58c - fStack_a6c,local_590 - fStack_a70) & 0xffffffe0ffffffe0;
            uVar98 = (uint)(fStack_588 - fStack_a68) & 0xffffffe0;
            uVar99 = (uint)(fStack_584 - fStack_a64) & 0xffffffe0;
            uVar32 = CONCAT44(fStack_a9c - fStack_59c,local_aa0 - local_5a0) & 0xffffffe0ffffffe0;
            uVar53 = (uint)(fStack_a98 - fStack_598) & 0xffffffe0;
            uVar67 = (uint)(fStack_a94 - fStack_594) & 0xffffffe0;
            uVar72 = CONCAT44(fStack_a7c - fStack_57c,local_a80 - local_580) & 0xffffffe0ffffffe0;
            uVar85 = (uint)(fStack_a78 - fStack_578) & 0xffffffe0;
            uVar95 = (uint)(fStack_a74 - fStack_574) & 0xffffffe0;
            auVar76[0] = (byte)uVar55 | local_c20;
            auVar76[1] = (byte)(uVar55 >> 8) | bStack_c1f;
            auVar76[2] = (byte)(uVar55 >> 0x10) | bStack_c1e;
            auVar76[3] = (byte)(uVar55 >> 0x18) | bStack_c1d;
            auVar76[4] = (byte)(uVar55 >> 0x20) | bStack_c1c;
            auVar76[5] = (byte)(uVar55 >> 0x28) | bStack_c1b;
            auVar76[6] = (byte)(uVar55 >> 0x30) | bStack_c1a;
            auVar76[7] = (byte)(uVar55 >> 0x38) | bStack_c19;
            auVar76[8] = (byte)uVar69 | bStack_c18;
            auVar76[9] = (byte)(uVar69 >> 8) | bStack_c17;
            auVar76[10] = (byte)(uVar69 >> 0x10) | bStack_c16;
            auVar76[0xb] = (byte)(uVar69 >> 0x18) | bStack_c15;
            auVar76[0xc] = (byte)uVar84 | bStack_c14;
            auVar76[0xd] = (byte)(uVar84 >> 8) | bStack_c13;
            auVar76[0xe] = (byte)(uVar84 >> 0x10) | bStack_c12;
            auVar76[0xf] = (byte)(uVar84 >> 0x18) | bStack_c11;
            auVar97[0] = (byte)uVar96 | local_c30;
            auVar97[1] = (byte)(uVar96 >> 8) | bStack_c2f;
            auVar97[2] = (byte)(uVar96 >> 0x10) | bStack_c2e;
            auVar97[3] = (byte)(uVar96 >> 0x18) | bStack_c2d;
            auVar97[4] = (byte)(uVar96 >> 0x20) | bStack_c2c;
            auVar97[5] = (byte)(uVar96 >> 0x28) | bStack_c2b;
            auVar97[6] = (byte)(uVar96 >> 0x30) | bStack_c2a;
            auVar97[7] = (byte)(uVar96 >> 0x38) | bStack_c29;
            auVar97[8] = (byte)uVar98 | bStack_c28;
            auVar97[9] = (byte)(uVar98 >> 8) | bStack_c27;
            auVar97[10] = (byte)(uVar98 >> 0x10) | bStack_c26;
            auVar97[0xb] = (byte)(uVar98 >> 0x18) | bStack_c25;
            auVar97[0xc] = (byte)uVar99 | bStack_c24;
            auVar97[0xd] = (byte)(uVar99 >> 8) | bStack_c23;
            auVar97[0xe] = (byte)(uVar99 >> 0x10) | bStack_c22;
            auVar97[0xf] = (byte)(uVar99 >> 0x18) | bStack_c21;
            uVar55 = CONCAT44(fStack_56c - fStack_a4c,local_570 - fStack_a50) & 0xffffffe0ffffffe0;
            uVar69 = (uint)(fStack_568 - fStack_a48) & 0xffffffe0;
            uVar84 = (uint)(fStack_564 - fStack_a44) & 0xffffffe0;
            auVar101[0] = (byte)uVar55 | local_c40;
            auVar101[1] = (byte)(uVar55 >> 8) | bStack_c3f;
            auVar101[2] = (byte)(uVar55 >> 0x10) | bStack_c3e;
            auVar101[3] = (byte)(uVar55 >> 0x18) | bStack_c3d;
            auVar101[4] = (byte)(uVar55 >> 0x20) | bStack_c3c;
            auVar101[5] = (byte)(uVar55 >> 0x28) | bStack_c3b;
            auVar101[6] = (byte)(uVar55 >> 0x30) | bStack_c3a;
            auVar101[7] = (byte)(uVar55 >> 0x38) | bStack_c39;
            auVar101[8] = (byte)uVar69 | bStack_c38;
            auVar101[9] = (byte)(uVar69 >> 8) | bStack_c37;
            auVar101[10] = (byte)(uVar69 >> 0x10) | bStack_c36;
            auVar101[0xb] = (byte)(uVar69 >> 0x18) | bStack_c35;
            auVar101[0xc] = (byte)uVar84 | bStack_c34;
            auVar101[0xd] = (byte)(uVar84 >> 8) | bStack_c33;
            auVar101[0xe] = (byte)(uVar84 >> 0x10) | bStack_c32;
            auVar101[0xf] = (byte)(uVar84 >> 0x18) | bStack_c31;
            auVar47[0] = (byte)uVar32 | local_c50;
            auVar47[1] = (byte)(uVar32 >> 8) | bStack_c4f;
            auVar47[2] = (byte)(uVar32 >> 0x10) | bStack_c4e;
            auVar47[3] = (byte)(uVar32 >> 0x18) | bStack_c4d;
            auVar47[4] = (byte)(uVar32 >> 0x20) | bStack_c4c;
            auVar47[5] = (byte)(uVar32 >> 0x28) | bStack_c4b;
            auVar47[6] = (byte)(uVar32 >> 0x30) | bStack_c4a;
            auVar47[7] = (byte)(uVar32 >> 0x38) | bStack_c49;
            auVar47[8] = (byte)uVar53 | bStack_c48;
            auVar47[9] = (byte)(uVar53 >> 8) | bStack_c47;
            auVar47[10] = (byte)(uVar53 >> 0x10) | bStack_c46;
            auVar47[0xb] = (byte)(uVar53 >> 0x18) | bStack_c45;
            auVar47[0xc] = (byte)uVar67 | bStack_c44;
            auVar47[0xd] = (byte)(uVar67 >> 8) | bStack_c43;
            auVar47[0xe] = (byte)(uVar67 >> 0x10) | bStack_c42;
            auVar47[0xf] = (byte)(uVar67 >> 0x18) | bStack_c41;
            auVar88[0] = (byte)uVar72 | local_c60;
            auVar88[1] = (byte)(uVar72 >> 8) | bStack_c5f;
            auVar88[2] = (byte)(uVar72 >> 0x10) | bStack_c5e;
            auVar88[3] = (byte)(uVar72 >> 0x18) | bStack_c5d;
            auVar88[4] = (byte)(uVar72 >> 0x20) | bStack_c5c;
            auVar88[5] = (byte)(uVar72 >> 0x28) | bStack_c5b;
            auVar88[6] = (byte)(uVar72 >> 0x30) | bStack_c5a;
            auVar88[7] = (byte)(uVar72 >> 0x38) | bStack_c59;
            auVar88[8] = (byte)uVar85 | bStack_c58;
            auVar88[9] = (byte)(uVar85 >> 8) | bStack_c57;
            auVar88[10] = (byte)(uVar85 >> 0x10) | bStack_c56;
            auVar88[0xb] = (byte)(uVar85 >> 0x18) | bStack_c55;
            auVar88[0xc] = (byte)uVar95 | bStack_c54;
            auVar88[0xd] = (byte)(uVar95 >> 8) | bStack_c53;
            auVar88[0xe] = (byte)(uVar95 >> 0x10) | bStack_c52;
            auVar88[0xf] = (byte)(uVar95 >> 0x18) | bStack_c51;
            uVar32 = CONCAT44(fStack_a5c - fStack_55c,local_a60 - local_560) & 0xffffffe0ffffffe0;
            uVar53 = (uint)(fStack_a58 - fStack_558) & 0xffffffe0;
            uVar67 = (uint)(fStack_a54 - fStack_554) & 0xffffffe0;
            auVar61[0] = (byte)uVar32 | local_c70;
            auVar61[1] = (byte)(uVar32 >> 8) | bStack_c6f;
            auVar61[2] = (byte)(uVar32 >> 0x10) | bStack_c6e;
            auVar61[3] = (byte)(uVar32 >> 0x18) | bStack_c6d;
            auVar61[4] = (byte)(uVar32 >> 0x20) | bStack_c6c;
            auVar61[5] = (byte)(uVar32 >> 0x28) | bStack_c6b;
            auVar61[6] = (byte)(uVar32 >> 0x30) | bStack_c6a;
            auVar61[7] = (byte)(uVar32 >> 0x38) | bStack_c69;
            auVar61[8] = (byte)uVar53 | bStack_c68;
            auVar61[9] = (byte)(uVar53 >> 8) | bStack_c67;
            auVar61[10] = (byte)(uVar53 >> 0x10) | bStack_c66;
            auVar61[0xb] = (byte)(uVar53 >> 0x18) | bStack_c65;
            auVar61[0xc] = (byte)uVar67 | bStack_c64;
            auVar61[0xd] = (byte)(uVar67 >> 8) | bStack_c63;
            auVar61[0xe] = (byte)(uVar67 >> 0x10) | bStack_c62;
            auVar61[0xf] = (byte)(uVar67 >> 0x18) | bStack_c61;
            auVar75 = NEON_smax(auVar76,auVar47,4);
            auVar77 = NEON_smax(auVar97,auVar88,4);
            auVar75 = NEON_smax(auVar75,auVar77,4);
            auVar77 = NEON_smax(auVar101,auVar61,4);
            auVar78 = NEON_smax(auVar75,auVar77,4);
            iVar52 = -(uint)(auVar78._0_4_ < 1);
            iVar54 = -(uint)(auVar78._4_4_ < 1);
            iVar68 = -(uint)(auVar78._8_4_ < 1);
            iVar70 = -(uint)(auVar78._12_4_ < 1);
            iVar52 = CONCAT13((byte)((uint)iVar52 >> 0x18) & bStack_c7d,
                              CONCAT12((byte)((uint)iVar52 >> 0x10) & bStack_c7e,
                                       CONCAT11((byte)((uint)iVar52 >> 8) & bStack_c7f,
                                                (byte)iVar52 & local_c80)));
            auVar56._0_8_ =
                 CONCAT17((byte)((uint)iVar54 >> 0x18) & bStack_c79,
                          CONCAT16((byte)((uint)iVar54 >> 0x10) & bStack_c7a,
                                   CONCAT15((byte)((uint)iVar54 >> 8) & bStack_c7b,
                                            CONCAT14((byte)iVar54 & bStack_c7c,iVar52))));
            auVar56[8] = (byte)iVar68 & bStack_c78;
            auVar56[9] = (byte)((uint)iVar68 >> 8) & bStack_c77;
            auVar56[10] = (byte)((uint)iVar68 >> 0x10) & bStack_c76;
            auVar56[0xb] = (byte)((uint)iVar68 >> 0x18) & bStack_c75;
            auVar62[0xc] = (byte)iVar70 & bStack_c74;
            auVar62._0_12_ = auVar56;
            auVar62[0xd] = (byte)((uint)iVar70 >> 8) & bStack_c73;
            auVar62[0xe] = (byte)((uint)iVar70 >> 0x10) & bStack_c72;
            auVar62[0xf] = (byte)((uint)iVar70 >> 0x18) & bStack_c71;
            uVar53 = iVar52 + (int)((ulong)auVar56._0_8_ >> 0x20) + auVar56._8_4_ + auVar62._12_4_;
            lVar36 = local_b40 + (ulong)(uint)puVar34[-1] * 0x1c;
            uVar73 = *(undefined8 *)(lVar36 + 0x18);
            uVar41 = (undefined1)((ulong)uVar73 >> 8);
            auVar48._6_2_ = 0;
            auVar48._0_6_ =
                 (uint6)CONCAT14(uVar41,(uint)CONCAT12(uVar41,(ushort)(byte)uVar73)) &
                 0xffff0000ffff;
            auVar48[8] = (char)((ulong)uVar73 >> 0x10);
            auVar48._9_3_ = 0;
            auVar48[0xc] = (char)((ulong)uVar73 >> 0x18);
            auVar48._13_3_ = 0;
            auVar75 = *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar53 * 0x10);
            iVar52 = *(int *)(&DAT_03aadfe0 + (ulong)uVar53 * 4);
            auVar77 = a64_TBL(ZEXT816(0),auVar48,auVar75);
            if (*(byte *)(lVar36 + 0x1b) < *(byte *)(lVar36 + 0x1a)) {
              if (uVar53 != 0 && local_ab0._1_1_ == 0) {
                iVar54 = 0;
                do {
                  switch(iVar54) {
                  case 0:
                    iVar68 = auVar77._0_4_;
                    break;
                  case 1:
                    iVar68 = auVar77._4_4_;
                    break;
                  case 2:
                    iVar68 = auVar77._8_4_;
                    break;
                  case 3:
                    iVar68 = auVar77._12_4_;
                    break;
                  default:
                    iVar68 = 0;
                  }
                  uVar67 = 0;
                  uVar84 = *(uint *)((long)(local_b48 + 2) + (long)iVar68 * 4 + (long)local_b48[2]);
                  uVar69 = 1;
                  if ((uVar84 >> 8 & 0xff) <= uVar84 >> 0x18 &&
                      (uVar84 >> 0x10 & 0xff) != uVar84 >> 0x18) {
                    uVar69 = 2;
                  }
                  local_100 = *local_b90;
                  uStack_f8 = local_b90[1];
                  do {
                    uVar84 = local_b50 | iVar68 << 1;
                    uVar85 = ((uVar84 | uVar67) + 1 <<
                             (ulong)(-((uint)*(byte *)(local_ba0 + 0x1c) +
                                      *(int *)((long)local_b98 + 0x1c)) & 0x1f)) - 1 |
                             (&DAT_03aa74b0)[*(int *)((long)local_b98 + 0x1c)] &
                             *(uint *)(local_b98 + 3);
                    plVar31 = (long *)*local_bb0;
                    if (plVar31 == (long *)0x0) {
                      lVar36 = *local_b98;
                      local_98 = 0xffffff;
                      local_b0 = 0xffff;
                      local_ac = 0;
                      local_88 = 0xffff;
                      local_84 = 0;
                      uStack_a8 = 0;
                      uStack_a4 = 0;
                      uStack_80 = 0;
                      uStack_7c = 0;
                      if (lVar36 == 0) {
                        local_a0 = 0xffffffffffffffff;
                      }
                      else {
                        local_a0 = *(undefined8 *)(lVar36 + 0xb0);
                        local_98 = *(undefined4 *)(lVar36 + 0x50);
                      }
LAB_02fcd484:
                      local_c0 = CONCAT44(local_c0._4_4_,0xffffff);
                      local_d0 = local_d0 & 0xffffffff00000000;
                      uStack_78 = 6;
                      local_8c = 0xf;
                      local_b4 = 0xf;
                      local_b8 = 0xffffffff;
                      local_c8 = 0xffffffffffffffff;
                      local_d8 = 0;
                      local_e0 = 0;
                      uStack_e8 = 0;
                      local_f0 = 0;
                      local_90 = uVar85;
                      (**(code **)(*local_ab8 + 0x28))(local_ab8,&local_f0);
                      bVar30 = false;
                      if ((char)local_ab0 != '\0') {
                        bVar30 = *(int *)((long)local_ab8 + 0xc) != 0;
                      }
                      local_ab0._1_1_ = local_ab0._1_1_ | bVar30;
                    }
                    else {
                      lVar36 = *(long *)(local_ba0 + 0x48);
                      if (lVar36 == 0) {
                        lVar36 = 0;
                      }
                      else {
                        lVar36 = lVar36 + local_ba0 + 0x48;
                      }
                      piVar1 = (int *)(lVar36 + 0x40);
                      if (*(int *)(lVar36 + 0x44) == 2) {
                        lVar36 = (long)*piVar1;
                      }
                      else {
                        iVar3 = *piVar1;
                        iVar35 = 0;
                        iVar70 = *(int *)(lVar36 + 0x44) + -1;
                        while( true ) {
                          uVar95 = iVar70 + iVar35;
                          if ((int)uVar95 < 0) {
                            uVar95 = uVar95 + 1;
                          }
                          uVar98 = (int)uVar95 >> 1;
                          lVar4 = (long)((ulong)uVar95 << 0x20) >> 0x21;
                          uVar95 = *(uint *)((long)piVar1 +
                                            (-(ulong)(uVar98 >> 0x1f) & 0xfffffff800000000 |
                                            (ulong)uVar98 << 3) + (long)iVar3);
                          lVar36 = lVar4 + 1;
                          if ((uVar95 <= uVar84) &&
                             (uVar84 < *(uint *)((long)piVar1 + lVar36 * 8 + (long)iVar3))) break;
                          iVar29 = (int)lVar36;
                          if (uVar84 <= uVar95) {
                            iVar70 = uVar98 - 1;
                            iVar29 = iVar35;
                          }
                          iVar35 = iVar29;
                        }
                        lVar36 = lVar4 * 8 + (long)iVar3;
                      }
                      (**(code **)(*plVar31 + 0x40))
                                (plVar31,*(undefined2 *)((long)piVar1 + lVar36 + 4),6,*local_b98,
                                 local_b98[1],local_ba0,uVar85,0,&local_100);
                      if (local_bb0[1] == 0) {
LAB_02fcd3e4:
                        local_98 = 0xffffff;
                        lVar36 = *local_b98;
                        local_b0 = (undefined2)local_bb0[2];
                        uStack_a4 = *(undefined4 *)((long)local_bb0 + 0x1c);
                        local_ac = (undefined4)*(undefined8 *)((long)local_bb0 + 0x14);
                        uStack_a8 = (undefined4)
                                    ((ulong)*(undefined8 *)((long)local_bb0 + 0x14) >> 0x20);
                        if (lVar36 == 0) {
                          local_a0 = 0xffffffffffffffff;
                        }
                        else {
                          local_a0 = *(undefined8 *)(lVar36 + 0xb0);
                          local_98 = *(undefined4 *)(lVar36 + 0x50);
                        }
                        uStack_7c = *(undefined4 *)(puVar38 + 1);
                        local_88 = (undefined2)local_100;
                        local_84 = (undefined4)*puVar38;
                        uStack_80 = (undefined4)((ulong)*puVar38 >> 0x20);
                        goto LAB_02fcd484;
                      }
                      local_f0 = CONCAT62(local_f0._2_6_,(short)local_bb0[2]);
                      uVar71 = *(undefined4 *)((long)local_bb0 + 0x1c);
                      *(undefined8 *)((ulong)&local_f0 | 4) =
                           *(undefined8 *)((long)local_bb0 + 0x14);
                      *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) = uVar71;
                      local_e0 = *local_ac0;
                      local_d8 = local_ac0[1];
                      local_d0 = local_ac0[2];
                      local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(local_ac0 + 3));
                      local_138[0] = (undefined2)local_100;
                      *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) =
                           *(undefined4 *)(puVar38 + 1);
                      local_c0 = 0;
                      *(undefined8 *)((ulong)local_138 | 4) = *puVar38;
                      local_128 = *local_b98;
                      local_120 = local_b98[1];
                      local_118 = local_ba0;
                      local_108 = 0;
                      local_110 = uVar85;
                      uVar32 = (**(code **)(*(long *)local_bb0[1] + 0x40))
                                         ((long *)local_bb0[1],6,1,&local_f0,local_138);
                      if ((uVar32 & 1) != 0) goto LAB_02fcd3e4;
                    }
                    uVar67 = uVar67 + 1;
                  } while (uVar67 < uVar69);
                  iVar54 = iVar54 + 1;
                } while (iVar54 != iVar52);
              }
              if (local_ab0._1_1_ != 0) goto LAB_02fccf14;
            }
            else {
              *(long *)(puVar34 + -1) = auVar77._0_8_;
              auVar77 = NEON_ext(auVar77,auVar77,8,1);
              *(long *)(puVar34 + 1) = auVar77._0_8_;
              local_150 = puVar34 + -1 + iVar52;
            }
            if (uVar53 != 0xf) {
              auVar75 = a64_TBL(ZEXT816(0),auVar78,auVar75);
              auVar63._0_8_ =
                   CONCAT17((char)((uint)(auVar75._4_4_ << 0x1d) >> 0x18),
                            (uint7)((byte)((uint)(auVar75._0_4_ << 0x1d) >> 0x18) & 0x80) << 0x18) &
                   0x80ffffffffffffff;
              auVar63._8_3_ = 0;
              auVar63[0xb] = (byte)((uint)(auVar75._8_4_ << 0x1d) >> 0x18) & 0x80;
              auVar63._12_3_ = 0;
              auVar63[0xf] = (byte)((uint)(auVar75._12_4_ << 0x1d) >> 0x18) & 0x80;
              auVar77 = NEON_rev64(auVar63,4);
              auVar77 = NEON_ext(auVar77,auVar77,8,1);
              iVar54 = 4;
              do {
                uVar32 = (ulong)(auVar75._12_4_ & 0x1f);
                fVar6 = local_5b0[uVar32];
                uVar71 = local_9c0[uVar32 - 0x20];
                auVar89._4_4_ = uVar71;
                auVar89._0_4_ = uVar71;
                auVar89._8_4_ = uVar71;
                auVar89._12_4_ = uVar71;
                bVar39 = SUB41(fVar6,0);
                auVar79[0] = auVar77[0] ^ bVar39;
                bVar40 = (byte)((uint)fVar6 >> 8);
                auVar79[1] = auVar77[1] ^ bVar40;
                bVar82 = (byte)((uint)fVar6 >> 0x10);
                auVar79[2] = auVar77[2] ^ bVar82;
                bVar83 = (byte)((uint)fVar6 >> 0x18);
                auVar79[3] = auVar77[3] ^ bVar83;
                auVar79[4] = auVar77[4] ^ bVar39;
                auVar79[5] = auVar77[5] ^ bVar40;
                auVar79[6] = auVar77[6] ^ bVar82;
                auVar79[7] = auVar77[7] ^ bVar83;
                auVar79[8] = auVar77[8] ^ bVar39;
                auVar79[9] = auVar77[9] ^ bVar40;
                auVar79[10] = auVar77[10] ^ bVar82;
                auVar79[0xb] = auVar77[0xb] ^ bVar83;
                auVar79[0xc] = auVar77[0xc] ^ bVar39;
                auVar79[0xd] = auVar77[0xd] ^ bVar40;
                auVar79[0xe] = auVar77[0xe] ^ bVar82;
                auVar79[0xf] = auVar77[0xf] ^ bVar83;
                auVar78 = NEON_fmin(auVar79,auVar89,4);
                auVar90 = NEON_ext(auVar75,auVar75,4,1);
                auVar75 = NEON_ext(auVar90,auVar75,0xc,1);
                uVar71 = auVar77._12_4_;
                auVar91._4_4_ = uVar71;
                auVar91._0_4_ = uVar71;
                auVar91._8_4_ = uVar71;
                auVar91._12_4_ = uVar71;
                auVar77 = NEON_ext(auVar77,auVar91,4,1);
                iVar54 = iVar54 + -1;
                local_9c0[uVar32 - 0x20] = auVar78._0_4_;
              } while (iVar52 < iVar54);
            }
            if (local_550 == local_150) goto LAB_02fccf14;
            auVar45._8_8_ = uStack_b28;
            auVar45._0_8_ = local_b30;
            auVar86._8_8_ = uStack_b18;
            auVar86._0_8_ = local_b20;
            auVar59._8_8_ = uStack_b08;
            auVar59._0_8_ = local_b10;
            puVar34 = local_150;
          } while( true );
        }
LAB_02fcd6f4:
        if (local_ab0._1_1_ != 0) break;
      }
      if (uVar51 != 0xf) {
        auVar44 = a64_TBL(ZEXT816(0),auVar58,auVar44);
        auVar64._0_8_ =
             CONCAT17((char)((uint)(auVar44._4_4_ << 0x1d) >> 0x18),
                      (uint7)((byte)((uint)(auVar44._0_4_ << 0x1d) >> 0x18) & 0x80) << 0x18) &
             0x80ffffffffffffff;
        auVar64._8_3_ = 0;
        auVar64[0xb] = (byte)((uint)(auVar44._8_4_ << 0x1d) >> 0x18) & 0x80;
        auVar64._12_3_ = 0;
        auVar64[0xf] = (byte)((uint)(auVar44._12_4_ << 0x1d) >> 0x18) & 0x80;
        auVar57 = NEON_rev64(auVar64,4);
        auVar57 = NEON_ext(auVar57,auVar57,8,1);
        iVar50 = 4;
        do {
          uVar32 = (ulong)(auVar44._12_4_ & 0x1f);
          fVar6 = pfVar2[uVar32];
          uVar71 = local_9c0[uVar32 - 0x20];
          auVar92._4_4_ = uVar71;
          auVar92._0_4_ = uVar71;
          auVar92._8_4_ = uVar71;
          auVar92._12_4_ = uVar71;
          bVar39 = SUB41(fVar6,0);
          auVar80[0] = auVar57[0] ^ bVar39;
          bVar40 = (byte)((uint)fVar6 >> 8);
          auVar80[1] = auVar57[1] ^ bVar40;
          bVar82 = (byte)((uint)fVar6 >> 0x10);
          auVar80[2] = auVar57[2] ^ bVar82;
          bVar83 = (byte)((uint)fVar6 >> 0x18);
          auVar80[3] = auVar57[3] ^ bVar83;
          auVar80[4] = auVar57[4] ^ bVar39;
          auVar80[5] = auVar57[5] ^ bVar40;
          auVar80[6] = auVar57[6] ^ bVar82;
          auVar80[7] = auVar57[7] ^ bVar83;
          auVar80[8] = auVar57[8] ^ bVar39;
          auVar80[9] = auVar57[9] ^ bVar40;
          auVar80[10] = auVar57[10] ^ bVar82;
          auVar80[0xb] = auVar57[0xb] ^ bVar83;
          auVar80[0xc] = auVar57[0xc] ^ bVar39;
          auVar80[0xd] = auVar57[0xd] ^ bVar40;
          auVar80[0xe] = auVar57[0xe] ^ bVar82;
          auVar80[0xf] = auVar57[0xf] ^ bVar83;
          iVar50 = iVar50 + -1;
          auVar58 = NEON_fmin(auVar80,auVar92,4);
          auVar75 = NEON_ext(auVar44,auVar44,4,1);
          auVar44 = NEON_ext(auVar75,auVar44,0xc,1);
          uVar71 = auVar57._12_4_;
          auVar93._4_4_ = uVar71;
          auVar93._0_4_ = uVar71;
          auVar93._8_4_ = uVar71;
          auVar93._12_4_ = uVar71;
          local_9c0[uVar32 - 0x20] = auVar58._0_4_;
          auVar57 = NEON_ext(auVar57,auVar93,4,1);
        } while (iVar42 < iVar50);
      }
      puVar34 = local_5c0;
    } while (local_9c0 != local_5c0);
    auVar13._8_4_ = uStack_9f8;
    auVar13._0_8_ = local_a00;
    auVar13._12_4_ = uStack_9f4;
    auVar14._8_4_ = uStack_9e8;
    auVar14._0_8_ = uStack_9f0;
    auVar14._12_4_ = uStack_9e4;
    auVar9._8_4_ = uStack_a38;
    auVar9._0_8_ = local_a40;
    auVar9._12_4_ = uStack_a34;
    auVar10._8_4_ = uStack_a28;
    auVar10._0_8_ = uStack_a30;
    auVar10._12_4_ = uStack_a24;
    auVar11._8_4_ = uStack_a18;
    auVar11._0_8_ = local_a20;
    auVar11._12_4_ = uStack_a14;
    auVar12._8_4_ = uStack_a08;
    auVar12._0_8_ = uStack_a10;
    auVar12._12_4_ = uStack_a04;
    auVar104._4_4_ = (int)((ulong)uStack_a10 >> 0x20);
    auVar104._0_4_ = (int)((ulong)uStack_a30 >> 0x20);
    auVar44 = NEON_ext(auVar14,auVar14,8,1);
    auVar57 = NEON_ext(auVar10,auVar10,8,1);
    auVar58 = NEON_ext(auVar12,auVar12,8,1);
    auVar77 = NEON_ext(auVar9,auVar9,8,1);
    auVar104._8_4_ = (int)((ulong)uStack_9f0 >> 0x20);
    auVar104._12_4_ = 0;
    auVar75 = NEON_ext(auVar13,auVar13,8,1);
    auVar78 = NEON_ext(auVar11,auVar11,8,1);
    auVar107._4_4_ = auVar58._4_4_;
    auVar107._0_4_ = auVar57._4_4_;
    auVar107._8_4_ = auVar44._4_4_;
    auVar107._12_4_ = 0;
    auVar81._4_4_ = (int)uStack_a10;
    auVar81._0_4_ = (int)uStack_a30;
    auVar94._4_4_ = auVar78._0_4_;
    auVar94._0_4_ = auVar77._0_4_;
    auVar81._8_4_ = (int)uStack_9f0;
    auVar81._12_4_ = 0;
    auVar49._4_4_ = (int)local_a20;
    auVar49._0_4_ = (int)local_a40;
    auVar49._8_4_ = (int)local_a00;
    auVar49._12_4_ = 0;
    auVar65._4_4_ = auVar58._0_4_;
    auVar65._0_4_ = auVar57._0_4_;
    auVar65._8_4_ = auVar44._0_4_;
    auVar65._12_4_ = 0;
    auVar94._8_4_ = auVar75._0_4_;
    auVar94._12_4_ = 0;
    auVar58 = NEON_fmin(auVar81,auVar104,4);
    auVar7._4_4_ = (int)((ulong)local_a20 >> 0x20);
    auVar7._0_4_ = (int)((ulong)local_a40 >> 0x20);
    auVar7._8_4_ = (int)((ulong)local_a00 >> 0x20);
    auVar7._12_4_ = 0;
    auVar44 = NEON_fmin(auVar49,auVar7,4);
    auVar57 = NEON_fmin(auVar65,auVar107,4);
    auVar8._4_4_ = auVar78._4_4_;
    auVar8._0_4_ = auVar77._4_4_;
    auVar8._8_4_ = auVar75._4_4_;
    auVar8._12_4_ = 0;
    auVar75 = NEON_fmin(auVar94,auVar8,4);
    auVar44 = NEON_fmin(auVar44,auVar75,4);
    auVar57 = NEON_fmin(auVar58,auVar57,4);
    auVar66._0_4_ = -auVar57._0_4_;
    auVar66._4_4_ = -auVar57._4_4_;
    auVar66._8_4_ = -auVar57._8_4_;
    auVar66._12_4_ = -auVar57._12_4_;
    auVar44 = NEON_fmin(param_8[1],auVar44,4);
    auVar57 = NEON_fmax(*param_8,auVar66,4);
    *(long *)(*param_8 + 8) = auVar57._8_8_;
    *(long *)*param_8 = auVar57._0_8_;
    *(long *)(param_8[1] + 8) = auVar44._8_8_;
    *(long *)param_8[1] = auVar44._0_8_;
  }
  return;
LAB_02fccf14:
  iVar50 = iVar50 + 1;
  if (iVar50 == iVar42) goto LAB_02fcd6f4;
  goto LAB_02fccf28;
}


