/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbe414; name: FUN_02fbe414
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fbe414(long param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 *param_5,
                 long *param_6,long *param_7,undefined1 (*param_8) [16])

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined4 uVar39;
  ulong uVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  long **pplVar44;
  undefined8 uVar45;
  long lVar46;
  undefined4 uVar47;
  long *plVar48;
  undefined8 *puVar49;
  long lVar50;
  int iVar51;
  int iVar58;
  undefined1 auVar52 [12];
  int iVar56;
  uint uVar57;
  uint uVar59;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar60;
  undefined1 auVar55 [16];
  uint uVar64;
  uint uVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  byte bVar66;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  byte local_730;
  byte bStack_72f;
  byte bStack_72e;
  byte bStack_72d;
  byte bStack_72c;
  byte bStack_72b;
  byte bStack_72a;
  byte bStack_729;
  byte bStack_728;
  byte bStack_727;
  byte bStack_726;
  byte bStack_725;
  byte bStack_724;
  byte bStack_723;
  byte bStack_722;
  byte bStack_721;
  byte local_6d0;
  byte bStack_6cf;
  byte bStack_6ce;
  byte bStack_6cd;
  byte bStack_6cc;
  byte bStack_6cb;
  byte bStack_6ca;
  byte bStack_6c9;
  byte bStack_6c8;
  byte bStack_6c7;
  byte bStack_6c6;
  byte bStack_6c5;
  byte bStack_6c4;
  byte bStack_6c3;
  byte bStack_6c2;
  byte bStack_6c1;
  long local_5e8;
  undefined8 uStack_5e0;
  long *local_5d8;
  long *local_5d0;
  long *local_5c8;
  undefined8 *local_5c0;
  long *local_5b8;
  undefined8 local_5b0;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined8 local_5a0;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined8 local_590;
  undefined4 uStack_588;
  undefined4 uStack_584;
  undefined8 local_580;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined8 local_570;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined8 local_560;
  undefined4 uStack_558;
  undefined4 uStack_554;
  long *local_550 [2];
  long local_540;
  long lStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  long **local_150;
  undefined2 local_138 [8];
  long local_128;
  long local_120;
  long local_118;
  uint local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
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
  undefined4 local_78;
  undefined4 uStack_74;
  
  uVar38 = _UNK_03889d78;
  uVar37 = _DAT_03889d70;
  uVar36 = _UNK_03889c68;
  uVar35 = _DAT_03889c60;
  uVar34 = _UNK_038899c8;
  uVar33 = _DAT_038899c0;
  uVar32 = _UNK_03889708;
  uVar31 = _DAT_03889700;
  uVar30 = _UNK_038894d8;
  uVar29 = _DAT_038894d0;
  uVar28 = _UNK_03889328;
  uVar27 = _DAT_03889320;
  uVar26 = _UNK_03889088;
  uVar6 = _DAT_03889080;
  lVar42 = *(long *)(param_1 + 0x58);
  lVar46 = 0;
  if (lVar42 != 0) {
    lVar46 = lVar42 + param_1 + 0x58;
  }
  plVar48 = (long *)(lVar46 + 0x50);
  lVar42 = *plVar48;
  auVar53 = *(undefined1 (*) [16])((long)plVar48 + lVar42 + 0x90);
  local_5e8 = param_1;
  uStack_5e0 = param_2;
  local_5d8 = param_3;
  local_5d0 = param_4;
  local_5c8 = param_6;
  local_5c0 = param_5;
  local_5b8 = param_7;
  if (((*(float *)((long)plVar48 + lVar42 + 0x80) <= auVar53._0_4_ ||
       *(float *)((long)plVar48 + lVar42 + 0x84) <= auVar53._4_4_) ||
      *(float *)((long)plVar48 + lVar42 + 0x88) <= auVar53._8_4_) ||
      *(float *)((long)plVar48 + lVar42 + 0x8c) <= auVar53._12_4_) {
    if (param_8 == (undefined1 (*) [16])0x0) {
      FUN_02fbedac(plVar48,param_3 + 6,&local_5e8);
      return;
    }
    fVar14 = *(float *)(param_3 + 6);
    fVar15 = *(float *)((long)param_3 + 0x34);
    fVar16 = *(float *)(param_3 + 7);
    fVar17 = *(float *)(param_3 + 8);
    fVar18 = *(float *)((long)param_3 + 0x44);
    fVar19 = *(float *)(param_3 + 9);
    uStack_5a8 = 0x7f7fffee;
    uStack_5a4 = 0x7f7fffee;
    local_5b0 = 0x7f7fffee7f7fffee;
    uStack_598 = 0x7f7fffee;
    uStack_594 = 0x7f7fffee;
    local_5a0 = 0x7f7fffee7f7fffee;
    uStack_588 = 0x7f7fffee;
    uStack_584 = 0x7f7fffee;
    local_590 = 0x7f7fffee7f7fffee;
    uStack_578 = 0x7f7fffee;
    uStack_574 = 0x7f7fffee;
    local_580 = 0x7f7fffee7f7fffee;
    uStack_568 = 0x7f7fffee;
    uStack_564 = 0x7f7fffee;
    local_570 = 0x7f7fffee7f7fffee;
    local_550[0] = (long *)CONCAT44(local_550[0]._4_4_,1);
    puVar49 = (undefined8 *)((ulong)&local_100 | 4);
    uStack_558 = 0x7f7fffee;
    uStack_554 = 0x7f7fffee;
    local_560 = 0x7f7fffee7f7fffee;
    pplVar44 = (long **)((ulong)local_550 | 4);
    do {
      local_150 = (long **)((long)pplVar44 + -4);
      pfVar1 = (float *)((long)plVar48 + (long)*(int *)((long)pplVar44 + -4) * 0x80 + *plVar48);
      uVar40 = CONCAT44(pfVar1[1] - fVar17,*pfVar1 - fVar17) & 0xffffffe0ffffffe0;
      uVar57 = (uint)(pfVar1[2] - fVar17) & 0xffffffe0;
      uVar59 = (uint)(pfVar1[3] - fVar17) & 0xffffffe0;
      local_6d0 = (byte)uVar37;
      bStack_6cf = (byte)((ulong)uVar37 >> 8);
      bStack_6ce = (byte)((ulong)uVar37 >> 0x10);
      bStack_6cd = (byte)((ulong)uVar37 >> 0x18);
      bStack_6cc = (byte)((ulong)uVar37 >> 0x20);
      bStack_6cb = (byte)((ulong)uVar37 >> 0x28);
      bStack_6ca = (byte)((ulong)uVar37 >> 0x30);
      bStack_6c9 = (byte)((ulong)uVar37 >> 0x38);
      bStack_6c8 = (byte)uVar38;
      bStack_6c7 = (byte)((ulong)uVar38 >> 8);
      bStack_6c6 = (byte)((ulong)uVar38 >> 0x10);
      bStack_6c5 = (byte)((ulong)uVar38 >> 0x18);
      bStack_6c4 = (byte)((ulong)uVar38 >> 0x20);
      bStack_6c3 = (byte)((ulong)uVar38 >> 0x28);
      bStack_6c2 = (byte)((ulong)uVar38 >> 0x30);
      bStack_6c1 = (byte)((ulong)uVar38 >> 0x38);
      auVar54[0] = (byte)uVar40 | local_6d0;
      auVar54[1] = (byte)(uVar40 >> 8) | bStack_6cf;
      auVar54[2] = (byte)(uVar40 >> 0x10) | bStack_6ce;
      auVar54[3] = (byte)(uVar40 >> 0x18) | bStack_6cd;
      auVar54[4] = (byte)(uVar40 >> 0x20) | bStack_6cc;
      auVar54[5] = (byte)(uVar40 >> 0x28) | bStack_6cb;
      auVar54[6] = (byte)(uVar40 >> 0x30) | bStack_6ca;
      auVar54[7] = (byte)(uVar40 >> 0x38) | bStack_6c9;
      auVar54[8] = (byte)uVar57 | bStack_6c8;
      auVar54[9] = (byte)(uVar57 >> 8) | bStack_6c7;
      auVar54[10] = (byte)(uVar57 >> 0x10) | bStack_6c6;
      auVar54[0xb] = (byte)(uVar57 >> 0x18) | bStack_6c5;
      auVar54[0xc] = (byte)uVar59 | bStack_6c4;
      auVar54[0xd] = (byte)(uVar59 >> 8) | bStack_6c3;
      auVar54[0xe] = (byte)(uVar59 >> 0x10) | bStack_6c2;
      auVar54[0xf] = (byte)(uVar59 >> 0x18) | bStack_6c1;
      uVar40 = CONCAT44(pfVar1[9] - fVar18,pfVar1[8] - fVar18) & 0xffffffe0ffffffe0;
      uVar57 = (uint)(pfVar1[10] - fVar18) & 0xffffffe0;
      uVar59 = (uint)(pfVar1[0xb] - fVar18) & 0xffffffe0;
      auVar83[0] = (byte)uVar40 | (byte)uVar29;
      auVar83[1] = (byte)(uVar40 >> 8) | (byte)((ulong)uVar29 >> 8);
      auVar83[2] = (byte)(uVar40 >> 0x10) | (byte)((ulong)uVar29 >> 0x10);
      auVar83[3] = (byte)(uVar40 >> 0x18) | (byte)((ulong)uVar29 >> 0x18);
      auVar83[4] = (byte)(uVar40 >> 0x20) | (byte)((ulong)uVar29 >> 0x20);
      auVar83[5] = (byte)(uVar40 >> 0x28) | (byte)((ulong)uVar29 >> 0x28);
      auVar83[6] = (byte)(uVar40 >> 0x30) | (byte)((ulong)uVar29 >> 0x30);
      auVar83[7] = (byte)(uVar40 >> 0x38) | (byte)((ulong)uVar29 >> 0x38);
      auVar83[8] = (byte)uVar57 | (byte)uVar30;
      auVar83[9] = (byte)(uVar57 >> 8) | (byte)((ulong)uVar30 >> 8);
      auVar83[10] = (byte)(uVar57 >> 0x10) | (byte)((ulong)uVar30 >> 0x10);
      auVar83[0xb] = (byte)(uVar57 >> 0x18) | (byte)((ulong)uVar30 >> 0x18);
      auVar83[0xc] = (byte)uVar59 | (byte)((ulong)uVar30 >> 0x20);
      auVar83[0xd] = (byte)(uVar59 >> 8) | (byte)((ulong)uVar30 >> 0x28);
      auVar83[0xe] = (byte)(uVar59 >> 0x10) | (byte)((ulong)uVar30 >> 0x30);
      auVar83[0xf] = (byte)(uVar59 >> 0x18) | (byte)((ulong)uVar30 >> 0x38);
      uVar57 = (uint)((float)*(undefined8 *)(pfVar1 + 0x10) - fVar19) & 0xffffffe0;
      uVar59 = (uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x10) >> 0x20) - fVar19) & 0xffffffe0;
      uVar41 = (uint)((float)*(undefined8 *)(pfVar1 + 0x12) - fVar19) & 0xffffffe0;
      uVar7 = (uint)((float)((ulong)*(undefined8 *)(pfVar1 + 0x12) >> 0x20) - fVar19) & 0xffffffe0;
      uVar40 = CONCAT44(fVar14 - pfVar1[5],fVar14 - pfVar1[4]) & 0xffffffe0ffffffe0;
      uVar64 = (uint)(fVar14 - pfVar1[6]) & 0xffffffe0;
      uVar65 = (uint)(fVar14 - pfVar1[7]) & 0xffffffe0;
      auVar82[0] = (byte)uVar40 | (byte)uVar6;
      auVar82[1] = (byte)(uVar40 >> 8) | (byte)((ulong)uVar6 >> 8);
      auVar82[2] = (byte)(uVar40 >> 0x10) | (byte)((ulong)uVar6 >> 0x10);
      auVar82[3] = (byte)(uVar40 >> 0x18) | (byte)((ulong)uVar6 >> 0x18);
      auVar82[4] = (byte)(uVar40 >> 0x20) | (byte)((ulong)uVar6 >> 0x20);
      auVar82[5] = (byte)(uVar40 >> 0x28) | (byte)((ulong)uVar6 >> 0x28);
      auVar82[6] = (byte)(uVar40 >> 0x30) | (byte)((ulong)uVar6 >> 0x30);
      auVar82[7] = (byte)(uVar40 >> 0x38) | (byte)((ulong)uVar6 >> 0x38);
      auVar82[8] = (byte)uVar64 | (byte)uVar26;
      auVar82[9] = (byte)(uVar64 >> 8) | (byte)((ulong)uVar26 >> 8);
      auVar82[10] = (byte)(uVar64 >> 0x10) | (byte)((ulong)uVar26 >> 0x10);
      auVar82[0xb] = (byte)(uVar64 >> 0x18) | (byte)((ulong)uVar26 >> 0x18);
      auVar82[0xc] = (byte)uVar65 | (byte)((ulong)uVar26 >> 0x20);
      auVar82[0xd] = (byte)(uVar65 >> 8) | (byte)((ulong)uVar26 >> 0x28);
      auVar82[0xe] = (byte)(uVar65 >> 0x10) | (byte)((ulong)uVar26 >> 0x30);
      auVar82[0xf] = (byte)(uVar65 >> 0x18) | (byte)((ulong)uVar26 >> 0x38);
      auVar53 = NEON_smax(auVar54,auVar82,4);
      uVar40 = CONCAT44(fVar15 - pfVar1[0xd],fVar15 - pfVar1[0xc]) & 0xffffffe0ffffffe0;
      uVar64 = (uint)(fVar15 - pfVar1[0xe]) & 0xffffffe0;
      uVar65 = (uint)(fVar15 - pfVar1[0xf]) & 0xffffffe0;
      auVar84[0] = (byte)uVar40 | (byte)uVar35;
      auVar84[1] = (byte)(uVar40 >> 8) | (byte)((ulong)uVar35 >> 8);
      auVar84[2] = (byte)(uVar40 >> 0x10) | (byte)((ulong)uVar35 >> 0x10);
      auVar84[3] = (byte)(uVar40 >> 0x18) | (byte)((ulong)uVar35 >> 0x18);
      auVar84[4] = (byte)(uVar40 >> 0x20) | (byte)((ulong)uVar35 >> 0x20);
      auVar84[5] = (byte)(uVar40 >> 0x28) | (byte)((ulong)uVar35 >> 0x28);
      auVar84[6] = (byte)(uVar40 >> 0x30) | (byte)((ulong)uVar35 >> 0x30);
      auVar84[7] = (byte)(uVar40 >> 0x38) | (byte)((ulong)uVar35 >> 0x38);
      auVar84[8] = (byte)uVar64 | (byte)uVar36;
      auVar84[9] = (byte)(uVar64 >> 8) | (byte)((ulong)uVar36 >> 8);
      auVar84[10] = (byte)(uVar64 >> 0x10) | (byte)((ulong)uVar36 >> 0x10);
      auVar84[0xb] = (byte)(uVar64 >> 0x18) | (byte)((ulong)uVar36 >> 0x18);
      auVar84[0xc] = (byte)uVar65 | (byte)((ulong)uVar36 >> 0x20);
      auVar84[0xd] = (byte)(uVar65 >> 8) | (byte)((ulong)uVar36 >> 0x28);
      auVar84[0xe] = (byte)(uVar65 >> 0x10) | (byte)((ulong)uVar36 >> 0x30);
      auVar84[0xf] = (byte)(uVar65 >> 0x18) | (byte)((ulong)uVar36 >> 0x38);
      auVar61 = NEON_smax(auVar83,auVar84,4);
      auVar54 = NEON_smax(auVar53,auVar61,4);
      uVar64 = (uint)(fVar16 - (float)*(undefined8 *)(pfVar1 + 0x14)) & 0xffffffe0;
      uVar65 = (uint)(fVar16 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x14) >> 0x20)) & 0xffffffe0;
      uVar9 = (uint)(fVar16 - (float)*(undefined8 *)(pfVar1 + 0x16)) & 0xffffffe0;
      uVar10 = (uint)(fVar16 - (float)((ulong)*(undefined8 *)(pfVar1 + 0x16) >> 0x20)) & 0xffffffe0;
      auVar53[1] = (byte)(uVar57 >> 8) | (byte)((ulong)uVar33 >> 8);
      auVar53[0] = (byte)uVar57 | (byte)uVar33;
      auVar53[2] = (byte)(uVar57 >> 0x10) | (byte)((ulong)uVar33 >> 0x10);
      auVar53[3] = (byte)(uVar57 >> 0x18) | (byte)((ulong)uVar33 >> 0x18);
      auVar53[4] = (byte)uVar59 | (byte)((ulong)uVar33 >> 0x20);
      auVar53[5] = (byte)(uVar59 >> 8) | (byte)((ulong)uVar33 >> 0x28);
      auVar53[6] = (byte)(uVar59 >> 0x10) | (byte)((ulong)uVar33 >> 0x30);
      auVar53[7] = (byte)(uVar59 >> 0x18) | (byte)((ulong)uVar33 >> 0x38);
      auVar53[8] = (byte)uVar41 | (byte)uVar34;
      auVar53[9] = (byte)(uVar41 >> 8) | (byte)((ulong)uVar34 >> 8);
      auVar53[10] = (byte)(uVar41 >> 0x10) | (byte)((ulong)uVar34 >> 0x10);
      auVar53[0xb] = (byte)(uVar41 >> 0x18) | (byte)((ulong)uVar34 >> 0x18);
      auVar53[0xc] = (byte)uVar7 | (byte)((ulong)uVar34 >> 0x20);
      auVar53[0xd] = (byte)(uVar7 >> 8) | (byte)((ulong)uVar34 >> 0x28);
      auVar53[0xe] = (byte)(uVar7 >> 0x10) | (byte)((ulong)uVar34 >> 0x30);
      auVar53[0xf] = (byte)(uVar7 >> 0x18) | (byte)((ulong)uVar34 >> 0x38);
      auVar61[1] = (byte)(uVar64 >> 8) | (byte)((ulong)uVar27 >> 8);
      auVar61[0] = (byte)uVar64 | (byte)uVar27;
      auVar61[2] = (byte)(uVar64 >> 0x10) | (byte)((ulong)uVar27 >> 0x10);
      auVar61[3] = (byte)(uVar64 >> 0x18) | (byte)((ulong)uVar27 >> 0x18);
      auVar61[4] = (byte)uVar65 | (byte)((ulong)uVar27 >> 0x20);
      auVar61[5] = (byte)(uVar65 >> 8) | (byte)((ulong)uVar27 >> 0x28);
      auVar61[6] = (byte)(uVar65 >> 0x10) | (byte)((ulong)uVar27 >> 0x30);
      auVar61[7] = (byte)(uVar65 >> 0x18) | (byte)((ulong)uVar27 >> 0x38);
      auVar61[8] = (byte)uVar9 | (byte)uVar28;
      auVar61[9] = (byte)(uVar9 >> 8) | (byte)((ulong)uVar28 >> 8);
      auVar61[10] = (byte)(uVar9 >> 0x10) | (byte)((ulong)uVar28 >> 0x10);
      auVar61[0xb] = (byte)(uVar9 >> 0x18) | (byte)((ulong)uVar28 >> 0x18);
      auVar61[0xc] = (byte)uVar10 | (byte)((ulong)uVar28 >> 0x20);
      auVar61[0xd] = (byte)(uVar10 >> 8) | (byte)((ulong)uVar28 >> 0x28);
      auVar61[0xe] = (byte)(uVar10 >> 0x10) | (byte)((ulong)uVar28 >> 0x30);
      auVar61[0xf] = (byte)(uVar10 >> 0x18) | (byte)((ulong)uVar28 >> 0x38);
      auVar53 = NEON_smax(auVar53,auVar61,4);
      auVar54 = NEON_smax(auVar54,auVar53,4);
      local_730 = (byte)uVar31;
      bStack_72f = (byte)((ulong)uVar31 >> 8);
      bStack_72e = (byte)((ulong)uVar31 >> 0x10);
      bStack_72d = (byte)((ulong)uVar31 >> 0x18);
      bStack_72c = (byte)((ulong)uVar31 >> 0x20);
      bStack_72b = (byte)((ulong)uVar31 >> 0x28);
      bStack_72a = (byte)((ulong)uVar31 >> 0x30);
      bStack_729 = (byte)((ulong)uVar31 >> 0x38);
      bStack_728 = (byte)uVar32;
      bStack_727 = (byte)((ulong)uVar32 >> 8);
      bStack_726 = (byte)((ulong)uVar32 >> 0x10);
      bStack_725 = (byte)((ulong)uVar32 >> 0x18);
      bStack_724 = (byte)((ulong)uVar32 >> 0x20);
      bStack_723 = (byte)((ulong)uVar32 >> 0x28);
      bStack_722 = (byte)((ulong)uVar32 >> 0x30);
      bStack_721 = (byte)((ulong)uVar32 >> 0x38);
      iVar51 = -(uint)(auVar54._0_4_ < 1);
      iVar56 = -(uint)(auVar54._4_4_ < 1);
      iVar58 = -(uint)(auVar54._8_4_ < 1);
      iVar60 = -(uint)(auVar54._12_4_ < 1);
      iVar51 = CONCAT13((byte)((uint)iVar51 >> 0x18) & bStack_72d,
                        CONCAT12((byte)((uint)iVar51 >> 0x10) & bStack_72e,
                                 CONCAT11((byte)((uint)iVar51 >> 8) & bStack_72f,
                                          (byte)iVar51 & local_730)));
      auVar52._0_8_ =
           CONCAT17((byte)((uint)iVar56 >> 0x18) & bStack_729,
                    CONCAT16((byte)((uint)iVar56 >> 0x10) & bStack_72a,
                             CONCAT15((byte)((uint)iVar56 >> 8) & bStack_72b,
                                      CONCAT14((byte)iVar56 & bStack_72c,iVar51))));
      auVar52[8] = (byte)iVar58 & bStack_728;
      auVar52[9] = (byte)((uint)iVar58 >> 8) & bStack_727;
      auVar52[10] = (byte)((uint)iVar58 >> 0x10) & bStack_726;
      auVar52[0xb] = (byte)((uint)iVar58 >> 0x18) & bStack_725;
      auVar81[0xc] = (byte)iVar60 & bStack_724;
      auVar81._0_12_ = auVar52;
      auVar81[0xd] = (byte)((uint)iVar60 >> 8) & bStack_723;
      auVar81[0xe] = (byte)((uint)iVar60 >> 0x10) & bStack_722;
      auVar81[0xf] = (byte)((uint)iVar60 >> 0x18) & bStack_721;
      uVar57 = iVar51 + (int)((ulong)auVar52._0_8_ >> 0x20) + auVar52._8_4_ + auVar81._12_4_;
      auVar53 = *(undefined1 (*) [16])(&DAT_03aae120 + (ulong)uVar57 * 0x10);
      iVar51 = *(int *)(&DAT_03aadfe0 + (ulong)uVar57 * 4);
      auVar61 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar1 + 0x18),auVar53);
      if (*(char *)(pfVar1 + 0x1c) == '\0') {
        *(long *)((long)pplVar44 + -4) = auVar61._0_8_;
        auVar61 = NEON_ext(auVar61,auVar61,8,1);
        *(long *)((long)pplVar44 + 4) = auVar61._0_8_;
        local_150 = (long **)((long)pplVar44 + -4 + (long)iVar51 * 4);
LAB_02fbec48:
        if (uVar57 != 0xf) goto LAB_02fbec58;
      }
      else {
        if (uVar57 != 0) {
          iVar56 = 0;
          do {
            switch(iVar56) {
            case 0:
              iVar58 = auVar61._0_4_;
              break;
            case 1:
              iVar58 = auVar61._4_4_;
              break;
            case 2:
              iVar58 = auVar61._8_4_;
              break;
            case 3:
              iVar58 = auVar61._12_4_;
              break;
            default:
              iVar58 = 0;
            }
            uVar39 = (**(code **)(**(long **)(local_5e8 + 0x50) + 0x70))
                               (*(long **)(local_5e8 + 0x50),iVar58);
            uVar59 = (**(code **)(**(long **)(local_5e8 + 0x50) + 0x78))
                               (*(long **)(local_5e8 + 0x50),iVar58);
            iVar60 = (**(code **)(**(long **)(local_5e8 + 0x50) + 0x20))();
            if (iVar58 < iVar60) {
              uVar41 = 1;
            }
            else {
              uVar41 = 1;
              if (((uVar59 ^ 0xffffffff) & 7) != 0) {
                uVar41 = 2;
              }
            }
            uVar59 = 0;
            do {
              uVar7 = ((uVar59 | iVar58 << 1) + 1 <<
                      (ulong)(-((uint)*(byte *)(local_5e8 + 0x1c) + *(int *)((long)local_5c8 + 0x1c)
                               ) & 0x1f)) - 1 |
                      (&DAT_03aa74b0)[*(int *)((long)local_5c8 + 0x1c)] & *(uint *)(local_5c8 + 3);
              if (*local_5d8 == 0) {
                lVar46 = *local_5c8;
                lVar42 = *local_5d0;
                uVar47 = 0xffffff;
                local_b0 = 0xffff;
                local_ac = 0;
                local_88 = 0xffff;
                local_84 = 0;
                uStack_80 = 0;
                uStack_7c = 0;
                uStack_a8 = 0;
                uStack_a4 = 0;
                if (lVar42 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar42 + 0xb0);
                  uVar47 = *(undefined4 *)(lVar42 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar47);
                if (lVar46 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar46 + 0xb0);
                  local_98 = *(undefined4 *)(lVar46 + 0x50);
                }
              }
              else {
                local_100 = *local_5c0;
                uStack_f8 = local_5c0[1];
                (**(code **)(*(long *)*local_5d8 + 0x40))
                          ((long *)*local_5d8,uVar39,6,*local_5c8,local_5c8[1],local_5e8,uVar7,0,
                           &local_100);
                if (local_5d8[1] != 0) {
                  local_f0 = CONCAT62(local_f0._2_6_,(short)local_5d8[2]);
                  uVar45 = *(undefined8 *)((long)local_5d8 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)&local_f0 | 4) + 1) =
                       *(undefined4 *)((long)local_5d8 + 0x1c);
                  *(undefined8 *)((ulong)&local_f0 | 4) = uVar45;
                  local_e0 = *local_5d0;
                  local_d8 = local_5d0[1];
                  local_d0 = local_5d0[2];
                  local_c8 = CONCAT44(local_c8._4_4_,(int)local_5d0[3]);
                  local_138[0] = (undefined2)local_100;
                  *(undefined4 *)((undefined8 *)((ulong)local_138 | 4) + 1) =
                       *(undefined4 *)(puVar49 + 1);
                  local_c0 = 0;
                  *(undefined8 *)((ulong)local_138 | 4) = *puVar49;
                  local_128 = *local_5c8;
                  local_120 = local_5c8[1];
                  local_118 = local_5e8;
                  local_108 = 0;
                  local_110 = uVar7;
                  uVar40 = (**(code **)(*(long *)local_5d8[1] + 0x40))
                                     ((long *)local_5d8[1],6,1,&local_f0,local_138);
                  if ((uVar40 & 1) == 0) break;
                }
                lVar42 = *local_5d0;
                lVar46 = *local_5c8;
                uVar47 = 0xffffff;
                if (lVar42 == 0) {
                  local_c8 = 0xffffffffffffffff;
                }
                else {
                  local_c8 = *(undefined8 *)(lVar42 + 0xb0);
                  uVar47 = *(undefined4 *)(lVar42 + 0x50);
                }
                local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar47);
                local_b0 = (undefined2)local_5d8[2];
                uStack_a4 = *(undefined4 *)((long)local_5d8 + 0x1c);
                local_ac = (undefined4)*(undefined8 *)((long)local_5d8 + 0x14);
                uStack_a8 = (undefined4)((ulong)*(undefined8 *)((long)local_5d8 + 0x14) >> 0x20);
                if (lVar46 == 0) {
                  local_98 = 0xffffff;
                  local_a0 = 0xffffffffffffffff;
                }
                else {
                  local_a0 = *(undefined8 *)(lVar46 + 0xb0);
                  local_98 = *(undefined4 *)(lVar46 + 0x50);
                }
                uStack_7c = *(undefined4 *)(puVar49 + 1);
                local_88 = (undefined2)local_100;
                local_84 = (undefined4)*puVar49;
                uStack_80 = (undefined4)((ulong)*puVar49 >> 0x20);
              }
              local_d0 = local_d0 & 0xffffffff00000000;
              uStack_74 = 0;
              local_78 = 6;
              local_8c = 0xf;
              local_b4 = 0xf;
              local_b8 = 0xffffffff;
              local_d8 = 0;
              local_e0 = 0;
              local_e8 = 0;
              local_f0 = 0;
              local_90 = uVar7;
              (**(code **)(*local_5b8 + 0x28))(local_5b8,&local_f0);
              uVar59 = uVar59 + 1;
            } while (uVar59 < uVar41);
            iVar56 = iVar56 + 1;
          } while (iVar56 != iVar51);
          goto LAB_02fbec48;
        }
