/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00606c20; name: FUN_00606c20
 */


void FUN_00606c20(undefined8 *param_1,byte *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte **ppbVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  long *plVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  byte *local_40;
  byte *local_38;
  
  puVar6 = PTR_DAT_043734b8;
  plVar7 = *(long **)PTR_DAT_043734b8;
  if (plVar7 == (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,"external/com_google_grpc_base/include\\grpcpp/impl/codegen/grpc_library.h",0x2c);
    plVar7 = *(long **)puVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  bVar4 = param_2[0x18];
  local_40 = param_2 + 0x19;
  if ((bVar4 & 1) != 0) {
    local_40 = *(byte **)(param_2 + 0x28);
  }
  local_38 = param_2 + 0x31;
  if ((param_2[0x30] & 1) != 0) {
    local_38 = *(byte **)(param_2 + 0x40);
  }
  bVar5 = *param_2;
  uVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if (uVar2 == 0) {
    pbVar8 = (byte *)0x0;
  }
  else if ((bVar5 & 1) == 0) {
    pbVar8 = param_2 + 1;
  }
  else {
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 0x20);
  }
  ppbVar3 = (byte **)(undefined1 *)0x0;
  if (uVar2 != 0) {
    ppbVar3 = &local_40;
  }
                    /* try { // try from 00606cd0 to 00606d03 has its CatchHandler @ 00606de8 */
  lVar9 = FUN_005b4810(pbVar8,ppbVar3,0,0);
  if (lVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    plVar7 = *(long **)puVar6;
  }
  else {
    plVar7 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (plVar7 != (long *)0x0) {
      FUN_006071cc(plVar7);
      puVar1 = PTR_DAT_04375280;
      plVar7[2] = lVar9;
      *plVar7 = (long)(puVar1 + 0x10);
    }
    *param_1 = plVar7;
    plVar10 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    puVar1 = PTR_DAT_04375288 + 0x10;
    plVar10[2] = 0;
    plVar10[3] = (long)plVar7;
    *plVar10 = (long)puVar1;
    plVar10[1] = 0;
    param_1[1] = plVar10;
    plVar7 = *(long **)puVar6;
  }
  if (plVar7 == (long *)0x0) {
                    /* try { // try from 00606dc4 to 00606ddb has its CatchHandler @ 00606de4 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,"external/com_google_grpc_base/include\\grpcpp/impl/codegen/grpc_library.h",0x35);
    plVar7 = *(long **)puVar6;
  }
                    /* try { // try from 00606d64 to 00606d67 has its CatchHandler @ 00606de4 */
  (**(code **)(*plVar7 + 0x18))();
  return;
}


