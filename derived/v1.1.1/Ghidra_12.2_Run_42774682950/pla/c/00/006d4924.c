/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d4924; name: FUN_006d4924
 */


void FUN_006d4924(long *param_1,long *param_2,long param_3,byte param_4,long param_5)

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
  
  param_1[3] = param_3;
  puVar1 = PTR_DAT_04376138 + 0x10;
  puVar2 = PTR_DAT_04376138 + 0x98;
  param_1[1] = (long)(PTR_DAT_04376138 + 0x68);
  *param_1 = (long)puVar1;
  puVar1 = PTR_DAT_04375740;
  param_1[2] = (long)puVar2;
  lVar10 = param_2[1];
  lVar9 = *param_2;
  lVar12 = param_2[3];
  lVar11 = param_2[2];
  lVar14 = param_2[5];
  lVar13 = param_2[4];
  plVar8 = param_1 + 0xc;
  *plVar8 = (long)(puVar1 + 0x10);
  *(byte *)(param_1 + 10) = param_4 & 1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = (long)plVar8;
  param_1[0x10] = (long)plVar8;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[7] = lVar12;
  param_1[6] = lVar11;
  param_1[9] = lVar14;
  param_1[8] = lVar13;
  param_1[5] = lVar10;
  param_1[4] = lVar9;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puVar1 = PTR_DAT_043734a0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x24] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((long)param_1 + 0xcd) = 0;
  param_1[0x26] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x18] = (long)puVar1;
  param_1[0x19] = 0;
  param_1[0x39] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((long)param_1 + 0x20f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  puVar2 = PTR_DAT_04376098 + 0x10;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = (long)puVar1;
  param_1[0x4f] = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  param_1[0x58] = 0;
  param_1[0x62] = 0;
  param_1[0x3c] = (long)puVar2;
  param_1[0x43] = (long)(param_1 + 0x3c);
  param_1[0x44] = (long)(param_1 + 0x3c);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((long)param_1 + 0x26d) = 0;
  param_1[0x4d] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6d] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  *(undefined2 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  *(undefined2 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined1 *)((long)param_1 + 0x3cc) = 0;
  param_1[0x7e] = 0;
  *(undefined2 *)(param_1 + 0x80) = 0;
  param_1[0x70] = (long)(PTR_DAT_04375730 + 0x10);
  param_1[0x81] = (long)(param_1 + 0x70);
  param_1[0x82] = (long)(param_1 + 0x70);
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = (long)puVar1;
  param_1[0x8d] = 0;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  param_1[0x96] = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)((long)param_1 + 0x45d) = 0;
  param_1[0x8b] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xab] = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  puVar2 = PTR_DAT_043757c8 + 0x10;
  *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
  param_1[0xae] = (long)puVar2;
  param_1[0xbb] = (long)(param_1 + 0xae);
  param_1[0xbc] = (long)(param_1 + 0xae);
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbf] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1[0xc4] = (long)puVar1;
  param_1[199] = 0;
  *(undefined2 *)(param_1 + 200) = 0;
  param_1[0xd0] = 0;
  param_1[0xda] = 0;
  *(undefined8 *)((long)param_1 + 0x62d) = 0;
  param_1[0xc5] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[0xd3] = 0;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0;
  param_1[0xe4] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe5] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xde] = 0;
  param_1[0xdd] = 0;
  if ((param_4 & 1) == 0) {
    if (param_5 != 0) {
      (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
                (*(long **)PTR_DAT_04373140,"tag == nullptr",
                 "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/async_stream_impl.h",
                 0x262);
    }
  }
  else {
    bVar3 = *(byte *)(param_3 + 1);
    bVar4 = *(byte *)(param_3 + 3);
    bVar5 = *(byte *)(param_3 + 4);
    bVar6 = *(byte *)(param_3 + 2);
    bVar7 = *(byte *)(param_3 + 0x130);
    *(undefined1 *)(param_1 + 0x75) = 0;
    *(undefined1 *)((long)param_1 + 0x389) = 1;
    *(uint *)((long)param_1 + 0x38c) =
         (uint)bVar3 << 5 | (uint)bVar4 << 4 | (uint)bVar5 << 6 | (uint)bVar6 << 7 |
         (uint)bVar7 << 8;
    param_1[0x73] = param_3 + 0x98;
    if (bVar7 == 0) {
      param_1[0x82] = param_5;
                    /* try { // try from 006d4c4c to 006d4c97 has its CatchHandler @ 006d4c9c */
      (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],param_1 + 0x70,param_1 + 4);
    }
  }
  return;
}


