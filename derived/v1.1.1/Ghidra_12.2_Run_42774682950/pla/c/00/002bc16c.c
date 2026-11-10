/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bc16c; name: FUN_002bc16c
 */


void FUN_002bc16c(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  undefined4 *puVar3;
  int local_68 [2];
  byte local_60;
  undefined8 local_50;
  byte local_48;
  undefined8 local_38;
  long local_28;
  
  lVar2 = *param_1;
  if ((lVar2 == 0) && (param_1[2] == 0)) {
    return;
  }
  if ((char)param_1[1] != '\0') {
    plVar1 = (long *)param_1[8];
    param_1[8] = 0;
    if (param_1 + 4 == plVar1) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
    }
    else {
      if (plVar1 == (long *)0x0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x002bc23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[8];
    local_28 = lVar2;
    if (plVar1 == (long *)0x0) {
      FUN_002ba2a0();
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)UndefinedInstructionException(0,0x2bc2f4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    (**(code **)(*plVar1 + 0x30))(local_68,plVar1,&local_28);
    if ((local_48 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38);
    }
    if ((local_60 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
    if (local_68[0] != 0) {
      (**(code **)(**(long **)PTR_DAT_04373140 + 0x10))
                (*(long **)PTR_DAT_04373140,"serializer_(msg_).ok()",
                 "external/com_github_grpc_grpc/include\\grpcpp/impl/codegen/call_op_set.h",0x140);
    }
  }
  plVar1 = (long *)param_1[8];
  param_1[8] = 0;
  if (param_1 + 4 == plVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_002bc24c;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_002bc24c:
  lVar2 = *param_3;
  *param_3 = lVar2 + 1;
  puVar3 = (undefined4 *)(param_2 + lVar2 * 0x50);
  *puVar3 = 1;
  puVar3[1] = (int)param_1[3];
  *(undefined8 *)(puVar3 + 2) = 0;
  *(long *)(puVar3 + 4) = param_1[2];
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


