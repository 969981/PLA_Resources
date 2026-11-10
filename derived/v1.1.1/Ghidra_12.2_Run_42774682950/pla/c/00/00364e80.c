/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00364e80; name: FUN_00364e80
 */


void FUN_00364e80(undefined8 *param_1,long param_2,ulong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  bool bVar6;
  byte *pbVar7;
  void *__src;
  void *__dest;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
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
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_128;
  undefined4 local_120;
  byte *local_f8;
  uint local_f0;
  long local_c8;
  uint local_c0;
  byte *local_98;
  byte *local_90;
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  
  local_70 = (void *)0x0;
  uStack_78 = 0;
  local_80 = 0;
  if ((*param_3 & 1) == 0) {
    uStack_78 = param_3[1];
    local_80 = *param_3;
    local_70 = (void *)param_3[2];
    goto LAB_00364f3c;
  }
  uVar10 = param_3[1];
  if (0xffffffffffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_3[2];
  if (uVar10 < 0x17) {
    local_80 = (ulong)(byte)((int)uVar10 << 1);
    __dest = (void *)((ulong)&local_80 | 1);
    if (uVar10 != 0) goto LAB_00364f28;
  }
  else {
    uVar9 = uVar10 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar9);
    local_80 = uVar9 | 1;
    uStack_78 = uVar10;
    local_70 = __dest;
LAB_00364f28:
    memcpy(__dest,__src,uVar10);
  }
  *(undefined1 *)((long)__dest + uVar10) = 0;
LAB_00364f3c:
                    /* try { // try from 00364f3c to 00364f43 has its CatchHandler @ 003651a8 */
  FUN_0031f320(&local_80);
  local_88 = 0;
  local_90 = (byte *)0x0;
  local_98 = (byte *)0x0;
                    /* try { // try from 00364f50 to 00364f63 has its CatchHandler @ 0036514c */
  FUN_0031f580(&local_80,&DAT_0396725e,&local_98);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar5 = PTR_LAB_04373088;
  pbVar1 = local_98;
  pbVar7 = local_90;
  if (local_90 != local_98) {
    lVar8 = 0;
    uVar10 = 0;
    do {
      bVar6 = (*(byte *)(param_2 + 0x68) & 1) != 0;
      local_c8 = param_2 + 0x69;
      if (bVar6) {
        local_c8 = *(long *)(param_2 + 0x78);
      }
      local_c0 = (uint)(*(byte *)(param_2 + 0x68) >> 1);
      if (bVar6) {
        local_c0 = (uint)*(undefined8 *)(param_2 + 0x70);
      }
      pbVar1 = local_98 + lVar8;
      local_f8 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        local_f8 = pbVar1 + 1;
      }
      local_128 = 0;
      local_120 = 0xffffffff;
      local_158 = 0;
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
      local_f0 = (uint)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        local_f0 = (uint)*(undefined8 *)(pbVar1 + 8);
      }
                    /* try { // try from 003650a8 to 003650df has its CatchHandler @ 003651b8 */
      FUN_003c68c0(param_1,"$0// $1\n",&local_c8,&local_f8,&local_128,&local_158,&local_188,
                   &local_1b8,&local_1e8,&local_218,&local_248,&local_278);
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x18;
      puVar5 = PTR_LAB_04373088;
      pbVar1 = local_98;
      pbVar7 = local_98;
    } while (uVar10 < (ulong)(((long)local_90 - (long)local_98 >> 3) * -0x5555555555555555));
  }
  PTR_LAB_04373088 = puVar5;
  local_98 = pbVar1;
  if (pbVar7 != (byte *)0x0) {
    if (pbVar1 != local_90) {
      bVar2 = local_90[-0x18];
      pbVar7 = local_90 + -0x18;
      pbVar4 = local_90;
      while( true ) {
        pbVar3 = pbVar7;
        pbVar7 = local_98;
        if ((bVar2 & 1) != 0) {
          FUN_002e2ea0(puVar5,*(undefined8 *)(pbVar4 + -8));
          pbVar7 = local_98;
        }
        local_98 = pbVar7;
        if (pbVar1 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar7 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
    local_90 = pbVar1;
    FUN_002e2ea0(PTR_LAB_04373088,pbVar7);
  }
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  return;
}


