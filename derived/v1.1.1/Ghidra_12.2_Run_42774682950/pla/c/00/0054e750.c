/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054e750; name: FUN_0054e750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054e750(byte *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *__src;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ostream *poVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  void *__dest;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 uVar16;
  byte *local_1b0;
  ulong local_1a8;
  char *local_1a0;
  byte *local_198;
  ulong local_190;
  byte local_188 [8];
  ulong local_180;
  char *local_178;
  byte *local_170;
  ulong uStack_168;
  void *local_160;
  byte **local_60;
  void *local_58;
  ulong local_50;
  byte *local_48;
  
  if (DAT_0439ed38 != -1) {
    local_170 = local_188;
    local_60 = &local_170;
    std::__call_once((ulong *)&DAT_0439ed38,&local_60,(_func_void_void_ptr *)&LAB_005506e0);
  }
  FUN_00291910(param_1,*param_2,param_2[1]);
  pbVar15 = param_1 + 0x48;
  uVar16 = *param_3;
  uVar12 = param_3[2];
  *(undefined8 *)(param_1 + 0x20) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = uVar16;
  *(undefined8 *)(param_1 + 0x28) = uVar12;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)(param_1 + 0x38) = DAT_0439ed40;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  if ((*pbVar15 & 1) == 0) {
    pbVar15[0] = 0;
    pbVar15[1] = 0;
    if ((param_1[0x60] & 1) == 0) goto LAB_0054e820;
LAB_0054e7f8:
    **(undefined1 **)(param_1 + 0x70) = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x58) = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    if ((param_1[0x60] & 1) != 0) goto LAB_0054e7f8;
