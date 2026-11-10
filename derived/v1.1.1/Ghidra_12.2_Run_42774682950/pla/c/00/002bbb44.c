/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bbb44; name: FUN_002bbb44
 */


undefined8 FUN_002bbb44(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
              (*(long **)PTR_DAT_04373140,&DAT_039a04f3,
               "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/interceptor_common.h",
               0xf7);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar8 = *(long *)(lVar6 + 0x20);
    if (lVar8 != 0) goto LAB_002bbb64;
LAB_002bbc20:
    lVar8 = *(long *)(lVar6 + 0x28);
    if (lVar8 == 0) {
      return 1;
    }
    lVar6 = *(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20);
    if (lVar6 == 0) {
      return 1;
    }
    uVar9 = 0;
    if (*(char *)(param_1 + 0x20) != '\0') {
      uVar9 = (lVar6 >> 3) - 1;
    }
    *(ulong *)(param_1 + 0x18) = uVar9;
    lVar6 = *(long *)(lVar8 + 0x20);
    if (uVar9 < (ulong)(*(long *)(lVar8 + 0x28) - lVar6 >> 3)) goto LAB_002bbc6c;
    plVar3 = *(long **)PTR_DAT_04373140;
    pcVar7 = *(code **)(*plVar3 + 0x10);
    pcVar4 = "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/server_interceptor.h";
    uVar5 = 0x6a;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x28);
    lVar8 = *(long *)(lVar6 + 0x20);
    if (lVar8 == 0) goto LAB_002bbc20;
LAB_002bbb64:
    lVar6 = *(long *)(lVar8 + 0x20);
    lVar2 = *(long *)(lVar8 + 0x28) - lVar6;
    if (lVar2 == 0) {
      return 1;
    }
    uVar1 = lVar2 >> 3;
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar9 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      if (uVar1 != 0) goto LAB_002bbc6c;
    }
    else {
      if (*(char *)(lVar8 + 0x38) == '\0') {
        uVar9 = uVar1 - 1;
        *(ulong *)(param_1 + 0x18) = uVar9;
      }
      else {
        uVar9 = *(ulong *)(lVar8 + 0x40);
        *(ulong *)(param_1 + 0x18) = uVar9;
      }
      if (uVar9 < uVar1) goto LAB_002bbc6c;
    }
    plVar3 = *(long **)PTR_DAT_04373140;
    pcVar7 = *(code **)(*plVar3 + 0x10);
    pcVar4 = "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/client_interceptor.h";
    uVar5 = 0x88;
  }
  (*pcVar7)(plVar3,"pos < interceptors_.size()",pcVar4,uVar5);
  lVar6 = *(long *)(lVar8 + 0x20);
LAB_002bbc6c:
  plVar3 = *(long **)(lVar6 + uVar9 * 8);
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  return 0;
}