LAB_02fbec58:
        auVar53 = a64_TBL(ZEXT816(0),auVar54,auVar53);
        auVar85._0_8_ =
             CONCAT17((char)((uint)(auVar53._4_4_ << 0x1d) >> 0x18),
                      (uint7)((byte)((uint)(auVar53._0_4_ << 0x1d) >> 0x18) & 0x80) << 0x18) &
             0x80ffffffffffffff;
        auVar85._8_3_ = 0;
        auVar85[0xb] = (byte)((uint)(auVar53._8_4_ << 0x1d) >> 0x18) & 0x80;
        auVar85._12_3_ = 0;
        auVar85[0xf] = (byte)((uint)(auVar53._12_4_ << 0x1d) >> 0x18) & 0x80;
        auVar61 = NEON_rev64(auVar85,4);
        auVar61 = NEON_ext(auVar61,auVar61,8,1);
        iVar56 = 4;
        do {
          uVar57 = auVar53._12_4_;
          auVar54 = NEON_ext(auVar53,auVar53,4,1);
          auVar53 = NEON_ext(auVar54,auVar53,0xc,1);
          uVar40 = (ulong)(uVar57 & 0x1f);
          lVar46 = uVar40 * 4;
          fVar2 = pfVar1[uVar40];
          uVar39 = *(undefined4 *)((long)local_550 + lVar46 + -0x60);
          auVar72._4_4_ = uVar39;
          auVar72._0_4_ = uVar39;
          auVar72._8_4_ = uVar39;
          auVar72._12_4_ = uVar39;
          bVar66 = SUB41(fVar2,0);
          auVar67[0] = auVar61[0] ^ bVar66;
          bVar69 = (byte)((uint)fVar2 >> 8);
          auVar67[1] = auVar61[1] ^ bVar69;
          bVar70 = (byte)((uint)fVar2 >> 0x10);
          auVar67[2] = auVar61[2] ^ bVar70;
          bVar71 = (byte)((uint)fVar2 >> 0x18);
          auVar67[3] = auVar61[3] ^ bVar71;
          auVar67[4] = auVar61[4] ^ bVar66;
          auVar67[5] = auVar61[5] ^ bVar69;
          auVar67[6] = auVar61[6] ^ bVar70;
          auVar67[7] = auVar61[7] ^ bVar71;
          auVar67[8] = auVar61[8] ^ bVar66;
          auVar67[9] = auVar61[9] ^ bVar69;
          auVar67[10] = auVar61[10] ^ bVar70;
          auVar67[0xb] = auVar61[0xb] ^ bVar71;
          auVar67[0xc] = auVar61[0xc] ^ bVar66;
          auVar67[0xd] = auVar61[0xd] ^ bVar69;
          auVar67[0xe] = auVar61[0xe] ^ bVar70;
          auVar67[0xf] = auVar61[0xf] ^ bVar71;
          auVar54 = NEON_fmin(auVar67,auVar72,4);
          uVar39 = auVar61._12_4_;
          auVar73._4_4_ = uVar39;
          auVar73._0_4_ = uVar39;
          auVar73._8_4_ = uVar39;
          auVar73._12_4_ = uVar39;
          auVar61 = NEON_ext(auVar61,auVar73,4,1);
          iVar56 = iVar56 + -1;
          *(int *)((long)local_550 + lVar46 + -0x60) = auVar54._0_4_;
        } while (iVar51 < iVar56);
      }
      pplVar44 = local_150;
      if (local_550 == local_150) {
        auVar22._8_4_ = uStack_598;
        auVar22._0_8_ = local_5a0;
        auVar22._12_4_ = uStack_594;
        auVar23._8_4_ = uStack_588;
        auVar23._0_8_ = local_590;
        auVar23._12_4_ = uStack_584;
        auVar24._8_4_ = uStack_578;
        auVar24._0_8_ = local_580;
        auVar24._12_4_ = uStack_574;
        auVar25._8_4_ = uStack_568;
        auVar25._0_8_ = local_570;
        auVar25._12_4_ = uStack_564;
        uVar75 = (undefined1)((uint)uStack_558 >> 8);
        uVar76 = (undefined1)((uint)uStack_558 >> 0x10);
        uVar77 = (undefined1)((uint)uStack_558 >> 0x18);
        uVar78 = (undefined1)((uint)uStack_554 >> 8);
        uVar79 = (undefined1)((uint)uStack_554 >> 0x10);
        uVar80 = (undefined1)((uint)uStack_554 >> 0x18);
        auVar4[8] = (undefined1)uStack_558;
        auVar4._0_8_ = local_560;
        auVar3[8] = (undefined1)uStack_558;
        auVar3._0_8_ = local_560;
        auVar21._8_4_ = uStack_5a8;
        auVar21._0_8_ = local_5b0;
        auVar21._12_4_ = uStack_5a4;
        auVar20._8_4_ = uStack_5a8;
        auVar20._0_8_ = local_5b0;
        auVar20._12_4_ = uStack_5a4;
        auVar3[9] = uVar75;
        auVar3[10] = uVar76;
        auVar3[0xb] = uVar77;
        auVar3[0xc] = (char)uStack_554;
        auVar3[0xd] = uVar78;
        auVar3[0xe] = uVar79;
        auVar3[0xf] = uVar80;
        auVar4[9] = uVar75;
        auVar4[10] = uVar76;
        auVar4[0xb] = uVar77;
        auVar4[0xc] = (char)uStack_554;
        auVar4[0xd] = uVar78;
        auVar4[0xe] = uVar79;
        auVar4[0xf] = uVar80;
        auVar83 = NEON_ext(auVar3,auVar4,8,1);
        auVar54 = NEON_ext(auVar22,auVar22,8,1);
        auVar81 = NEON_ext(auVar24,auVar24,8,1);
        auVar85 = NEON_ext(auVar23,auVar23,8,1);
        auVar82 = NEON_ext(auVar25,auVar25,8,1);
        auVar55._4_4_ = (int)local_590;
        auVar55._0_4_ = (int)local_5b0;
        auVar84 = NEON_ext(auVar20,auVar21,8,1);
        auVar62._4_4_ = (int)local_580;
        auVar62._0_4_ = (int)local_5a0;
        auVar74._4_4_ = auVar85._0_4_;
        auVar74._0_4_ = auVar84._0_4_;
        auVar62._8_4_ = (int)local_560;
        auVar62._12_4_ = 0;
        auVar55._8_4_ = (int)local_570;
        auVar55._12_4_ = 0;
        auVar68._4_4_ = auVar81._0_4_;
        auVar68._0_4_ = auVar54._0_4_;
        auVar68._8_4_ = auVar83._0_4_;
        auVar68._12_4_ = 0;
        auVar74._8_4_ = auVar82._0_4_;
        auVar74._12_4_ = 0;
        auVar11._4_4_ = (int)((ulong)local_580 >> 0x20);
        auVar11._0_4_ = (int)((ulong)local_5a0 >> 0x20);
        auVar11._8_4_ = (int)((ulong)local_560 >> 0x20);
        auVar11._12_4_ = 0;
        auVar61 = NEON_fmin(auVar62,auVar11,4);
        auVar12._4_4_ = (int)((ulong)local_590 >> 0x20);
        auVar12._0_4_ = (int)((ulong)local_5b0 >> 0x20);
        auVar12._8_4_ = (int)((ulong)local_570 >> 0x20);
        auVar12._12_4_ = 0;
        auVar53 = NEON_fmin(auVar55,auVar12,4);
        auVar8[4] = auVar81[4];
        auVar8._0_4_ = auVar54._4_4_;
        auVar8[5] = auVar81[5];
        auVar8[6] = auVar81[6];
        auVar8[7] = auVar81[7];
        auVar8[8] = auVar83[4];
        auVar8[9] = auVar83[5];
        auVar8[10] = auVar83[6];
        auVar8[0xb] = auVar83[7];
        auVar8._12_4_ = 0;
        auVar54 = NEON_fmin(auVar68,auVar8,4);
        auVar13._4_4_ = auVar85._4_4_;
        auVar13._0_4_ = auVar84._4_4_;
        auVar13._8_4_ = auVar82._4_4_;
        auVar13._12_4_ = 0;
        auVar81 = NEON_fmin(auVar74,auVar13,4);
        auVar61 = NEON_fmin(auVar61,auVar54,4);
        auVar63._0_4_ = -auVar61._0_4_;
        auVar63._4_4_ = -auVar61._4_4_;
        auVar63._8_4_ = -auVar61._8_4_;
        auVar63._12_4_ = -auVar61._12_4_;
        uVar6 = *(undefined8 *)(param_8[1] + 8);
        auVar53 = NEON_fmin(auVar53,auVar81,4);
        auVar61 = NEON_fmax(*param_8,auVar63,4);
        auVar5[9] = (char)((ulong)uVar6 >> 8);
        auVar5._0_9_ = *(unkbyte9 *)param_8[1];
        auVar5[10] = (char)((ulong)uVar6 >> 0x10);
        auVar5[0xb] = (char)((ulong)uVar6 >> 0x18);
        auVar5[0xc] = (char)((ulong)uVar6 >> 0x20);
        auVar5[0xd] = (char)((ulong)uVar6 >> 0x28);
        auVar5[0xe] = (char)((ulong)uVar6 >> 0x30);
        auVar5[0xf] = (char)((ulong)uVar6 >> 0x38);
        auVar53 = NEON_fmin(auVar5,auVar53,4);
        *(long *)(*param_8 + 8) = auVar61._8_8_;
        *(long *)*param_8 = auVar61._0_8_;
        *(long *)(param_8[1] + 8) = auVar53._8_8_;
        *(long *)param_8[1] = auVar53._0_8_;
        return;
      }
    } while( true );
  }
  if (param_8 != (undefined1 (*) [16])0x0) {
    FUN_02fbee04(lVar46 + 0x20,param_3 + 6,&local_5e8,param_8);
    return;
  }
  local_550[0] = &local_5e8;
  local_540 = param_3[6];
  lStack_538 = param_3[7];
  local_f0 = 0;
  local_e8 = 0x8000000000000000;
  local_d8 = CONCAT44(local_d8._4_4_,0x40);
  uStack_528 = SUB168(*(undefined1 (*) [16])(param_3 + 8),8);
  local_530 = SUB168(*(undefined1 (*) [16])(param_3 + 8),0);
  lVar42 = tpidr_el0;
  lVar43 = *(long *)(lVar42 + 0x38d490);
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar42 + 0x38d490) = lVar43;
  }
  lVar43 = *(long *)(lVar43 + 8);
  if (0xbff < *(ulong *)(lVar43 + 0x10)) {
    local_e0 = *(long *)(lVar43 + 0x18);
    if (local_e0 + 0xc00U <= *(ulong *)(lVar43 + 0x20)) {
      *(ulong *)(lVar43 + 0x18) = local_e0 + 0xc00U;
      goto LAB_02fbe61c;
    }
  }
  local_e0 = FUN_032ce670(lVar43,0xc00);
