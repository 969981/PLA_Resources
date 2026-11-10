/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00607260; name: FUN_00607260
 */


void FUN_00607260(long *param_1)

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
                 ,"external/com_google_grpc_base/include\\grpcpp/impl/codegen/grpc_library.h",0x35);
      plVar2 = *(long **)puVar1;
    }
                    /* try { // try from 00607294 to 006072cb has its CatchHandler @ 006072d4 */
    (**(code **)(*plVar2 + 0x18))();
  }
  return;
}


