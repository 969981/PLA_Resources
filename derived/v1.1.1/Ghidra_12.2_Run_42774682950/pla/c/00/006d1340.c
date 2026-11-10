/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d1340; name: FUN_006d1340
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006d1340(int *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined1 *__src;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *__dest;
  long lVar5;
  byte local_158;
  undefined7 uStack_157;
  ulong uStack_150;
  undefined1 *local_148;
  int local_140 [2];
  undefined8 local_138;
  ulong uStack_130;
  undefined1 *local_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined1 *local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  char cStack_100;
  undefined1 auStack_f0 [32];
  int local_d0 [2];
  byte local_c8;
  undefined8 local_b8;
  byte local_b0;
  undefined8 local_a0;
  int local_98 [2];
  ulong local_90;
  ulong uStack_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68;
  
  puVar1 = PTR_DAT_04373140;
  if (param_2 == (long *)0x0) {
    uStack_107 = s_No_payload_038d061d._0_7_;
    cStack_100 = s_No_payload_038d061d[7];
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = 0xd;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(ulong *)(param_1 + 4) = (ulong)CONCAT21(0x6461,cStack_100);
    *(ulong *)(param_1 + 2) = CONCAT71(uStack_107,0x14);
    return;
  }
  uVar3 = (**(code **)(**(long **)PTR_DAT_04373140 + 0x1a0))();
  FUN_002bb1a0(local_98,uVar3);
                    /* try { // try from 006d1390 to 006d139f has its CatchHandler @ 006d1894 */
  FUN_002bb32c(&local_108,param_2);
                    /* try { // try from 006d13a4 to 006d13af has its CatchHandler @ 006d1800 */
  FUN_002bb1a0(local_140,local_d0);
  iVar2 = local_140[0];
  if ((local_120 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_110);
  }
  if ((local_138 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_128);
  }
  if (iVar2 != 0) {
                    /* try { // try from 006d13c8 to 006d13d3 has its CatchHandler @ 006d17fc */
    FUN_002bb1a0(param_1,local_d0);
    local_108 = SUB81(PTR_DAT_043734e8 + 0x10,0);
    uStack_107 = (undefined7)((ulong)(PTR_DAT_043734e8 + 0x10) >> 8);
    if (local_d0[0] == 0) {
                    /* try { // try from 006d1400 to 006d1403 has its CatchHandler @ 006d17e8 */
      (**(code **)(**(long **)puVar1 + 0xd8))(*(long **)puVar1,auStack_f0);
    }
    if ((local_b0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_a0);
    }
    if ((local_c8 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b8);
    }
    if (((byte)local_78 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_68);
    }
    if (((byte)local_90 & 1) == 0) {
      s_No_payload_038d061d[0] = s_No_payload_038d061d[0];
      s_No_payload_038d061d[1] = s_No_payload_038d061d[1];
      s_No_payload_038d061d[2] = s_No_payload_038d061d[2];
      s_No_payload_038d061d[3] = s_No_payload_038d061d[3];
      s_No_payload_038d061d[4] = s_No_payload_038d061d[4];
      s_No_payload_038d061d[5] = s_No_payload_038d061d[5];
      s_No_payload_038d061d[6] = s_No_payload_038d061d[6];
      s_No_payload_038d061d[7] = s_No_payload_038d061d[7];
      return;
    }
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
    return;
  }
                    /* try { // try from 006d14a0 to 006d14ab has its CatchHandler @ 006d17fc */
  uVar4 = FUN_0031e540(param_3,&local_108);
  if ((uVar4 & 1) != 0) goto LAB_006d16a8;
                    /* try { // try from 006d14b8 to 006d14c3 has its CatchHandler @ 006d17d4 */
  (**(code **)(*param_3 + 0x38))(&local_158,param_3);
  __src = local_148;
  local_140[0] = 0xd;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = (undefined1 *)0x0;
  if ((local_158 & 1) == 0) {
    local_138 = CONCAT71(uStack_157,local_158);
    local_128 = local_148;
    uStack_130 = uStack_150;
  }
  else {
    if (0xffffffffffffffef < uStack_150) {
                    /* try { // try from 006d17a8 to 006d17af has its CatchHandler @ 006d17b0 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_150 < 0x17) {
      __dest = (undefined1 *)((long)&local_138 + 1);
      local_138 = (ulong)(byte)((int)uStack_150 << 1);
      if (uStack_150 != 0) goto LAB_006d159c;
    }
    else {
      uVar4 = uStack_150 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar4);
      local_138 = uVar4 | 1;
      uStack_130 = uStack_150;
      local_128 = __dest;
LAB_006d159c:
      memcpy(__dest,__src,uStack_150);
    }
    __dest[uStack_150] = 0;
  }
  uStack_118 = 0;
  local_110 = (undefined1 *)0x0;
  local_120 = 0;
  local_98[0] = local_140[0];
  if (((byte)local_90 & 1) != 0) {
    *local_80 = 0;
    uStack_88 = 0;
    if (((byte)local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
  }
  uStack_88 = uStack_130;
  local_90 = local_138;
  local_138 = 0;
  local_80 = local_128;
  uStack_130 = 0;
  local_128 = (undefined1 *)0x0;
  if (((byte)local_78 & 1) != 0) {
    *local_68 = 0;
    uStack_70 = 0;
    if (((byte)local_78 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_68);
    }
  }
  uStack_70 = uStack_118;
  local_78 = local_120;
  local_68 = local_110;
  uStack_118 = 0;
  local_110 = (undefined1 *)0x0;
  local_120 = 0;
  if ((local_138 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_128);
  }
  if ((local_158 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_148);
  }
LAB_006d16a8:
  local_108 = SUB81(PTR_DAT_043734e8 + 0x10,0);
  uStack_107 = (undefined7)((ulong)(PTR_DAT_043734e8 + 0x10) >> 8);
  if (local_d0[0] == 0) {
                    /* try { // try from 006d16d4 to 006d16d7 has its CatchHandler @ 006d17d0 */
    (**(code **)(**(long **)puVar1 + 0xd8))(*(long **)puVar1,auStack_f0);
  }
  if ((local_b0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_a0);
  }
  if ((local_c8 & 1) == 0) {
    lVar5 = *param_2;
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,local_b8);
    lVar5 = *param_2;
  }
  if (lVar5 != 0) {
                    /* try { // try from 006d1730 to 006d1733 has its CatchHandler @ 006d17d8 */
    (**(code **)(**(long **)puVar1 + 0xc0))();
    *param_2 = 0;
  }
  *param_1 = local_98[0];
  *(ulong *)(param_1 + 4) = uStack_88;
  *(ulong *)(param_1 + 2) = local_90;
  *(undefined1 **)(param_1 + 6) = local_80;
  *(undefined1 **)(param_1 + 0xc) = local_68;
  *(undefined8 *)(param_1 + 10) = uStack_70;
  *(ulong *)(param_1 + 8) = local_78;
  return;
}


