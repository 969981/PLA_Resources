/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057bc50; name: FUN_0057bc50
 */


undefined8
FUN_0057bc50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *__ptr;
  long lVar8;
  __tree_node_base *p_Var9;
  __tree_node_base *p_Var10;
  undefined1 auVar11 [16];
  long *local_268;
  __tree_node_base *local_260;
  long local_258;
  undefined8 local_250;
  ulong *local_248;
  ulong local_240;
  ulong uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  ulong *local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200;
  ulong uStack_1f8;
  ulong local_1f0;
  undefined8 local_1e8;
  byte local_1e0 [8];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 local_1c0;
  undefined1 auStack_1b0 [24];
  ulong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 auStack_180 [8];
  byte local_178;
  undefined8 local_168;
  undefined1 auStack_160 [8];
  undefined8 local_158;
  undefined1 auStack_148 [24];
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118 [2];
  byte local_110 [16];
  undefined8 local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  byte local_a8 [16];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (DAT_0439edf0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0057bcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*DAT_0439edf0)(param_1,param_2,param_3,param_4,param_5);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  local_1f0 = 0;
  uStack_1f8 = 0;
  local_200 = 0x676c6106;
                    /* try { // try from 0057bce8 to 0057bcf7 has its CatchHandler @ 0057c808 */
  FUN_003e9cf0(&local_1e8,"RS256",0);
  uStack_190 = 0;
  local_188 = 0;
  local_198 = 0x70797406;
                    /* try { // try from 0057bd18 to 0057bd27 has its CatchHandler @ 0057c778 */
  FUN_003e9cf0(auStack_180,&DAT_039115a8,0);
  uStack_128 = 0;
  local_120 = 0;
  local_130 = 0x64696b06;
                    /* try { // try from 0057bd48 to 0057bd53 has its CatchHandler @ 0057c754 */
  FUN_003e9cf0(local_118,uVar4,0);
                    /* try { // try from 0057bd54 to 0057bd67 has its CatchHandler @ 0057c688 */
  FUN_0057c9fc(&local_218,&local_200,3);
  local_250 = 0;
  local_248 = local_218;
  local_268 = (long *)CONCAT44(local_268._4_4_,5);
  local_260 = (__tree_node_base *)0x0;
  local_258 = 0;
  local_240 = local_210;
  uStack_238 = local_208;
  if (local_208 == 0) {
    local_248 = &local_240;
  }
  else {
    *(ulong **)(local_210 + 0x10) = &local_240;
    local_218 = &local_210;
    local_210 = 0;
    local_208 = 0;
  }
  local_228 = 0;
  uStack_220 = 0;
  local_230 = 0;
  FUN_003e9f80(&local_218,local_210);
  FUN_0057c958(&local_e0);
  FUN_003e9f80(&local_f8,local_f0);
  if ((local_110[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_100);
  }
  if ((local_130 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_120);
  }
  FUN_0057c958(auStack_148);
  FUN_003e9f80(auStack_160,local_158);
  if ((local_178 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_168);
  }
  if ((local_198 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_188);
  }
  FUN_0057c958(auStack_1b0);
  FUN_003e9f80(auStack_1c8,local_1c0);
  if ((local_1e0[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1d0);
  }
  if ((local_200 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1f0);
  }
                    /* try { // try from 0057bea0 to 0057beb3 has its CatchHandler @ 0057c65c */
  FUN_003ef188(&local_200,&local_268,0);
  uVar1 = local_200 >> 1 & 0x7f;
  uVar2 = (ulong)&local_200 | 1;
  if ((local_200 & 1) != 0) {
    uVar1 = uStack_1f8;
    uVar2 = local_1f0;
  }
                    /* try { // try from 0057bed0 to 0057bedb has its CatchHandler @ 0057c63c */
  uVar4 = FUN_003eca70(uVar2,uVar1,1,0);
  if ((local_200 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1f0);
  }
  FUN_0057c958(&local_230);
  FUN_003e9f80(&local_248,local_240);
  if (((ulong)local_260 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_250);
  }
  auVar11 = FUN_002eec80(1);
  uVar7 = auVar11._0_8_;
  uVar5 = FUN_002ef150(uVar7,auVar11._8_8_,param_3,param_4);
  iVar3 = FUN_002eef40(param_3,param_4,0xe10,0x300000000);
  if (0 < iVar3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/jwt/json_token.cc"
                 ,0xac,1,"Cropping token lifetime to maximum allowed value.");
    uVar5 = FUN_002ef150(uVar7,auVar11._8_8_,0xe10,0x300000000);
  }
  uStack_1f8 = 0;
  local_1f0 = 0;
  local_200 = 0x73736906;
                    /* try { // try from 0057bfc0 to 0057bfc7 has its CatchHandler @ 0057c638 */
  FUN_003ea108(&local_1e8,*(undefined8 *)(param_1 + 0x18),0);
  local_188 = 0;
  uStack_190 = 0;
  local_198 = 0x64756106;
                    /* try { // try from 0057bfe4 to 0057bfef has its CatchHandler @ 0057c5a8 */
  FUN_003e9cf0(auStack_180,param_2,0);
  uStack_128 = 0;
  local_120 = 0;
  local_130 = 0x74616906;
  local_118[0] = 3;
                    /* try { // try from 0057c01c to 0057c023 has its CatchHandler @ 0057c584 */
  FUN_003e5690(local_110,uVar7);
  local_f8 = &local_f0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_c8 = 0x70786506;
  local_b0 = 3;
                    /* try { // try from 0057c058 to 0057c05f has its CatchHandler @ 0057c558 */
  FUN_003e5690(local_a8,uVar5);
  local_68 = 0;
  local_90 = &local_88;
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
                    /* try { // try from 0057c080 to 0057c08f has its CatchHandler @ 0057c4ec */
  FUN_0057c9fc(&local_268,&local_200,4);
  FUN_0057c958(&uStack_78);
  FUN_003e9f80(&local_90,local_88);
  if ((local_a8[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
  }
  if ((local_c8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_b8);
  }
  FUN_0057c958(&local_e0);
  FUN_003e9f80(&local_f8,local_f0);
  if ((local_110[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_100);
  }
  if ((local_130 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_120);
  }
  FUN_0057c958(auStack_148);
  FUN_003e9f80(auStack_160,local_158);
  if ((local_178 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_168);
  }
  if ((local_198 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_188);
  }
  FUN_0057c958(auStack_1b0);
  FUN_003e9f80(auStack_1c8,local_1c0);
  if ((local_1e0[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1d0);
  }
  if ((local_200 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1f0);
  }
  if (param_5 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    local_1f0 = 0;
    uStack_1f8 = 0;
    local_200 = 0x62757306;
                    /* try { // try from 0057c290 to 0057c29f has its CatchHandler @ 0057c488 */
    puVar6 = (undefined8 *)FUN_003ea500(&local_268,&local_218,&local_200);
    p_Var10 = (__tree_node_base *)*puVar6;
    if (p_Var10 == (__tree_node_base *)0x0) {
      p_Var10 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var10 + 0x30) = local_1f0;
      *(ulong *)(p_Var10 + 0x28) = uStack_1f8;
      *(ulong *)(p_Var10 + 0x20) = local_200;
      uStack_1f8 = 0;
      local_1f0 = 0;
      local_200 = 0;
      *(undefined8 *)(p_Var10 + 0x60) = 0;
      *(undefined8 *)(p_Var10 + 0x58) = 0;
      *(undefined8 *)(p_Var10 + 0x68) = 0;
      *(undefined8 *)(p_Var10 + 0x70) = 0;
      *(__tree_node_base **)(p_Var10 + 0x58) = p_Var10 + 0x60;
      *(undefined8 *)(p_Var10 + 0x50) = 0;
      *(undefined8 *)(p_Var10 + 0x48) = 0;
      *(undefined8 *)(p_Var10 + 0x40) = 0;
      *(undefined8 *)(p_Var10 + 0x38) = 0;
      *(undefined8 *)(p_Var10 + 0x78) = 0;
      *(undefined8 *)(p_Var10 + 0x80) = 0;
      *(ulong **)(p_Var10 + 0x10) = local_218;
      *(undefined8 *)p_Var10 = 0;
      *(undefined8 *)(p_Var10 + 8) = 0;
      *puVar6 = p_Var10;
      if ((long *)*local_268 == (long *)0x0) {
        p_Var9 = p_Var10;
      }
      else {
        p_Var9 = (__tree_node_base *)*puVar6;
        local_268 = (long *)*local_268;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_260,p_Var9);
      local_258 = local_258 + 1;
    }
                    /* try { // try from 0057c364 to 0057c36b has its CatchHandler @ 0057c488 */
    FUN_0057cbe4(p_Var10 + 0x38,uVar7);
  }
  else {
    uStack_1f8 = 0;
    local_1f0 = 0;
    local_200 = 0x65706f63730a;
                    /* try { // try from 0057c1b4 to 0057c1c3 has its CatchHandler @ 0057c82c */
    puVar6 = (undefined8 *)FUN_003ea500(&local_268,&local_218,&local_200);
    p_Var10 = (__tree_node_base *)*puVar6;
    if (p_Var10 == (__tree_node_base *)0x0) {
      p_Var10 = (__tree_node_base *)FUN_002e2e80(PTR_FUN_04373078,0x88);
      *(ulong *)(p_Var10 + 0x30) = local_1f0;
      *(ulong *)(p_Var10 + 0x28) = uStack_1f8;
      *(ulong *)(p_Var10 + 0x20) = local_200;
      uStack_1f8 = 0;
      local_1f0 = 0;
      local_200 = 0;
      *(undefined8 *)(p_Var10 + 0x60) = 0;
      *(undefined8 *)(p_Var10 + 0x58) = 0;
      *(undefined8 *)(p_Var10 + 0x68) = 0;
      *(undefined8 *)(p_Var10 + 0x70) = 0;
      *(__tree_node_base **)(p_Var10 + 0x58) = p_Var10 + 0x60;
      *(undefined8 *)(p_Var10 + 0x50) = 0;
      *(undefined8 *)(p_Var10 + 0x48) = 0;
      *(undefined8 *)(p_Var10 + 0x40) = 0;
      *(undefined8 *)(p_Var10 + 0x38) = 0;
      *(undefined8 *)(p_Var10 + 0x78) = 0;
      *(undefined8 *)(p_Var10 + 0x80) = 0;
      *(ulong **)(p_Var10 + 0x10) = local_218;
      *(undefined8 *)p_Var10 = 0;
      *(undefined8 *)(p_Var10 + 8) = 0;
      *puVar6 = p_Var10;
      if ((long *)*local_268 == (long *)0x0) {
        p_Var9 = p_Var10;
      }
      else {
        p_Var9 = (__tree_node_base *)*puVar6;
        local_268 = (long *)*local_268;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_260,p_Var9);
      local_258 = local_258 + 1;
    }
                    /* try { // try from 0057c33c to 0057c343 has its CatchHandler @ 0057c82c */
    FUN_0057cae0(p_Var10 + 0x38,param_5);
  }
  if ((local_200 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1f0);
  }
                    /* try { // try from 0057c384 to 0057c38f has its CatchHandler @ 0057c4e4 */
  FUN_0057cce8(&local_200,&local_268);
                    /* try { // try from 0057c390 to 0057c3a3 has its CatchHandler @ 0057c4b8 */
  FUN_003ef188(&local_218,&local_200,0);
  uVar1 = (ulong)local_218 >> 1 & 0x7f;
  uVar2 = (ulong)&local_218 | 1;
  if (((ulong)local_218 & 1) != 0) {
    uVar1 = local_210;
    uVar2 = local_208;
  }
                    /* try { // try from 0057c3c0 to 0057c3cb has its CatchHandler @ 0057c498 */
  uVar7 = FUN_003eca70(uVar2,uVar1,1,0);
  if (((ulong)local_218 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_208);
  }
  FUN_0057c958(auStack_1c8);
  FUN_003e9f80(local_1e0,local_1d8);
  if ((uStack_1f8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1e8);
  }
  FUN_003e9f80(&local_268,local_260);
  __ptr = (void *)FUN_0057c860(uVar4,uVar7);
  lVar8 = FUN_0057ba40(param_1,"RS256",__ptr);
  if (lVar8 == 0) {
    free(__ptr);
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0057c860(__ptr,lVar8);
  }
  return uVar4;
}


