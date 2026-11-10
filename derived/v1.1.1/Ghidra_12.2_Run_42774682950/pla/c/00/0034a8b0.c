/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034a8b0; name: FUN_0034a8b0
 */


void FUN_0034a8b0(undefined8 *param_1,uint param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined *puVar4;
  void *__src;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
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
  void *local_128;
  void *local_120;
  undefined8 uStack_118;
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
  
  uVar8 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  uVar7 = (uint)((ulong)param_2 << 1);
  local_68 = (void *)0x0;
  uStack_70 = 0;
  local_78 = 0;
  if (0xffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 0x17) {
    local_78 = (ulong)(byte)(param_2 << 2);
    pvVar9 = (void *)((ulong)&local_78 | 1);
    if (param_2 != 0) goto LAB_0034a944;
  }
  else {
    uVar10 = uVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar10);
    local_78 = uVar10 | 1;
    uStack_70 = uVar8;
    local_68 = pvVar9;
LAB_0034a944:
    memset(pvVar9,0x20,uVar8);
  }
  __src = local_68;
  uVar10 = uStack_70;
  *(undefined1 *)((long)pvVar9 + uVar8) = 0;
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
      goto LAB_0034aa84;
    }
  }
  else {
    if (0xffffffffffffffef < uStack_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0034adc4 to 0034adc7 has its CatchHandler @ 0034adc8 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_70 < 0x17) {
      pvVar9 = (void *)((long)&local_90 + 1);
      local_90 = (ulong)(byte)((int)uStack_70 << 1);
      if (uStack_70 == 0) {
        local_90 = 0;
        if (*param_4 == '\0') {
          local_f8[0] = 0;
          goto LAB_0034aa84;
        }
        goto LAB_0034aa3c;
      }
    }
    else {
      uVar8 = uStack_70 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
      local_90 = uVar8 | 1;
      uStack_88 = uVar10;
      local_80 = pvVar9;
    }
    memcpy(pvVar9,__src,uVar10);
    *(undefined1 *)((long)pvVar9 + uVar10) = 0;
    local_f8[0] = 0;
    if (*param_4 == '\0') goto LAB_0034aa84;
  }
LAB_0034aa3c:
  local_120 = (void *)0x0;
  uStack_118 = 0;
  local_128 = (void *)0x0;
                    /* try { // try from 0034aa44 to 0034aa63 has its CatchHandler @ 0034adf8 */
  FUN_0034c8a8(param_1,&local_128);
  local_f8[0] = FUN_0034bd2c(*(undefined8 *)(param_1[2] + 0x10),&local_128,auStack_f0);
  if (local_128 != (void *)0x0) {
    local_120 = local_128;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  local_f8[0] = local_f8[0] & 1;
LAB_0034aa84:
                    /* try { // try from 0034aa88 to 0034aa93 has its CatchHandler @ 0034ae84 */
  FUN_00347438(local_f8,param_3);
  uVar7 = (uint)((byte)local_78 >> 1);
  local_128 = (void *)((ulong)&local_78 | 1);
  if ((local_78 & 1) != 0) {
    uVar7 = (uint)uStack_70;
    local_128 = local_68;
  }
  local_120 = (void *)CONCAT44(local_120._4_4_,uVar7);
  pbVar6 = (byte *)*param_1;
  local_158 = *(byte **)(pbVar6 + 0x10);
  if ((*pbVar6 & 1) == 0) {
    local_158 = pbVar6 + 1;
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
  local_150 = (uint)(*pbVar6 >> 1);
  if ((*pbVar6 & 1) != 0) {
    local_150 = (uint)*(undefined8 *)(pbVar6 + 8);
  }
                    /* try { // try from 0034ab34 to 0034ab73 has its CatchHandler @ 0034ade8 */
  FUN_003c68c0(param_3,"$0oneof $1 {",&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
               &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
                    /* try { // try from 0034ab88 to 0034abc7 has its CatchHandler @ 0034ae84 */
  FUN_00347690(param_2 + 1,param_1[5],*(undefined8 *)(*(long *)(param_1[2] + 0x10) + 0x10),param_3);
  if (param_4[2] == '\0') {
    FUN_002e4094(param_3,&DAT_0396725e,1);
    if (0 < *(int *)(param_1 + 3)) {
      lVar11 = 0;
      do {
                    /* try { // try from 0034abe0 to 0034abef has its CatchHandler @ 0034ae94 */
        FUN_00349a18(*(undefined8 *)(param_1[4] + lVar11 * 8),param_2 + 1,param_3,param_4);
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 3));
    }
    local_128 = (void *)((ulong)&local_78 | 1);
    uVar7 = (uint)((byte)local_78 >> 1);
    if ((local_78 & 1) != 0) {
      local_128 = local_68;
      uVar7 = (uint)uStack_70;
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
    local_120 = (void *)CONCAT44(local_120._4_4_,uVar7);
    local_240 = 0xffffffff;
    local_278 = 0;
    local_270 = 0xffffffff;
    local_2a8 = 0;
    local_2a0 = 0xffffffff;
    local_2d8 = 0;
    local_2d0 = 0xffffffff;
                    /* try { // try from 0034ac6c to 0034acab has its CatchHandler @ 0034add8 */
    FUN_003c68c0(param_3,&DAT_038f98f1,&local_128,&local_158,&local_188,&local_1b8,&local_1e8,
                 &local_218,&local_248,&local_278,&local_2a8,&local_2d8);
  }
  else {
    FUN_002e4094(param_3," ... }\n",7);
  }
                    /* try { // try from 0034acac to 0034acb7 has its CatchHandler @ 0034ae84 */
  FUN_003475cc(local_f8,param_3);
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  pbVar6 = local_b0;
  puVar4 = PTR_LAB_04373088;
  if (local_b0 != (byte *)0x0) {
    if (pbStack_a8 != local_b0) {
      bVar1 = pbStack_a8[-0x18];
      pbVar5 = pbStack_a8 + -0x18;
      pbVar3 = pbStack_a8;
      while( true ) {
        pbVar2 = pbVar5;
        if ((bVar1 & 1) != 0) {
          FUN_002e2ea0(puVar4,*(undefined8 *)(pbVar3 + -8));
        }
        if (pbVar6 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar5 = pbVar2 + -0x18;
        pbVar3 = pbVar2;
      }
    }
    pbStack_a8 = pbVar6;
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


