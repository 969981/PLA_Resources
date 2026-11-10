/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035a688; name: FUN_0035a688
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035a688(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined *puVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  byte local_138 [16];
  undefined8 local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  byte local_c0;
  undefined6 uStack_bf;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined8 local_b0;
  undefined8 *local_a0;
  ulong uStack_98;
  ulong local_90;
  byte local_80;
  byte bStack_7f;
  undefined6 uStack_7e;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *local_70;
  
  uVar5 = FUN_00340fec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar5;
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_2 + 0x28);
  param_4[3] = param_3;
  lVar14 = *(long *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
  }
  local_80 = (byte)puVar6;
  bStack_7f = (byte)((ulong)puVar6 >> 8);
  uStack_7e = (undefined6)((ulong)puVar6 >> 0x10);
  FUN_003410d8(lVar14 + 0xd0,&local_80);
  bVar3 = *(byte *)param_3[1];
  if ((bVar3 & 1) == 0) {
    uVar8 = (ulong)(bVar3 >> 1);
    pbVar12 = (byte *)*param_3;
    bVar3 = *pbVar12;
  }
  else {
    uVar8 = *(ulong *)((byte *)param_3[1] + 8);
    pbVar12 = (byte *)*param_3;
    bVar3 = *pbVar12;
  }
  if ((bVar3 & 1) == 0) {
    uVar13 = (ulong)(bVar3 >> 1);
    pbVar12 = (byte *)*param_4;
    bVar3 = *pbVar12;
  }
  else {
    uVar13 = *(ulong *)((long)pbVar12 + 8);
    pbVar12 = (byte *)*param_4;
    bVar3 = *pbVar12;
  }
  if ((bVar3 & 1) == 0) {
    uVar9 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar9 = *(ulong *)((long)pbVar12 + 8);
  }
  FUN_0030ff7c(puVar6,uVar9 + (uVar8 - uVar13));
  pbVar12 = (byte *)param_3[1];
  if ((*pbVar12 & 1) == 0) {
    pbVar12 = pbVar12 + 1;
  }
  else {
    pbVar12 = *(byte **)(pbVar12 + 0x10);
  }
  FUN_002e4094(puVar6,pbVar12,uVar8 - uVar13);
  pbVar10 = (byte *)*param_4;
  uVar8 = *(ulong *)(pbVar10 + 8);
  pbVar12 = *(byte **)(pbVar10 + 0x10);
  if ((*pbVar10 & 1) == 0) {
    pbVar12 = pbVar10 + 1;
    uVar8 = (ulong)(*pbVar10 >> 1);
  }
  FUN_002e4094(puVar6,pbVar12,uVar8);
  param_4[1] = puVar6;
  FUN_00350da4(param_1,*(undefined8 *)(param_2 + 0x18),puVar6,param_2);
  param_4[4] = 0;
  if ((*(uint *)(param_2 + 0x10) >> 1 & 1) != 0) {
    puVar11 = *(undefined **)(param_2 + 0x20);
    if (puVar11 == (undefined *)0x0) {
      FUN_0030f640(&local_80,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x2687);
                    /* try { // try from 0035a7fc to 0035a80f has its CatchHandler @ 0035ac8c */
      uVar5 = FUN_0030f3ac(&local_80,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 0035a810 to 0035a817 has its CatchHandler @ 0035ac88 */
      FUN_0030f41c(&local_a0,uVar5);
      FUN_0030f658(&local_80);
      puVar11 = *(undefined **)(param_2 + 0x20);
    }
    local_80 = 0;
    bStack_7f = 0;
    uStack_7e = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_70 = (char *)0x0;
    puVar1 = PTR_DAT_04373c28;
    if (puVar11 != (undefined *)0x0) {
      puVar1 = puVar11;
    }
    local_70 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
    uVar4 = s_google_protobuf_EnumValueOptions_038aaade._24_8_;
    uVar15 = s_google_protobuf_EnumValueOptions_038aaade._16_8_;
    uVar5 = s_google_protobuf_EnumValueOptions_038aaade._0_8_;
    uStack_78 = (undefined4)_UNK_03889718;
    uStack_74 = (undefined4)((ulong)_UNK_03889718 >> 0x20);
    local_80 = (byte)_DAT_03889710;
    bStack_7f = (byte)((ulong)_DAT_03889710 >> 8);
    uStack_7e = (undefined6)((ulong)_DAT_03889710 >> 0x10);
    *(undefined8 *)(local_70 + 8) = s_google_protobuf_EnumValueOptions_038aaade._8_8_;
    *(undefined8 *)local_70 = uVar5;
    *(undefined8 *)(local_70 + 0x18) = uVar4;
    *(undefined8 *)(local_70 + 0x10) = uVar15;
    local_70[0x20] = '\0';
                    /* try { // try from 0035a870 to 0035a887 has its CatchHandler @ 0035addc */
    FUN_0035af74(param_1,puVar1,param_4,3,&local_80);
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
  }
  uVar8 = FUN_0034ff4c(param_1,param_4[1],param_3[3],*param_4,param_2,5,param_4);
  uVar13 = FUN_0033fe70(*(undefined8 *)(param_1 + 0x58),param_3,*param_4,5,param_4);
  if (((uVar8 & 1) == 0) && ((uVar13 & 1) != 0)) {
    uStack_78 = 0;
    uStack_74 = 0;
    local_70 = (char *)0x0;
    local_80 = 0;
    bStack_7f = 0;
    uStack_7e = 0;
    if (param_3[3] == 0) {
      pbVar12 = *(byte **)(*(long *)(param_1 + 0x50) + 8);
      if (&local_80 != pbVar12) {
        uVar8 = *(ulong *)(pbVar12 + 8);
        pbVar10 = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          pbVar10 = pbVar12 + 1;
          uVar8 = (ulong)(*pbVar12 >> 1);
        }
        FUN_00291910(&local_80,pbVar10,uVar8);
      }
    }
    else {
      pbVar12 = *(byte **)(param_3[3] + 8);
      if (&local_80 != pbVar12) {
        uVar8 = *(ulong *)(pbVar12 + 8);
        pbVar10 = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          pbVar10 = pbVar12 + 1;
          uVar8 = (ulong)(*pbVar12 >> 1);
        }
                    /* try { // try from 0035a91c to 0035a95b has its CatchHandler @ 0035add8 */
        FUN_00291910(&local_80,pbVar10,uVar8);
      }
    }
    uVar8 = (ulong)(local_80 >> 1);
    if ((local_80 & 1) != 0) {
      uVar8 = CONCAT44(uStack_74,uStack_78);
    }
    if (uVar8 == 0) {
                    /* try { // try from 0035a9c8 to 0035a9db has its CatchHandler @ 0035add8 */
      FUN_00291910(&local_80,"the global scope",0x10);
    }
    else {
                    /* try { // try from 0035a974 to 0035a987 has its CatchHandler @ 0035acb4 */
      FUN_0034b2f0(&local_a0,&DAT_039042e1,&local_80);
                    /* try { // try from 0035a988 to 0035a99b has its CatchHandler @ 0035aca0 */
      pbVar12 = (byte *)FUN_002e4094(&local_a0,&DAT_039042e1,1);
      uVar5 = *(undefined8 *)(pbVar12 + 1);
      pcVar2 = *(char **)(pbVar12 + 0x10);
      bVar3 = *pbVar12;
      uStack_b8 = (undefined7)((ulong)*(undefined8 *)(pbVar12 + 8) >> 8);
      local_c0 = (byte)uVar5;
      uStack_bf = (undefined6)((ulong)uVar5 >> 8);
      uStack_b9 = (undefined1)((ulong)uVar5 >> 0x38);
      pbVar12[0] = 0;
      pbVar12[1] = 0;
      pbVar12[2] = 0;
      pbVar12[3] = 0;
      pbVar12[4] = 0;
      pbVar12[5] = 0;
      pbVar12[6] = 0;
      pbVar12[7] = 0;
      pbVar12[8] = 0;
      pbVar12[9] = 0;
      pbVar12[10] = 0;
      pbVar12[0xb] = 0;
      pbVar12[0xc] = 0;
      pbVar12[0xd] = 0;
      pbVar12[0xe] = 0;
      pbVar12[0xf] = 0;
      pbVar12[0x10] = 0;
      pbVar12[0x11] = 0;
      pbVar12[0x12] = 0;
      pbVar12[0x13] = 0;
      pbVar12[0x14] = 0;
      pbVar12[0x15] = 0;
      pbVar12[0x16] = 0;
      pbVar12[0x17] = 0;
      if ((local_80 & 1) != 0) {
        *local_70 = '\0';
        uStack_78 = 0;
        uStack_74 = 0;
        if ((local_80 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_70);
        }
      }
      bStack_7f = local_c0;
      uStack_7e = uStack_bf;
      local_c0 = 0;
      uStack_bf = 0;
      uStack_78 = (undefined4)CONCAT71(uStack_b8,uStack_b9);
      uStack_74 = (undefined4)((uint7)uStack_b8 >> 0x18);
      uStack_b9 = 0;
      uStack_b8 = 0;
      local_80 = bVar3;
      local_70 = pcVar2;
      if (((byte)local_a0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_90);
      }
    }
    uVar5 = param_4[1];
                    /* try { // try from 0035aa40 to 0035aa4f has its CatchHandler @ 0035add4 */
    FUN_0034b2f0(local_138,
                 "Note that enum values use C++ scoping rules, meaning that enum values are siblings of their type, not children of it.  Therefore, \""
                 ,*param_4);
                    /* try { // try from 0035aa50 to 0035aa63 has its CatchHandler @ 0035adac */
    puVar7 = (ulong *)FUN_002e4094(local_138,"\" must be unique within ",0x18);
    uStack_118 = puVar7[1];
    local_120 = *puVar7;
    local_110 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar8 = (ulong)(local_80 >> 1);
    pcVar2 = (char *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar8 = CONCAT44(uStack_74,uStack_78);
      pcVar2 = local_70;
    }
                    /* try { // try from 0035aa9c to 0035aaa3 has its CatchHandler @ 0035ad84 */
    puVar7 = (ulong *)FUN_002e4094(&local_120,pcVar2,uVar8);
    uStack_f8 = puVar7[1];
    local_100 = *puVar7;
    local_f0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 0035aabc to 0035aacf has its CatchHandler @ 0035ad5c */
    puVar7 = (ulong *)FUN_002e4094(&local_100,", not just within \"",0x13);
    uStack_d8 = puVar7[1];
    local_e0 = *puVar7;
    local_d0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pbVar10 = (byte *)*param_3;
    uVar8 = *(ulong *)(pbVar10 + 8);
    pbVar12 = *(byte **)(pbVar10 + 0x10);
    if ((*pbVar10 & 1) == 0) {
      pbVar12 = pbVar10 + 1;
      uVar8 = (ulong)(*pbVar10 >> 1);
    }
                    /* try { // try from 0035ab04 to 0035ab0b has its CatchHandler @ 0035ad34 */
    puVar6 = (undefined8 *)FUN_002e4094(&local_e0,pbVar12,uVar8);
    uVar15 = *puVar6;
    local_b0 = puVar6[2];
    uStack_b8 = (undefined7)puVar6[1];
    uStack_b1 = (undefined1)((ulong)puVar6[1] >> 0x38);
    local_c0 = (byte)uVar15;
    uStack_bf = (undefined6)((ulong)uVar15 >> 8);
    uStack_b9 = (undefined1)((ulong)uVar15 >> 0x38);
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
                    /* try { // try from 0035ab24 to 0035ab37 has its CatchHandler @ 0035ad0c */
    puVar7 = (ulong *)FUN_002e4094(&local_c0,&DAT_038c838e,2);
    uStack_98 = puVar7[1];
    local_a0 = (undefined8 *)*puVar7;
    local_90 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
                    /* try { // try from 0035ab50 to 0035ab67 has its CatchHandler @ 0035acb8 */
    FUN_0034db00(param_1,uVar5,param_2,0,&local_a0);
    if (((ulong)local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    if ((local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
    if ((local_e0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_d0);
    }
    if ((local_100 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_f0);
    }
    if ((local_120 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_110);
    }
    if ((local_138[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_128);
    }
    if ((local_80 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
    }
  }
  uVar5 = param_4[3];
  uStack_78 = *(undefined4 *)(param_4 + 2);
  local_80 = (byte)uVar5;
  bStack_7f = (byte)((ulong)uVar5 >> 8);
  uStack_7e = (undefined6)((ulong)uVar5 >> 0x10);
  local_a0 = param_4;
  FUN_00340a70(*(long *)(param_1 + 0x58) + 0xc0,&local_80,&local_a0);
  return;
}


