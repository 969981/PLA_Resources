/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00347690; name: FUN_00347690
 */


bool FUN_00347690(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  byte *pbVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong __n;
  void *__s;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_120;
  undefined4 local_118;
  byte *local_f0;
  uint local_e8;
  void *local_c0;
  uint local_b8;
  byte *local_90;
  byte *local_88;
  undefined8 local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  uVar8 = (ulong)param_1 << 1;
  __n = -(ulong)(param_1 >> 0x1f) & 0xfffffffe00000000 | uVar8;
  uVar10 = (uint)uVar8;
  local_68 = (void *)0x0;
  local_70 = 0;
  local_78 = 0;
  if (0xffffffef < uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar10 < 0x17) {
    local_78 = (ulong)(byte)(param_1 << 2);
    __s = (void *)((ulong)&local_78 | 1);
    if (param_1 == 0) goto LAB_00347730;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    __s = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar8);
    local_78 = uVar8 | 1;
    local_70 = __n;
    local_68 = __s;
  }
  memset(__s,0x20,__n);
LAB_00347730:
  *(undefined1 *)((long)__s + __n) = 0;
  local_80 = 0;
  local_88 = (byte *)0x0;
  local_90 = (byte *)0x0;
                    /* try { // try from 00347740 to 00347753 has its CatchHandler @ 00347940 */
  uVar8 = FUN_00365270((ulong)param_1,param_2,param_3,&local_90);
  if (((uVar8 & 1) != 0) && (local_88 != local_90)) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      local_b8 = (uint)((byte)local_78 >> 1);
      local_c0 = (void *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        local_b8 = (uint)local_70;
        local_c0 = local_68;
      }
      pbVar1 = local_90 + lVar9;
      local_f0 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        local_f0 = pbVar1 + 1;
      }
      local_120 = 0;
      local_118 = 0xffffffff;
      local_150 = 0;
      local_148 = 0xffffffff;
      local_180 = 0;
      local_178 = 0xffffffff;
      local_1b0 = 0;
      local_1a8 = 0xffffffff;
      local_1e0 = 0;
      local_1d8 = 0xffffffff;
      local_210 = 0;
      local_208 = 0xffffffff;
      local_e8 = (uint)(*pbVar1 >> 1);
      if ((*pbVar1 & 1) != 0) {
        local_e8 = (uint)*(undefined8 *)(pbVar1 + 8);
      }
      local_240 = 0;
      local_270 = 0;
      local_268 = 0xffffffff;
      local_238 = 0xffffffff;
                    /* try { // try from 0034782c to 0034785b has its CatchHandler @ 00347950 */
      FUN_003c68c0(param_4,"$0option $1;\n",&local_c0,&local_f0,&local_120,&local_150,&local_180,
                   &local_1b0,&local_1e0,&local_210,&local_240,&local_270);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (uVar8 < (ulong)(((long)local_88 - (long)local_90 >> 3) * -0x5555555555555555));
  }
  pbVar1 = local_90;
  puVar5 = PTR_LAB_04373088;
  bVar7 = local_90 != local_88;
  if (local_90 != (byte *)0x0) {
    if (local_90 != local_88) {
      bVar2 = local_88[-0x18];
      pbVar6 = local_88 + -0x18;
      pbVar4 = local_88;
      while( true ) {
        pbVar3 = pbVar6;
        if ((bVar2 & 1) != 0) {
          FUN_002e2ea0(puVar5,*(undefined8 *)(pbVar4 + -8));
        }
        if (pbVar1 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar6 = pbVar3 + -0x18;
        pbVar4 = pbVar3;
      }
    }
    local_88 = pbVar1;
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return bVar7;
}


