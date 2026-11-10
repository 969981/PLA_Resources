/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d18d0; name: FUN_006d18d0
 */


void FUN_006d18d0(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  code *pcVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *local_140;
  long *plStack_138;
  undefined **local_120;
  undefined *local_110;
  long *plStack_108;
  undefined **local_f0;
  undefined *local_e0;
  long *plStack_d8;
  undefined **local_c0;
  undefined *local_b0;
  long *plStack_a8;
  undefined **local_90;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar3 = PTR_DAT_043760a8;
  *param_1 = (long)(PTR_DAT_043760a0 + 0x10);
  param_1[1] = param_3;
  lVar14 = param_2[1];
  lVar13 = *param_2;
  lVar16 = param_2[3];
  lVar15 = param_2[2];
  lVar18 = param_2[5];
  lVar17 = param_2[4];
  plVar8 = param_1 + 10;
  *plVar8 = (long)(puVar3 + 0x10);
  param_1[8] = param_4;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = (long)plVar8;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x13] = (long)plVar8;
  param_1[0x14] = 0;
  plVar1 = param_1 + 0x4e;
  param_1[3] = lVar14;
  param_1[2] = lVar13;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[5] = lVar16;
  param_1[4] = lVar15;
  param_1[7] = lVar18;
  param_1[6] = lVar17;
  plVar2 = param_1 + 0x9a;
  plVar9 = param_1 + 0x124;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar3 = PTR_DAT_043734a0 + 0x10;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  param_1[0x28] = 0;
  param_1[0x32] = 0;
  param_1[0x2a] = 0;
  param_1[0x1c] = (long)puVar3;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0xed) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x43] = 0;
  param_1[0x48] = 0;
  uVar5 = *(undefined1 *)(param_3 + 0x130);
  *(undefined1 *)(param_1 + 0x4c) = uVar5;
  *(undefined1 *)((long)param_1 + 0x261) = uVar5;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x4e] = (long)(PTR_DAT_04375738 + 0x10);
  param_1[0x59] = (long)plVar1;
  param_1[0x5a] = (long)plVar1;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x62] = (long)puVar3;
  param_1[0x65] = 0;
  *(undefined2 *)(param_1 + 0x66) = 0;
  param_1[0x6e] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((long)param_1 + 0x31d) = 0;
  param_1[99] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x72] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x83] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x89] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  *(undefined2 *)(param_1 + 0x9b) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  *(undefined2 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)((long)param_1 + 0x51c) = 0;
  param_1[0xa8] = 0;
  *(undefined2 *)(param_1 + 0xaa) = 0;
  param_1[0x9a] = (long)(PTR_DAT_04375730 + 0x10);
  param_1[0xab] = (long)plVar2;
  param_1[0xac] = (long)plVar2;
  param_1[0xaf] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb4] = (long)puVar3;
  param_1[0xb7] = 0;
  *(undefined2 *)(param_1 + 0xb8) = 0;
  param_1[0xc0] = 0;
  param_1[0xca] = 0;
  *(undefined8 *)((long)param_1 + 0x5ad) = 0;
  param_1[0xb5] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc4] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd1] = 0;
  param_1[0xd5] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xdb] = 0;
  param_1[0xe0] = 0;
  *(undefined2 *)(param_1 + 0xe5) = 0;
  *(undefined1 *)(param_1 + 0xe9) = 0;
  *(undefined2 *)(param_1 + 0xea) = 0;
  param_1[0xe4] = (long)(PTR_DAT_043760b0 + 0x10);
  param_1[0xeb] = (long)(param_1 + 0xe4);
  param_1[0xec] = (long)(param_1 + 0xe4);
  param_1[0xee] = 0;
  param_1[0xed] = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  param_1[0xf4] = (long)puVar3;
  param_1[0xf7] = 0;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  param_1[0x100] = 0;
  param_1[0x10a] = 0;
  *(undefined8 *)((long)param_1 + 0x7ad) = 0;
  param_1[0xf5] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x104] = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x115] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  param_1[0x11b] = 0;
  param_1[0x120] = 0;
  *(undefined1 *)(param_1 + 0x125) = 0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  *(undefined4 *)((long)param_1 + 0x93f) = 0;
  puVar4 = PTR_DAT_043760b8 + 0x10;
  *(undefined4 *)(param_1 + 0x12e) = 0xffffffff;
  param_1[0x124] = (long)puVar4;
  param_1[0x129] = (long)plVar9;
  param_1[0x12a] = (long)plVar9;
  param_1[300] = 0;
  param_1[299] = 0;
  param_1[0x12d] = 0;
  param_1[0x130] = 0;
  param_1[0x12f] = 0;
  *(undefined1 *)(param_1 + 0x131) = 0;
  param_1[0x132] = (long)puVar3;
  param_1[0x135] = 0;
  *(undefined2 *)(param_1 + 0x136) = 0;
  param_1[0x13e] = 0;
  param_1[0x148] = 0;
  *(undefined8 *)((long)param_1 + 0x99d) = 0;
  param_1[0x133] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x141] = 0;
  param_1[0x140] = 0;
  param_1[0x142] = 0;
  param_1[0x152] = 0;
  param_1[0x151] = 0;
  param_1[0x150] = 0;
  param_1[0x14f] = 0;
  param_1[0x153] = 0;
  param_1[0x14e] = 0;
  param_1[0x14d] = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x159] = 0;
  param_1[0x15e] = 0;
  puVar3 = PTR_DAT_04373140;
  *(undefined2 *)(param_1 + 0x162) = 0;
  *(undefined1 *)((long)param_1 + 0xb12) = 0;
  param_1[0x163] = 3;
  *(undefined1 *)(param_1 + 0x164) = 0;
                    /* try { // try from 006d1ca4 to 006d1cab has its CatchHandler @ 006d21a4 */
  (**(code **)(**(long **)puVar3 + 0x70))(*(long **)puVar3,param_1 + 0x165);
  *(long **)(param_4 + 8) = param_1;
  lVar13 = param_1[4];
  local_b0 = PTR_DAT_043760c0 + 0x10;
  local_90 = &local_b0;
  plStack_a8 = param_1;
  if (param_1[0x43] != 0) {
                    /* try { // try from 006d20f8 to 006d210f has its CatchHandler @ 006d2208 */
    (**(code **)(**(long **)puVar3 + 0x10))
              (*(long **)puVar3,"call_ == nullptr",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/callback_common.h",0xa6);
  }
                    /* try { // try from 006d1ce0 to 006d1ce7 has its CatchHandler @ 006d2208 */
  (**(code **)(**(long **)puVar3 + 0x118))(*(long **)puVar3,lVar13);
  plVar6 = (long *)param_1[0x48];
  param_1[0x43] = lVar13;
  plVar7 = param_1 + 0x44;
  param_1[0x48] = 0;
  if (plVar7 == plVar6) {
    pcVar11 = *(code **)(*plVar6 + 0x20);
LAB_006d1d18:
    (*pcVar11)();
  }
  else if (plVar6 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar6 + 0x28);
    goto LAB_006d1d18;
  }
  if (local_90 == (undefined **)0x0) {
    ppuVar10 = (undefined **)0x0;
    param_1[0x48] = 0;
  }
  else if (&local_b0 == local_90) {
    param_1[0x48] = (long)plVar7;
                    /* try { // try from 006d1d58 to 006d1d63 has its CatchHandler @ 006d2198 */
    (**(code **)(*local_90 + 0x18))(local_90,plVar7);
    ppuVar10 = local_90;
  }
  else {
    param_1[0x48] = (long)local_90;
    local_90 = (undefined **)0x0;
    ppuVar10 = (undefined **)0x0;
  }
  param_1[0x4a] = (long)plVar8;
  puVar4 = PTR_FUN_04373558;
  param_1[0x40] = (long)PTR_FUN_04373558;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (&local_b0 == ppuVar10) {
    pcVar11 = *(code **)(*ppuVar10 + 0x20);
LAB_006d1da4:
    (*pcVar11)();
  }
  else if (ppuVar10 != (undefined **)0x0) {
    pcVar11 = *(code **)(*ppuVar10 + 0x28);
    goto LAB_006d1da4;
  }
  puVar12 = (undefined1 *)param_1[1];
  *puVar12 = 1;
  param_1[0x11] = (long)(puVar12 + 0xb0);
  param_1[0x12] = (long)(param_1 + 0x40);
  lVar13 = param_1[4];
  local_e0 = PTR_DAT_043760c8 + 0x10;
  local_c0 = &local_e0;
  plStack_d8 = param_1;
  if (param_1[0xdb] != 0) {
                    /* try { // try from 006d2120 to 006d2137 has its CatchHandler @ 006d21e4 */
    (**(code **)(**(long **)puVar3 + 0x10))
              (*(long **)puVar3,"call_ == nullptr",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/callback_common.h",0xa6);
  }
                    /* try { // try from 006d1de8 to 006d1def has its CatchHandler @ 006d21e4 */
  (**(code **)(**(long **)puVar3 + 0x118))(*(long **)puVar3,lVar13);
  plVar7 = (long *)param_1[0xe0];
  param_1[0xdb] = lVar13;
  plVar8 = param_1 + 0xdc;
  param_1[0xe0] = 0;
  if (plVar8 == plVar7) {
    pcVar11 = *(code **)(*plVar7 + 0x20);
LAB_006d1e20:
    (*pcVar11)();
  }
  else if (plVar7 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar7 + 0x28);
    goto LAB_006d1e20;
  }
  if (local_c0 == (undefined **)0x0) {
    ppuVar10 = (undefined **)0x0;
    param_1[0xe0] = 0;
  }
  else if (&local_e0 == local_c0) {
    param_1[0xe0] = (long)plVar8;
                    /* try { // try from 006d1e60 to 006d1e6b has its CatchHandler @ 006d2194 */
    (**(code **)(*local_c0 + 0x18))(local_c0,plVar8);
    ppuVar10 = local_c0;
  }
  else {
    param_1[0xe0] = (long)local_c0;
    local_c0 = (undefined **)0x0;
    ppuVar10 = (undefined **)0x0;
  }
  param_1[0xe2] = (long)plVar2;
  param_1[0xd8] = (long)puVar4;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  if (&local_e0 == ppuVar10) {
    pcVar11 = *(code **)(*ppuVar10 + 0x20);
LAB_006d1ea4:
    (*pcVar11)();
  }
  else if (ppuVar10 != (undefined **)0x0) {
    pcVar11 = *(code **)(*ppuVar10 + 0x28);
    goto LAB_006d1ea4;
  }
  param_1[0xab] = (long)(param_1 + 0xd8);
  lVar13 = param_1[4];
  local_110 = PTR_DAT_043760d0 + 0x10;
  local_f0 = &local_110;
  plStack_108 = param_1;
  if (param_1[0x159] != 0) {
                    /* try { // try from 006d2148 to 006d215f has its CatchHandler @ 006d21cc */
    (**(code **)(**(long **)puVar3 + 0x10))
              (*(long **)puVar3,"call_ == nullptr",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/callback_common.h",0xa6);
  }
                    /* try { // try from 006d1edc to 006d1ee3 has its CatchHandler @ 006d21cc */
  (**(code **)(**(long **)puVar3 + 0x118))(*(long **)puVar3,lVar13);
  plVar8 = (long *)param_1[0x15e];
  param_1[0x159] = lVar13;
  plVar2 = param_1 + 0x15a;
  param_1[0x15e] = 0;
  if (plVar2 == plVar8) {
    pcVar11 = *(code **)(*plVar8 + 0x20);
LAB_006d1f14:
    (*pcVar11)();
  }
  else if (plVar8 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar8 + 0x28);
    goto LAB_006d1f14;
  }
  if (local_f0 == (undefined **)0x0) {
    ppuVar10 = (undefined **)0x0;
    param_1[0x15e] = 0;
  }
  else if (&local_110 == local_f0) {
    param_1[0x15e] = (long)plVar2;
                    /* try { // try from 006d1f54 to 006d1f5f has its CatchHandler @ 006d2190 */
    (**(code **)(*local_f0 + 0x18))(local_f0,plVar2);
    ppuVar10 = local_f0;
  }
  else {
    param_1[0x15e] = (long)local_f0;
    local_f0 = (undefined **)0x0;
    ppuVar10 = (undefined **)0x0;
  }
  param_1[0x160] = (long)plVar9;
  param_1[0x156] = (long)puVar4;
  *(undefined4 *)(param_1 + 0x157) = 0;
  if (&local_110 == ppuVar10) {
    pcVar11 = *(code **)(*ppuVar10 + 0x20);
LAB_006d1f98:
    (*pcVar11)();
  }
  else if (ppuVar10 != (undefined **)0x0) {
    pcVar11 = *(code **)(*ppuVar10 + 0x28);
    goto LAB_006d1f98;
  }
  param_1[0x129] = (long)(param_1 + 0x156);
  lVar13 = param_1[4];
  local_140 = PTR_DAT_043760d8 + 0x10;
  local_120 = &local_140;
  plStack_138 = param_1;
  if (param_1[0x89] != 0) {
                    /* try { // try from 006d2170 to 006d2187 has its CatchHandler @ 006d21b4 */
    (**(code **)(**(long **)puVar3 + 0x10))
              (*(long **)puVar3,"call_ == nullptr",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/callback_common.h",0xa6);
  }
                    /* try { // try from 006d1fd0 to 006d1fd7 has its CatchHandler @ 006d21b4 */
  (**(code **)(**(long **)puVar3 + 0x118))(*(long **)puVar3,lVar13);
  plVar9 = (long *)param_1[0x8e];
  param_1[0x89] = lVar13;
  plVar2 = param_1 + 0x8a;
  param_1[0x8e] = 0;
  if (plVar2 == plVar9) {
    pcVar11 = *(code **)(*plVar9 + 0x20);
LAB_006d2008:
    (*pcVar11)();
  }
  else if (plVar9 != (long *)0x0) {
    pcVar11 = *(code **)(*plVar9 + 0x28);
    goto LAB_006d2008;
  }
  if (local_120 == (undefined **)0x0) {
    ppuVar10 = (undefined **)0x0;
    param_1[0x8e] = 0;
  }
  else if (&local_140 == local_120) {
    param_1[0x8e] = (long)plVar2;
                    /* try { // try from 006d2048 to 006d2053 has its CatchHandler @ 006d218c */
    (**(code **)(*local_120 + 0x18))(local_120,plVar2);
    ppuVar10 = local_120;
  }
  else {
    param_1[0x8e] = (long)local_120;
    local_120 = (undefined **)0x0;
    ppuVar10 = (undefined **)0x0;
  }
  param_1[0x90] = (long)plVar1;
  param_1[0x86] = (long)puVar4;
  *(undefined4 *)(param_1 + 0x87) = 0;
  if (&local_140 == ppuVar10) {
    pcVar11 = *(code **)(*ppuVar10 + 0x20);
  }
  else {
    if (ppuVar10 == (undefined **)0x0) goto LAB_006d2090;
    pcVar11 = *(code **)(*ppuVar10 + 0x28);
  }
  (*pcVar11)();
LAB_006d2090:
  param_1[0x50] = param_1[1];
  param_1[0x51] = param_1[1] + 0xe8;
  param_1[0x52] = (long)(param_1 + 0x92);
                    /* try { // try from 006d20b0 to 006d20b7 has its CatchHandler @ 006d219c */
  (**(code **)(**(long **)puVar3 + 0x138))(&local_80);
  param_1[0x56] = lStack_78;
  param_1[0x55] = local_80;
  param_1[0x58] = lStack_68;
  param_1[0x57] = lStack_70;
  param_1[0x59] = (long)(param_1 + 0x86);
  return;
}


