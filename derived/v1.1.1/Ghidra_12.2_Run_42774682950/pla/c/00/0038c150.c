/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038c150; name: FUN_0038c150
 */


long FUN_0038c150(long *param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  char cVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long local_70;
  undefined *puStack_68;
  undefined **local_60;
  undefined1 *puStack_58;
  undefined ***local_28;
  
  if (*(long *)(param_3 + 0x50) != *param_1) {
    FUN_00386850(*param_1,param_3,"GetMessage","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x3c) == 3) {
    FUN_00386850(*param_1,param_3,"GetMessage",
                 "Field is repeated; the method requires a singular field.");
  }
  puVar3 = *(ulong **)(param_3 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_68 = PTR_LAB_04373a98, local_70 = param_3, *puVar3 != 0xffffffffffffffff)) {
    local_60 = &puStack_68;
    local_28 = &local_60;
    puStack_58 = (undefined1 *)&local_70;
    std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_3 + 0x38) * 4) != 10) {
    FUN_003871e0(*param_1,param_3,"GetMessage",10);
  }
  if (param_4 == 0) {
    param_4 = param_1[8];
    cVar2 = *(char *)(param_3 + 0x43);
  }
  else {
    cVar2 = *(char *)(param_3 + 0x43);
  }
  if (cVar2 == '\0') {
    plVar6 = (long *)FUN_003826d4(param_1,param_2,param_3);
    lVar5 = *plVar6;
    if (lVar5 == 0) {
      lVar5 = param_1[1];
      if (*(char *)(param_3 + 0x43) == '\0') {
        plVar6 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
      }
      else {
        plVar6 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
      }
      uVar7 = (int)((ulong)(param_3 - *plVar6) >> 3) * 0x286bca1b;
      uVar7 = *(uint *)(param_1[2] +
                       (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2));
      puVar3 = *(ulong **)(param_3 + 0x30);
      if ((puVar3 != (ulong *)0x0) && (puStack_68 = PTR_LAB_04373a98, *puVar3 != 0xffffffffffffffff)
         ) {
        local_60 = &puStack_68;
        local_28 = &local_60;
        local_70 = param_3;
        puStack_58 = (undefined1 *)&local_70;
        std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
        uVar7 = uVar7 & 0xfffffffe;
      }
      lVar5 = *(long *)(lVar5 + (ulong)uVar7);
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 5);
    if (uVar7 == 0xffffffff) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038c24c to 0038c25f has its CatchHandler @ 0038c3a4 */
      uVar4 = FUN_0030f3ac(&local_60,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038c260 to 0038c267 has its CatchHandler @ 0038c3a0 */
      FUN_0030f41c(&local_28,uVar4);
      FUN_0030f658(&local_60);
      uVar7 = *(uint *)(param_1 + 5);
    }
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    uVar4 = FUN_00342dac(param_3);
    lVar5 = FUN_0039d218(param_2 + (ulong)uVar7,uVar1,uVar4,param_4);
  }
  return lVar5;
}


