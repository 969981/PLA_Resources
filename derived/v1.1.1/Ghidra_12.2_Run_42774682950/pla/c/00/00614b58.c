/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00614b58; name: FUN_00614b58
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00614b58(long param_1)

{
  UserHandle *pUVar1;
  long *plVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint uVar26;
  int iVar27;
  ulong *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  char *pcVar31;
  ulong uVar32;
  int iVar33;
  ulong uVar34;
  long lVar35;
  undefined4 local_1f8 [2];
  ulong local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long *plStack_1d8;
  char local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 local_1a8;
  ulong local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long *plStack_188;
  undefined1 auStack_180 [8];
  undefined8 local_178;
  ulong local_160;
  undefined8 local_158;
  undefined8 local_150;
  ulong uStack_148;
  ulong local_140;
  char *local_138;
  long *local_130;
  char local_128;
  byte local_120;
  undefined7 uStack_11f;
  ulong local_118;
  ulong local_110;
  long *plStack_108;
  ulong local_100;
  ulong uStack_f8;
  char *local_f0;
  long *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  char *local_d0;
  long *local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  char *local_b0;
  long *plStack_a8;
  AsyncContext aAStack_a0 [32];
  undefined8 *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_68;
  
  uVar17 = _UNK_0388a178;
  uVar16 = _DAT_0388a170;
  uVar15 = _UNK_0388a018;
  uVar14 = _DAT_0388a010;
  uVar13 = _UNK_0388a008;
  uVar12 = _DAT_0388a000;
  uVar11 = _UNK_03889dc8;
  uVar10 = _DAT_03889dc0;
  uVar9 = _UNK_038894e8;
  uVar8 = _DAT_038894e0;
  uVar7 = _UNK_03889378;
  uVar6 = _DAT_03889370;
  pcVar31 = (char *)((ulong)&local_100 | 1);
  uVar32 = (ulong)&local_80 | 1;
  lVar35 = *(long *)(param_1 + 0x100);
  pUVar1 = (UserHandle *)(param_1 + 0xd8);
  do {
    while( true ) {
      nn::account::AsyncContext::AsyncContext(aAStack_a0);
      uVar26 = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync(aAStack_a0,pUVar1);
      uVar34 = uVar32;
      if (uVar26 == 0) break;
      if (((uVar26 & 0x1ff) == 0x7c) && ((uVar26 >> 9 & 0x1fff) - 200 < 0x46)) {
        local_130 = (long *)0x0;
        uStack_148 = 0;
        local_150 = 0;
        local_138 = (char *)0x0;
        local_140 = 0;
        local_130 = (long *)FUN_00612290();
        uStack_148 = 0;
        local_e0 = 0;
        local_140 = 0;
        local_138 = (char *)0x0;
        uStack_d8 = 0;
        local_d0 = (char *)0x0;
        local_c8 = (long *)FUN_00612290();
        local_d0 = (char *)(**(code **)(*local_c8 + 0x10))(local_c8,0x60,1);
        uVar21 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._64_8_;
        uVar20 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._56_8_;
        uVar19 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._48_8_;
        uVar18 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._40_8_;
        uVar30 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._32_8_;
        uStack_d8 = uVar7;
        local_e0 = uVar6;
        *(undefined8 *)(local_d0 + 0x48) = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._72_8_;
        *(undefined8 *)(local_d0 + 0x40) = uVar21;
        *(undefined8 *)(local_d0 + 0x28) = uVar18;
        *(undefined8 *)(local_d0 + 0x20) = uVar30;
        *(undefined8 *)(local_d0 + 0x38) = uVar20;
        *(undefined8 *)(local_d0 + 0x30) = uVar19;
        *(undefined8 *)(local_d0 + 0x50) = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._80_8_;
        uVar20 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._24_8_;
        uVar19 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._16_8_;
        uVar18 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._8_8_;
        uVar30 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._0_8_;
        local_d0[0x58] = '\0';
        *(undefined8 *)(local_d0 + 8) = uVar18;
        *(undefined8 *)local_d0 = uVar30;
        *(undefined8 *)(local_d0 + 0x18) = uVar20;
        *(undefined8 *)(local_d0 + 0x10) = uVar19;
                    /* try { // try from 00614cc0 to 00614ccb has its CatchHandler @ 006159d0 */
        FUN_00615cd0(&local_100,uVar26);
        uVar3 = local_100 >> 1 & 0x7f;
        pcVar4 = pcVar31;
        if ((local_100 & 1) != 0) {
          uVar3 = uStack_f8;
          pcVar4 = local_f0;
        }
                    /* try { // try from 00614ce4 to 00614ceb has its CatchHandler @ 006159c0 */
        puVar28 = (ulong *)FUN_002a45d4(&local_e0,pcVar4,uVar3);
        uStack_b8 = puVar28[1];
        local_c0 = *puVar28;
        plStack_a8 = (long *)puVar28[3];
        local_b0 = (char *)puVar28[2];
        *puVar28 = 0;
        puVar28[1] = 0;
        puVar28[2] = 0;
                    /* try { // try from 00614cfc to 00614d0f has its CatchHandler @ 006159b0 */
        puVar29 = (undefined8 *)
                  FUN_002a45d4(&local_c0,"(ResultNetworkServiceAccountUnavailable).",0x29);
        goto LAB_006150f8;
      }
      local_130 = (long *)0x0;
      uStack_148 = 0;
      local_150 = 0;
      local_138 = (char *)0x0;
      local_140 = 0;
      local_130 = (long *)FUN_00612290();
      uStack_148 = 0;
      local_e0 = 0;
      local_140 = 0;
      local_138 = (char *)0x0;
      uStack_d8 = 0;
      local_d0 = (char *)0x0;
      local_c8 = (long *)FUN_00612290();
      local_d0 = (char *)(**(code **)(*local_c8 + 0x10))(local_c8,0x60,1);
      uVar21 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._64_8_;
      uVar20 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._56_8_;
      uVar19 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._48_8_;
      uVar18 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._40_8_;
      uVar30 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._32_8_;
      uStack_d8 = uVar7;
      local_e0 = uVar6;
      *(undefined8 *)(local_d0 + 0x48) = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._72_8_;
      *(undefined8 *)(local_d0 + 0x40) = uVar21;
      *(undefined8 *)(local_d0 + 0x28) = uVar18;
      *(undefined8 *)(local_d0 + 0x20) = uVar30;
      *(undefined8 *)(local_d0 + 0x38) = uVar20;
      *(undefined8 *)(local_d0 + 0x30) = uVar19;
      *(undefined8 *)(local_d0 + 0x50) = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._80_8_;
      uVar20 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._24_8_;
      uVar19 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._16_8_;
      uVar18 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._8_8_;
      uVar30 = s_Failed_to_get_NsaIdToken_cache__E_0391a5e3._0_8_;
      local_d0[0x58] = '\0';
      *(undefined8 *)(local_d0 + 8) = uVar18;
      *(undefined8 *)local_d0 = uVar30;
      *(undefined8 *)(local_d0 + 0x18) = uVar20;
      *(undefined8 *)(local_d0 + 0x10) = uVar19;
                    /* try { // try from 00614d88 to 00614d93 has its CatchHandler @ 00615a8c */
      FUN_00615cd0(&local_100,uVar26);
      uVar3 = local_100 >> 1 & 0x7f;
      pcVar4 = pcVar31;
      if ((local_100 & 1) != 0) {
        uVar3 = uStack_f8;
        pcVar4 = local_f0;
      }
                    /* try { // try from 00614dac to 00614db3 has its CatchHandler @ 00615a44 */
      puVar28 = (ulong *)FUN_002a45d4(&local_e0,pcVar4,uVar3);
      uStack_b8 = puVar28[1];
      local_c0 = *puVar28;
      plStack_a8 = (long *)puVar28[3];
      local_b0 = (char *)puVar28[2];
      *puVar28 = 0;
      puVar28[1] = 0;
      puVar28[2] = 0;
                    /* try { // try from 00614dc4 to 00614dd3 has its CatchHandler @ 00615a10 */
      puVar29 = (undefined8 *)FUN_002a45d4(&local_c0,&DAT_0389ff53,1);
LAB_00614fd4:
      uStack_78 = puVar29[1];
      local_80 = (undefined8 *)*puVar29;
      local_68 = (long *)puVar29[3];
      local_70 = puVar29[2];
      *puVar29 = 0;
      puVar29[1] = 0;
      puVar29[2] = 0;
      if (((ulong)local_80 & 1) != 0) {
        uVar34 = local_70;
      }
      FUN_002a4eb0(&local_120,uVar26);
      uVar30 = 0xe;
LAB_00615134:
      FUN_00615b90(local_1f8,&local_150,uVar30,uVar34,&local_120);
      FUN_02767254(&local_120,local_118);
      if (((ulong)local_80 & 1) != 0) {
        (**(code **)(*local_68 + 0x18))(local_68,local_70,(ulong)local_80 & 0xfffffffffffffffe,1);
      }
      if ((local_c0 & 1) != 0) {
        (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,local_c0 & 0xfffffffffffffffe,1);
      }
      if ((local_100 & 1) != 0) {
        (**(code **)(*local_e8 + 0x18))(local_e8,local_f0,local_100 & 0xfffffffffffffffe,1);
      }
      if ((local_e0 & 1) != 0) {
        (**(code **)(*local_c8 + 0x18))(local_c8,local_d0,local_e0 & 0xfffffffffffffffe,1);
      }
      if ((uStack_148 & 1) != 0) {
        (**(code **)(*local_130 + 0x18))(local_130,local_138,uStack_148 & 0xfffffffffffffffe,1);
      }
      iVar27 = 1;
LAB_00615190:
      nn::account::AsyncContext::~AsyncContext(aAStack_a0);
      if (iVar27 == 1) goto LAB_006156e0;
    }
    local_128 = '\0';
    iVar27 = nn::account::AsyncContext::GetSystemEvent((SystemEvent *)aAStack_a0);
    local_80 = (undefined8 *)CONCAT44(local_80._4_4_,iVar27);
    if (iVar27 != 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,(Result *)&local_80,"");
    }
    FUN_00783b90(&local_150);
    if (local_128 != '\0') {
      nn::os::DestroySystemEvent((SystemEventType *)&local_150);
    }
    uVar26 = nn::account::AsyncContext::GetResult();
    if (uVar26 != 0) {
      if (((uVar26 & 0x1ff) != 0x7c) || (0x45 < (uVar26 >> 9 & 0x1fff) - 200)) {
        local_130 = (long *)0x0;
        uStack_148 = 0;
        local_150 = 0;
        local_138 = (char *)0x0;
        local_140 = 0;
        local_130 = (long *)FUN_00612290();
        uStack_148 = 0;
        local_e0 = 0;
        local_140 = 0;
        local_138 = (char *)0x0;
        uStack_d8 = 0;
        local_d0 = (char *)0x0;
        local_c8 = (long *)FUN_00612290();
        local_d0 = (char *)(**(code **)(*local_c8 + 0x10))(local_c8,0x70,1);
        uVar23 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._80_8_;
        uVar22 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._72_8_;
        uVar21 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._64_8_;
        uVar20 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._56_8_;
        uVar19 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._48_8_;
        uVar18 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._32_8_;
        uStack_d8 = uVar9;
        local_e0 = uVar8;
        uVar30 = CONCAT17(s_Failed_to_get_NsaIdToken_cache__E_039b2edc[0x5f],
                          s_Failed_to_get_NsaIdToken_cache__E_039b2edc._88_7_);
        *(undefined8 *)(local_d0 + 0x28) = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._40_8_;
        *(undefined8 *)(local_d0 + 0x20) = uVar18;
        *(undefined8 *)(local_d0 + 0x38) = uVar20;
        *(undefined8 *)(local_d0 + 0x30) = uVar19;
        *(undefined8 *)(local_d0 + 0x48) = uVar22;
        *(undefined8 *)(local_d0 + 0x40) = uVar21;
        *(undefined8 *)(local_d0 + 0x58) = uVar30;
        *(undefined8 *)(local_d0 + 0x50) = uVar23;
        *(ulong *)(local_d0 + 0x5f) =
             CONCAT71(s_Failed_to_get_NsaIdToken_cache__E_039b2edc._96_7_,
                      s_Failed_to_get_NsaIdToken_cache__E_039b2edc[0x5f]);
        uVar20 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._24_8_;
        uVar19 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._16_8_;
        uVar18 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._8_8_;
        uVar30 = s_Failed_to_get_NsaIdToken_cache__E_039b2edc._0_8_;
        local_d0[0x67] = '\0';
        *(undefined8 *)(local_d0 + 8) = uVar18;
        *(undefined8 *)local_d0 = uVar30;
        *(undefined8 *)(local_d0 + 0x18) = uVar20;
        *(undefined8 *)(local_d0 + 0x10) = uVar19;
                    /* try { // try from 00614f88 to 00614f93 has its CatchHandler @ 00615a00 */
        FUN_00615cd0(&local_100,uVar26);
        uVar3 = local_100 >> 1 & 0x7f;
        pcVar4 = pcVar31;
        if ((local_100 & 1) != 0) {
          uVar3 = uStack_f8;
          pcVar4 = local_f0;
        }
                    /* try { // try from 00614fac to 00614fb3 has its CatchHandler @ 006159f0 */
        puVar28 = (ulong *)FUN_002a45d4(&local_e0,pcVar4,uVar3);
        uStack_b8 = puVar28[1];
        local_c0 = *puVar28;
        plStack_a8 = (long *)puVar28[3];
        local_b0 = (char *)puVar28[2];
        *puVar28 = 0;
        puVar28[1] = 0;
        puVar28[2] = 0;
                    /* try { // try from 00614fc4 to 00614fd3 has its CatchHandler @ 006159e0 */
        puVar29 = (undefined8 *)FUN_002a45d4(&local_c0,&DAT_0389ff53,1);
        goto LAB_00614fd4;
      }
      local_130 = (long *)0x0;
      uStack_148 = 0;
      local_150 = 0;
      local_138 = (char *)0x0;
      local_140 = 0;
      local_130 = (long *)FUN_00612290();
      uStack_148 = 0;
      local_e0 = 0;
      local_140 = 0;
      local_138 = (char *)0x0;
      uStack_d8 = 0;
      local_d0 = (char *)0x0;
      local_c8 = (long *)FUN_00612290();
      local_d0 = (char *)(**(code **)(*local_c8 + 0x10))(local_c8,0xa0,1);
      uVar21 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._128_8_;
      uVar20 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._120_8_;
      uVar19 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._112_8_;
      uVar18 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._104_8_;
      uVar30 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._96_8_;
      uStack_d8 = uVar11;
      local_e0 = uVar10;
      *(ulong *)(local_d0 + 0x88) =
           CONCAT26(s_Failed_to_get_NsaIdToken_cache__N_03906d2b._142_2_,
                    s_Failed_to_get_NsaIdToken_cache__N_03906d2b._136_6_);
      *(undefined8 *)(local_d0 + 0x80) = uVar21;
      *(undefined8 *)(local_d0 + 0x68) = uVar18;
      *(undefined8 *)(local_d0 + 0x60) = uVar30;
      *(undefined8 *)(local_d0 + 0x78) = uVar20;
      *(undefined8 *)(local_d0 + 0x70) = uVar19;
      uVar25 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._88_8_;
      uVar24 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._80_8_;
      uVar23 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._72_8_;
      uVar22 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._64_8_;
      uVar21 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._56_8_;
      uVar20 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._48_8_;
      uVar19 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._40_8_;
      uVar18 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._32_8_;
      uVar30 = CONCAT62(s_Failed_to_get_NsaIdToken_cache__N_03906d2b._144_6_,
                        s_Failed_to_get_NsaIdToken_cache__N_03906d2b._142_2_);
      *(undefined8 *)(local_d0 + 0x96) = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._150_8_;
      *(undefined8 *)(local_d0 + 0x8e) = uVar30;
      *(undefined8 *)(local_d0 + 0x28) = uVar19;
      *(undefined8 *)(local_d0 + 0x20) = uVar18;
      *(undefined8 *)(local_d0 + 0x38) = uVar21;
      *(undefined8 *)(local_d0 + 0x30) = uVar20;
      *(undefined8 *)(local_d0 + 0x48) = uVar23;
      *(undefined8 *)(local_d0 + 0x40) = uVar22;
      *(undefined8 *)(local_d0 + 0x58) = uVar25;
      *(undefined8 *)(local_d0 + 0x50) = uVar24;
      uVar20 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._24_8_;
      uVar19 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._16_8_;
      uVar18 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._8_8_;
      uVar30 = s_Failed_to_get_NsaIdToken_cache__N_03906d2b._0_8_;
      local_d0[0x9e] = '\0';
      *(undefined8 *)(local_d0 + 8) = uVar18;
      *(undefined8 *)local_d0 = uVar30;
      *(undefined8 *)(local_d0 + 0x18) = uVar20;
      *(undefined8 *)(local_d0 + 0x10) = uVar19;
                    /* try { // try from 00614ec0 to 00614ecb has its CatchHandler @ 00615958 */
      FUN_00615cd0(&local_100,uVar26);
      uVar3 = local_100 >> 1 & 0x7f;
      pcVar4 = pcVar31;
      if ((local_100 & 1) != 0) {
        uVar3 = uStack_f8;
        pcVar4 = local_f0;
      }
                    /* try { // try from 00614ee4 to 00614eeb has its CatchHandler @ 00615948 */
      puVar28 = (ulong *)FUN_002a45d4(&local_e0,pcVar4,uVar3);
      uStack_b8 = puVar28[1];
      local_c0 = *puVar28;
      plStack_a8 = (long *)puVar28[3];
      local_b0 = (char *)puVar28[2];
      *puVar28 = 0;
      puVar28[1] = 0;
      puVar28[2] = 0;
                    /* try { // try from 00614efc to 00614f0f has its CatchHandler @ 00615938 */
      puVar29 = (undefined8 *)
                FUN_002a45d4(&local_c0,"(ResultNetworkServiceAccountUnavailable).",0x29);
LAB_006150f8:
      uStack_78 = puVar29[1];
      local_80 = (undefined8 *)*puVar29;
      local_68 = (long *)puVar29[3];
      local_70 = puVar29[2];
      *puVar29 = 0;
      puVar29[1] = 0;
      puVar29[2] = 0;
      if (((ulong)local_80 & 1) != 0) {
        uVar34 = local_70;
      }
      FUN_002a4eb0(&local_120,uVar26);
      uVar30 = 0x10;
      goto LAB_00615134;
    }
    uVar26 = nn::account::GetNetworkServiceAccountId((NetworkServiceAccountId *)&local_158,pUVar1);
    if (uVar26 != 0) {
      local_130 = (long *)0x0;
      uStack_148 = 0;
      local_150 = 0;
      local_138 = (char *)0x0;
      local_140 = 0;
      local_130 = (long *)FUN_00612290();
      uStack_148 = 0;
      local_e0 = 0;
      local_140 = 0;
      local_138 = (char *)0x0;
      uStack_d8 = 0;
      local_d0 = (char *)0x0;
      local_c8 = (long *)FUN_00612290();
      local_d0 = (char *)(**(code **)(*local_c8 + 0x10))(local_c8,0x80,1);
      uVar21 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._96_8_;
      uVar20 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._88_8_;
      uVar19 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._80_8_;
      uVar18 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._72_8_;
      uVar30 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._64_8_;
      uStack_d8 = uVar17;
      local_e0 = uVar16;
      *(ulong *)(local_d0 + 0x68) =
           CONCAT35(s_Failed_to_get_NsaIdToken_cache__N_039b2f44._109_3_,
                    s_Failed_to_get_NsaIdToken_cache__N_039b2f44._104_5_);
      *(undefined8 *)(local_d0 + 0x60) = uVar21;
      *(undefined8 *)(local_d0 + 0x48) = uVar18;
      *(undefined8 *)(local_d0 + 0x40) = uVar30;
      *(undefined8 *)(local_d0 + 0x58) = uVar20;
      *(undefined8 *)(local_d0 + 0x50) = uVar19;
      uVar21 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._24_8_;
      uVar20 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._16_8_;
      uVar19 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._8_8_;
      uVar18 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._0_8_;
      uVar30 = CONCAT53(s_Failed_to_get_NsaIdToken_cache__N_039b2f44._112_5_,
                        s_Failed_to_get_NsaIdToken_cache__N_039b2f44._109_3_);
      *(undefined8 *)(local_d0 + 0x75) = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._117_8_;
      *(undefined8 *)(local_d0 + 0x6d) = uVar30;
      *(undefined8 *)(local_d0 + 8) = uVar19;
      *(undefined8 *)local_d0 = uVar18;
      *(undefined8 *)(local_d0 + 0x18) = uVar21;
      *(undefined8 *)(local_d0 + 0x10) = uVar20;
      uVar20 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._56_8_;
      uVar19 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._48_8_;
      uVar18 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._40_8_;
      uVar30 = s_Failed_to_get_NsaIdToken_cache__N_039b2f44._32_8_;
      local_d0[0x7d] = '\0';
      *(undefined8 *)(local_d0 + 0x28) = uVar18;
      *(undefined8 *)(local_d0 + 0x20) = uVar30;
      *(undefined8 *)(local_d0 + 0x38) = uVar20;
      *(undefined8 *)(local_d0 + 0x30) = uVar19;
                    /* try { // try from 006150ac to 006150b7 has its CatchHandler @ 006159a0 */
      FUN_00615cd0(&local_100,uVar26);
      uVar3 = local_100 >> 1 & 0x7f;
      pcVar4 = pcVar31;
      if ((local_100 & 1) != 0) {
        uVar3 = uStack_f8;
        pcVar4 = local_f0;
      }
                    /* try { // try from 006150d0 to 006150d7 has its CatchHandler @ 00615990 */
      puVar28 = (ulong *)FUN_002a45d4(&local_e0,pcVar4,uVar3);
      uStack_b8 = puVar28[1];
      local_c0 = *puVar28;
      plStack_a8 = (long *)puVar28[3];
      local_b0 = (char *)puVar28[2];
      *puVar28 = 0;
      puVar28[1] = 0;
      puVar28[2] = 0;
                    /* try { // try from 006150e8 to 006150f7 has its CatchHandler @ 00615980 */
      puVar29 = (undefined8 *)FUN_002a45d4(&local_c0,&DAT_0389ff53,1);
      goto LAB_006150f8;
    }
    uStack_b8 = 0;
    local_b0 = (char *)0x0;
    local_c0 = 0;
    plStack_a8 = (long *)FUN_00612290();
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = (char *)0x0;
                    /* try { // try from 00615250 to 0061525f has its CatchHandler @ 00615968 */
    FUN_002a6910(&local_c0,0xc01,0);
    uVar34 = local_c0 >> 1 & 0x7f;
    pcVar4 = (char *)((ulong)&local_c0 | 1);
    if ((local_c0 & 1) != 0) {
      uVar34 = uStack_b8;
      pcVar4 = local_b0;
    }
    uVar26 = nn::account::LoadNetworkServiceAccountIdTokenCache(&local_160,pcVar4,uVar34,pUVar1);
    if (((uVar26 & 0x1ff) != 0x7c) || (0x45 < (uVar26 >> 9 & 0x1fff) - 0x1ae)) {
      if (uVar26 == 0) {
        uVar34 = local_c0 >> 1 & 0x7f;
        if ((local_c0 & 1) != 0) {
          uVar34 = uStack_b8;
        }
        if (local_160 < uVar34 || local_160 - uVar34 == 0) {
          if ((local_c0 & 1) == 0) {
            aAStack_a0[local_160 - 0x1f] = (AsyncContext)0x0;
            local_c0 = CONCAT71(local_c0._1_7_,(char)((int)local_160 << 1));
          }
          else {
            local_b0[local_160] = '\0';
            uStack_b8 = local_160;
          }
        }
        else {
                    /* try { // try from 006155ac to 006155b7 has its CatchHandler @ 00615968 */
          FUN_002a6910(&local_c0,local_160 - uVar34,0);
        }
        local_138 = local_b0;
        local_140 = uStack_b8;
        uStack_148 = local_c0;
        uStack_b8 = 0;
        local_b0 = (char *)0x0;
        local_c0 = 0;
        uStack_78 = 0;
        local_150 = local_158;
        local_130 = plStack_a8;
        local_70 = FUN_00612290();
        local_68 = (long *)0x0;
        local_80 = &uStack_78;
        FUN_00615b90(local_1f8,&local_150,0,&DAT_03996322,&local_80);
        FUN_02767254(&local_80,uStack_78);
      }
      else {
        uVar34 = uVar32;
        if (((uVar26 & 0x1ff) == 0x7c) && ((uVar26 >> 9 & 0x1fff) - 200 < 0x46)) {
          local_130 = (long *)0x0;
          uStack_148 = 0;
          local_150 = 0;
          local_138 = (char *)0x0;
          local_140 = 0;
          local_130 = (long *)FUN_00612290();
          uStack_148 = 0;
          local_100 = 0;
          local_140 = 0;
          local_138 = (char *)0x0;
          uStack_f8 = 0;
          local_f0 = (char *)0x0;
          local_e8 = (long *)FUN_00612290();
          local_f0 = (char *)(**(code **)(*local_e8 + 0x10))(local_e8,0x90,1);
          uVar23 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._120_8_;
          uVar22 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._112_8_;
          uVar21 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._104_8_;
          uVar20 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._96_8_;
          uVar19 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._88_8_;
          uVar18 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._80_8_;
          uVar30 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._64_8_;
          uStack_f8 = uVar15;
          local_100 = uVar14;
          *(undefined8 *)(local_f0 + 0x48) = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._72_8_;
          *(undefined8 *)(local_f0 + 0x40) = uVar30;
          *(undefined8 *)(local_f0 + 0x58) = uVar19;
          *(undefined8 *)(local_f0 + 0x50) = uVar18;
          *(undefined8 *)(local_f0 + 0x68) = uVar21;
          *(undefined8 *)(local_f0 + 0x60) = uVar20;
          *(undefined8 *)(local_f0 + 0x78) = uVar23;
          *(undefined8 *)(local_f0 + 0x70) = uVar22;
          uVar19 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._24_8_;
          uVar18 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._16_8_;
          uVar30 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._0_8_;
          *(undefined8 *)(local_f0 + 8) = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._8_8_;
          *(undefined8 *)local_f0 = uVar30;
          *(undefined8 *)(local_f0 + 0x18) = uVar19;
          *(undefined8 *)(local_f0 + 0x10) = uVar18;
          *(undefined8 *)(local_f0 + 0x80) = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._128_8_;
          uVar20 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._56_8_;
          uVar19 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._48_8_;
          uVar18 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._40_8_;
          uVar30 = s_Failed_to_get_NsaIdToken_cache__N_039a2bec._32_8_;
          local_f0[0x88] = '\0';
          *(undefined8 *)(local_f0 + 0x28) = uVar18;
          *(undefined8 *)(local_f0 + 0x20) = uVar30;
          *(undefined8 *)(local_f0 + 0x38) = uVar20;
          *(undefined8 *)(local_f0 + 0x30) = uVar19;
                    /* try { // try from 0061535c to 00615367 has its CatchHandler @ 0061584c */
          FUN_00615cd0(&local_120,uVar26);
          uVar3 = (ulong)(local_120 >> 1);
          uVar5 = (ulong)&local_120 | 1;
          if ((local_120 & 1) != 0) {
            uVar3 = local_118;
            uVar5 = local_110;
          }
                    /* try { // try from 00615384 to 0061538b has its CatchHandler @ 0061583c */
          puVar28 = (ulong *)FUN_002a45d4(&local_100,uVar5,uVar3);
          uStack_d8 = puVar28[1];
          local_e0 = *puVar28;
          local_c8 = (long *)puVar28[3];
          local_d0 = (char *)puVar28[2];
          *puVar28 = 0;
          puVar28[1] = 0;
          puVar28[2] = 0;
                    /* try { // try from 0061539c to 006153af has its CatchHandler @ 0061582c */
          puVar29 = (undefined8 *)
                    FUN_002a45d4(&local_e0,"(ResultNetworkServiceAccountUnavailable).",0x29);
          uStack_78 = puVar29[1];
          local_80 = (undefined8 *)*puVar29;
          local_68 = (long *)puVar29[3];
          local_70 = puVar29[2];
          *puVar29 = 0;
          puVar29[1] = 0;
          puVar29[2] = 0;
          if (((ulong)local_80 & 1) != 0) {
            uVar34 = local_70;
          }
          FUN_002a4eb0(auStack_180,uVar26);
          uVar30 = 0x10;
        }
        else {
          local_130 = (long *)0x0;
          uStack_148 = 0;
          local_150 = 0;
          local_138 = (char *)0x0;
          local_140 = 0;
          local_130 = (long *)FUN_00612290();
          uStack_148 = 0;
          local_100 = 0;
          local_140 = 0;
          local_138 = (char *)0x0;
          uStack_f8 = 0;
          local_f0 = (char *)0x0;
          local_e8 = (long *)FUN_00612290();
          local_f0 = (char *)(**(code **)(*local_e8 + 0x10))(local_e8,0x60,1);
          uVar30 = s_Failed_to_get_NsaIdToken_cache__L_039555a0._64_8_;
          uStack_f8 = uVar13;
          local_100 = uVar12;
          *(undefined8 *)(local_f0 + 0x48) = s_Failed_to_get_NsaIdToken_cache__L_039555a0._72_8_;
          *(undefined8 *)(local_f0 + 0x40) = uVar30;
          uVar24 = s_Failed_to_get_NsaIdToken_cache__L_039555a0._56_8_;
          uVar23 = s_Failed_to_get_NsaIdToken_cache__L_039555a0._48_8_;
          uVar22 = s_Failed_to_get_NsaIdToken_cache__L_039555a0._40_8_;
          uVar21 = s_Failed_to_get_NsaIdToken_cache__L_039555a0._32_8_;
          uVar20 = s_Failed_to_get_NsaIdToken_cache__L_039555a0._24_8_;
          uVar19 = s_Failed_to_get_NsaIdToken_cache__L_039555a0._16_8_;
          uVar18 = s_Failed_to_get_NsaIdToken_cache__L_039555a0._8_8_;
          uVar30 = s_Failed_to_get_NsaIdToken_cache__L_039555a0._0_8_;
          local_f0[0x51] = '\0';
          local_f0[0x50] = ' ';
          *(undefined8 *)(local_f0 + 0x28) = uVar22;
          *(undefined8 *)(local_f0 + 0x20) = uVar21;
          *(undefined8 *)(local_f0 + 0x38) = uVar24;
          *(undefined8 *)(local_f0 + 0x30) = uVar23;
          *(undefined8 *)(local_f0 + 8) = uVar18;
          *(undefined8 *)local_f0 = uVar30;
          *(undefined8 *)(local_f0 + 0x18) = uVar20;
          *(undefined8 *)(local_f0 + 0x10) = uVar19;
                    /* try { // try from 0061546c to 00615477 has its CatchHandler @ 006158e0 */
          FUN_00615cd0(&local_120,uVar26);
          uVar3 = (ulong)(local_120 >> 1);
          uVar5 = (ulong)&local_120 | 1;
          if ((local_120 & 1) != 0) {
            uVar3 = local_118;
            uVar5 = local_110;
          }
                    /* try { // try from 00615494 to 0061549b has its CatchHandler @ 00615890 */
          puVar28 = (ulong *)FUN_002a45d4(&local_100,uVar5,uVar3);
          uStack_d8 = puVar28[1];
          local_e0 = *puVar28;
          local_c8 = (long *)puVar28[3];
          local_d0 = (char *)puVar28[2];
          *puVar28 = 0;
          puVar28[1] = 0;
          puVar28[2] = 0;
                    /* try { // try from 006154ac to 006154bb has its CatchHandler @ 0061585c */
          puVar29 = (undefined8 *)FUN_002a45d4(&local_e0,&DAT_0389ff53,1);
          uStack_78 = puVar29[1];
          local_80 = (undefined8 *)*puVar29;
          local_68 = (long *)puVar29[3];
          local_70 = puVar29[2];
          *puVar29 = 0;
          puVar29[1] = 0;
          puVar29[2] = 0;
          if (((ulong)local_80 & 1) != 0) {
            uVar34 = local_70;
          }
          FUN_002a4eb0(auStack_180,uVar26);
          uVar30 = 0xe;
        }
        FUN_00615b90(local_1f8,&local_150,uVar30,uVar34,auStack_180);
        FUN_02767254(auStack_180,local_178);
        if (((ulong)local_80 & 1) != 0) {
          (**(code **)(*local_68 + 0x18))(local_68,local_70,(ulong)local_80 & 0xfffffffffffffffe,1);
        }
        if ((local_e0 & 1) != 0) {
          (**(code **)(*local_c8 + 0x18))(local_c8,local_d0,local_e0 & 0xfffffffffffffffe,1);
        }
        if ((local_120 & 1) != 0) {
          (**(code **)(*plStack_108 + 0x18))
                    (plStack_108,local_110,CONCAT71(uStack_11f,local_120) & 0xfffffffffffffffe,1);
        }
        if ((local_100 & 1) != 0) {
          (**(code **)(*local_e8 + 0x18))(local_e8,local_f0,local_100 & 0xfffffffffffffffe,1);
        }
      }
      if ((uStack_148 & 1) != 0) {
        (**(code **)(*local_130 + 0x18))(local_130,local_138,uStack_148 & 0xfffffffffffffffe,1);
      }
      iVar33 = 1;
      iVar27 = 1;
      if ((local_c0 & 1) != 0) goto LAB_0061555c;
      goto LAB_00615190;
    }
    iVar33 = 2;
    iVar27 = 2;
    if ((local_c0 & 1) == 0) goto LAB_00615190;
LAB_0061555c:
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,local_c0 & 0xfffffffffffffffe,1);
    nn::account::AsyncContext::~AsyncContext(aAStack_a0);
  } while (iVar33 != 1);
