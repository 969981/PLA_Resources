/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006c14e0; name: FUN_006c14e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c14e0(int *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  byte *pbVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined **local_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 *local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined *local_350;
  undefined4 local_348;
  uint local_344;
  undefined8 local_340;
  undefined1 *local_338;
  undefined1 local_328;
  undefined8 local_320;
  undefined2 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined1 local_304;
  undefined8 local_2e0;
  undefined1 local_2d0;
  undefined1 *local_2c8;
  char local_2c0;
  undefined8 local_2b8;
  undefined7 uStack_2b0;
  undefined1 local_2a9;
  undefined1 uStack_2a8;
  undefined2 uStack_2a7;
  undefined2 local_2a5;
  undefined1 local_2a0;
  undefined1 *local_298;
  undefined1 *puStack_290;
  int *local_288;
  undefined8 uStack_280;
  undefined **local_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined **local_250;
  undefined **local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 local_210;
  undefined *local_200;
  undefined5 uStack_1f8;
  undefined3 local_1f3;
  undefined5 uStack_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_150;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long *local_e0 [6];
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined4 local_58;
  undefined1 local_54;
  
  *param_1 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  piVar5 = param_1 + 2;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_348 = 0;
  local_340 = 0;
  local_350 = DAT_0388a6f8;
                    /* try { // try from 006c153c to 006c1547 has its CatchHandler @ 006c1a30 */
  FUN_002b8b20(auStack_b0,&local_350);
                    /* try { // try from 006c1550 to 006c1567 has its CatchHandler @ 006c1a18 */
  (**(code **)(*param_2 + 0x18))(local_e0,param_2,param_3,param_4,auStack_b0);
  local_250 = &local_350;
  local_348 = local_348 & 0xffff0000;
  local_328 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_304 = 0;
  local_2e0 = 0;
  local_2d0 = 0;
  local_2c8 = (undefined1 *)0x0;
  local_2c0 = '\0';
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a9 = 0;
  uStack_2a8 = 0;
  uStack_2a7 = 0;
  local_2a5 = 0;
  local_2a0 = 0;
  local_288 = (int *)0x0;
  uStack_280 = 0;
  local_350 = PTR_DAT_04375fb0 + 0x10;
  local_228 = 0xffffffff;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_200 = PTR_DAT_043734a0 + 0x10;
  local_210 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1a0 = 0;
  local_150 = 0;
  uStack_1f0 = 0;
  local_190 = 0;
  local_180 = 0;
  local_188 = 0;
  local_58 = 0;
  local_54 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1f8 = 0;
  local_1f3 = 0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_110 = 0;
  local_118 = 0;
  local_f8 = 0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_130 = 0;
  local_138 = 0;
                    /* try { // try from 006c1648 to 006c165b has its CatchHandler @ 006c1a14 */
  local_320 = param_5;
  local_248 = local_250;
  FUN_006c28c0(&local_388,&local_320,param_5,&local_58);
  *param_1 = (int)local_388;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    *(undefined2 *)piVar5 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 6) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 6));
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  *(undefined8 **)(param_1 + 6) = local_370;
  *(undefined8 *)(param_1 + 4) = uStack_378;
  *(ulong *)piVar5 = uStack_380;
  uStack_378 = 0;
  local_370 = (undefined8 *)0x0;
  uStack_380 = 0;
  pbVar4 = (byte *)(param_1 + 8);
  if ((*pbVar4 & 1) == 0) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0xc) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0xc));
      param_1[8] = 0;
      param_1[9] = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xc) = local_358;
  *(undefined8 *)(param_1 + 10) = uStack_360;
  *(undefined8 *)pbVar4 = local_368;
  uStack_360 = 0;
  local_358 = 0;
  local_368 = 0;
  if ((uStack_380 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_370);
  }
  if (*param_1 == 0) {
    local_338 = param_4 + 0x98;
    local_2c8 = param_4 + 0xb0;
    local_344 = (uint)(byte)param_4[1] << 5 | (uint)(byte)param_4[3] << 4 |
                (uint)(byte)param_4[4] << 6 | (uint)(byte)param_4[2] << 7 |
                (uint)(byte)param_4[0x130] << 8;
    local_328 = 0;
    local_348._0_2_ = CONCAT11(1,(undefined1)local_348);
    *param_4 = 1;
    puVar1 = PTR_DAT_04373140;
    puStack_290 = param_4 + 0xe8;
    uStack_2a8 = 1;
    local_2a5 = CONCAT11(1,(undefined1)local_2a5);
                    /* try { // try from 006c17ac to 006c17ef has its CatchHandler @ 006c1a40 */
    local_2b8 = param_6;
    local_298 = param_4;
    local_288 = param_1;
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x138))(&local_388);
    uStack_268 = uStack_380;
    local_270 = local_388;
    uStack_258 = local_370;
    uStack_260 = uStack_378;
    (**(code **)(*local_e0[0] + 0x10))(local_e0[0],&local_350,local_e0);
    auVar10 = (**(code **)(**(long **)puVar1 + 0x1b0))(*(long **)puVar1,1);
    do {
                    /* try { // try from 006c180c to 006c184b has its CatchHandler @ 006c1a44 */
      uVar2 = (**(code **)(**(long **)puVar1 + 0x48))
                        (*(long **)puVar1,local_a0,&local_350,auVar10._0_8_,auVar10._8_8_,0);
      local_58 = CONCAT31(local_58._1_3_,uVar2 >> 0x20 != 0);
      local_388 = &local_350;
      uVar2 = (**(code **)(local_350 + 0x10))(&local_350,&local_388,&local_58);
    } while ((uVar2 & 1) == 0);
    if (local_388 != &local_350) {
                    /* try { // try from 006c19f8 to 006c1a0f has its CatchHandler @ 006c1a40 */
      (**(code **)(**(long **)puVar1 + 0x10))
                (*(long **)puVar1,"ignored == tag",
                 "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/completion_queue_impl.h"
                 ,0x144);
    }
    puVar1 = PTR_FUN_04373078;
    if ((local_2c0 == '\0') && (*param_1 == 0)) {
      pcVar3 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
      uVar8 = s_No_message_returned_for_unary_re_0390f940._16_8_;
      uVar7 = s_No_message_returned_for_unary_re_0390f940._0_8_;
      uVar6 = CONCAT35(s_No_message_returned_for_unary_re_0390f940._29_3_,
                       s_No_message_returned_for_unary_re_0390f940._24_5_);
      *(undefined8 *)(pcVar3 + 8) = s_No_message_returned_for_unary_re_0390f940._8_8_;
      *(undefined8 *)pcVar3 = uVar7;
      *(undefined8 *)(pcVar3 + 0x18) = uVar6;
      *(undefined8 *)(pcVar3 + 0x10) = uVar8;
      pcVar3[0x25] = '\0';
      *(ulong *)(pcVar3 + 0x1d) =
           CONCAT53(s_No_message_returned_for_unary_re_0390f940._32_5_,
                    s_No_message_returned_for_unary_re_0390f940._29_3_);
      local_388 = (undefined **)CONCAT44(local_388._4_4_,0xc);
      local_370 = (undefined8 *)FUN_002e2e80(puVar1,0x30);
      uStack_378 = _UNK_03889448;
      uStack_380 = _DAT_03889440;
      uVar7 = *(undefined8 *)(pcVar3 + 8);
      uVar6 = *(undefined8 *)pcVar3;
      uVar9 = *(undefined8 *)(pcVar3 + 0x18);
      uVar8 = *(undefined8 *)(pcVar3 + 0x10);
      *(undefined8 *)((long)local_370 + 0x1d) = *(undefined8 *)(pcVar3 + 0x1d);
      local_370[1] = uVar7;
      *local_370 = uVar6;
      local_370[3] = uVar9;
      local_370[2] = uVar8;
      *(undefined1 *)((long)local_370 + 0x25) = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_358 = 0;
      *param_1 = (int)local_388;
      if ((*(byte *)(param_1 + 2) & 1) == 0) {
        *(undefined2 *)piVar5 = 0;
      }
      else {
        **(undefined1 **)(param_1 + 6) = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        if ((*(byte *)(param_1 + 2) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 6));
          param_1[2] = 0;
          param_1[3] = 0;
        }
      }
      *(undefined8 **)(param_1 + 6) = local_370;
      *(undefined8 *)(param_1 + 4) = uStack_378;
      *(ulong *)piVar5 = uStack_380;
      uStack_378 = 0;
      local_370 = (undefined8 *)0x0;
      uStack_380 = 0;
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0xc) = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        if ((*(byte *)(param_1 + 8) & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0xc));
          param_1[8] = 0;
          param_1[9] = 0;
        }
      }
      *(undefined8 *)(param_1 + 0xc) = local_358;
      *(undefined8 *)(param_1 + 10) = uStack_360;
      *(undefined8 *)pbVar4 = local_368;
      uStack_360 = 0;
      local_358 = 0;
      local_368 = 0;
      if ((uStack_380 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_370);
      }
      FUN_002e2ea0(PTR_LAB_04373088,pcVar3);
    }
  }
  FUN_006c1a98(&local_350);
  FUN_002b8e0c(auStack_b0);
  return;
}


