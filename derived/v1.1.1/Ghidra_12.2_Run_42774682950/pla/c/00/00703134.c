/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00703134; name: FUN_00703134
 */


void FUN_00703134(undefined4 *param_1,long param_2)

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
  undefined4 local_1d8 [2];
  ulong local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long *plStack_1b8;
  char local_1b0;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined4 local_188 [2];
  ulong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulong local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined8 uStack_148;
  long local_140;
  undefined **local_130;
  undefined1 auStack_f0 [64];
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0060fb2c(auStack_a0,param_2);
  uStack_148 = FUN_00612290();
  local_150 = PTR_DAT_04376488 + 0x10;
  local_130 = &local_150;
                    /* try { // try from 0070317c to 00703187 has its CatchHandler @ 0070341c */
  local_140 = param_2 + 0x60;
  FUN_0060fd20(auStack_a0,&local_150);
  if (local_130 != (undefined **)0x0) {
    if (local_130 == &local_150) {
      pcVar10 = *(code **)(*local_130 + 0x10);
    }
    else {
      pcVar10 = *(code **)(*local_130 + 0x18);
    }
    (*pcVar10)();
  }
  lVar12 = *(long *)(param_2 + 0x58);
  if (*(char *)(lVar12 + 0x40) != '\0') {
                    /* try { // try from 00703390 to 007033a7 has its CatchHandler @ 007033ac */
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
                    /* try { // try from 00703210 to 0070321b has its CatchHandler @ 00703400 */
  FUN_007205c4(&local_150,0);
  uStack_158 = 0;
  local_160 = 0;
  uStack_178 = 0;
  local_180 = 0;
  local_168 = 0;
  local_170 = 0;
  local_188[0] = 0;
                    /* try { // try from 00703234 to 0070323f has its CatchHandler @ 007033c0 */
  FUN_00703430(*(undefined8 *)(param_2 + 0x58),&local_150,local_188,local_b0);
  FUN_002937d4(auStack_f0);
  FUN_006f5da0(local_1d8,local_188);
  uVar9 = local_1c0;
  uVar8 = uStack_1c8;
  uVar7 = local_1d0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = local_1d8[0];
  uStack_1c8 = 0;
  local_1c0 = 0;
  local_1d0 = 0;
  *(long **)(param_1 + 8) = plStack_1b8;
  *(undefined8 *)(param_1 + 6) = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(ulong *)(param_1 + 2) = uVar7;
  if (local_1b0 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_198;
    *(undefined8 *)(param_1 + 0xe) = local_1a0;
    *(undefined8 **)(param_1 + 0xc) = local_1a8;
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_190;
    if (local_190 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_1a8 = &local_1a0;
      local_1a0 = 0;
      local_190 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_00702a18(param_1 + 0x14,&local_150);
  if (local_1b0 != '\0') {
    FUN_02767254(&local_1a8,local_1a0);
  }
  if ((local_1d0 & 1) != 0) {
    (**(code **)(*plStack_1b8 + 0x18))(plStack_1b8,local_1c0,local_1d0 & 0xfffffffffffffffe,1);
  }
  if ((local_168 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_158);
  }
  if ((local_180 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_170);
  }
  FUN_00720710(&local_150);
  FUN_00293ad8(auStack_f0);
  FUN_0060fb78(auStack_a0);
  return;
}