LAB_006156e0:
  nn::os::LockMutex((MutexType *)(lVar35 + 0x38));
  *(undefined4 *)(lVar35 + 0x58) = local_1f8[0];
  *(undefined8 *)(lVar35 + 0x68) = uStack_1e8;
  *(ulong *)(lVar35 + 0x60) = local_1f0;
  *(long **)(lVar35 + 0x78) = plStack_1d8;
  *(undefined8 *)(lVar35 + 0x70) = local_1e0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  *(undefined1 *)(lVar35 + 0x80) = 0;
  if (local_1d0 != '\0') {
    *(undefined8 **)(lVar35 + 0x88) = local_1c8;
    *(undefined8 *)(lVar35 + 0x98) = uStack_1b8;
    *(undefined8 *)(lVar35 + 0x90) = local_1c0;
    plVar2 = (long *)(lVar35 + 0x90);
    *(long *)(lVar35 + 0xa0) = local_1b0;
    if (local_1b0 == 0) {
      *(long **)(lVar35 + 0x88) = plVar2;
    }
    else {
      *(long **)(*plVar2 + 0x10) = plVar2;
      local_1c8 = &local_1c0;
      local_1c0 = 0;
      local_1b0 = 0;
    }
    *(undefined1 *)(lVar35 + 0x80) = 1;
  }
  *(undefined8 *)(lVar35 + 0xa8) = local_1a8;
  *(undefined8 *)(lVar35 + 0xb8) = uStack_198;
  *(ulong *)(lVar35 + 0xb0) = local_1a0;
  *(long **)(lVar35 + 200) = plStack_188;
  *(undefined8 *)(lVar35 + 0xc0) = local_190;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  *(undefined1 *)(lVar35 + 0xd0) = 1;
  nn::os::UnlockMutex((MutexType *)(lVar35 + 0x38));
  if ((local_1a0 & 1) != 0) {
    (**(code **)(*plStack_188 + 0x18))(plStack_188,local_190,local_1a0 & 0xfffffffffffffffe,1);
  }
  if (local_1d0 != '\0') {
    FUN_02767254(&local_1c8,local_1c0);
  }
  if ((local_1f0 & 1) != 0) {
    (**(code **)(*plStack_1d8 + 0x18))(plStack_1d8,local_1e0,local_1f0 & 0xfffffffffffffffe,1);
  }
  return 1;
}


