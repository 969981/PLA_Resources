/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007c6900; name: FUN_007c6900
 */


void FUN_007c6900(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined **local_288;
  byte local_280;
  undefined8 local_270;
  byte local_268;
  undefined8 local_258;
  undefined *local_250;
  undefined4 local_248;
  uint local_244;
  undefined8 local_240;
  long local_238;
  undefined1 local_228;
  undefined8 local_220;
  undefined2 local_218;
  long local_210;
  undefined4 local_208;
  undefined1 local_204;
  long alStack_200 [4];
  long *local_1e0;
  undefined2 local_1d0;
  undefined **local_1c8;
  undefined **ppuStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined *local_180;
  undefined5 uStack_178;
  undefined3 local_173;
  undefined5 uStack_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  long alStack_140 [4];
  long *local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_58;
  undefined1 local_54;
  
  puVar3 = PTR_DAT_043771d0;
  param_1[2] = param_4;
  param_1[1] = (long)(puVar3 + 0x50);
  *param_1 = (long)(puVar3 + 0x10);
  local_248 = 0;
  local_240 = 0;
  local_250 = DAT_0388a6f8;
                    /* try { // try from 007c6964 to 007c696f has its CatchHandler @ 007c6cd4 */
  FUN_002b8b20(param_1 + 3,&local_250);
  plVar1 = param_1 + 0xe;
                    /* try { // try from 007c697c to 007c6993 has its CatchHandler @ 007c6cc0 */
  (**(code **)(*param_2 + 0x18))(plVar1,param_2,param_3,param_4,param_1 + 3);
  puVar4 = PTR_DAT_04375730;
  puVar3 = PTR_DAT_043734a0;
  local_1c8 = &local_250;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_204 = 0;
  local_1e0 = (long *)0x0;
  local_250 = PTR_DAT_04375730 + 0x10;
  local_1a8 = 0;
  local_1d0 = 0;
  local_188 = 0;
  local_1a0 = 0xffffffff;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_180 = PTR_DAT_043734a0 + 0x10;
  local_160 = 0;
  local_168 = 0;
  uStack_178 = 0;
  local_173 = 0;
  uStack_170 = 0;
  local_120 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_110 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_78 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = 0;
  local_238 = param_4 + 0x98;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_244 = (uint)*(byte *)(param_4 + 1) << 5 | (uint)*(byte *)(param_4 + 3) << 4 |
              (uint)*(byte *)(param_4 + 4) << 6 | (uint)*(byte *)(param_4 + 2) << 7 |
              (uint)*(byte *)(param_4 + 0x130) << 8;
  local_228 = 0;
  local_248 = CONCAT22((short)((uint)local_248 >> 0x10),0x100);
  local_58 = 0;
  local_54 = 0;
                    /* try { // try from 007c6a8c to 007c6a9b has its CatchHandler @ 007c6cbc */
  local_220 = param_5;
  ppuStack_1c0 = local_1c8;
  FUN_007c77a0(&local_288,&local_220,param_5,&local_58);
  iVar5 = (int)local_288;
  if ((local_268 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_258);
  }
  if ((local_280 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_270);
  }
  if (iVar5 != 0) {
                    /* try { // try from 007c6c74 to 007c6cb3 has its CatchHandler @ 007c6cd8 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"ops.SendMessagePtr(&request).ok()",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/sync_stream_impl.h",0xfb)
    ;
  }
  local_1d0 = CONCAT11(1,(undefined1)local_1d0);
                    /* try { // try from 007c6af8 to 007c6b1f has its CatchHandler @ 007c6cd8 */
  (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,&local_250,plVar1);
  puVar2 = PTR_DAT_04373140;
  auVar8 = (**(code **)(**(long **)PTR_DAT_04373140 + 0x1b0))(*(long **)PTR_DAT_04373140,1);
  do {
                    /* try { // try from 007c6b3c to 007c6b7b has its CatchHandler @ 007c6cdc */
    uVar6 = (**(code **)(**(long **)puVar2 + 0x48))
                      (*(long **)puVar2,param_1[5],&local_250,auVar8._0_8_,auVar8._8_8_,0);
    local_58 = CONCAT31(local_58._1_3_,uVar6 >> 0x20 != 0);
    local_288 = &local_250;
    uVar6 = (**(code **)(local_250 + 0x10))(&local_250,&local_288,&local_58);
  } while ((uVar6 & 1) == 0);
  if (local_288 != &local_250) {
    (**(code **)(**(long **)puVar2 + 0x10))
              (*(long **)puVar2,"ignored == tag",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/completion_queue_impl.h",
               0x144);
  }
  local_250 = puVar4 + 0x10;
  local_180 = puVar3 + 0x10;
  if (alStack_f0 == local_d0) {
    pcVar7 = *(code **)(*local_d0 + 0x20);
LAB_007c6bc8:
    (*pcVar7)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar7 = *(code **)(*local_d0 + 0x28);
    goto LAB_007c6bc8;
  }
  if (alStack_140 == local_120) {
    pcVar7 = *(code **)(*local_120 + 0x20);
LAB_007c6bf8:
    (*pcVar7)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar7 = *(code **)(*local_120 + 0x28);
    goto LAB_007c6bf8;
  }
  if (alStack_200 == local_1e0) {
    pcVar7 = *(code **)(*local_1e0 + 0x20);
  }
  else {
    if (local_1e0 == (long *)0x0) goto LAB_007c6c2c;
    pcVar7 = *(code **)(*local_1e0 + 0x28);
  }
  (*pcVar7)();
LAB_007c6c2c:
  if (local_210 != 0) {
                    /* try { // try from 007c6c40 to 007c6c43 has its CatchHandler @ 007c6cb8 */
    (**(code **)(**(long **)puVar2 + 0xc0))();
  }
  return;
}


