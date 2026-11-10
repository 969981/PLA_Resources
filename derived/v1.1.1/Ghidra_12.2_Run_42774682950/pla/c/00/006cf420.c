/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006cf420; name: FUN_006cf420
 */


void FUN_006cf420(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined *local_200;
  undefined4 local_1f8;
  uint local_1f4;
  undefined8 local_1f0;
  long local_1e8;
  undefined1 local_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
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
  undefined8 uStack_108;
  undefined8 local_100;
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
  undefined1 *local_60;
  undefined1 local_54 [4];
  
  puVar3 = PTR_DAT_04376088;
  puVar1 = PTR_DAT_04376088 + 0x10;
  param_1[1] = (long)(PTR_DAT_04376088 + 0x60);
  *param_1 = (long)puVar1;
  local_200 = DAT_0388a6f8;
  param_1[2] = (long)(puVar3 + 0x88);
  param_1[3] = param_4;
  local_1f8 = 0;
  local_1f0 = 0;
                    /* try { // try from 006cf484 to 006cf48f has its CatchHandler @ 006cf6f8 */
  FUN_002b8b20(param_1 + 4,&local_200);
  plVar4 = param_1 + 0xf;
                    /* try { // try from 006cf49c to 006cf4b3 has its CatchHandler @ 006cf6e4 */
  (**(code **)(*param_2 + 0x18))(plVar4,param_2,param_3,param_4,param_1 + 4);
  puVar3 = PTR_DAT_043757d0;
  puVar1 = PTR_DAT_043734a0;
  if (*(char *)(param_1[3] + 0x130) != '\0') {
    return;
  }
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_200 = PTR_DAT_043757d0 + 0x10;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  local_1a8 = 0xffffffff;
  local_190 = 0;
  local_180 = PTR_DAT_043734a0 + 0x10;
  local_158 = 0;
  uStack_150 = 0;
  local_160 = 0;
  local_168 = 0;
  local_120 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_100 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_178 = 0;
  local_173 = 0;
  uStack_170 = 0;
  local_78 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  local_1e8 = param_4 + 0x98;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_1f4 = (uint)*(byte *)(param_4 + 1) << 5 | (uint)*(byte *)(param_4 + 3) << 4 |
              (uint)*(byte *)(param_4 + 4) << 6 | (uint)*(byte *)(param_4 + 2) << 7 |
              (uint)*(byte *)(param_4 + 0x130) << 8;
  local_1d8 = 0;
  local_1f8 = CONCAT22((short)((uint)local_1f8 >> 0x10),0x100);
  local_1d0 = (undefined1 *)&local_200;
  puStack_1c8 = (undefined1 *)&local_200;
                    /* try { // try from 006cf598 to 006cf5bf has its CatchHandler @ 006cf6e0 */
  (**(code **)(*(long *)*plVar4 + 0x10))((long *)*plVar4,&local_200,plVar4);
  puVar2 = PTR_DAT_04373140;
  auVar7 = (**(code **)(**(long **)PTR_DAT_04373140 + 0x1b0))(*(long **)PTR_DAT_04373140,1);
  do {
    plVar4 = *(long **)puVar2;
                    /* try { // try from 006cf5dc to 006cf61b has its CatchHandler @ 006cf6fc */
    uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,param_1[6],&local_200,auVar7._0_8_,auVar7._8_8_,0);
    local_54[0] = uVar5 >> 0x20 != 0;
    local_60 = (undefined1 *)&local_200;
    uVar5 = (**(code **)(local_200 + 0x10))(&local_200,&local_60,local_54);
  } while ((uVar5 & 1) == 0);
  if ((undefined **)local_60 != &local_200) {
    plVar4 = *(long **)puVar2;
                    /* try { // try from 006cf6c4 to 006cf6db has its CatchHandler @ 006cf6e0 */
    (**(code **)(*plVar4 + 0x10))
              (plVar4,"ignored == tag",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/completion_queue_impl.h",
               0x144);
  }
  local_200 = puVar3 + 0x10;
  local_180 = puVar1 + 0x10;
  if (alStack_f0 == local_d0) {
    pcVar6 = *(code **)(*local_d0 + 0x20);
  }
  else {
    if (local_d0 == (long *)0x0) goto LAB_006cf66c;
    pcVar6 = *(code **)(*local_d0 + 0x28);
  }
  (*pcVar6)();
LAB_006cf66c:
  if (alStack_140 == local_120) {
    pcVar6 = *(code **)(*local_120 + 0x20);
  }
  else {
    if (local_120 == (long *)0x0) {
      return;
    }
    pcVar6 = *(code **)(*local_120 + 0x28);
  }
  (*pcVar6)();
  return;
}


