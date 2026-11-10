/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00349a18; name: FUN_00349a18
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00349a18(byte *******param_1,uint param_2,undefined8 param_3,char *param_4)

{
  undefined *puVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  byte bVar9;
  byte ******ppppppbVar10;
  size_t sVar11;
  ulong uVar12;
  byte *******pppppppbVar13;
  uint uVar14;
  ulong uVar15;
  byte ******ppppppbVar16;
  byte local_320 [8];
  uint local_318;
  byte ******local_310;
  ulong local_308;
  uint local_300;
  byte ******local_2f8;
  byte *******local_2d8;
  byte *******pppppppbStack_2d0;
  byte *******local_2c8;
  ulong local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  ulong local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  byte *local_290;
  byte *pbStack_288;
  undefined8 local_280;
  undefined2 local_278;
  char local_276;
  undefined1 local_270 [8];
  ulong uStack_268;
  byte ******local_260;
  undefined8 local_258;
  undefined4 local_250;
  byte *******local_228;
  undefined4 local_220;
  byte *******local_1f8;
  undefined4 local_1f0;
  byte *******local_1c8;
  undefined4 local_1c0;
  byte *******local_198;
  undefined8 local_190;
  byte *******local_168;
  uint local_160;
  byte *******local_138;
  uint local_130;
  byte *******local_108;
  byte *******local_100;
  ushort local_d8 [4];
  undefined8 local_d0;
  byte *******local_c8;
  byte *******local_c0;
  byte *******local_b8;
  ulong local_b0;
  byte *******local_90;
  byte *******pppppppbStack_88;
  byte *******local_80;
  ulong local_78;
  ulong uStack_70;
  byte ******local_68;
  
  uVar12 = (ulong)param_2 << 1;
  uVar15 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | uVar12;
  uVar14 = (uint)uVar12;
  local_68 = (byte ******)0x0;
  uStack_70 = 0;
  local_78 = 0;
  if (0xffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar14 < 0x17) {
    local_78 = (ulong)(byte)(param_2 << 2);
    ppppppbVar16 = (byte ******)((ulong)&local_78 | 1);
    if (param_2 != 0) goto LAB_00349aa8;
  }
  else {
    uVar12 = uVar15 + 0x10 & 0xfffffffffffffff0;
    ppppppbVar16 = (byte ******)FUN_002e2e80(PTR_FUN_04373078,uVar12);
    local_78 = uVar12 | 1;
    uStack_70 = uVar15;
    local_68 = ppppppbVar16;
LAB_00349aa8:
    memset(ppppppbVar16,0x20,uVar15);
  }
  *(undefined1 *)((long)ppppppbVar16 + uVar15) = 0;
  puVar5 = PTR_LAB_04373a98;
  local_80 = (byte *******)0x0;
  pppppppbStack_88 = (byte *******)0x0;
  local_90 = (byte *******)0x0;
  ppppppbVar16 = param_1[6];
  if (ppppppbVar16 != (byte ******)0x0) {
    local_108 = (byte *******)PTR_LAB_04373a98;
    local_138 = param_1;
    if (*ppppppbVar16 != (byte *****)0xffffffffffffffff) {
      local_2d8 = (byte *******)&local_108;
      pppppppbStack_2d0 = (byte *******)&local_138;
      local_c0 = (byte *******)&local_2d8;
                    /* try { // try from 00349b00 to 00349b0f has its CatchHandler @ 0034a5f8 */
      std::__call_once((ulong *)ppppppbVar16,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if ((*(int *)(param_1 + 7) == 0xb) &&
     (ppppppbVar16 = param_1[0xd], *(char *)((long)ppppppbVar16[4] + 0x4b) != '\0')) {
    ppppppbVar10 = param_1[6];
    if (ppppppbVar10 != (byte ******)0x0) {
      local_138 = param_1;
      if (*ppppppbVar10 != (byte *****)0xffffffffffffffff) {
        local_b8 = (byte *******)&local_138;
        local_108 = (byte *******)&local_c0;
        local_c0 = (byte *******)puVar5;
                    /* try { // try from 00349b58 to 00349b7b has its CatchHandler @ 0034a61c */
        std::__call_once((ulong *)ppppppbVar10,&local_108,(_func_void_void_ptr *)PTR_LAB_04373b88);
      }
      ppppppbVar16 = param_1[0xd];
    }
    FUN_0034b0f4(&local_308,ppppppbVar16[5]);
    uVar14 = (uint)((byte)local_308 >> 1);
    local_2d8 = (byte *******)((ulong)&local_308 | 1);
    if ((local_308 & 1) != 0) {
      uVar14 = local_300;
      local_2d8 = (byte *******)local_2f8;
    }
    pppppppbStack_2d0 = (byte *******)CONCAT44(pppppppbStack_2d0._4_4_,uVar14);
    ppppppbVar16 = param_1[6];
    if ((ppppppbVar16 != (byte ******)0x0) &&
       (local_168 = param_1, *ppppppbVar16 != (byte *****)0xffffffffffffffff)) {
      local_100 = (byte *******)&local_168;
      local_138 = (byte *******)&local_108;
      local_108 = (byte *******)puVar5;
                    /* try { // try from 00349bcc to 00349bf3 has its CatchHandler @ 0034a608 */
      std::__call_once((ulong *)ppppppbVar16,&local_138,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    FUN_0034b0f4(local_d8,param_1[0xd][5] + 0x13);
    local_108 = (byte *******)0x0;
    local_138 = (byte *******)0x0;
    local_168 = (byte *******)0x0;
    uVar14 = (uint)((byte)local_d8[0] >> 1);
    local_c0 = (byte *******)((ulong)local_d8 | 1);
    if ((local_d8[0] & 1) != 0) {
      uVar14 = (uint)local_d0;
      local_c0 = local_c8;
    }
    local_100 = (byte *******)CONCAT44(local_100._4_4_,0xffffffff);
    local_130 = 0xffffffff;
    local_b8 = (byte *******)CONCAT44(local_b8._4_4_,uVar14);
    local_160 = 0xffffffff;
    local_198 = (byte *******)0x0;
    local_190 = (byte *******)CONCAT44(local_190._4_4_,0xffffffff);
    local_1c8 = (byte *******)0x0;
    local_1c0 = 0xffffffff;
    local_1f8 = (byte *******)0x0;
    local_1f0 = 0xffffffff;
    local_228 = (byte *******)0x0;
    local_220 = 0xffffffff;
    local_258 = 0;
    local_250 = 0xffffffff;
                    /* try { // try from 00349c60 to 00349c9f has its CatchHandler @ 0034a5c0 */
    FUN_003c68c0(&local_90,"map<$0, $1>",&local_2d8,&local_c0,&local_108,&local_138,&local_168,
                 &local_198,&local_1c8,&local_1f8,&local_228,&local_258);
    if ((local_d8[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_c8);
    }
    if (((byte)local_308 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_2f8);
    }
  }
  else {
                    /* try { // try from 00349cd4 to 00349cdf has its CatchHandler @ 0034a680 */
    FUN_0034b0f4(&local_2d8,param_1);
    if (((ulong)local_90 & 1) != 0) {
      *(undefined1 *)local_80 = 0;
      pppppppbStack_88 = (byte *******)0x0;
      if (((ulong)local_90 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_80);
      }
    }
    local_80 = local_2c8;
    pppppppbStack_88 = pppppppbStack_2d0;
    local_90 = local_2d8;
  }
  local_2d8 = *(byte ********)(PTR_PTR_04373bc0 + (ulong)*(uint *)((long)param_1 + 0x3c) * 8);
  pppppppbStack_2d0 = (byte *******)strlen((char *)local_2d8);
  local_b8 = (byte *******)0x1;
  local_c0 = (byte *******)&DAT_038bdc00;
                    /* try { // try from 00349d58 to 00349d67 has its CatchHandler @ 0034a6c0 */
  FUN_00321370(local_d8,&local_2d8,&local_c0);
  ppppppbVar16 = param_1[6];
  if (ppppppbVar16 != (byte ******)0x0) {
    local_108 = (byte *******)puVar5;
    local_138 = param_1;
    if (*ppppppbVar16 != (byte *****)0xffffffffffffffff) {
      local_2d8 = (byte *******)&local_108;
      pppppppbStack_2d0 = (byte *******)&local_138;
      local_c0 = (byte *******)&local_2d8;
                    /* try { // try from 00349d98 to 00349da7 has its CatchHandler @ 0034a5e8 */
      std::__call_once((ulong *)ppppppbVar16,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  ppppppbVar16 = local_68;
  uVar12 = uStack_70;
  if ((((*(int *)(param_1 + 7) == 0xb) && (*(char *)((long)param_1[0xd][4] + 0x4b) != '\0')) ||
      (param_1[0xb] != (byte ******)0x0)) ||
     (((*(int *)((long)param_1 + 0x3c) == 1 && (*(byte *)((long)param_1 + 0x41) == 0)) &&
      (*(int *)((long)param_1[5] + 0x3c) != 2)))) {
    if ((local_d8[0] & 1) == 0) {
      local_d8[0] = 0;
    }
    else {
      *(undefined1 *)local_c8 = 0;
      local_d0 = 0;
    }
  }
  pbStack_288 = (byte *)0x0;
  local_290 = (byte *)0x0;
  uStack_298 = 0;
  local_2a0 = 0;
  local_280 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_278 = *(undefined2 *)param_4;
  local_276 = param_4[2];
  local_260 = (byte ******)0x0;
  local_270 = (undefined1  [8])0x0;
  uStack_268 = 0;
  if ((local_78 & 1) == 0) {
    local_260 = local_68;
    uStack_268 = uStack_70;
    local_270 = (undefined1  [8])local_78;
    if (*param_4 != '\0') goto LAB_00349ee8;
    bVar9 = 0;
  }
  else {
    if (0xffffffffffffffef < uStack_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0034a5ac to 0034a5af has its CatchHandler @ 0034a5b0 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_70 < 0x17) {
      ppppppbVar10 = (byte ******)(local_270 + 1);
      local_270._1_7_ = 0;
      local_270[0] = (byte)((int)uStack_70 << 1);
      if (uStack_70 == 0) {
        local_270 = (undefined1  [8])0x0;
        if (*param_4 != '\0') goto LAB_00349ee8;
        bVar9 = 0;
        goto LAB_00349f30;
      }
    }
    else {
      uVar15 = uStack_70 + 0x10 & 0xfffffffffffffff0;
      ppppppbVar10 = (byte ******)FUN_002e2e80(PTR_FUN_04373078,uVar15);
      local_270 = (undefined1  [8])(uVar15 | 1);
      uStack_268 = uVar12;
      local_260 = ppppppbVar10;
    }
    memcpy(ppppppbVar10,ppppppbVar16,uVar12);
    *(undefined1 *)((long)ppppppbVar10 + uVar12) = 0;
    bVar9 = 0;
    if (*param_4 != '\0') {
LAB_00349ee8:
      local_b0 = 0;
      local_b8 = (byte *******)0x0;
      local_c0 = (byte *******)0x0;
                    /* try { // try from 00349ef4 to 00349f0f has its CatchHandler @ 0034a6fc */
      FUN_0034c584(param_1,&local_c0);
      bVar9 = FUN_0034bd2c(param_1[5],&local_c0,&pppppppbStack_2d0);
      if (local_c0 != (byte *******)0x0) {
        local_b8 = local_c0;
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      bVar9 = bVar9 & 1;
    }
  }
LAB_00349f30:
  local_2d8 = (byte *******)CONCAT71(local_2d8._1_7_,bVar9);
                    /* try { // try from 00349f34 to 00349f3f has its CatchHandler @ 0034a6b0 */
  FUN_00347438(&local_2d8,param_3);
  bVar8 = (local_78 & 1) != 0;
  uVar14 = (uint)((byte)local_78 >> 1);
  if (bVar8) {
    uVar14 = (uint)uStack_70;
  }
  local_b8 = (byte *******)CONCAT44(local_b8._4_4_,uVar14);
  local_c0 = (byte *******)((ulong)&local_78 | 1);
  if (bVar8) {
    local_c0 = (byte *******)local_68;
  }
  bVar8 = (local_d8[0] & 1) != 0;
  uVar14 = (uint)((byte)local_d8[0] >> 1);
  if (bVar8) {
    uVar14 = (uint)local_d0;
  }
  local_100 = (byte *******)CONCAT44(local_100._4_4_,uVar14);
  local_108 = (byte *******)((ulong)local_d8 | 1);
  if (bVar8) {
    local_108 = local_c8;
  }
  local_130 = (uint)((byte)local_90 >> 1);
  local_138 = (byte *******)((ulong)&local_90 | 1);
  if (((ulong)local_90 & 1) != 0) {
    local_130 = (uint)pppppppbStack_88;
    local_138 = local_80;
  }
  ppppppbVar16 = param_1[6];
  if (ppppppbVar16 != (byte ******)0x0) {
    local_1f8 = (byte *******)puVar5;
    local_228 = param_1;
    if (*ppppppbVar16 != (byte *****)0xffffffffffffffff) {
      local_198 = (byte *******)&local_1f8;
      local_190 = (byte *******)&local_228;
      local_1c8 = (byte *******)&local_198;
                    /* try { // try from 00349ff4 to 0034a047 has its CatchHandler @ 0034a62c */
      std::__call_once((ulong *)ppppppbVar16,&local_1c8,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(param_1 + 7) == 10) {
    ppppppbVar16 = param_1[6];
    if ((ppppppbVar16 != (byte ******)0x0) &&
       (local_1f8 = param_1, *ppppppbVar16 != (byte *****)0xffffffffffffffff)) {
      local_190 = (byte *******)&local_1f8;
      local_198 = (byte *******)puVar5;
      local_1c8 = (byte *******)&local_198;
      std::__call_once((ulong *)ppppppbVar16,&local_1c8,(_func_void_void_ptr *)PTR_LAB_04373b88);
    }
    pppppppbVar13 = (byte *******)param_1[0xd];
  }
  else {
    pppppppbVar13 = param_1;
  }
  ppppppbVar16 = *pppppppbVar13;
  local_168 = (byte *******)ppppppbVar16[2];
  if (((ulong)*ppppppbVar16 & 1) == 0) {
    local_168 = (byte *******)((long)ppppppbVar16 + 1);
  }
  local_160 = (uint)(*(byte *)ppppppbVar16 >> 1);
  if ((*(byte *)ppppppbVar16 & 1) != 0) {
    local_160 = (uint)ppppppbVar16[1];
  }
                    /* try { // try from 0034a090 to 0034a093 has its CatchHandler @ 0034a6a0 */
  local_198 = (byte *******)FUN_00320300(*(undefined4 *)((long)param_1 + 0x44),(long)&local_190 + 4)
  ;
  sVar11 = strlen((char *)local_198);
  local_1c8 = (byte *******)0x0;
  local_1c0 = 0xffffffff;
  local_1f8 = (byte *******)0x0;
  local_1f0 = 0xffffffff;
  local_228 = (byte *******)0x0;
  local_220 = 0xffffffff;
  local_258 = 0;
  local_250 = 0xffffffff;
  local_308 = 0;
  local_300 = 0xffffffff;
                    /* try { // try from 0034a0cc to 0034a10b has its CatchHandler @ 0034a690 */
  local_190._0_4_ = (int)sVar11;
  FUN_003c68c0(param_3,"$0$1$2 $3 = $4",&local_c0,&local_108,&local_138,&local_168,&local_198,
               &local_1c8,&local_1f8,&local_228,&local_258,&local_308);
  if (*(byte *)(param_1 + 8) == 0) {
    bVar2 = false;
    bVar8 = false;
    bVar9 = *(byte *)((long)param_1 + 0x42);
  }
  else {
                    /* try { // try from 0034a114 to 0034a127 has its CatchHandler @ 0034a670 */
    FUN_00344354(local_320,param_1,1);
    local_108 = (byte *******)0x0;
    local_100 = (byte *******)CONCAT44(local_100._4_4_,0xffffffff);
    local_138 = (byte *******)0x0;
    uVar14 = (uint)(local_320[0] >> 1);
    local_c0 = (byte *******)((ulong)local_320 | 1);
    if ((local_320[0] & 1) != 0) {
      uVar14 = local_318;
      local_c0 = (byte *******)local_310;
    }
    local_130 = 0xffffffff;
    local_168 = (byte *******)0x0;
    local_160 = 0xffffffff;
    local_198 = (byte *******)0x0;
    local_190._0_4_ = 0xffffffff;
    local_1c8 = (byte *******)0x0;
    local_1c0 = 0xffffffff;
    local_b8 = (byte *******)CONCAT44(local_b8._4_4_,uVar14);
    local_1f8 = (byte *******)0x0;
    local_1f0 = 0xffffffff;
    local_228 = (byte *******)0x0;
    local_220 = 0xffffffff;
    local_258 = 0;
    local_250 = 0xffffffff;
    local_308 = 0;
    local_300 = 0xffffffff;
                    /* try { // try from 0034a194 to 0034a1d3 has its CatchHandler @ 0034a65c */
    FUN_003c68c0(param_3," [default = $0",&local_c0,&local_108,&local_138,&local_168,&local_198,
                 &local_1c8,&local_1f8,&local_228,&local_258,&local_308);
    if ((local_320[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_310);
    }
    bVar2 = true;
    bVar8 = true;
    bVar9 = *(byte *)((long)param_1 + 0x42);
  }
  if (bVar9 != 0) {
    if (bVar8) {
                    /* try { // try from 0034a1fc to 0034a24b has its CatchHandler @ 0034a788 */
      FUN_002e4094(param_3,&DAT_0398d5c8,2);
    }
    else {
      FUN_002e4094(param_3,&DAT_038aa492,1);
    }
    FUN_002e4094(param_3,"json_name = \"",0xd);
                    /* try { // try from 0034a250 to 0034a25b has its CatchHandler @ 0034a64c */
    FUN_003201a0(&local_c0,param_1[4]);
    uVar12 = (ulong)&local_c0 | 1;
    pppppppbVar13 = (byte *******)((ulong)local_c0 >> 1 & 0x7f);
    if (((ulong)local_c0 & 1) != 0) {
      uVar12 = local_b0;
      pppppppbVar13 = local_b8;
    }
                    /* try { // try from 0034a27c to 0034a283 has its CatchHandler @ 0034a63c */
    FUN_002e4094(param_3,uVar12,pppppppbVar13);
    if (((ulong)local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
    bVar2 = true;
                    /* try { // try from 0034a2a0 to 0034a2b3 has its CatchHandler @ 0034a788 */
    FUN_002e4094(param_3,&DAT_039042e1,1);
  }
  local_b0 = 0;
  local_b8 = (byte *******)0x0;
  local_c0 = (byte *******)0x0;
                    /* try { // try from 0034a2cc to 0034a42f has its CatchHandler @ 0034a798 */
  uVar12 = FUN_0034b400((ulong)param_2,param_1[0xf],param_1[5][2],&local_c0);
  if ((uVar12 & 1) == 0) {
    if (!bVar2) goto LAB_0034a348;
  }
  else {
    puVar1 = &DAT_0398d5c8;
    if (!bVar2) {
      puVar1 = &DAT_039a86d1;
    }
    FUN_002e4094(param_3,puVar1,2);
    uVar12 = (ulong)&local_c0 | 1;
    pppppppbVar13 = (byte *******)((ulong)local_c0 >> 1 & 0x7f);
    if (((ulong)local_c0 & 1) != 0) {
      uVar12 = local_b0;
      pppppppbVar13 = local_b8;
    }
    FUN_002e4094(param_3,uVar12,pppppppbVar13);
  }
  FUN_002e4094(param_3,&DAT_03904308,1);
LAB_0034a348:
  ppppppbVar16 = param_1[6];
  if (ppppppbVar16 != (byte ******)0x0) {
    local_168 = (byte *******)puVar5;
    local_198 = param_1;
    if (*ppppppbVar16 != (byte *****)0xffffffffffffffff) {
      local_108 = (byte *******)&local_168;
      local_100 = (byte *******)&local_198;
      local_138 = (byte *******)&local_108;
      std::__call_once((ulong *)ppppppbVar16,&local_138,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if (*(int *)(param_1 + 7) == 10) {
    if (param_4[1] == '\0') {
      ppppppbVar16 = param_1[6];
      if ((ppppppbVar16 != (byte ******)0x0) &&
         (local_168 = param_1, *ppppppbVar16 != (byte *****)0xffffffffffffffff)) {
        local_100 = (byte *******)&local_168;
        local_138 = (byte *******)&local_108;
        local_108 = (byte *******)puVar5;
        std::__call_once((ulong *)ppppppbVar16,&local_138,(_func_void_void_ptr *)PTR_LAB_04373b88);
      }
      FUN_003485bc(param_1[0xd],param_2,param_3,param_4,0);
    }
    else {
      FUN_002e4094(param_3," { ... };\n",10);
    }
  }
  else {
    FUN_002e4094(param_3,&DAT_038a090c,2);
  }
  FUN_003475cc(&local_2d8,param_3);
  if (((ulong)local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_b0);
  }
  if (((ulong)local_270 & 1) == 0) {
    puVar5 = PTR_LAB_04373088;
    pbVar6 = local_290;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,local_260);
    puVar5 = PTR_LAB_04373088;
    pbVar6 = local_290;
  }
  PTR_LAB_04373088 = puVar5;
  local_290 = pbVar6;
  if (pbVar6 != (byte *)0x0) {
    if (pbStack_288 != pbVar6) {
      bVar9 = *(byte *)((long)pbStack_288 + -0x18);
      pbVar7 = (byte *)((long)pbStack_288 + -0x18);
      pbVar4 = pbStack_288;
      while( true ) {
        pbVar3 = pbVar7;
        if ((bVar9 & 1) != 0) {
          FUN_002e2ea0(puVar5,*(undefined8 *)(pbVar4 + -8));
        }
        if (pbVar6 == pbVar3) break;
        bVar9 = pbVar3[-0x18];
        pbVar7 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
    pbStack_288 = pbVar6;
    FUN_002e2ea0(PTR_LAB_04373088,local_290);
  }
  if ((local_2a8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_298);
  }
  if ((local_2c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_2b0);
  }
  if ((local_d8[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_c8);
  }
  if (((ulong)local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return;
}


