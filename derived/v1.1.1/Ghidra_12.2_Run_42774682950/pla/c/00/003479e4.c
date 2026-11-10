/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003479e4; name: FUN_003479e4
 */


void FUN_003479e4(undefined8 *param_1,uint param_2,byte *param_3,char *param_4)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  char *__src;
  byte *pbVar6;
  size_t sVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  byte local_2f0 [8];
  uint local_2e8;
  char *local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_188;
  undefined4 local_180;
  byte *local_158;
  uint local_150;
  undefined1 auStack_14c [36];
  char *local_128;
  undefined8 local_120;
  undefined8 local_118;
  byte local_f8 [8];
  undefined1 auStack_f0 [16];
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte *local_b0;
  byte *pbStack_a8;
  undefined8 local_a0;
  undefined2 local_98;
  char local_96;
  undefined8 local_90;
  ulong uStack_88;
  char *local_80;
  ulong local_78;
  ulong uStack_70;
  char *local_68;
  
  uVar10 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  uVar9 = (uint)((ulong)param_2 << 1);
  local_68 = (char *)0x0;
  uStack_70 = 0;
  local_78 = 0;
  if (0xffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 0x17) {
    local_78 = (ulong)(byte)(param_2 << 2);
    pcVar12 = (char *)((ulong)&local_78 | 1);
    if (param_2 != 0) goto LAB_00347a78;
  }
  else {
    uVar14 = uVar10 + 0x10 & 0xfffffffffffffff0;
    pcVar12 = (char *)FUN_002e2e80(PTR_FUN_04373078,uVar14);
    local_78 = uVar14 | 1;
    uStack_70 = uVar10;
    local_68 = pcVar12;
LAB_00347a78:
    memset(pcVar12,0x20,uVar10);
  }
  __src = local_68;
  uVar14 = uStack_70;
  pcVar12[uVar10] = '\0';
  pbStack_a8 = (byte *)0x0;
  local_b0 = (byte *)0x0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_98 = *(undefined2 *)param_4;
  local_96 = param_4[2];
  local_90 = 0;
  local_80 = (char *)0x0;
  uStack_88 = 0;
  if ((local_78 & 1) == 0) {
    local_80 = local_68;
    uStack_88 = uStack_70;
    local_90 = local_78;
    if (*param_4 == '\0') {
      local_f8[0] = 0;
      goto LAB_00347bb0;
    }
  }
  else {
    if (0xffffffffffffffef < uStack_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0034833c to 0034833f has its CatchHandler @ 00348340 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_70 < 0x17) {
      pcVar12 = (char *)((long)&local_90 + 1);
      local_90 = (ulong)(byte)((int)uStack_70 << 1);
      if (uStack_70 == 0) {
        local_90 = 0;
        if (*param_4 == '\0') {
          local_f8[0] = 0;
          goto LAB_00347bb0;
        }
        goto LAB_00347b6c;
      }
    }
    else {
      uVar10 = uStack_70 + 0x10 & 0xfffffffffffffff0;
      pcVar12 = (char *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
      local_90 = uVar10 | 1;
      uStack_88 = uVar14;
      local_80 = pcVar12;
    }
    memcpy(pcVar12,__src,uVar14);
    pcVar12[uVar14] = '\0';
    local_f8[0] = 0;
    if (*param_4 == '\0') goto LAB_00347bb0;
  }
LAB_00347b6c:
  local_118 = 0;
  local_128 = (char *)0x0;
  local_120 = (char *)0x0;
                    /* try { // try from 00347b74 to 00347b8f has its CatchHandler @ 00348390 */
  FUN_0034ca74(param_1,&local_128);
  local_f8[0] = FUN_0034bd2c(param_1[2],&local_128,auStack_f0);
  if (local_128 != (char *)0x0) {
    local_120 = local_128;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  local_f8[0] = local_f8[0] & 1;
LAB_00347bb0:
                    /* try { // try from 00347bb4 to 00347bbf has its CatchHandler @ 0034841c */
  FUN_00347438(local_f8,param_3);
  pcVar12 = (char *)((ulong)&local_78 | 1);
  uVar9 = (uint)((byte)local_78 >> 1);
  local_128 = pcVar12;
  if ((local_78 & 1) != 0) {
    uVar9 = (uint)uStack_70;
    local_128 = local_68;
  }
  local_120 = (char *)CONCAT44(local_120._4_4_,uVar9);
  pbVar8 = (byte *)*param_1;
  local_158 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    local_158 = pbVar8 + 1;
  }
  local_188 = 0;
  local_1b8 = 0;
  local_1e8 = 0;
  local_218 = 0;
  local_248 = 0;
  local_278 = 0;
  local_2a8 = 0;
  local_2d8 = 0;
  local_180 = 0xffffffff;
  local_1b0 = 0xffffffff;
  local_1e0 = 0xffffffff;
  local_210 = 0xffffffff;
  local_240 = 0xffffffff;
  local_270 = 0xffffffff;
  local_2a0 = 0xffffffff;
  local_2d0 = 0xffffffff;
  local_150 = (uint)(*pbVar8 >> 1);
  if ((*pbVar8 & 1) != 0) {
    local_150 = (uint)*(undefined8 *)(pbVar8 + 8);
  }
                    /* try { // try from 00347c60 to 00347c9f has its CatchHandler @ 00348380 */
  FUN_003c68c0(param_3,"$0enum $1 {\n",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
               &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
                    /* try { // try from 00347cb0 to 00347cbb has its CatchHandler @ 0034841c */
  FUN_00347690(param_2 + 1,param_1[4],*(undefined8 *)(param_1[2] + 0x10),param_3);
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar11 = 0;
    lVar13 = 0;
    do {
                    /* try { // try from 00347cd8 to 00347ce7 has its CatchHandler @ 003484c8 */
      FUN_0034b634(param_1[6] + lVar11,param_2 + 1,param_3,param_4);
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x28;
    } while (lVar13 < *(int *)((long)param_1 + 0x2c));
  }
  if (0 < *(int *)(param_1 + 7)) {
    local_128 = pcVar12;
    uVar9 = (uint)((byte)local_78 >> 1);
    if ((local_78 & 1) != 0) {
      local_128 = local_68;
      uVar9 = (uint)uStack_70;
    }
    local_158 = (byte *)0x0;
    local_150 = 0xffffffff;
    local_188 = 0;
    local_180 = 0xffffffff;
    local_1b8 = 0;
    local_1b0 = 0xffffffff;
    local_1e8 = 0;
    local_1e0 = 0xffffffff;
    local_218 = 0;
    local_210 = 0xffffffff;
    local_248 = 0;
    local_120 = (char *)CONCAT44(local_120._4_4_,uVar9);
    local_240 = 0xffffffff;
    local_278 = 0;
    local_270 = 0xffffffff;
    local_2a8 = 0;
    local_2a0 = 0xffffffff;
    local_2d8 = 0;
    local_2d0 = 0xffffffff;
                    /* try { // try from 00347d78 to 00347db7 has its CatchHandler @ 00348360 */
    FUN_003c68c0(param_3,"$0  reserved ",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                 &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
    if (0 < *(int *)(param_1 + 7)) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        piVar1 = (int *)(param_1[8] + lVar11);
        if (piVar1[1] == *piVar1) {
                    /* try { // try from 00347e14 to 00347e1f has its CatchHandler @ 0034843c */
          local_128 = (char *)FUN_00320300(piVar1[1],(long)&local_120 + 4);
          sVar7 = strlen(local_128);
          local_158 = (byte *)0x0;
          local_120 = (char *)CONCAT44(local_120._4_4_,(int)sVar7);
          local_150 = 0xffffffff;
          local_188 = 0;
          local_180 = 0xffffffff;
          local_1b8 = 0;
          local_1b0 = 0xffffffff;
          local_1e8 = 0;
          local_1e0 = 0xffffffff;
          local_218 = 0;
          local_210 = 0xffffffff;
          local_248 = 0;
          local_240 = 0xffffffff;
          local_278 = 0;
          local_270 = 0xffffffff;
          local_2a8 = 0;
          local_2a0 = 0xffffffff;
          local_2d8 = 0;
          local_2d0 = 0xffffffff;
                    /* try { // try from 00347e74 to 00347ea7 has its CatchHandler @ 0034846c */
          FUN_003c68c0(param_3,&DAT_038eecc1,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                       &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
        }
        else {
                    /* try { // try from 00347eac to 00347eb3 has its CatchHandler @ 0034844c */
          local_128 = (char *)FUN_00320300(*piVar1,(long)&local_120 + 4);
          sVar7 = strlen(local_128);
          local_120 = (char *)CONCAT44(local_120._4_4_,(int)sVar7);
                    /* try { // try from 00347ec4 to 00347ecb has its CatchHandler @ 0034842c */
          local_158 = (byte *)FUN_00320300(piVar1[1],auStack_14c);
          sVar7 = strlen((char *)local_158);
          local_188 = 0;
          local_150 = (uint)sVar7;
          local_180 = 0xffffffff;
          local_1b8 = 0;
          local_1b0 = 0xffffffff;
          local_1e8 = 0;
          local_1e0 = 0xffffffff;
          local_218 = 0;
          local_210 = 0xffffffff;
          local_248 = 0;
          local_240 = 0xffffffff;
          local_278 = 0;
          local_270 = 0xffffffff;
          local_2a8 = 0;
          local_2a0 = 0xffffffff;
          local_2d8 = 0;
          local_2d0 = 0xffffffff;
                    /* try { // try from 00347f18 to 00347f4b has its CatchHandler @ 0034845c */
          FUN_003c68c0(param_3,"$0 to $1, ",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                       &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
        }
        lVar13 = lVar13 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar13 < *(int *)(param_1 + 7));
    }
    if ((*param_3 & 1) == 0) {
      uVar10 = (ulong)(*param_3 >> 1);
    }
    else {
      uVar10 = *(ulong *)(param_3 + 8);
    }
                    /* try { // try from 00347f6c to 00347f83 has its CatchHandler @ 0034841c */
    FUN_0036b20c(param_3,uVar10 - 2,2,&DAT_038a090c,2);
  }
  if (0 < *(int *)((long)param_1 + 0x3c)) {
    local_128 = pcVar12;
    uVar9 = (uint)((byte)local_78 >> 1);
    if ((local_78 & 1) != 0) {
      local_128 = local_68;
      uVar9 = (uint)uStack_70;
    }
    local_158 = (byte *)0x0;
    local_150 = 0xffffffff;
    local_188 = 0;
    local_180 = 0xffffffff;
    local_1b8 = 0;
    local_1b0 = 0xffffffff;
    local_1e8 = 0;
    local_1e0 = 0xffffffff;
    local_218 = 0;
    local_210 = 0xffffffff;
    local_248 = 0;
    local_120 = (char *)CONCAT44(local_120._4_4_,uVar9);
    local_240 = 0xffffffff;
    local_278 = 0;
    local_270 = 0xffffffff;
    local_2a8 = 0;
    local_2a0 = 0xffffffff;
    local_2d8 = 0;
    local_2d0 = 0xffffffff;
                    /* try { // try from 00347ffc to 0034803b has its CatchHandler @ 00348350 */
    FUN_003c68c0(param_3,"$0  reserved ",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                 &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
    puVar5 = PTR_LAB_04373088;
    if (0 < *(int *)((long)param_1 + 0x3c)) {
      lVar13 = 0;
      do {
                    /* try { // try from 00348090 to 00348097 has its CatchHandler @ 0034847c */
        FUN_003201a0(local_2f0,*(undefined8 *)(param_1[9] + lVar13 * 8));
        local_128 = (char *)((ulong)local_2f0 | 1);
        uVar9 = (uint)(local_2f0[0] >> 1);
        if ((local_2f0[0] & 1) != 0) {
          local_128 = local_2e0;
          uVar9 = local_2e8;
        }
        local_158 = (byte *)0x0;
        local_150 = 0xffffffff;
        local_188 = 0;
        local_180 = 0xffffffff;
        local_1b8 = 0;
        local_1b0 = 0xffffffff;
        local_1e8 = 0;
        local_1e0 = 0xffffffff;
        local_218 = 0;
        local_210 = 0xffffffff;
        local_248 = 0;
        local_120 = (char *)CONCAT44(local_120._4_4_,uVar9);
        local_240 = 0xffffffff;
        local_278 = 0;
        local_270 = 0xffffffff;
        local_2a8 = 0;
        local_2a0 = 0xffffffff;
        local_2d8 = 0;
        local_2d0 = 0xffffffff;
                    /* try { // try from 00348100 to 0034812b has its CatchHandler @ 0034848c */
        FUN_003c68c0(param_3,"\"$0\", ",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                     &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
        if ((local_2f0[0] & 1) != 0) {
          FUN_002e2ea0(puVar5,local_2e0);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)((long)param_1 + 0x3c));
    }
    if ((*param_3 & 1) == 0) {
      uVar10 = (ulong)(*param_3 >> 1);
    }
    else {
      uVar10 = *(ulong *)(param_3 + 8);
    }
                    /* try { // try from 00348160 to 00348177 has its CatchHandler @ 0034841c */
    FUN_0036b20c(param_3,uVar10 - 2,2,&DAT_038a090c,2);
  }
  local_128 = pcVar12;
  uVar9 = (uint)((byte)local_78 >> 1);
  if ((local_78 & 1) != 0) {
    local_128 = local_68;
    uVar9 = (uint)uStack_70;
  }
  local_158 = (byte *)0x0;
  local_150 = 0xffffffff;
  local_188 = 0;
  local_180 = 0xffffffff;
  local_1b8 = 0;
  local_1b0 = 0xffffffff;
  local_1e8 = 0;
  local_1e0 = 0xffffffff;
  local_218 = 0;
  local_210 = 0xffffffff;
  local_248 = 0;
  local_120 = (char *)CONCAT44(local_120._4_4_,uVar9);
  local_240 = 0xffffffff;
  local_278 = 0;
  local_270 = 0xffffffff;
  local_2a8 = 0;
  local_2a0 = 0xffffffff;
  local_2d8 = 0;
  local_2d0 = 0xffffffff;
                    /* try { // try from 003481e4 to 00348223 has its CatchHandler @ 00348370 */
  FUN_003c68c0(param_3,&DAT_038f98f1,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
               &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
                    /* try { // try from 00348224 to 0034822f has its CatchHandler @ 0034841c */
  FUN_003475cc(local_f8,param_3);
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  pbVar8 = local_b0;
  puVar5 = PTR_LAB_04373088;
  if (local_b0 != (byte *)0x0) {
    if (pbStack_a8 != local_b0) {
      bVar2 = pbStack_a8[-0x18];
      pbVar6 = pbStack_a8 + -0x18;
      pbVar4 = pbStack_a8;
      while( true ) {
        pbVar3 = pbVar6;
        if ((bVar2 & 1) != 0) {
          FUN_002e2ea0(puVar5,*(undefined8 *)(pbVar4 + -8));
        }
        if (pbVar8 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar6 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
    pbStack_a8 = pbVar8;
    FUN_002e2ea0(PTR_LAB_04373088,local_b0);
  }
  if ((uStack_c8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_b8);
  }
  if ((local_e0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_d0);
  }
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return;
}


