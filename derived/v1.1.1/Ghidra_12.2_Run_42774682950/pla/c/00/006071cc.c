/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006071cc; name: FUN_006071cc
 */


void FUN_006071cc(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_043734b0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_043734b8;
  plVar2 = *(long **)PTR_DAT_043734b8;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,"external/com_google_grpc_base/include\\grpcpp/impl/codegen/grpc_library.h",0x2c);
    plVar2 = *(long **)puVar1;
  }
  (**(code **)(*plVar2 + 0x10))();
  puVar1 = PTR_DAT_04375298;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


