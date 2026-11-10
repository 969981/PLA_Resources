/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006042a8; name: FUN_006042a8
 */


void FUN_006042a8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04375248 + 0x10;
  puVar2 = PTR_DAT_04375248 + 0x98;
  param_1[1] = (long)(PTR_DAT_04375248 + 0x70);
  *param_1 = (long)puVar1;
  param_1[4] = (long)puVar2;
                    /* try { // try from 006042e4 to 006042f3 has its CatchHandler @ 00604434 */
  FUN_003e3c20(param_1[9]);
  if (param_1[0xe] != 0) {
    FUN_006050cc();
  }
  puVar1 = PTR_LAB_04373088;
  puVar5 = (undefined8 *)param_1[0xf];
  if (puVar5 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[0x10] == puVar5) {
      puVar4 = puVar5;
    }
    else {
      puVar6 = (undefined8 *)param_1[0x10] + -1;
      puVar4 = (undefined8 *)*puVar6;
      *puVar6 = 0;
      if (puVar4 != (undefined8 *)0x0) goto LAB_00604330;
      while (puVar5 != puVar6) {
        while( true ) {
          puVar6 = puVar6 + -1;
          puVar4 = (undefined8 *)*puVar6;
          *puVar6 = 0;
          if (puVar4 == (undefined8 *)0x0) break;
LAB_00604330:
          (**(code **)*puVar4)(puVar4);
          FUN_002e2ea0(puVar1,puVar4);
          if (puVar5 == puVar6) goto LAB_00604354;
        }
      }
LAB_00604354:
      puVar4 = (undefined8 *)param_1[0xf];
    }
    param_1[0x10] = (long)puVar5;
    FUN_002e2ea0(PTR_LAB_04373088,puVar4);
  }
  puVar1 = PTR_DAT_04373140;
                    /* try { // try from 00604388 to 0060438b has its CatchHandler @ 00604430 */
  (**(code **)(**(long **)PTR_DAT_04373140 + 0x78))(*(long **)PTR_DAT_04373140,param_1 + 10);
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[8]);
  }
  param_1[4] = (long)(PTR_DAT_043734b0 + 0x10);
  puVar2 = PTR_DAT_043734b8;
  if ((char)param_1[5] != '\0') {
    plVar3 = *(long **)PTR_DAT_043734b8;
    if (plVar3 == (long *)0x0) {
      (**(code **)(**(long **)puVar1 + 0x10))
                (*(long **)puVar1,
                 "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
                 ,"external/com_google_grpc_base/include\\grpcpp/impl/codegen/grpc_library.h",0x35);
      plVar3 = *(long **)puVar2;
    }
                    /* try { // try from 006043d4 to 00604423 has its CatchHandler @ 0060442c */
    (**(code **)(*plVar3 + 0x18))();
  }
  if (param_1[3] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


