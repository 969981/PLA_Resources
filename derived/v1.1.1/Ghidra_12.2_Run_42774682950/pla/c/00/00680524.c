/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00680524; name: FUN_00680524
 */


void FUN_00680524(undefined4 *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined4 local_1b0 [2];
  ulong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long *plStack_190;
  char local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_168;
  undefined4 local_160 [2];
  ulong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulong uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [56];
  undefined *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined **local_d0;
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0060fb2c(auStack_a0,param_2);
  uStack_e8 = FUN_00612290();
  local_f0 = PTR_DAT_04375af0 + 0x10;
  local_d0 = &local_f0;
                    /* try { // try from 0068056c to 00680577 has its CatchHandler @ 00680814 */
  local_e0 = param_2 + 0x60;
  FUN_0060fd20(auStack_a0,&local_f0);
  if (local_d0 != (undefined **)0x0) {
    if (local_d0 == &local_f0) {
      pcVar10 = *(code **)(*local_d0 + 0x10);
    }
    else {
      pcVar10 = *(code **)(*local_d0 + 0x18);
    }
    (*pcVar10)();
  }
  lVar12 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar12 + 0x40) != '\0') {
                    /* try { // try from 00680788 to 0068079f has its CatchHandler @ 006807a4 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"!started_",
               "external/com_google_grpc_base/include\\grpcpp/impl/codegen/async_unary_call_impl.h",
               0x6e);
  }
  lVar11 = *(long *)(lVar12 + 8);
  *(undefined1 *)(lVar12 + 0x40) = 1;
  bVar2 = *(byte *)(lVar11 + 1);
  bVar3 = *(byte *)(lVar11 + 3);
  bVar4 = *(byte *)(lVar11 + 4);
  bVar5 = *(byte *)(lVar11 + 2);
  bVar6 = *(byte *)(lVar11 + 0x130);
  *(undefined1 *)(lVar12 + 0x59) = 1;
  *(undefined1 *)(lVar12 + 0x78) = 0;
  *(long *)(lVar12 + 0x68) = lVar11 + 0x98;
  *(uint *)(lVar12 + 0x5c) =
       (uint)bVar2 << 5 | (uint)bVar3 << 4 | (uint)bVar4 << 6 | (uint)bVar5 << 7 | (uint)bVar6 << 8;
  FUN_002934f8(&local_f0,param_2 + 0x48);
                    /* try { // try from 00680600 to 0068060b has its CatchHandler @ 006807f8 */
  FUN_0068782c(auStack_128,0);
  uStack_150 = 0;
  local_158 = 0;
  uStack_140 = 0;
  local_148 = 0;
  local_160[0] = 0;
  uStack_130 = 0;
  local_138 = 0;
                    /* try { // try from 00680628 to 00680633 has its CatchHandler @ 006807b8 */
  FUN_00680828(*(undefined8 *)(param_2 + 0x58),auStack_128,local_160,local_b0);
  FUN_002937d4(&local_f0);
  FUN_0064c67c(local_1b0,local_160);
  uVar9 = local_198;
  uVar8 = uStack_1a0;
  uVar7 = local_1a8;
  *param_1 = local_1b0[0];
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(long **)(param_1 + 8) = plStack_190;
  *(undefined8 *)(param_1 + 6) = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(ulong *)(param_1 + 2) = uVar7;
  if (local_188 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_170;
    *(undefined8 *)(param_1 + 0xe) = local_178;
    *(undefined8 **)(param_1 + 0xc) = local_180;
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_168;
    if (local_168 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_180 = &local_178;
      local_178 = 0;
      local_168 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_0067fe08(param_1 + 0x14,auStack_128);
  if (local_188 != '\0') {
    FUN_02767254(&local_180,local_178);
  }
  if ((local_1a8 & 1) != 0) {
    (**(code **)(*plStack_190 + 0x18))(plStack_190,local_198,local_1a8 & 0xfffffffffffffffe,1);
  }
  if ((uStack_140 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_130);
  }
  if ((local_158 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_148);
  }
  FUN_00687950(auStack_128);
  FUN_00293ad8(&local_f0);
  FUN_0060fb78(auStack_a0);
  return;
}


