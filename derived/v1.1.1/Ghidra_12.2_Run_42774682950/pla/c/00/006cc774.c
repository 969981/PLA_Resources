/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006cc774; name: FUN_006cc774
 */


void FUN_006cc774(long *param_1,long *param_2,long param_3,undefined8 param_4,byte param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int local_78 [2];
  byte local_70;
  undefined8 local_60;
  byte local_58;
  undefined8 local_48;
  undefined4 local_38;
  undefined1 local_34;
  
  param_1[1] = param_3;
  *param_1 = (long)(PTR_DAT_04376058 + 0x10);
  lVar14 = param_2[5];
  lVar13 = param_2[4];
  lVar10 = param_2[1];
  lVar8 = *param_2;
  lVar12 = param_2[3];
  lVar11 = param_2[2];
  *(byte *)(param_1 + 8) = param_5 & 1;
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[5] = lVar12;
  param_1[4] = lVar11;
  param_1[7] = lVar14;
  param_1[6] = lVar13;
  param_1[3] = lVar10;
  param_1[2] = lVar8;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  puVar1 = PTR_DAT_04376060 + 0x10;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  plVar9 = param_1 + 10;
  *plVar9 = (long)puVar1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0xff) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2b] = (long)plVar9;
  param_1[0x2c] = (long)plVar9;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  puVar1 = PTR_DAT_043734a0 + 0x10;
  param_1[0x37] = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  param_1[0x40] = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)((long)param_1 + 0x1ad) = 0;
  param_1[0x42] = 0;
  param_1[0x34] = (long)puVar1;
  param_1[0x35] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x55] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((long)param_1 + 0x2df) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  puVar2 = PTR_DAT_04376068 + 0x10;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  param_1[0x58] = (long)puVar2;
  param_1[0x67] = (long)(param_1 + 0x58);
  param_1[0x68] = (long)(param_1 + 0x58);
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = (long)puVar1;
  param_1[0x73] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0;
  param_1[0x7c] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((long)param_1 + 0x38d) = 0;
  param_1[0x71] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x91] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  local_38 = 0;
  local_34 = 0;
                    /* try { // try from 006cc93c to 006cc94b has its CatchHandler @ 006cca2c */
  FUN_006cac80(local_78,param_1 + 0x10,param_4,&local_38);
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  if (local_78[0] != 0) {
                    /* try { // try from 006cca0c to 006cca23 has its CatchHandler @ 006cca28 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"single_buf.SendMessage(request).ok()",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/async_unary_call_impl.h",
               0xa8);
  }
  *(undefined1 *)((long)param_1 + 0xd1) = 1;
  if ((param_5 & 1) != 0) {
    lVar8 = param_1[1];
    bVar3 = *(byte *)(lVar8 + 1);
    bVar4 = *(byte *)(lVar8 + 3);
    bVar5 = *(byte *)(lVar8 + 4);
    bVar6 = *(byte *)(lVar8 + 2);
    bVar7 = *(byte *)(lVar8 + 0x130);
    *(undefined1 *)((long)param_1 + 0x59) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(uint *)((long)param_1 + 0x5c) =
         (uint)bVar3 << 5 | (uint)bVar4 << 4 | (uint)bVar5 << 6 | (uint)bVar6 << 7 |
         (uint)bVar7 << 8;
    param_1[0xd] = lVar8 + 0x98;
  }
  return;
}


