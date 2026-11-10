/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035383c; name: FUN_0035383c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0035383c(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  size_t sVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  undefined *puVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  undefined8 *puVar22;
  int iVar23;
  ulong uVar24;
  long local_2c0;
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
  byte *local_f0;
  uint local_e8;
  undefined1 auStack_e4 [36];
  char *local_c0;
  undefined4 local_b8;
  undefined1 auStack_b4 [36];
  byte *local_90;
  undefined8 uStack_88;
  char *local_80;
  
  lVar16 = param_3;
  if (param_3 == 0) {
    lVar16 = param_1[10];
  }
  uVar9 = FUN_00356fd4(param_1,*(undefined8 *)(lVar16 + 8),*(undefined8 *)(param_2 + 0xd8));
  FUN_00350da4(param_1,*(undefined8 *)(param_2 + 0xd8),uVar9,param_2);
  uVar10 = FUN_00340fec(param_1[1],*(undefined8 *)(param_2 + 0xd8));
  *param_4 = uVar10;
  param_4[1] = uVar9;
  lVar16 = param_1[10];
  *(undefined2 *)((long)param_4 + 0x8c) = 0;
  *(undefined1 *)((long)param_4 + 0x8e) = 0;
  param_4[2] = lVar16;
  param_4[3] = param_3;
  lVar16 = FUN_0036bc18(*(long *)(*param_1 + 0x20) + 0x90,uVar9);
  if (lVar16 != 0) {
    *(char *)((long)param_4 + 0x8e) = (char)*(undefined4 *)(lVar16 + 0x28);
  }
  iVar20 = *(int *)(param_2 + 0x98);
  *(int *)((long)param_4 + 0x6c) = iVar20;
  uVar9 = FUN_003415f0(param_1[1],iVar20 * 0x30);
  param_4[6] = uVar9;
  if (0 < *(int *)(param_2 + 0x98)) {
    lVar16 = 0;
    uVar19 = 0;
    do {
      uVar9 = FUN_00366220(param_2 + 0x90,uVar19 & 0xffffffff);
      FUN_0035711c(param_1,uVar9,param_4,param_4[6] + lVar16);
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 0x30;
    } while ((long)uVar19 < (long)*(int *)(param_2 + 0x98));
  }
  iVar20 = *(int *)(param_2 + 0x20);
  *(int *)(param_4 + 0xd) = iVar20;
  uVar9 = FUN_003415f0(param_1[1],iVar20 * 0x98);
  param_4[5] = uVar9;
  if (0 < *(int *)(param_2 + 0x20)) {
    lVar16 = 0;
    uVar19 = 0;
    do {
      uVar9 = FUN_00366138(param_2 + 0x18,uVar19 & 0xffffffff);
      FUN_003578f0(param_1,uVar9,param_4,param_4[5] + lVar16,0);
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 0x98;
    } while ((long)uVar19 < (long)*(int *)(param_2 + 0x20));
  }
  iVar20 = *(int *)(param_2 + 0x38);
  *(int *)((long)param_4 + 0x74) = iVar20;
  uVar9 = FUN_003415f0(param_1[1],iVar20 * 0x90);
  param_4[7] = uVar9;
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar16 = 0;
    uVar19 = 0;
    do {
      uVar9 = FUN_00365e80(param_2 + 0x30,uVar19 & 0xffffffff);
      FUN_0035383c(param_1,uVar9,param_4,param_4[7] + lVar16);
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 0x90;
    } while ((long)uVar19 < (long)*(int *)(param_2 + 0x38));
  }
  iVar20 = *(int *)(param_2 + 0x50);
  *(int *)(param_4 + 0xf) = iVar20;
  uVar9 = FUN_003415f0(param_1[1],iVar20 * 0x50);
  param_4[8] = uVar9;
  if (0 < *(int *)(param_2 + 0x50)) {
    lVar16 = 0;
    uVar19 = 0;
    do {
      uVar9 = FUN_00365f68(param_2 + 0x48,uVar19 & 0xffffffff);
      FUN_00354ae0(param_1,uVar9,param_4,param_4[8] + lVar16);
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 0x50;
    } while ((long)uVar19 < (long)*(int *)(param_2 + 0x50));
  }
  iVar20 = *(int *)(param_2 + 0x68);
  *(int *)((long)param_4 + 0x7c) = iVar20;
  uVar9 = FUN_003415f0(param_1[1],iVar20 << 4);
  param_4[9] = uVar9;
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar16 = 0;
    uVar19 = 0;
    do {
      uVar9 = FUN_00366308(param_2 + 0x60,uVar19 & 0xffffffff);
      FUN_003572c8(param_1,uVar9,param_4,param_4[9] + lVar16);
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((long)uVar19 < (long)*(int *)(param_2 + 0x68));
  }
  iVar20 = *(int *)(param_2 + 0x80);
  *(int *)(param_4 + 0x10) = iVar20;
  uVar9 = FUN_003415f0(param_1[1],iVar20 * 0x98);
  param_4[10] = uVar9;
  if (0 < *(int *)(param_2 + 0x80)) {
    lVar16 = 0;
    uVar19 = 0;
    do {
      uVar9 = FUN_00366138(param_2 + 0x78,uVar19 & 0xffffffff);
      FUN_003578f0(param_1,uVar9,param_4,param_4[10] + lVar16,1);
      uVar19 = uVar19 + 1;
      lVar16 = lVar16 + 0x98;
    } while ((long)uVar19 < (long)*(int *)(param_2 + 0x80));
  }
  iVar20 = *(int *)(param_2 + 0xb0);
  *(int *)((long)param_4 + 0x84) = iVar20;
  uVar9 = FUN_003415f0(param_1[1],iVar20 << 3);
  param_4[0xb] = uVar9;
  if (0 < *(int *)(param_2 + 0xb0)) {
    uVar19 = 0;
    do {
      lVar16 = FUN_003663f0(param_2 + 0xa8,uVar19 & 0xffffffff);
      uVar9 = *(undefined8 *)(lVar16 + 0x18);
      *(undefined8 *)(param_4[0xb] + uVar19 * 8) = uVar9;
      if ((int)uVar9 < 1) {
        FUN_0034dc2c(param_1,param_4[1],lVar16,1,"Reserved numbers must be positive integers.");
      }
      uVar19 = uVar19 + 1;
    } while ((long)uVar19 < (long)*(int *)(param_2 + 0xb0));
  }
  uVar3 = *(uint *)(param_2 + 200);
  *(uint *)(param_4 + 0x11) = uVar3;
  uVar9 = FUN_003415f0(param_1[1],uVar3 << 3);
  param_4[0xc] = uVar9;
  if (0 < (int)uVar3) {
    uVar19 = 0;
    do {
      lVar16 = param_1[1];
      uVar9 = FUN_0032b79c(param_2 + 0xc0,uVar19 & 0xffffffff);
      uVar9 = FUN_00340fec(lVar16,uVar9);
      *(undefined8 *)(param_4[0xc] + uVar19 * 8) = uVar9;
      uVar19 = uVar19 + 1;
    } while (uVar3 != uVar19);
  }
  param_4[4] = 0;
  if ((*(uint *)(param_2 + 0x10) >> 1 & 1) != 0) {
    puVar17 = *(undefined **)(param_2 + 0xe0);
    if (puVar17 == (undefined *)0x0) {
      FUN_0030f640(&local_90,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/descriptor.pb.h"
                   ,0x2031);
                    /* try { // try from 00353c84 to 00353c97 has its CatchHandler @ 00354960 */
      uVar9 = FUN_0030f3ac(&local_90,"CHECK failed: !value || options_ != nullptr: ");
                    /* try { // try from 00353c98 to 00353c9f has its CatchHandler @ 0035495c */
      FUN_0030f41c(&local_c0,uVar9);
      FUN_0030f658(&local_90);
      puVar17 = *(undefined **)(param_2 + 0xe0);
    }
    local_80 = (char *)0x0;
    uStack_88 = 0;
    local_90 = (byte *)0x0;
    puVar2 = PTR_DAT_04373bf8;
    if (puVar17 != (undefined *)0x0) {
      puVar2 = puVar17;
    }
    local_80 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar7 = s_google_protobuf_MessageOptions_0390fd51._0_8_;
    uVar9 = CONCAT26(s_google_protobuf_MessageOptions_0390fd51._14_2_,
                     s_google_protobuf_MessageOptions_0390fd51._8_6_);
    uStack_88 = _UNK_03889aa8;
    local_90 = _DAT_03889aa0;
    uVar10 = CONCAT62(s_google_protobuf_MessageOptions_0390fd51._16_6_,
                      s_google_protobuf_MessageOptions_0390fd51._14_2_);
    *(undefined8 *)(local_80 + 0x16) = s_google_protobuf_MessageOptions_0390fd51._22_8_;
    *(undefined8 *)(local_80 + 0xe) = uVar10;
    *(undefined8 *)(local_80 + 8) = uVar9;
    *(undefined8 *)local_80 = uVar7;
    local_80[0x1e] = '\0';
                    /* try { // try from 00353d04 to 00353d1b has its CatchHandler @ 00354974 */
    FUN_00357784(param_1,puVar2,param_4,7,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
  }
  FUN_0034ff4c(param_1,param_4[1],param_3,*param_4,param_2,1,param_4);
  if (0 < *(int *)(param_2 + 0xb0)) {
    lVar16 = param_2 + 0xa8;
    iVar20 = 0;
    do {
      lVar11 = FUN_003663f0(lVar16,iVar20);
      iVar18 = iVar20 + 1;
      iVar15 = *(int *)(param_2 + 0xb0);
      if (iVar18 < iVar15) {
        iVar23 = iVar18;
        do {
          lVar12 = FUN_003663f0(lVar16,iVar23);
          if ((*(int *)(lVar12 + 0x18) < *(int *)(lVar11 + 0x1c)) &&
             (*(int *)(lVar11 + 0x18) < *(int *)(lVar12 + 0x1c))) {
            uVar10 = param_4[1];
            uVar9 = FUN_003663f0(lVar16,iVar20);
            local_90 = (byte *)FUN_00320300(*(undefined4 *)(lVar12 + 0x18),(long)&uStack_88 + 4);
            sVar13 = strlen((char *)local_90);
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar13);
            local_c0 = (char *)FUN_00320300(*(int *)(lVar12 + 0x1c) + -1,auStack_b4);
            sVar13 = strlen(local_c0);
            local_b8 = (undefined4)sVar13;
            local_f0 = (byte *)FUN_00320300(*(undefined4 *)(lVar11 + 0x18),auStack_e4);
            sVar13 = strlen((char *)local_f0);
            local_e8 = (uint)sVar13;
            local_120 = (char *)FUN_00320300(*(int *)(lVar11 + 0x1c) + -1,auStack_114);
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
                    /* try { // try from 00353f0c to 00353f23 has its CatchHandler @ 003549e0 */
            FUN_0034db00(param_1,uVar10,uVar9,1,&local_270);
            if ((local_270 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_260);
            }
          }
          iVar23 = iVar23 + 1;
          iVar15 = *(int *)(param_2 + 0xb0);
        } while (iVar23 < iVar15);
      }
      iVar20 = iVar18;
    } while (iVar18 < iVar15);
  }
  puVar17 = PTR_LAB_04373088;
  uStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  local_260 = (long *)0x0;
  local_250 = 0x3f800000;
  if (0 < *(int *)(param_2 + 200)) {
    iVar20 = 0;
    do {
      while( true ) {
        pbVar14 = (byte *)FUN_0032b79c(param_2 + 0xc0,iVar20);
        lVar16 = FUN_0036c62c(&local_270,pbVar14);
        if (lVar16 != 0) break;
                    /* try { // try from 00353f8c to 00353fb3 has its CatchHandler @ 003549b4 */
        FUN_00343c28(&local_270,pbVar14);
LAB_00353f98:
        iVar20 = iVar20 + 1;
        if (*(int *)(param_2 + 200) <= iVar20) goto LAB_003540a8;
      }
      local_90 = *(byte **)(pbVar14 + 0x10);
      if ((*pbVar14 & 1) == 0) {
        local_90 = pbVar14 + 1;
      }
      local_c0 = (char *)0x0;
      local_b8 = 0xffffffff;
      local_f0 = (byte *)0x0;
      local_e8 = 0xffffffff;
      local_120 = (char *)0x0;
      local_118 = 0xffffffff;
      local_150 = 0;
      uVar3 = (uint)(*pbVar14 >> 1);
      if ((*pbVar14 & 1) != 0) {
        uVar3 = (uint)*(undefined8 *)(pbVar14 + 8);
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
      uStack_88 = CONCAT44(uStack_88._4_4_,uVar3);
                    /* try { // try from 0035403c to 0035406b has its CatchHandler @ 003549b0 */
      FUN_003c6830(local_288,"Field name \"$0\" is reserved multiple times.",&local_90,&local_c0,
                   &local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210,
                   &local_240);
                    /* try { // try from 0035406c to 00354083 has its CatchHandler @ 003549a0 */
      FUN_0034db00(param_1,pbVar14,param_2,0,local_288);
      if ((local_288[0] & 1) == 0) goto LAB_00353f98;
      FUN_002e2ea0(puVar17,local_278);
      iVar20 = iVar20 + 1;
    } while (iVar20 < *(int *)(param_2 + 200));
  }
LAB_003540a8:
  if (0 < *(int *)(param_4 + 0xd)) {
    uVar19 = 0;
    do {
      lVar16 = param_4[5];
      puVar22 = (undefined8 *)(lVar16 + uVar19 * 0x98);
      iVar20 = *(int *)((long)param_4 + 0x7c);
      if (0 < iVar20) {
        lVar12 = lVar16 + uVar19 * 0x98;
        lVar11 = 0;
        uVar24 = 0;
        piVar1 = (int *)(lVar12 + 0x44);
        do {
          lVar21 = param_4[9];
          iVar18 = *piVar1;
          if ((*(int *)(lVar21 + lVar11) <= iVar18) && (iVar18 < *(int *)(lVar21 + lVar11 + 4))) {
            uVar10 = *(undefined8 *)(lVar12 + 8);
                    /* try { // try from 00354180 to 0035418b has its CatchHandler @ 00354a70 */
            uVar9 = FUN_00366308(param_2 + 0x60,uVar24 & 0xffffffff);
                    /* try { // try from 00354194 to 0035419b has its CatchHandler @ 00354a6c */
            local_90 = (byte *)FUN_00320300(*(undefined4 *)(lVar21 + lVar11),(long)&uStack_88 + 4);
            sVar13 = strlen((char *)local_90);
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar13);
                    /* try { // try from 003541b0 to 003541b7 has its CatchHandler @ 00354a68 */
            local_c0 = (char *)FUN_00320300(*(int *)(lVar21 + lVar11 + 4) + -1,auStack_b4);
            sVar13 = strlen(local_c0);
            local_b8 = (undefined4)sVar13;
            pbVar14 = (byte *)*puVar22;
            local_f0 = *(byte **)(pbVar14 + 0x10);
            if ((*pbVar14 & 1) == 0) {
              local_f0 = pbVar14 + 1;
            }
            local_e8 = (uint)(*pbVar14 >> 1);
            if ((*pbVar14 & 1) != 0) {
              local_e8 = (uint)*(undefined8 *)(pbVar14 + 8);
            }
                    /* try { // try from 003541f8 to 003541ff has its CatchHandler @ 00354a64 */
            local_120 = (char *)FUN_00320300(*piVar1,auStack_114);
            sVar13 = strlen(local_120);
            local_150 = 0;
            local_118 = (undefined4)sVar13;
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
                    /* try { // try from 0035423c to 0035427f has its CatchHandler @ 00354a60 */
            FUN_003c6830(local_288,"Extension range $0 to $1 includes field \"$2\" ($3).",&local_90,
                         &local_c0,&local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,
                         &local_210,&local_240);
                    /* try { // try from 00354280 to 00354297 has its CatchHandler @ 00354a38 */
            FUN_0034db00(param_1,uVar10,uVar9,1,local_288);
            if ((local_288[0] & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_278);
            }
            iVar20 = *(int *)((long)param_4 + 0x7c);
          }
          uVar24 = uVar24 + 1;
          lVar11 = lVar11 + 0x10;
        } while ((long)uVar24 < (long)iVar20);
      }
      iVar20 = *(int *)((long)param_4 + 0x84);
      if (0 < iVar20) {
        lVar12 = lVar16 + uVar19 * 0x98;
        lVar11 = 0;
        uVar24 = 0;
        piVar1 = (int *)(lVar12 + 0x44);
        do {
          iVar18 = *piVar1;
          if ((*(int *)(param_4[0xb] + lVar11) <= iVar18) &&
             (iVar18 < *(int *)(param_4[0xb] + lVar11 + 4))) {
            uVar10 = *(undefined8 *)(lVar12 + 8);
                    /* try { // try from 00354320 to 0035432b has its CatchHandler @ 00354a34 */
            uVar9 = FUN_003663f0(param_2 + 0xa8,uVar24 & 0xffffffff);
            pbVar14 = (byte *)*puVar22;
            local_90 = *(byte **)(pbVar14 + 0x10);
            if ((*pbVar14 & 1) == 0) {
              local_90 = pbVar14 + 1;
            }
            uVar3 = (uint)(*pbVar14 >> 1);
            if ((*pbVar14 & 1) != 0) {
              uVar3 = (uint)*(undefined8 *)(pbVar14 + 8);
            }
            uStack_88 = CONCAT44(uStack_88._4_4_,uVar3);
                    /* try { // try from 00354364 to 0035436b has its CatchHandler @ 00354a30 */
            local_c0 = (char *)FUN_00320300(*piVar1,auStack_b4);
            sVar13 = strlen(local_c0);
            local_f0 = (byte *)0x0;
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
                    /* try { // try from 003543b8 to 003543fb has its CatchHandler @ 00354a2c */
            FUN_003c6830(local_288,"Field \"$0\" uses reserved number $1.",&local_90,&local_c0,
                         &local_f0,&local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210
                         ,&local_240);
                    /* try { // try from 003543fc to 00354413 has its CatchHandler @ 00354a1c */
            FUN_0034db00(param_1,uVar10,uVar9,1,local_288);
            if ((local_288[0] & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_278);
            }
            iVar20 = *(int *)((long)param_4 + 0x84);
          }
          uVar24 = uVar24 + 1;
          lVar11 = lVar11 + 8;
        } while ((long)uVar24 < (long)iVar20);
      }
      lVar11 = FUN_0036c62c(&local_270,*puVar22);
      if (lVar11 != 0) {
        uVar10 = *(undefined8 *)(lVar16 + uVar19 * 0x98 + 8);
                    /* try { // try from 00354454 to 0035445f has its CatchHandler @ 0035499c */
        uVar9 = FUN_00366138(param_2 + 0x18,uVar19 & 0xffffffff);
        pbVar14 = (byte *)*puVar22;
        local_90 = *(byte **)(pbVar14 + 0x10);
        if ((*pbVar14 & 1) == 0) {
          local_90 = pbVar14 + 1;
        }
        local_c0 = (char *)0x0;
        local_b8 = 0xffffffff;
        local_f0 = (byte *)0x0;
        local_e8 = 0xffffffff;
        local_120 = (char *)0x0;
        local_118 = 0xffffffff;
        local_150 = 0;
        local_148 = 0xffffffff;
        local_180 = 0;
        local_178 = 0xffffffff;
        local_1b0 = 0;
        uVar3 = (uint)(*pbVar14 >> 1);
        if ((*pbVar14 & 1) != 0) {
          uVar3 = (uint)*(undefined8 *)(pbVar14 + 8);
        }
        local_1a8 = 0xffffffff;
        local_1e0 = 0;
        local_1d8 = 0xffffffff;
        local_210 = 0;
        local_240 = 0;
        local_238 = 0xffffffff;
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar3);
        local_208 = 0xffffffff;
                    /* try { // try from 003544dc to 0035451f has its CatchHandler @ 00354998 */
        FUN_003c6830(local_288,"Field name \"$0\" is reserved.",&local_90,&local_c0,&local_f0,
                     &local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210,&local_240);
                    /* try { // try from 00354520 to 00354537 has its CatchHandler @ 00354988 */
        FUN_0034db00(param_1,uVar10,uVar9,0,local_288);
        if ((local_288[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_278);
        }
      }
      uVar19 = uVar19 + 1;
    } while ((long)uVar19 < (long)*(int *)(param_4 + 0xd));
  }
  iVar20 = *(int *)((long)param_4 + 0x7c);
  if (0 < iVar20) {
    lVar16 = 0;
    local_2c0 = 1;
    uVar19 = 0;
    do {
      piVar1 = (int *)(param_4[9] + uVar19 * 0x10);
      iVar18 = *(int *)((long)param_4 + 0x84);
      if (0 < iVar18) {
        lVar12 = 0;
        lVar11 = 0;
        do {
          lVar21 = param_4[0xb];
          if ((*(int *)(lVar21 + lVar12) < piVar1[1]) && (*piVar1 < *(int *)(lVar21 + lVar12 + 4)))
          {
            uVar10 = param_4[1];
                    /* try { // try from 00354630 to 0035463b has its CatchHandler @ 00354a18 */
            uVar9 = FUN_00366308(param_2 + 0x60,uVar19 & 0xffffffff);
                    /* try { // try from 00354644 to 0035464b has its CatchHandler @ 00354a14 */
            local_90 = (byte *)FUN_00320300(*piVar1,(long)&uStack_88 + 4);
            sVar13 = strlen((char *)local_90);
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar13);
                    /* try { // try from 00354660 to 00354667 has its CatchHandler @ 00354a10 */
            local_c0 = (char *)FUN_00320300(piVar1[1] + -1,auStack_b4);
            sVar13 = strlen(local_c0);
            local_b8 = (undefined4)sVar13;
                    /* try { // try from 00354678 to 0035467f has its CatchHandler @ 00354a0c */
            local_f0 = (byte *)FUN_00320300(*(undefined4 *)(lVar21 + lVar12),auStack_e4);
            sVar13 = strlen((char *)local_f0);
            local_e8 = (uint)sVar13;
                    /* try { // try from 00354694 to 0035469b has its CatchHandler @ 00354a08 */
            local_120 = (char *)FUN_00320300(*(int *)(lVar21 + lVar12 + 4) + -1,auStack_114);
            sVar13 = strlen(local_120);
            local_150 = 0;
            local_118 = (undefined4)sVar13;
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
                    /* try { // try from 003546d8 to 0035471b has its CatchHandler @ 00354a04 */
            FUN_003c6830(local_288,"Extension range $0 to $1 overlaps with reserved range $2 to $3."
                         ,&local_90,&local_c0,&local_f0,&local_120,&local_150,&local_180,&local_1b0,
                         &local_1e0,&local_210,&local_240);
                    /* try { // try from 0035471c to 00354733 has its CatchHandler @ 003549f4 */
            FUN_0034db00(param_1,uVar10,uVar9,1,local_288);
            if ((local_288[0] & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_278);
            }
            iVar18 = *(int *)((long)param_4 + 0x84);
          }
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 8;
        } while (lVar11 < iVar18);
        iVar20 = *(int *)((long)param_4 + 0x7c);
      }
      uVar24 = uVar19 + 1;
      if ((long)uVar24 < (long)iVar20) {
        lVar12 = lVar16;
        lVar11 = local_2c0;
        do {
          lVar21 = param_4[9] + lVar12;
          if ((*(int *)(lVar21 + 0x10) < piVar1[1]) && (*piVar1 < *(int *)(lVar21 + 0x14))) {
            uVar10 = param_4[1];
                    /* try { // try from 003547b8 to 003547c3 has its CatchHandler @ 003549d8 */
            uVar9 = FUN_00366308(param_2 + 0x60,uVar19 & 0xffffffff);
                    /* try { // try from 003547cc to 003547d3 has its CatchHandler @ 003549d4 */
            local_90 = (byte *)FUN_00320300(*(undefined4 *)(lVar21 + 0x10),(long)&uStack_88 + 4);
            sVar13 = strlen((char *)local_90);
            uStack_88 = CONCAT44(uStack_88._4_4_,(int)sVar13);
                    /* try { // try from 003547e8 to 003547ef has its CatchHandler @ 003549d0 */
            local_c0 = (char *)FUN_00320300(*(int *)(lVar21 + 0x14) + -1,auStack_b4);
            sVar13 = strlen(local_c0);
            local_b8 = (undefined4)sVar13;
                    /* try { // try from 00354800 to 00354807 has its CatchHandler @ 003549dc */
            local_f0 = (byte *)FUN_00320300(*piVar1,auStack_e4);
            sVar13 = strlen((char *)local_f0);
            local_e8 = (uint)sVar13;
                    /* try { // try from 0035481c to 00354823 has its CatchHandler @ 003549cc */
            local_120 = (char *)FUN_00320300(piVar1[1] + -1,auStack_114);
            sVar13 = strlen(local_120);
            local_150 = 0;
            local_118 = (undefined4)sVar13;
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
                    /* try { // try from 00354860 to 003548a3 has its CatchHandler @ 003549c8 */
            FUN_003c6830(local_288,
                         "Extension range $0 to $1 overlaps with already-defined range $2 to $3.",
                         &local_90,&local_c0,&local_f0,&local_120,&local_150,&local_180,&local_1b0,
                         &local_1e0,&local_210,&local_240);
                    /* try { // try from 003548a4 to 003548bb has its CatchHandler @ 003549b8 */
            FUN_0034db00(param_1,uVar10,uVar9,1,local_288);
            if ((local_288[0] & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_278);
            }
            iVar20 = *(int *)((long)param_4 + 0x7c);
          }
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 0x10;
        } while (lVar11 < iVar20);
      }
      local_2c0 = local_2c0 + 1;
      lVar16 = lVar16 + 0x10;
      uVar19 = uVar24;
    } while ((long)uVar24 < (long)iVar20);
  }
  puVar17 = PTR_LAB_04373088;
  if (local_260 != (long *)0x0) {
    bVar4 = *(byte *)(local_260 + 2);
    plVar8 = (long *)*local_260;
    plVar6 = local_260;
    while( true ) {
      plVar5 = plVar8;
      if ((bVar4 & 1) != 0) {
        FUN_002e2ea0(puVar17,plVar6[4]);
      }
      FUN_002e2ea0(puVar17,plVar6);
      if (plVar5 == (long *)0x0) break;
      bVar4 = *(byte *)(plVar5 + 2);
      plVar8 = (long *)*plVar5;
      plVar6 = plVar5;
    }
  }
  uVar19 = local_270;
  local_270 = 0;
  if (uVar19 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


