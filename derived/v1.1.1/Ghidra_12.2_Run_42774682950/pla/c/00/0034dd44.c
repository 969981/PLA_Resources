/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034dd44; name: FUN_0034dd44
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0034dd44(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 byte *param_5)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  ulong *puVar5;
  byte *pbVar6;
  byte local_f8 [16];
  ulong local_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong local_60;
  ulong uStack_58;
  ulong local_50;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    bVar4 = *(byte *)(param_1 + 0xb0);
    if ((bVar4 & 1) == 0) {
      if (bVar4 >> 1 == 0) goto LAB_0034e174;
    }
    else if (*(long *)(param_1 + 0xb8) == 0) {
LAB_0034e174:
      FUN_0034b2f0(&local_80,&DAT_039042e1,param_5);
                    /* try { // try from 0034e188 to 0034e19b has its CatchHandler @ 0034e23c */
      puVar5 = (ulong *)FUN_002e4094(&local_80,"\" is not defined.",0x11);
      uStack_58 = puVar5[1];
      local_60 = *puVar5;
      local_50 = puVar5[2];
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
                    /* try { // try from 0034e1b4 to 0034e1cb has its CatchHandler @ 0034e214 */
      FUN_0034db00(param_1,param_2,param_3,param_4,&local_60);
      if ((local_60 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_50);
      }
      if ((local_80 & 1) == 0) {
        return;
      }
      local_e8 = local_70;
      goto LAB_0034e1f0;
    }
  }
  else {
    FUN_0034b2f0(local_f8,&DAT_039042e1,param_1 + 0x98);
                    /* try { // try from 0034dd8c to 0034dd9f has its CatchHandler @ 0034e3b0 */
    puVar5 = (ulong *)FUN_002e4094(local_f8,"\" seems to be defined in \"",0x1a);
    uStack_d8 = puVar5[1];
    local_e0 = *puVar5;
    local_d0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    pbVar6 = (byte *)**(undefined8 **)(param_1 + 0x90);
    uVar1 = *(ulong *)(pbVar6 + 8);
    pbVar2 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar2 = pbVar6 + 1;
      uVar1 = (ulong)(*pbVar6 >> 1);
    }
                    /* try { // try from 0034ddd8 to 0034dddf has its CatchHandler @ 0034e374 */
    puVar5 = (ulong *)FUN_002e4094(&local_e0,pbVar2,uVar1);
    uStack_b8 = puVar5[1];
    local_c0 = *puVar5;
    local_b0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 0034ddf8 to 0034de0b has its CatchHandler @ 0034e34c */
    puVar5 = (ulong *)FUN_002e4094(&local_c0,"\", which is not imported by \"",0x1d);
    uStack_98 = puVar5[1];
    local_a0 = *puVar5;
    local_90 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar1 = (ulong)(*(byte *)(param_1 + 0x38) >> 1);
    lVar3 = param_1 + 0x39;
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x40);
      lVar3 = *(long *)(param_1 + 0x48);
    }
                    /* try { // try from 0034de40 to 0034de47 has its CatchHandler @ 0034e324 */
    puVar5 = (ulong *)FUN_002e4094(&local_a0,lVar3,uVar1);
    uStack_78 = puVar5[1];
    local_80 = *puVar5;
    local_70 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 0034de60 to 0034de73 has its CatchHandler @ 0034e2d8 */
    puVar5 = (ulong *)FUN_002e4094(&local_80,"\".  To use it here, please add the necessary import."
                                   ,0x34);
    uStack_58 = puVar5[1];
    local_60 = *puVar5;
    local_50 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
                    /* try { // try from 0034de8c to 0034dea3 has its CatchHandler @ 0034e2b0 */
    FUN_0034db00(param_1,param_2,param_3,param_4,&local_60);
    if ((local_60 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
    if ((local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    if ((local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
    if ((local_e0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_d0);
    }
    if ((local_f8[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_e8);
    }
    bVar4 = *(byte *)(param_1 + 0xb0);
  }
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0xb8) == 0) {
    return;
  }
  FUN_0034b2f0(local_f8,&DAT_039042e1,param_5);
                    /* try { // try from 0034df2c to 0034df3f has its CatchHandler @ 0034e2a0 */
  puVar5 = (ulong *)FUN_002e4094(local_f8,"\" is resolved to \"",0x12);
  uStack_d8 = puVar5[1];
  local_e0 = *puVar5;
  local_d0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar1 = *(ulong *)(param_1 + 0xb8);
  lVar3 = *(long *)(param_1 + 0xc0);
  if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
    lVar3 = param_1 + 0xb1;
    uVar1 = (ulong)(*(byte *)(param_1 + 0xb0) >> 1);
  }
                    /* try { // try from 0034df74 to 0034df7b has its CatchHandler @ 0034e290 */
  puVar5 = (ulong *)FUN_002e4094(&local_e0,lVar3,uVar1);
  uStack_b8 = puVar5[1];
  local_c0 = *puVar5;
  local_b0 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 0034df94 to 0034dfa7 has its CatchHandler @ 0034e280 */
  puVar5 = (ulong *)FUN_002e4094(&local_c0,
                                 "\", which is not defined. The innermost scope is searched first in name resolution. Consider using a leading \'.\'(i.e., \"."
                                 ,0x78);
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  local_90 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar1 = *(ulong *)(param_5 + 8);
  pbVar2 = *(byte **)(param_5 + 0x10);
  if ((*param_5 & 1) == 0) {
    pbVar2 = param_5 + 1;
    uVar1 = (ulong)(*param_5 >> 1);
  }
                    /* try { // try from 0034dfd8 to 0034dfdf has its CatchHandler @ 0034e270 */
  puVar5 = (ulong *)FUN_002e4094(&local_a0,pbVar2,uVar1);
  uStack_78 = puVar5[1];
  local_80 = *puVar5;
  local_70 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 0034dff8 to 0034e00b has its CatchHandler @ 0034e260 */
  puVar5 = (ulong *)FUN_002e4094(&local_80,"\") to start from the outermost scope.",0x25);
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  local_50 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 0034e024 to 0034e03b has its CatchHandler @ 0034e250 */
  FUN_0034db00(param_1,param_2,param_3,param_4,&local_60);
  if ((local_60 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_50);
  }
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if ((local_a0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_90);
  }
  if ((local_c0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_b0);
  }
  if ((local_e0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_d0);
  }
  if ((local_f8[0] & 1) == 0) {
    return;
  }
LAB_0034e1f0:
  FUN_002e2ea0(PTR_LAB_04373088,local_e8);
  return;
}


