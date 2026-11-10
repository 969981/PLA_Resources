/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b8e0c; name: FUN_002b8e0c
 */


void FUN_002b8e0c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = (long)(PTR_DAT_043734c0 + 0x10);
  puVar3 = PTR_DAT_04373140;
                    /* try { // try from 002b8e44 to 002b8e47 has its CatchHandler @ 002b8f24 */
  (**(code **)(**(long **)PTR_DAT_04373140 + 0x40))(*(long **)PTR_DAT_04373140,param_1[2]);
  if (param_1[10] != 0) {
    lVar1 = param_1[8];
    plVar5 = (long *)param_1[9];
    lVar4 = *plVar5;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar4;
    param_1[10] = 0;
    puVar2 = PTR_LAB_04373088;
    while (plVar5 != param_1 + 8) {
      plVar5 = (long *)plVar5[1];
      FUN_002e2ea0(puVar2);
    }
  }
  plVar5 = *(long **)puVar3;
                    /* try { // try from 002b8ea8 to 002b8eab has its CatchHandler @ 002b8f20 */
  (**(code **)(*plVar5 + 0x78))(plVar5,param_1 + 4);
  *param_1 = (long)(PTR_DAT_043734b0 + 0x10);
  puVar2 = PTR_DAT_043734b8;
  if ((char)param_1[1] != '\0') {
    plVar5 = *(long **)PTR_DAT_043734b8;
    if (plVar5 == (long *)0x0) {
      plVar5 = *(long **)puVar3;
      (**(code **)(*plVar5 + 0x10))
                (plVar5,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,"external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/grpc_library.h",0x35);
      plVar5 = *(long **)puVar2;
    }
                    /* try { // try from 002b8edc to 002b8f13 has its CatchHandler @ 002b8f1c */
    (**(code **)(*plVar5 + 0x18))();
  }
  return;
}