LAB_02fbe61c:
  local_e8._4_4_ = 0x80000040;
  local_f0 = local_e0;
  FUN_02fc3dbc(lVar46 + 0x20,&local_f0,local_550);
  lVar46 = local_e0;
  if (local_e0 == local_f0) {
    local_e8._0_4_ = 0;
  }
  lVar50 = (long)(int)local_d8;
  lVar43 = *(long *)(lVar42 + 0x38d490);
  if (lVar43 == 0) {
    lVar43 = FUN_0333d16c(0,1);
    *(long *)(lVar42 + 0x38d490) = lVar43;
  }
  lVar42 = *(long *)(lVar43 + 8);
  uVar40 = lVar50 * 0x30 + 0x7fU & 0xffffffffffffff80;
  if (((*(ulong *)(lVar42 + 0x10) < uVar40) || (*(long *)(lVar42 + 0x18) != uVar40 + lVar46)) ||
     (*(long *)(lVar42 + 0x28) == lVar46)) {
    FUN_032cedf0(lVar42,lVar46);
  }
  else {
    *(long *)(lVar42 + 0x18) = lVar46;
  }
  uVar57 = local_e8._4_4_;
  local_e8 = (ulong)local_e8._4_4_ << 0x20;
  if ((-1 < (int)uVar57) && (local_f0 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_f0,0x30,uVar57 & 0x3fffffff);
  }
  return;
}