LAB_0054e820:
    param_1[0x60] = 0;
    param_1[0x61] = 0;
  }
  param_1[0x78] = 0;
  pbVar13 = param_1 + 0x80;
  pbVar13[0] = 0;
  pbVar13[1] = 0;
  pbVar13[2] = 0;
  pbVar13[3] = 0;
  pbVar13[4] = 0;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[7] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0xff;
  param_1[0x91] = 0xff;
  param_1[0x92] = 0xff;
  param_1[0x93] = 0xff;
  param_1[0x94] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  local_60 = (byte **)((ulong)local_60 & 0xffffffff00000000);
  local_48 = (byte *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_170 = *(byte **)(param_1 + 0x10);
  bVar4 = (*param_1 & 1) == 0;
  if (bVar4) {
    local_170 = param_1 + 1;
  }
  uStack_168 = (ulong)(*param_1 >> 1);
  if (!bVar4) {
    uStack_168 = *(ulong *)(param_1 + 8);
  }
                    /* try { // try from 0054e87c to 0054e88f has its CatchHandler @ 0054edb8 */
  uVar6 = FUN_0054ef10(param_1 + 0x18);
  lVar7 = FUN_0056623c(&local_170,uVar6,&local_60);
  *(long *)(param_1 + 0x30) = lVar7;
  if (lVar7 != 0) {
                    /* try { // try from 0054e89c to 0054e8ab has its CatchHandler @ 0054edc8 */
    uVar8 = FUN_0055f890(lVar7,param_1 + 0x60,param_1 + 0x78,&local_198);
    if ((uVar8 & 1) == 0) {
                    /* try { // try from 0054ea0c to 0054ea4b has its CatchHandler @ 0054edc8 */
      pbVar15 = (byte *)FUN_0055dbac(*(undefined8 *)(param_1 + 0x30));
    }
    else {
      pbVar15 = local_198;
    }
    lVar7 = *(ulong *)(param_1 + 0x20) << 1;
    *(byte **)(param_1 + 0x80) = pbVar15;
    lVar7 = FUN_0056de6c(pbVar15,lVar7 / 3 + (lVar7 >> 0x3f) +
                                 ((*(ulong *)(param_1 + 0x20) & 0x7fffffffffffffff) >> 0x3e));
    *(long *)(param_1 + 0x88) = lVar7;
    if (lVar7 == 0) {
      if (param_1[0x1e] != 0) {
                    /* try { // try from 0054eaa4 to 0054eabb has its CatchHandler @ 0054ed00 */
        FUN_0054f038(&local_170,"external/com_github_google_re2/re2/re2.cc",0xe0);
                    /* try { // try from 0054eac0 to 0054eacf has its CatchHandler @ 0054ecf8 */
        poVar9 = std::__put_character_sequence<char,std::char_traits<char>>
                           ((ostream *)&uStack_168,"Error compiling \'",0x11);
        bVar4 = (*param_1 & 1) != 0;
        local_1b0 = param_1 + 1;
        if (bVar4) {
          local_1b0 = *(byte **)(param_1 + 0x10);
        }
        local_1a8 = (ulong)(*param_1 >> 1);
        if (bVar4) {
          local_1a8 = *(ulong *)(param_1 + 8);
        }
                    /* try { // try from 0054eaf8 to 0054eb07 has its CatchHandler @ 0054ecf0 */
        FUN_0054f2e0(local_188,&local_1b0);
        uVar8 = (ulong)(local_188[0] >> 1);
        pcVar11 = (char *)((ulong)local_188 | 1);
        if ((local_188[0] & 1) != 0) {
          uVar8 = local_180;
          pcVar11 = local_178;
        }
                    /* try { // try from 0054eb24 to 0054eb3b has its CatchHandler @ 0054ed68 */
        poVar9 = std::__put_character_sequence<char,std::char_traits<char>>(poVar9,pcVar11,uVar8);
        std::__put_character_sequence<char,std::char_traits<char>>(poVar9,"\'",1);
        if ((local_188[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_178);
        }
        FUN_0054f1b0(&local_170);
      }
      puVar10 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        pcVar11 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
        uVar12 = _DAT_0388a460;
        puVar10[1] = _UNK_0388a468;
        *puVar10 = uVar12;
        puVar10[2] = pcVar11;
        pcVar11[0x20] = 'e';
        uVar3 = s_pattern_too_large___compile_fail_038a242b._24_8_;
        uVar2 = s_pattern_too_large___compile_fail_038a242b._16_8_;
        uVar16 = s_pattern_too_large___compile_fail_038a242b._8_8_;
        uVar12 = s_pattern_too_large___compile_fail_038a242b._0_8_;
        pcVar11[0x21] = 'd';
        pcVar11[0x22] = '\0';
        *(undefined8 *)(pcVar11 + 8) = uVar16;
        *(undefined8 *)pcVar11 = uVar12;
        *(undefined8 *)(pcVar11 + 0x18) = uVar3;
        *(undefined8 *)(pcVar11 + 0x10) = uVar2;
      }
      *(undefined8 **)(param_1 + 0x38) = puVar10;
      param_1[0x40] = 0xe;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      pbVar15 = local_48;
    }
    else {
      uVar6 = FUN_0055f4d8(*(undefined8 *)pbVar13);
      *(undefined4 *)(param_1 + 0x90) = uVar6;
      bVar5 = FUN_00551780(*(undefined8 *)(param_1 + 0x88));
      param_1[0x94] = bVar5 & 1;
      pbVar15 = local_48;
    }
    goto joined_r0x0054ebc8;
  }
  if (param_1[0x1e] != 0) {
                    /* try { // try from 0054e8c0 to 0054e8d7 has its CatchHandler @ 0054ed58 */
    FUN_0054f038(&local_170,"external/com_github_google_re2/re2/re2.cc",0xcb);
                    /* try { // try from 0054e8dc to 0054e8eb has its CatchHandler @ 0054ed50 */
    poVar9 = std::__put_character_sequence<char,std::char_traits<char>>
                       ((ostream *)&uStack_168,"Error parsing \'",0xf);
    bVar4 = (*param_1 & 1) != 0;
    local_198 = param_1 + 1;
    if (bVar4) {
      local_198 = *(byte **)(param_1 + 0x10);
    }
    local_190 = (ulong)(*param_1 >> 1);
    if (bVar4) {
      local_190 = *(ulong *)(param_1 + 8);
    }
                    /* try { // try from 0054e914 to 0054e923 has its CatchHandler @ 0054ed48 */
    FUN_0054f2e0(local_188,&local_198);
    uVar8 = (ulong)(local_188[0] >> 1);
    pcVar11 = (char *)((ulong)local_188 | 1);
    if ((local_188[0] & 1) != 0) {
      uVar8 = local_180;
      pcVar11 = local_178;
    }
                    /* try { // try from 0054e940 to 0054e957 has its CatchHandler @ 0054ed88 */
    poVar9 = std::__put_character_sequence<char,std::char_traits<char>>(poVar9,pcVar11,uVar8);
    poVar9 = std::__put_character_sequence<char,std::char_traits<char>>(poVar9,"\': ",3);
                    /* try { // try from 0054e95c to 0054e96b has its CatchHandler @ 0054ed38 */
    FUN_0055f294(&local_1b0,&local_60);
    uVar8 = (ulong)local_1b0 >> 1 & 0x7f;
    pcVar11 = (char *)((ulong)&local_1b0 | 1);
    if (((ulong)local_1b0 & 1) != 0) {
      uVar8 = local_1a8;
      pcVar11 = local_1a0;
    }
                    /* try { // try from 0054e988 to 0054e98f has its CatchHandler @ 0054ed10 */
    std::__put_character_sequence<char,std::char_traits<char>>(poVar9,pcVar11,uVar8);
    if (((ulong)local_1b0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_1a0);
    }
    if ((local_188[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_178);
    }
    FUN_0054f1b0(&local_170);
  }
                    /* try { // try from 0054e9c8 to 0054e9d3 has its CatchHandler @ 0054ed78 */
  FUN_0055f294(&local_170,&local_60);
  puVar10 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (puVar10 == (undefined8 *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    if (((ulong)local_170 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_160);
    }
  }
  else {
    puVar10[2] = local_160;
    puVar10[1] = uStack_168;
    *puVar10 = local_170;
    *(undefined8 **)(param_1 + 0x38) = puVar10;
  }
  uVar8 = local_50;
  __src = local_58;
  uVar1 = (uint)local_60;
  if (0xd < (uint)local_60) {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  if (local_58 == (void *)0x0) {
    uStack_168 = 0;
    local_160 = (void *)0x0;
    local_170 = (byte *)0x0;
    if ((*pbVar15 & 1) == 0) goto LAB_0054ecb8;
LAB_0054ec48:
    **(undefined1 **)(param_1 + 0x58) = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    if ((param_1[0x48] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x58));
      param_1[0x48] = 0;
      param_1[0x49] = 0;
      param_1[0x4a] = 0;
      param_1[0x4b] = 0;
      param_1[0x4c] = 0;
      param_1[0x4d] = 0;
      param_1[0x4e] = 0;
      param_1[0x4f] = 0;
    }
  }
  else {
    local_160 = (void *)0x0;
    local_170 = (byte *)0x0;
    uStack_168 = 0;
    if (0xffffffffffffffef < local_50) {
                    /* try { // try from 0054ecd8 to 0054ecdf has its CatchHandler @ 0054ece0 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_50 < 0x17) {
      local_170 = (byte *)(ulong)(byte)((int)local_50 << 1);
      __dest = (void *)((ulong)&local_170 | 1);
      if (local_50 != 0) goto LAB_0054ec9c;
    }
    else {
      uVar14 = local_50 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
      local_170 = (byte *)(uVar14 | 1);
      uStack_168 = uVar8;
      local_160 = __dest;
LAB_0054ec9c:
      memcpy(__dest,__src,uVar8);
    }
    *(undefined1 *)((long)__dest + uVar8) = 0;
    if ((*pbVar15 & 1) != 0) goto LAB_0054ec48;
LAB_0054ecb8:
    pbVar15[0] = 0;
    pbVar15[1] = 0;
  }
  *(void **)(param_1 + 0x58) = local_160;
  *(ulong *)(param_1 + 0x50) = uStack_168;
  *(byte **)pbVar15 = local_170;
  pbVar15 = local_48;
joined_r0x0054ebc8:
  if (pbVar15 != (byte *)0x0) {
    local_48 = pbVar15;
    if ((*pbVar15 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(pbVar15 + 0x10));
    }
    FUN_002e2ea0(PTR_LAB_04373088,pbVar15);
  }
  return;
}


