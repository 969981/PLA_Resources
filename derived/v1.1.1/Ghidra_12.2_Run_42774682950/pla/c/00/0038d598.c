/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038d598; name: FUN_0038d598
 */


long FUN_0038d598(long *param_1,long param_2,long param_3,long *param_4)

{
  uint uVar1;
  char cVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  int iVar10;
  undefined **local_78;
  long *plStack_70;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"AddMessage","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) != 3) {
    FUN_00386850(*param_1,param_3,"AddMessage",
                 "Field is singular; the method requires a repeated field.");
  }
  puVar3 = *(ulong **)(param_3 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_40 = PTR_LAB_04373a98, local_48 = param_3, *puVar3 != 0xffffffffffffffff)) {
    local_78 = &puStack_40;
    plStack_70 = &local_48;
    local_38 = &local_78;
    std::__call_once(puVar3,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 10) {
    FUN_003871e0(*param_1,param_3,"AddMessage",10);
  }
  if (param_4 == (long *)0x0) {
    param_4 = (long *)param_1[8];
    cVar2 = *(char *)(param_3 + 0x43);
  }
  else {
    cVar2 = *(char *)(param_3 + 0x43);
  }
  if (cVar2 == '\0') {
    puVar3 = *(ulong **)(param_3 + 0x30);
    if ((puVar3 != (ulong *)0x0) &&
       (local_48 = param_3, puStack_40 = PTR_LAB_04373a98, *puVar3 != 0xffffffffffffffff)) {
      local_78 = &puStack_40;
      plStack_70 = &local_48;
      local_38 = &local_78;
      std::__call_once(puVar3,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
    if ((*(int *)(param_3 + 0x38) == 0xb) && (uVar6 = FUN_00344344(param_3), (uVar6 & 1) != 0)) {
      uVar6 = FUN_0038fe58(param_1 + 1,param_3);
      lVar7 = FUN_00395bc0(param_2 + (uVar6 & 0xffffffff));
      piVar9 = *(int **)(lVar7 + 0x10);
      iVar10 = *(int *)(lVar7 + 8);
    }
    else {
      uVar6 = FUN_0038fe58(param_1 + 1,param_3);
      lVar7 = param_2 + (uVar6 & 0xffffffff);
      piVar9 = *(int **)(lVar7 + 0x10);
      iVar10 = *(int *)(lVar7 + 8);
    }
    if ((piVar9 != (int *)0x0) && (iVar10 < *piVar9)) {
      lVar5 = (long)iVar10;
      iVar10 = iVar10 + 1;
      *(int *)(lVar7 + 8) = iVar10;
      if (*(long *)(piVar9 + lVar5 * 2 + 2) != 0) {
        return *(long *)(piVar9 + lVar5 * 2 + 2);
      }
    }
    if (iVar10 == 0) {
      uVar4 = FUN_00342dac(param_3);
      plVar8 = (long *)(**(code **)(*param_4 + 0x10))(param_4,uVar4);
      uVar6 = *(ulong *)(param_2 + 8);
    }
    else {
      if (iVar10 < 1) {
        FUN_0030f640(&local_78,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                     ,0x69e);
                    /* try { // try from 0038d7e4 to 0038d7f7 has its CatchHandler @ 0038d884 */
        uVar4 = FUN_0030f3ac(&local_78,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 0038d7f8 to 0038d7ff has its CatchHandler @ 0038d880 */
        FUN_0030f41c(&local_38,uVar4);
        FUN_0030f658(&local_78);
        piVar9 = *(int **)(lVar7 + 0x10);
      }
      plVar8 = *(long **)(piVar9 + 2);
      uVar6 = *(ulong *)(param_2 + 8);
    }
    puVar3 = (ulong *)(uVar6 & 0xfffffffffffffffe);
    if ((uVar6 & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    lVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,puVar3);
    FUN_0038d8a0(lVar7,lVar5);
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_78,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038d694 to 0038d6a7 has its CatchHandler @ 0038d88c */
      uVar4 = FUN_0030f3ac(&local_78,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038d6a8 to 0038d6af has its CatchHandler @ 0038d888 */
      FUN_0030f41c(&local_38,uVar4);
      FUN_0030f658(&local_78);
      uVar1 = *(uint *)(param_1 + 5);
    }
    lVar5 = FUN_0039d974(param_2 + (ulong)uVar1,param_3,param_4);
  }
  return lVar5;
}


