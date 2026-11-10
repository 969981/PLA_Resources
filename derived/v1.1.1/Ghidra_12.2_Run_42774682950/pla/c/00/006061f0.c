/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006061f0; name: FUN_006061f0
 */


void FUN_006061f0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  ulong local_78 [2];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  puVar2 = PTR_DAT_043734b8;
  plVar3 = *(long **)PTR_DAT_043734b8;
  if (plVar3 == (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,"external/com_google_grpc_base/include\\grpcpp/impl/codegen/grpc_library.h",0x2c);
    plVar3 = *(long **)puVar2;
  }
  (**(code **)(*plVar3 + 0x10))();
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    local_78[1] = 0;
    local_68 = (undefined8 *)0x0;
    local_78[0] = 0;
                    /* try { // try from 006062e0 to 006062f3 has its CatchHandler @ 006064dc */
    uVar4 = FUN_005b3d50(0,3,"Invalid credentials.");
    puStack_88 = (undefined8 *)param_5[1];
    local_90 = (undefined8 *)*param_5;
    local_80 = param_5[2];
    param_5[2] = 0;
    *param_5 = 0;
    param_5[1] = 0;
                    /* try { // try from 0060630c to 0060631b has its CatchHandler @ 00606450 */
    FUN_006065d0(param_1,local_78,uVar4,&local_90);
    puVar5 = local_90;
    puVar1 = PTR_LAB_04373088;
    if (local_90 != (undefined8 *)0x0) {
      if (puStack_88 != local_90) {
        puVar7 = puStack_88 + -1;
        puVar6 = (undefined8 *)*puVar7;
        *puVar7 = 0;
        if (puVar6 != (undefined8 *)0x0) goto LAB_00606358;
        while (puVar5 != puVar7) {
          while( true ) {
            puVar7 = puVar7 + -1;
            puVar6 = (undefined8 *)*puVar7;
            *puVar7 = 0;
            if (puVar6 == (undefined8 *)0x0) break;
LAB_00606358:
            (**(code **)*puVar6)(puVar6);
            FUN_002e2ea0(puVar1,puVar6);
            if (puVar5 == puVar7) goto LAB_00606394;
          }
        }
      }
LAB_00606394:
      puStack_88 = puVar5;
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    if ((local_78[0] & 1) == 0) goto LAB_006063bc;
    puVar5 = local_68;
  }
  else {
    puStack_58 = (undefined8 *)param_5[1];
    local_60 = (undefined8 *)*param_5;
    local_50 = param_5[2];
    param_5[2] = 0;
    *param_5 = 0;
    param_5[1] = 0;
                    /* try { // try from 0060625c to 0060626f has its CatchHandler @ 006064f0 */
    (**(code **)(*param_3 + 0x20))(param_1,param_3,param_2,param_4,&local_60);
    puVar5 = local_60;
    puVar1 = PTR_LAB_04373088;
    if (local_60 == (undefined8 *)0x0) goto LAB_006063bc;
    if (puStack_58 != local_60) {
      puVar7 = puStack_58 + -1;
      puVar6 = (undefined8 *)*puVar7;
      *puVar7 = 0;
      if (puVar6 != (undefined8 *)0x0) goto LAB_006062ac;
      while (puVar5 != puVar7) {
        while( true ) {
          puVar7 = puVar7 + -1;
          puVar6 = (undefined8 *)*puVar7;
          *puVar7 = 0;
          if (puVar6 == (undefined8 *)0x0) break;
LAB_006062ac:
          (**(code **)*puVar6)(puVar6);
          FUN_002e2ea0(puVar1,puVar6);
          if (puVar5 == puVar7) goto LAB_00606388;
        }
      }
    }
LAB_00606388:
    puStack_58 = puVar5;
    puVar5 = local_60;
  }
  FUN_002e2ea0(PTR_LAB_04373088,puVar5);
LAB_006063bc:
  plVar3 = *(long **)puVar2;
  if (plVar3 == (long *)0x0) {
                    /* try { // try from 00606430 to 00606447 has its CatchHandler @ 006065c0 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,
               "g_glip && \"gRPC library not initialized. See \" \"grpc::internal::GrpcLibraryInitializer.\""
               ,"external/com_google_grpc_base/include\\grpcpp/impl/codegen/grpc_library.h",0x35);
    plVar3 = *(long **)puVar2;
  }
                    /* try { // try from 006063cc to 006063cf has its CatchHandler @ 006065c0 */
  (**(code **)(*plVar3 + 0x18))();
  return;
}


