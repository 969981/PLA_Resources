/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0029ba58; name: FUN_0029ba58
 */


void FUN_0029ba58(undefined4 *param_1,long param_2)

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
  undefined4 local_198 [2];
  ulong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long *plStack_178;
  char local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  undefined4 local_148 [2];
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [32];
  undefined *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined **local_d0;
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0060fb2c(auStack_a0,param_2);
  uStack_e8 = FUN_00612290();
  local_f0 = PTR_DAT_04373208 + 0x10;
  local_d0 = &local_f0;
                    /* try { // try from 0029baa0 to 0029baab has its CatchHandler @ 0029bd40 */
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
                    /* try { // try from 0029bcb4 to 0029bccb has its CatchHandler @ 0029bcd0 */
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
                    /* try { // try from 0029bb34 to 0029bb3f has its CatchHandler @ 0029bd24 */
  FUN_002b0074(auStack_110,0);
  uStack_118 = 0;
  local_120 = 0;
  uStack_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_148[0] = 0;
                    /* try { // try from 0029bb58 to 0029bb63 has its CatchHandler @ 0029bce4 */
  FUN_0029bd54(*(undefined8 *)(param_2 + 0x58),auStack_110,local_148,local_b0);
  FUN_002937d4(&local_f0);
  FUN_00293940(local_198,local_148);
  uVar9 = local_180;
  uVar8 = uStack_188;
  uVar7 = local_190;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = local_198[0];
  uStack_188 = 0;
  local_180 = 0;
  local_190 = 0;
  *(long **)(param_1 + 8) = plStack_178;
  *(undefined8 *)(param_1 + 6) = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(ulong *)(param_1 + 2) = uVar7;
  if (local_170 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_158;
    *(undefined8 *)(param_1 + 0xe) = local_160;
    *(undefined8 **)(param_1 + 0xc) = local_168;
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_150;
    if (local_150 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_168 = &local_160;
      local_160 = 0;
      local_150 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_0029b338(param_1 + 0x14,auStack_110);
  if (local_170 != '\0') {
    FUN_02767254(&local_168,local_160);
  }
  if ((local_190 & 1) != 0) {
    (**(code **)(*plStack_178 + 0x18))(plStack_178,local_180,local_190 & 0xfffffffffffffffe,1);
  }
  if ((local_128 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_118);
  }
  if ((local_140 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_130);
  }
  FUN_002b0180(auStack_110);
  FUN_00293ad8(&local_f0);
  FUN_0060fb78(auStack_a0);
  return;
}


