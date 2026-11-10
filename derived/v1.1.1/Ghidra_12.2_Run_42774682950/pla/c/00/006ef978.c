/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006ef978; name: FUN_006ef978
 */


void FUN_006ef978(undefined4 *param_1,long param_2)

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
  undefined4 local_1e8 [2];
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  long *plStack_1c8;
  char local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  undefined4 local_198 [2];
  ulong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_160;
  undefined8 uStack_158;
  long local_150;
  undefined **local_140;
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0060fb2c(auStack_a0,param_2);
  uStack_158 = FUN_00612290();
  local_160 = PTR_DAT_043762a8 + 0x10;
  local_140 = &local_160;
                    /* try { // try from 006ef9c0 to 006ef9cb has its CatchHandler @ 006efc60 */
  local_150 = param_2 + 0x60;
  FUN_0060fd20(auStack_a0,&local_160);
  if (local_140 != (undefined **)0x0) {
    if (local_140 == &local_160) {
      pcVar10 = *(code **)(*local_140 + 0x10);
    }
    else {
      pcVar10 = *(code **)(*local_140 + 0x18);
    }
    (*pcVar10)();
  }
  lVar12 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar12 + 0x40) != '\0') {
                    /* try { // try from 006efbd4 to 006efbeb has its CatchHandler @ 006efbf0 */
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
  FUN_002934f8(auStack_f0,param_2 + 0x48);
                    /* try { // try from 006efa54 to 006efa5f has its CatchHandler @ 006efc44 */
  FUN_00718c20(&local_160,0);
  uStack_168 = 0;
  local_170 = 0;
  uStack_188 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  local_198[0] = 0;
                    /* try { // try from 006efa78 to 006efa83 has its CatchHandler @ 006efc04 */
  FUN_006efc74(*(undefined8 *)(param_2 + 0x58),&local_160,local_198,local_b0);
  FUN_002937d4(auStack_f0);
  FUN_006efdc4(local_1e8,local_198);
  uVar9 = local_1d0;
  uVar8 = uStack_1d8;
  uVar7 = local_1e0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = local_1e8[0];
  uStack_1d8 = 0;
  local_1d0 = 0;
  local_1e0 = 0;
  *(long **)(param_1 + 8) = plStack_1c8;
  *(undefined8 *)(param_1 + 6) = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(ulong *)(param_1 + 2) = uVar7;
  if (local_1c0 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_1a8;
    *(undefined8 *)(param_1 + 0xe) = local_1b0;
    *(undefined8 **)(param_1 + 0xc) = local_1b8;
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_1a0;
    if (local_1a0 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_1b8 = &local_1b0;
      local_1b0 = 0;
      local_1a0 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_006ef258(param_1 + 0x14,&local_160);
  if (local_1c0 != '\0') {
    FUN_02767254(&local_1b8,local_1b0);
  }
  if ((local_1e0 & 1) != 0) {
    (**(code **)(*plStack_1c8 + 0x18))(plStack_1c8,local_1d0,local_1e0 & 0xfffffffffffffffe,1);
  }
  if ((local_178 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_168);
  }
  if ((local_190 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_180);
  }
  FUN_00718d5c(&local_160);
  FUN_00293ad8(auStack_f0);
  FUN_0060fb78(auStack_a0);
  return;
}


