/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006fabf8; name: FUN_006fabf8
 */


void FUN_006fabf8(undefined4 *param_1,long param_2)

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
  undefined4 local_1c8 [2];
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long *plStack_1a8;
  char local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180;
  undefined4 local_178 [2];
  ulong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [80];
  undefined *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined **local_d0;
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0060fb2c(auStack_a0,param_2);
  uStack_e8 = FUN_00612290();
  local_f0 = PTR_DAT_043763d0 + 0x10;
  local_d0 = &local_f0;
                    /* try { // try from 006fac40 to 006fac4b has its CatchHandler @ 006faee0 */
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
                    /* try { // try from 006fae54 to 006fae6b has its CatchHandler @ 006fae70 */
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
                    /* try { // try from 006facd4 to 006facdf has its CatchHandler @ 006faec4 */
  FUN_0071f450(auStack_140,0);
  uStack_148 = 0;
  local_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
  local_158 = 0;
  local_160 = 0;
  local_178[0] = 0;
                    /* try { // try from 006facf8 to 006fad03 has its CatchHandler @ 006fae84 */
  FUN_006faef4(*(undefined8 *)(param_2 + 0x58),auStack_140,local_178,local_b0);
  FUN_002937d4(&local_f0);
  FUN_006efdc4(local_1c8,local_178);
  uVar9 = local_1b0;
  uVar8 = uStack_1b8;
  uVar7 = local_1c0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = local_1c8[0];
  uStack_1b8 = 0;
  local_1b0 = 0;
  local_1c0 = 0;
  *(long **)(param_1 + 8) = plStack_1a8;
  *(undefined8 *)(param_1 + 6) = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(ulong *)(param_1 + 2) = uVar7;
  if (local_1a0 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_188;
    *(undefined8 *)(param_1 + 0xe) = local_190;
    *(undefined8 **)(param_1 + 0xc) = local_198;
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_180;
    if (local_180 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_198 = &local_190;
      local_190 = 0;
      local_180 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_006fa4d8(param_1 + 0x14,auStack_140);
  if (local_1a0 != '\0') {
    FUN_02767254(&local_198,local_190);
  }
  if ((local_1c0 & 1) != 0) {
    (**(code **)(*plStack_1a8 + 0x18))(plStack_1a8,local_1b0,local_1c0 & 0xfffffffffffffffe,1);
  }
  if ((local_158 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_148);
  }
  if ((local_170 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_160);
  }
  FUN_0071f4e4(auStack_140);
  FUN_00293ad8(&local_f0);
  FUN_0060fb78(auStack_a0);
  return;
}


