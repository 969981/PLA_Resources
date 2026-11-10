/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0029fd54; name: FUN_0029fd54
 */


void FUN_0029fd54(undefined4 *param_1,long param_2)

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
  undefined4 local_1a0 [2];
  ulong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  long *plStack_180;
  char local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  undefined4 local_150 [2];
  ulong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [40];
  undefined *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined **local_d0;
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0060fb2c(auStack_a0,param_2);
  uStack_e8 = FUN_00612290();
  local_f0 = PTR_DAT_04373278 + 0x10;
  local_d0 = &local_f0;
                    /* try { // try from 0029fd9c to 0029fda7 has its CatchHandler @ 002a0044 */
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
                    /* try { // try from 0029ffb8 to 0029ffcf has its CatchHandler @ 0029ffd4 */
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
                    /* try { // try from 0029fe30 to 0029fe3b has its CatchHandler @ 002a0028 */
  FUN_002ae8b0(auStack_118,0);
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  local_138 = 0;
  local_150[0] = 0;
  uStack_120 = 0;
  local_128 = 0;
                    /* try { // try from 0029fe58 to 0029fe63 has its CatchHandler @ 0029ffe8 */
  FUN_002a0058(*(undefined8 *)(param_2 + 0x58),auStack_118,local_150,local_b0);
  FUN_002937d4(&local_f0);
  FUN_00293940(local_1a0,local_150);
  uVar9 = local_188;
  uVar8 = uStack_190;
  uVar7 = local_198;
  *param_1 = local_1a0[0];
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(long **)(param_1 + 8) = plStack_180;
  *(undefined8 *)(param_1 + 6) = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(ulong *)(param_1 + 2) = uVar7;
  if (local_178 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_160;
    *(undefined8 *)(param_1 + 0xe) = local_168;
    *(undefined8 **)(param_1 + 0xc) = local_170;
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_158;
    if (local_158 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_170 = &local_168;
      local_168 = 0;
      local_158 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_0029f638(param_1 + 0x14,auStack_118);
  if (local_178 != '\0') {
    FUN_02767254(&local_170,local_168);
  }
  if ((local_198 & 1) != 0) {
    (**(code **)(*plStack_180 + 0x18))(plStack_180,local_188,local_198 & 0xfffffffffffffffe,1);
  }
  if ((uStack_130 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_120);
  }
  if ((local_148 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_138);
  }
  FUN_002aea10(auStack_118);
  FUN_00293ad8(&local_f0);
  FUN_0060fb78(auStack_a0);
  return;
}


