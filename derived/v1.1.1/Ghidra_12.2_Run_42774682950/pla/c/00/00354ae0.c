/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00354ae0; name: FUN_00354ae0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00354ae0(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  size_t sVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  int iVar22;
  ulong uVar23;
  byte local_288 [16];
  undefined8 local_278;
  ulong local_270;
  undefined8 uStack_268;
  long *local_260;
  undefined8 uStack_258;
  undefined4 local_250;
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
  char *local_120;
  undefined4 local_118;
  undefined1 auStack_114 [36];
  char *local_f0;
  undefined4 local_e8;
  undefined1 auStack_e4 [36];
  char *local_c0;
  undefined4 local_b8;
  undefined1 auStack_b4 [36];
  byte *local_90;
  undefined8 uStack_88;
  char *local_80;
  
  lVar20 = param_3;
  if (param_3 == 0) {
    lVar20 = *(long *)(param_1 + 0x50);
  }
  uVar10 = FUN_00356fd4(param_1,*(undefined8 *)(lVar20 + 8),*(undefined8 *)(param_2 + 0x60));
  FUN_00350da4(param_1,*(undefined8 *)(param_2 + 0x60),uVar10,param_2);
  uVar11 = FUN_00340fec(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x60));
  *param_4 = uVar11;
  param_4[1] = uVar10;
  param_4[2] = *(undefined8 *)(param_1 + 0x50);
  param_4[3] = param_3;
  *(undefined2 *)(param_4 + 5) = 0;
  iVar15 = *(int *)(param_2 + 0x20);
  if (iVar15 == 0) {
    FUN_0034dc2c(param_1,uVar10,param_2,0,"Enums must contain at least one value.");
    iVar15 = *(int *)(param_2 + 0x20);
  }
  *(int *)((long)param_4 + 0x2c) = iVar15;
  uVar10 = FUN_003415f0(*(undefined8 *)(param_1 + 8),iVar15 * 0x28);
  param_4[6] = uVar10;
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar20 = 0;
    uVar19 = 0;
    do {
      uVar10 = FUN_003664d8(param_2 + 0x18,uVar19 & 0xffffffff);
      FUN_0035a688(param_1,uVar10,param_4,param_4[6] + lVar20);
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0x28;
    } while ((long)uVar19 < (long)*(int *)(param_2 + 0x20));
  }
  iVar15 = *(int *)(param_2 + 0x38);
  *(int *)(param_4 + 7) = iVar15;
  uVar10 = FUN_003415f0(*(undefined8 *)(param_1 + 8),iVar15 << 3);
  param_4[8] = uVar10;
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar20 = 0;
    uVar19 = 0;
    do {
      lVar12 = FUN_003665c0(param_2 + 0x30,uVar19 & 0xffffffff);
      lVar17 = param_4[8];
      iVar15 = *(int *)(lVar12 + 0x18);
      *(int *)(lVar17 + lVar20) = iVar15;
      iVar3 = *(int *)(lVar12 + 0x1c);
      ((int *)(lVar17 + lVar20))[1] = iVar3;
      if (iVar3 < iVar15) {
        FUN_0034dc2c(param_1,param_4[1],lVar12,1,
                     "Reserved range end number must be greater than start number.");
      }
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 8;
    } while ((long)uVar19 < (long)*(int *)(param_2 + 0x38));
  }
  uVar4 = *(uint *)(param_2 + 0x50);
  *(uint *)((long)param_4 + 0x3c) = uVar4;
  uVar10 = FUN_003415f0(*(undefined8 *)(param_1 + 8),uVar4 << 3);
  param_4[9] = uVar10;
  if (0 < (int)uVar4) {
    uVar19 = 0;
    do {
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar10 = FUN_0032b79c(param_2 + 0x48,uVar19 & 0xffffffff);
      uVar10 = FUN_00340fec(uVar11,uVar10);
      *(undefined8 *)(param_4[9] + uVar19 * 8) = uVar10;
      uVar19 = uVar19 + 1;
    } while (uVar4 != uVar19);
  }
  FUN_00359a14(param_1,param_2,param_4);
  param_4[4] = 0;
  if ((*(uint *)(param_2 + 0x10) >> 1 & 1) != 0) {
    puVar18 = *(undefined **)(param_2 + 0x68);
    if (puVar18 == (undefined *)0x0) {
      FUN_0030f640(&local_90,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x2548);
                    /* try { // try from 00354d2c to 00354d3f has its CatchHandler @ 003554a0 */
      uVar10 = FUN_0030f3ac(&local_90,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 00354d40 to 00354d47 has its CatchHandler @ 0035549c */
      FUN_0030f41c(&local_c0,uVar10);
      FUN_0030f658(&local_90);
      puVar18 = *(undefined **)(param_2 + 0x68);
    }
    local_80 = (char *)0x0;
    uStack_88 = 0;
    local_90 = (byte *)0x0;
    puVar2 = PTR_DAT_04373c00;
    if (puVar18 != (undefined *)0x0) {
      puVar2 = puVar18;
    }
    local_80 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar8 = s_google_protobuf_EnumOptions_03984444._0_8_;
    uVar10 = CONCAT53(s_google_protobuf_EnumOptions_03984444._11_5_,
                      s_google_protobuf_EnumOptions_03984444._8_3_);
    uStack_88 = _UNK_03888f48;
    local_90 = _DAT_03888f40;
    uVar11 = CONCAT35(s_google_protobuf_EnumOptions_03984444._16_3_,
                      s_google_protobuf_EnumOptions_03984444._11_5_);
    *(undefined8 *)(local_80 + 0x13) = s_google_protobuf_EnumOptions_03984444._19_8_;
    *(undefined8 *)(local_80 + 0xb) = uVar11;
    *(undefined8 *)(local_80 + 8) = uVar10;
    *(undefined8 *)local_80 = uVar8;
    local_80[0x1b] = '\0';
                    /* try { // try from 00354dac to 00354dc3 has its CatchHandler @ 003554b4 */
    FUN_0035ae08(param_1,puVar2,param_4,3,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
  }
  FUN_0034ff4c(param_1,param_4[1],param_3,*param_4,param_2,4,param_4);
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar20 = param_2 + 0x30;
    iVar15 = 0;
    do {
      lVar12 = FUN_003665c0(lVar20,iVar15);
      iVar16 = *(int *)(param_2 + 0x38);
      iVar3 = iVar15 + 1;
      if (iVar3 < iVar16) {
        iVar22 = iVar3;
        do {
          lVar17 = FUN_003665c0(lVar20,iVar22);
          if ((*(int *)(lVar17 + 0x18) <= *(int *)(lVar12 + 0x1c)) &&
             (*(int *)(lVar12 + 0x18) <= *(int *)(lVar17 + 0x1c))) {
            uVar11 = param_4[1];
            uVar10 = FUN_003665c0(lVar20,iVar15);
            local_90 = (byte *)FUN_00320300(*(undefined4 *)(lVar17 + 0x18),(long)&uStack_88 + 4);
            sVar13 = strlen((char *)local_90);
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar13);
            local_c0 = (char *)FUN_00320300(*(undefined4 *)(lVar17 + 0x1c),auStack_b4);
            sVar13 = strlen(local_c0);
            local_b8 = (undefined4)sVar13;
            local_f0 = (char *)FUN_00320300(*(undefined4 *)(lVar12 + 0x18),auStack_e4);
            sVar13 = strlen(local_f0);
            local_e8 = (undefined4)sVar13;
            local_120 = (char *)FUN_00320300(*(undefined4 *)(lVar12 + 0x1c),auStack_114);
            sVar13 = strlen(local_120);
            local_118 = (undefined4)sVar13;
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
            local_240 = 0;
            local_238 = 0xffffffff;
            FUN_003c6830(&local_270,
                         "Reserved range $0 to $1 overlaps with already-defined range $2 to $3.",
                         &local_90,&local_c0,&local_f0,&local_120,&local_150,&local_180,&local_1b0,
                         &local_1e0,&local_210,&local_240);
                    /* try { // try from 00354fa0 to 00354fb7 has its CatchHandler @ 003554f8 */
            FUN_0034db00(param_1,uVar11,uVar10,1,&local_270);
            if ((local_270 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_260);
            }
          }
          iVar16 = *(int *)(param_2 + 0x38);
          iVar22 = iVar22 + 1;
        } while (iVar22 < iVar16);
      }
      iVar15 = iVar3;
    } while (iVar3 < iVar16);
  }
  puVar18 = PTR_LAB_04373088;
  local_250 = 0x3f800000;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  local_260 = (long *)0x0;
  if (0 < *(int *)(param_2 + 0x50)) {
    iVar15 = 0;
    do {
      while( true ) {
        pbVar14 = (byte *)FUN_0032b79c(param_2 + 0x48,iVar15);
        lVar20 = FUN_0036c62c(&local_270,pbVar14);
        if (lVar20 != 0) break;
                    /* try { // try from 0035501c to 00355043 has its CatchHandler @ 003554f4 */
        FUN_00343c28(&local_270,pbVar14);
LAB_00355028:
        iVar15 = iVar15 + 1;
        if (*(int *)(param_2 + 0x50) <= iVar15) goto LAB_00355138;
      }
      local_90 = *(byte **)(pbVar14 + 0x10);
      if ((*pbVar14 & 1) == 0) {
        local_90 = pbVar14 + 1;
      }
      local_c0 = (char *)0x0;
      local_b8 = 0xffffffff;
      local_f0 = (char *)0x0;
      local_e8 = 0xffffffff;
      local_120 = (char *)0x0;
      local_118 = 0xffffffff;
      local_150 = 0;
      uVar4 = (uint)(*pbVar14 >> 1);
      if ((*pbVar14 & 1) != 0) {
        uVar4 = (uint)*(undefined8 *)(pbVar14 + 8);
      }
      local_148 = 0xffffffff;
      local_180 = 0;
      local_178 = 0xffffffff;
      local_1b0 = 0;
      local_1a8 = 0xffffffff;
      local_1e0 = 0;
      local_1d8 = 0xffffffff;
      local_210 = 0;
      local_208 = 0xffffffff;
      local_240 = 0;
      local_238 = 0xffffffff;
      uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
                    /* try { // try from 003550cc to 003550fb has its CatchHandler @ 003554f0 */
      FUN_003c6830(local_288,"Enum value \"$0\" is reserved multiple times.",&local_90,&local_c0,
                   &local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210,
                   &local_240);
                    /* try { // try from 003550fc to 00355113 has its CatchHandler @ 003554e0 */
      FUN_0034db00(param_1,pbVar14,param_2,0,local_288);
      if ((local_288[0] & 1) == 0) goto LAB_00355028;
      FUN_002e2ea0(puVar18,local_278);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_2 + 0x50));
  }
