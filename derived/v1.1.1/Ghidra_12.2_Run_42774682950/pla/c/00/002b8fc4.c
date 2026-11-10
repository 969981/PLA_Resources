/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b8fc4; name: FUN_002b8fc4
 */


void FUN_002b8fc4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_043734b0 + 0x10);
  puVar1 = PTR_DAT_043734b8;
  if ((char)param_1[1] != '\0') {
    plVar2 = *(long **)PTR_DAT_043734b8;
    if (plVar2 == (long *)0x0) {
      (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
                (*(long **)PTR_DAT_04373140,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,"external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/grpc_library.h",0x35);
      plVar2 = *(long **)puVar1;
    }
                    /* try { // try from 002b8ff8 to 002b902f has its CatchHandler @ 002b9038 */
    (**(code **)(*plVar2 + 0x18))();
  }
  return;
}


