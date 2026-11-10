/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002be078; name: FUN_002be078
 */


void FUN_002be078(long *param_1,long *param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int local_88 [2];
  byte local_80;
  undefined8 local_70;
  byte local_68;
  undefined8 local_58;
  undefined4 local_48;
  undefined1 local_44;
  
  *param_1 = (long)(PTR_DAT_04373530 + 0x10);
  param_1[1] = param_3;
  lVar10 = param_2[5];
  lVar9 = param_2[4];
  lVar6 = param_2[1];
  lVar5 = *param_2;
  lVar8 = param_2[3];
  lVar7 = param_2[2];
  param_1[8] = param_6;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[5] = lVar8;
  param_1[4] = lVar7;
  param_1[7] = lVar10;
  param_1[6] = lVar9;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[3] = lVar6;
  param_1[2] = lVar5;
  plVar3 = param_1 + 0x10;
  *plVar3 = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  plVar4 = param_1 + 10;
  *plVar4 = (long)(PTR_DAT_04373538 + 0x10);
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = (long)plVar4;
  param_1[0x1e] = (long)plVar4;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  puVar1 = PTR_DAT_043734a0 + 0x10;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x32] = 0;
  param_1[0x3c] = 0;
  param_1[0x26] = (long)puVar1;
  param_1[0x27] = 0;
  *(undefined8 *)((long)param_1 + 0x13d) = 0;
  param_1[0x34] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x47] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x4d] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)((long)param_1 + 0x2d7) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  puVar2 = PTR_DAT_04373540 + 0x10;
  *(undefined4 *)(param_1 + 0x6b) = 0xffffffff;
  param_1[0x56] = (long)puVar2;
  param_1[0x66] = (long)(param_1 + 0x56);
  param_1[0x67] = (long)(param_1 + 0x56);
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
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
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x97] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa7] = 2;
  *(long **)(param_6 + 8) = param_1;
  *plVar3 = param_4;
  local_48 = 0;
  local_44 = 0;
                    /* try { // try from 002be260 to 002be26f has its CatchHandler @ 002be37c */
  FUN_002bc4f8(local_88,plVar3,param_4,&local_48);
  if ((local_68 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  if ((local_80 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
  }
  if (local_88[0] != 0) {
                    /* try { // try from 002be34c to 002be363 has its CatchHandler @ 002be368 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,"start_ops_.SendMessagePtr(request).ok()",
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/client_callback_impl.h",
               0x472);
  }
  *(undefined1 *)((long)param_1 + 0xd1) = 1;
  plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)(PTR_DAT_04373548 + 0x10);
    plVar3[1] = param_5;
  }
  plVar4 = (long *)param_1[0x59];
  param_1[0x59] = (long)plVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    FUN_002e2ea0(PTR_LAB_04373088,plVar4);
  }
  param_1[0x58] = param_5;
  *(undefined1 *)(param_1 + 0x5b) = 1;
  return;
}


