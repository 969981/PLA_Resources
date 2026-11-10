/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00623034; name: FUN_00623034
 */


void FUN_00623034(undefined4 *param_1,long param_2)

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
  undefined4 local_190 [2];
  ulong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long *plStack_170;
  char local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  long local_148;
  undefined4 local_140 [2];
  ulong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined **local_d0;
  undefined8 local_b0;
  undefined1 auStack_a0 [112];
  
  FUN_0060fb2c(auStack_a0,param_2);
  uStack_e8 = FUN_00612290();
  local_f0 = PTR_DAT_04375520 + 0x10;
  local_d0 = &local_f0;
                    /* try { // try from 0062307c to 00623087 has its CatchHandler @ 00623324 */
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
                    /* try { // try from 00623298 to 006232af has its CatchHandler @ 006232b4 */
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
                    /* try { // try from 00623110 to 0062311b has its CatchHandler @ 00623308 */
  FUN_0062cbf4(auStack_108,0);
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = 0;
  local_140[0] = 0;
  uStack_110 = 0;
  local_118 = 0;
                    /* try { // try from 00623138 to 00623143 has its CatchHandler @ 006232c8 */
  FUN_00623338(*(undefined8 *)(param_2 + 0x58),auStack_108,local_140,local_b0);
  FUN_002937d4(&local_f0);
  FUN_00623488(local_190,local_140);
  uVar9 = local_178;
  uVar8 = uStack_180;
  uVar7 = local_188;
  *param_1 = local_190[0];
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(long **)(param_1 + 8) = plStack_170;
  *(undefined8 *)(param_1 + 6) = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar8;
  *(ulong *)(param_1 + 2) = uVar7;
  if (local_168 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_150;
    *(undefined8 *)(param_1 + 0xe) = local_158;
    *(undefined8 **)(param_1 + 0xc) = local_160;
    plVar1 = (long *)(param_1 + 0xe);
    *(long *)(param_1 + 0x12) = local_148;
    if (local_148 == 0) {
      *(long **)(param_1 + 0xc) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      local_160 = &local_158;
      local_158 = 0;
      local_148 = 0;
    }
    *(undefined1 *)(param_1 + 10) = 1;
  }
  FUN_00622918(param_1 + 0x14,auStack_108);
  if (local_168 != '\0') {
    FUN_02767254(&local_160,local_158);
  }
  if ((local_188 & 1) != 0) {
    (**(code **)(*plStack_170 + 0x18))(plStack_170,local_178,local_188 & 0xfffffffffffffffe,1);
  }
  if ((uStack_120 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,uStack_110);
  }
  if ((local_138 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_128);
  }
  FUN_0062cc10(auStack_108);
  FUN_00293ad8(&local_f0);
  FUN_0060fb78(auStack_a0);
  return;
}