LAB_00355138:
  if (0 < *(int *)((long)param_4 + 0x2c)) {
    uVar19 = 0;
    do {
      lVar20 = param_4[6];
      puVar21 = (undefined8 *)(lVar20 + uVar19 * 0x28);
      iVar15 = *(int *)(param_4 + 7);
      if (0 < iVar15) {
        lVar17 = lVar20 + uVar19 * 0x28;
        lVar12 = 0;
        uVar23 = 0;
        piVar1 = (int *)(lVar17 + 0x10);
        do {
          iVar3 = *piVar1;
          if ((*(int *)(param_4[8] + lVar12) <= iVar3) &&
             (iVar3 <= *(int *)(param_4[8] + lVar12 + 4))) {
            uVar11 = *(undefined8 *)(lVar17 + 8);
                    /* try { // try from 003551ec to 003551f7 has its CatchHandler @ 0035553c */
            uVar10 = FUN_003665c0(param_2 + 0x30,uVar23 & 0xffffffff);
            pbVar14 = (byte *)*puVar21;
            local_90 = *(byte **)(pbVar14 + 0x10);
            if ((*pbVar14 & 1) == 0) {
              local_90 = pbVar14 + 1;
            }
            uVar4 = (uint)(*pbVar14 >> 1);
            if ((*pbVar14 & 1) != 0) {
              uVar4 = (uint)*(undefined8 *)(pbVar14 + 8);
            }
            uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
                    /* try { // try from 00355230 to 00355237 has its CatchHandler @ 00355538 */
            local_c0 = (char *)FUN_00320300(*piVar1,auStack_b4);
            sVar13 = strlen(local_c0);
            local_f0 = (char *)0x0;
            local_b8 = (undefined4)sVar13;
            local_e8 = 0xffffffff;
            local_120 = (char *)0x0;
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
            local_240 = 0;
            local_238 = 0xffffffff;
                    /* try { // try from 00355284 to 003552c7 has its CatchHandler @ 00355534 */
            FUN_003c6830(local_288,"Enum value \"$0\" uses reserved number $1.",&local_90,&local_c0,
                         &local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210
                         ,&local_240);
                    /* try { // try from 003552c8 to 003552df has its CatchHandler @ 0035550c */
            FUN_0034db00(param_1,uVar11,uVar10,1,local_288);
            if ((local_288[0] & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_278);
            }
            iVar15 = *(int *)(param_4 + 7);
          }
          uVar23 = uVar23 + 1;
          lVar12 = lVar12 + 8;
        } while ((long)uVar23 < (long)iVar15);
      }
      lVar12 = FUN_0036c62c(&local_270,*puVar21);
      if (lVar12 != 0) {
        uVar11 = *(undefined8 *)(lVar20 + uVar19 * 0x28 + 8);
                    /* try { // try from 00355318 to 00355323 has its CatchHandler @ 003554dc */
        uVar10 = FUN_003664d8(param_2 + 0x18,uVar19 & 0xffffffff);
        pbVar14 = (byte *)*puVar21;
        local_90 = *(byte **)(pbVar14 + 0x10);
        if ((*pbVar14 & 1) == 0) {
          local_90 = pbVar14 + 1;
        }
        local_c0 = (char *)0x0;
        local_b8 = 0xffffffff;
        local_f0 = (char *)0x0;
        local_e8 = 0xffffffff;
        local_120 = (char *)0x0;
        local_118 = 0xffffffff;
        local_150 = 0;
        local_148 = 0xffffffff;
        local_180 = 0;
        local_178 = 0xffffffff;
        local_1b0 = 0;
        uVar4 = (uint)(*pbVar14 >> 1);
        if ((*pbVar14 & 1) != 0) {
          uVar4 = (uint)*(undefined8 *)(pbVar14 + 8);
        }
        local_1a8 = 0xffffffff;
        local_1e0 = 0;
        local_1d8 = 0xffffffff;
        local_210 = 0;
        local_240 = 0;
        local_238 = 0xffffffff;
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar4);
        local_208 = 0xffffffff;
                    /* try { // try from 003553a0 to 003553e3 has its CatchHandler @ 003554d8 */
        FUN_003c6830(local_288,"Enum value \"$0\" is reserved.",&local_90,&local_c0,&local_f0,
                     &local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210,&local_240);
                    /* try { // try from 003553e4 to 003553fb has its CatchHandler @ 003554c8 */
        FUN_0034db00(param_1,uVar11,uVar10,0,local_288);
        if ((local_288[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_278);
        }
      }
      uVar19 = uVar19 + 1;
    } while ((long)uVar19 < (long)*(int *)((long)param_4 + 0x2c));
  }
  puVar18 = PTR_LAB_04373088;
  if (local_260 != (long *)0x0) {
    bVar5 = *(byte *)(local_260 + 2);
    plVar9 = (long *)*local_260;
    plVar7 = local_260;
    while( true ) {
      plVar6 = plVar9;
      if ((bVar5 & 1) != 0) {
        FUN_002e2ea0(puVar18,plVar7[4]);
      }
      FUN_002e2ea0(puVar18,plVar7);
      if (plVar6 == (long *)0x0) break;
      bVar5 = *(byte *)(plVar6 + 2);
      plVar9 = (long *)*plVar6;
      plVar7 = plVar6;
    }
  }
  uVar19 = local_270;
  local_270 = 0;
  if (uVar19 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


