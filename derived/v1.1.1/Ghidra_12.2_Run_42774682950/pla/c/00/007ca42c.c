/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ca42c; name: FUN_007ca42c
 */


void FUN_007ca42c(long *param_1,long *param_2,long param_3,undefined8 param_4,byte param_5,
                 long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int local_98 [2];
  byte local_90;
  undefined8 local_80;
  byte local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined1 local_54;
  
  puVar1 = PTR_DAT_04377250 + 0x10;
  param_1[1] = (long)(PTR_DAT_04377250 + 0x50);
  *param_1 = (long)puVar1;
  puVar1 = PTR_DAT_04375730;
  param_1[2] = param_3;
  lVar14 = param_2[5];
  lVar13 = param_2[4];
  lVar10 = param_2[1];
  lVar9 = *param_2;
  lVar12 = param_2[3];
  lVar11 = param_2[2];
  plVar8 = param_1 + 10;
  *plVar8 = (long)(puVar1 + 0x10);
  *(byte *)(param_1 + 9) = param_5 & 1;
  param_1[8] = lVar14;
  param_1[7] = lVar13;
  param_1[6] = lVar12;
  param_1[5] = lVar11;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[4] = lVar10;
  param_1[3] = lVar9;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = (long)plVar8;
  param_1[0x1c] = (long)plVar8;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  puVar1 = PTR_DAT_043734a0 + 0x10;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  param_1[0x3a] = 0;
  param_1[0x32] = 0;
  param_1[0x24] = (long)puVar1;
  param_1[0x25] = 0;
  *(undefined8 *)((long)param_1 + 0x12d) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x45] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x48] = (long)(PTR_DAT_04375740 + 0x10);
  param_1[0x4b] = (long)(param_1 + 0x48);
  param_1[0x4c] = (long)(param_1 + 0x48);
  param_1[0x4f] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = (long)puVar1;
  param_1[0x57] = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0x60] = 0;
  param_1[0x6a] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((long)param_1 + 0x2ad) = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  param_1[0x75] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)((long)param_1 + 0x3ef) = 0;
  param_1[0x78] = (long)(PTR_DAT_043771d8 + 0x10);
  param_1[0x7f] = (long)(param_1 + 0x78);
  param_1[0x80] = (long)(param_1 + 0x78);
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x88] = (long)puVar1;
  param_1[0x8b] = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  param_1[0x94] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((long)param_1 + 0x44d) = 0;
  param_1[0x89] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x98] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa9] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  puVar2 = PTR_DAT_043757c8 + 0x10;
  *(undefined4 *)(param_1 + 0xbe) = 0xffffffff;
  param_1[0xac] = (long)puVar2;
  param_1[0xb9] = (long)(param_1 + 0xac);
  param_1[0xba] = (long)(param_1 + 0xac);
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xbd] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  param_1[0xc2] = (long)puVar1;
  param_1[0xc5] = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0;
  param_1[0xce] = 0;
  param_1[0xd8] = 0;
  *(undefined8 *)((long)param_1 + 0x61d) = 0;
  param_1[0xc3] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xd2] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xe3] = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  local_58 = 0;
  local_54 = 0;
                    /* try { // try from 007ca720 to 007ca72f has its CatchHandler @ 007ca868 */
  FUN_007c77a0(local_98,param_1 + 0x10,param_4,&local_58);
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  if (local_98[0] != 0) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"init_ops_.SendMessage(request).ok()",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/async_stream_impl.h",
               0x10b);
  }
  *(undefined1 *)((long)param_1 + 0xd1) = 1;
  if ((param_5 & 1) == 0) {
    if (param_6 != 0) {
      (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
                (*(long **)PTR_DAT_04373140,"tag == nullptr",
                 "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/async_stream_impl.h",
                 0x110);
    }
  }
  else {
    lVar9 = param_1[2];
    bVar3 = *(byte *)(lVar9 + 1);
    bVar4 = *(byte *)(lVar9 + 3);
    bVar5 = *(byte *)(lVar9 + 4);
    bVar6 = *(byte *)(lVar9 + 2);
    bVar7 = *(byte *)(lVar9 + 0x130);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)((long)param_1 + 0x59) = 1;
    param_1[0xd] = lVar9 + 0x98;
    param_1[0x1c] = param_6;
    *(uint *)((long)param_1 + 0x5c) =
         (uint)bVar3 << 5 | (uint)bVar4 << 4 | (uint)bVar5 << 6 | (uint)bVar6 << 7 |
         (uint)bVar7 << 8;
                    /* try { // try from 007ca7d8 to 007ca85f has its CatchHandler @ 007ca864 */
    (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_1 + 10,param_1 + 3);
  }
  return;
}


