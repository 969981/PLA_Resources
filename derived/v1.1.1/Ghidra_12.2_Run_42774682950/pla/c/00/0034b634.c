/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034b634; name: FUN_0034b634
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0034b634(undefined8 *param_1,uint param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;
  void *__src;
  byte *pbVar5;
  size_t sVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  void *pvVar11;
  ulong local_2f0;
  undefined8 local_2e8;
  void *local_2e0;
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
  char *local_188;
  undefined4 local_180;
  undefined1 auStack_17c [36];
  byte *local_158;
  uint local_150;
  void *local_128;
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
  void *local_80;
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  
  uVar7 = (ulong)param_2 << 1;
  uVar10 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | uVar7;
  uVar9 = (uint)uVar7;
  local_68 = (void *)0x0;
  uStack_70 = 0;
  local_78 = 0;
  if (0xffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 0x17) {
    local_78 = (ulong)(byte)(param_2 << 2);
    pvVar11 = (void *)((ulong)&local_78 | 1);
    if (param_2 != 0) goto LAB_0034b6c8;
  }
  else {
    uVar7 = uVar10 + 0x10 & 0xfffffffffffffff0;
    pvVar11 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
    local_78 = uVar7 | 1;
    uStack_70 = uVar10;
    local_68 = pvVar11;
LAB_0034b6c8:
    memset(pvVar11,0x20,uVar10);
  }
  __src = local_68;
  uVar7 = uStack_70;
  *(undefined1 *)((long)pvVar11 + uVar10) = 0;
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
  local_80 = (void *)0x0;
  uStack_88 = 0;
  if ((local_78 & 1) == 0) {
    local_80 = local_68;
    uStack_88 = uStack_70;
    local_90 = local_78;
    if (*param_4 == '\0') {
      local_f8[0] = 0;
      goto LAB_0034b804;
    }
  }
  else {
    if (0xffffffffffffffef < uStack_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0034bb38 to 0034bb3b has its CatchHandler @ 0034bb3c */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_70 < 0x17) {
      pvVar11 = (void *)((long)&local_90 + 1);
      local_90 = (ulong)(byte)((int)uStack_70 << 1);
      if (uStack_70 == 0) {
        local_90 = 0;
        if (*param_4 == '\0') {
          local_f8[0] = 0;
          goto LAB_0034b804;
        }
        goto LAB_0034b7bc;
      }
    }
    else {
      uVar10 = uStack_70 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
      local_90 = uVar10 | 1;
      uStack_88 = uVar7;
      local_80 = pvVar11;
    }
    memcpy(pvVar11,__src,uVar7);
    *(undefined1 *)((long)pvVar11 + uVar7) = 0;
    local_f8[0] = 0;
    if (*param_4 == '\0') goto LAB_0034b804;
  }
LAB_0034b7bc:
  local_118 = 0;
  local_128 = (void *)0x0;
  local_120 = (void *)0x0;
                    /* try { // try from 0034b7c4 to 0034b7e3 has its CatchHandler @ 0034bba4 */
  FUN_0034d074(param_1,&local_128);
  local_f8[0] = FUN_0034bd2c(*(undefined8 *)(param_1[3] + 0x10),&local_128,auStack_f0);
  if (local_128 != (void *)0x0) {
    local_120 = local_128;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  local_f8[0] = local_f8[0] & 1;
LAB_0034b804:
                    /* try { // try from 0034b808 to 0034b813 has its CatchHandler @ 0034bb7c */
  FUN_00347438(local_f8,param_3);
  uVar9 = (uint)((byte)local_78 >> 1);
  local_128 = (void *)((ulong)&local_78 | 1);
  if ((local_78 & 1) != 0) {
    uVar9 = (uint)uStack_70;
    local_128 = local_68;
  }
  pbVar8 = (byte *)*param_1;
  local_158 = *(byte **)(pbVar8 + 0x10);
  if ((*pbVar8 & 1) == 0) {
    local_158 = pbVar8 + 1;
  }
  local_150 = (uint)(*pbVar8 >> 1);
  if ((*pbVar8 & 1) != 0) {
    local_150 = (uint)*(undefined8 *)(pbVar8 + 8);
  }
  local_120._0_4_ = uVar9;
                    /* try { // try from 0034b87c to 0034b87f has its CatchHandler @ 0034bb6c */
  local_188 = (char *)FUN_00320300(*(undefined4 *)(param_1 + 2),auStack_17c);
  sVar6 = strlen(local_188);
  local_1b8 = 0;
  local_180 = (undefined4)sVar6;
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
                    /* try { // try from 0034b8c8 to 0034b907 has its CatchHandler @ 0034bb5c */
  FUN_003c68c0(param_3,"$0$1 = $2",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,&local_218
               ,&local_248,&local_278,&local_2a8,&local_2d8);
  local_2e8 = 0;
  local_2e0 = (void *)0x0;
  local_2f0 = 0;
                    /* try { // try from 0034b91c to 0034b927 has its CatchHandler @ 0034bc30 */
  uVar7 = FUN_0034b400((ulong)param_2,param_1[4],
                       *(undefined8 *)(*(long *)(param_1[3] + 0x10) + 0x10),&local_2f0);
  if ((uVar7 & 1) != 0) {
    local_158 = (byte *)0x0;
    local_150 = 0xffffffff;
    local_188 = (char *)0x0;
    local_120._0_4_ = (uint)((byte)local_2f0 >> 1);
    local_128 = (void *)((ulong)&local_2f0 | 1);
    if ((local_2f0 & 1) != 0) {
      local_120._0_4_ = (uint)local_2e8;
      local_128 = local_2e0;
    }
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
                    /* try { // try from 0034b99c to 0034b9db has its CatchHandler @ 0034bb4c */
    FUN_003c68c0(param_3," [$0]",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,&local_218,
                 &local_248,&local_278,&local_2a8,&local_2d8);
  }
                    /* try { // try from 0034b9dc to 0034b9fb has its CatchHandler @ 0034bc30 */
  FUN_002e4094(param_3,&DAT_038a090c,2);
  FUN_003475cc(local_f8,param_3);
  if ((local_2f0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_2e0);
  }
  if ((local_90 & 1) == 0) {
    puVar4 = PTR_LAB_04373088;
    pbVar8 = local_b0;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
    puVar4 = PTR_LAB_04373088;
    pbVar8 = local_b0;
  }
  PTR_LAB_04373088 = puVar4;
  local_b0 = pbVar8;
  if (pbVar8 != (byte *)0x0) {
    if (pbStack_a8 != pbVar8) {
      bVar1 = *(byte *)((long)pbStack_a8 + -0x18);
      pbVar5 = (byte *)((long)pbStack_a8 + -0x18);
      pbVar3 = pbStack_a8;
      while( true ) {
        pbVar2 = pbVar5;
        if ((bVar1 & 1) != 0) {
          FUN_002e2ea0(puVar4,*(undefined8 *)(pbVar3 + -8));
        }
        if (pbVar8 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar5 = pbVar2 + -0x18;
        pbVar3 = pbVar2;
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


