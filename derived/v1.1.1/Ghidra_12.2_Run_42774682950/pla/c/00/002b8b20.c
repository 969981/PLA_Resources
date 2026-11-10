/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002b8b20; name: FUN_002b8b20
 */


void FUN_002b8b20(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)(PTR_DAT_043734b0 + 0x10);
  puVar2 = PTR_DAT_043734b8;
  puVar1 = PTR_DAT_04373140;
  plVar3 = *(long **)PTR_DAT_043734b8;
  if (plVar3 == (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,"external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/grpc_library.h",0x2c);
    plVar3 = *(long **)puVar2;
  }
  (**(code **)(*plVar3 + 0x10))();
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = (long)(PTR_DAT_043734c0 + 0x10);
  plVar3 = *(long **)puVar1;
                    /* try { // try from 002b8b9c to 002b8ba3 has its CatchHandler @ 002b8c38 */
  (**(code **)(*plVar3 + 0x70))(plVar3,param_1 + 4);
  param_1[8] = (long)(param_1 + 8);
  param_1[9] = (long)(param_1 + 8);
  param_1[10] = 0;
  plVar3 = *(long **)puVar1;
                    /* try { // try from 002b8bbc to 002b8be3 has its CatchHandler @ 002b8c50 */
  uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  lVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,uVar4,param_2,0);
  param_1[2] = lVar5;
  param_1[3] = 1;
  return;
}


