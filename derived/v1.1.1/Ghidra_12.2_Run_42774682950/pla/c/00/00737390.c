/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00737390; name: FUN_00737390
 */


void FUN_00737390(long *param_1,long *param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int local_a0 [2];
  byte local_98;
  undefined8 local_88;
  byte local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  
  param_1[1] = param_3;
  puVar1 = PTR_DAT_04373538;
  *param_1 = (long)(PTR_DAT_043767a0 + 0x10);
  lVar9 = param_2[5];
  lVar8 = param_2[4];
  lVar5 = param_2[1];
  lVar4 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  plVar3 = param_1 + 10;
  *plVar3 = (long)(puVar1 + 0x10);
  param_1[8] = param_5;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = (long)plVar3;
  param_1[5] = lVar7;
  param_1[4] = lVar6;
  param_1[7] = lVar9;
  param_1[6] = lVar8;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  param_1[0x1e] = (long)plVar3;
  param_1[0x1f] = 0;
  puVar1 = PTR_DAT_043734a0 + 0x10;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x32] = 0;
  param_1[0x3c] = 0;
  param_1[0x34] = 0;
  param_1[0x26] = (long)puVar1;
  param_1[0x27] = 0;
  *(undefined8 *)((long)param_1 + 0x13d) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x47] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x4d] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x56] = (long)(PTR_DAT_04375738 + 0x10);
  param_1[0x61] = (long)(param_1 + 0x56);
  param_1[0x62] = (long)(param_1 + 0x56);
  param_1[0x65] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0xffffffff;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = (long)puVar1;
  param_1[0x6d] = 0;
  *(undefined2 *)(param_1 + 0x6e) = 0;
  param_1[0x76] = 0;
  param_1[0x80] = 0;
  *(undefined8 *)((long)param_1 + 0x35d) = 0;
  param_1[0x6b] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x8b] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x91] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)((long)param_1 + 0x52f) = 0;
  puVar2 = PTR_DAT_043767a8 + 0x10;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  param_1[0xa2] = (long)puVar2;
  param_1[0xa7] = (long)(param_1 + 0xa2);
  param_1[0xa8] = (long)(param_1 + 0xa2);
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xab] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = (long)puVar1;
  param_1[0xb3] = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  param_1[0xbc] = 0;
  param_1[0xc6] = 0;
  *(undefined8 *)((long)param_1 + 0x58d) = 0;
  param_1[0xb1] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xd1] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[0xd7] = 0;
  puVar1 = PTR_DAT_04373140;
  param_1[0xdc] = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  param_1[0xe1] = 2;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  plVar3 = *(long **)puVar1;
                    /* try { // try from 00737620 to 00737627 has its CatchHandler @ 00737708 */
  (**(code **)(*plVar3 + 0x70))(plVar3,param_1 + 0xe3);
  *(long **)(param_5 + 8) = param_1;
  param_1[0x10] = param_4;
  local_68 = 0;
  local_64 = 0;
                    /* try { // try from 0073763c to 0073764b has its CatchHandler @ 007376e8 */
  FUN_00736830(local_a0,param_1 + 0x10,param_4,&local_68);
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if ((local_98 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
  }
  if (local_a0[0] != 0) {
    plVar3 = *(long **)puVar1;
                    /* try { // try from 007376c8 to 007376df has its CatchHandler @ 007376e4 */
    (**(code **)(*plVar3 + 0x10))
              (plVar3,"start_ops_.SendMessagePtr(request).ok()",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/client_callback_impl.h",
               0x31a);
  }
  *(undefined1 *)((long)param_1 + 0xd1) = 1;
  return;
}


