/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00384d60; name: FUN_00384d60
 */


void FUN_00384d60(ulong *param_1,long *param_2,long param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  void *__dest;
  void *__src;
  ulong uVar7;
  ulong uVar8;
  long local_70;
  undefined *puStack_68;
  undefined **local_60;
  undefined1 *puStack_58;
  undefined ***local_28;
  
  if (*(long *)(param_4 + 0x50) != *param_2) {
    FUN_00386850(*param_2,param_4,"GetString","Field does not match message type.");
  }
  if (*(int *)(param_4 + 0x3c) == 3) {
    FUN_00386850(*param_2,param_4,"GetString",
                 "Field is repeated; the method requires a singular field.");
  }
  puVar3 = *(ulong **)(param_4 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_68 = PTR_LAB_04373a98, local_70 = param_4, *puVar3 != 0xffffffffffffffff)) {
    local_60 = &puStack_68;
    local_28 = &local_60;
    puStack_58 = (undefined1 *)&local_70;
    std::__call_once(puVar3,&local_28,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_4 + 0x38) * 4) != 9) {
    FUN_003871e0(*param_2,param_4,"GetString",9);
  }
  if (*(char *)(param_4 + 0x43) == '\0') {
    uVar6 = FUN_0038f118(param_2 + 1,param_4);
    if ((uVar6 & 1) != 0) {
      puVar3 = (ulong *)FUN_0038245c(param_2,param_3,param_4);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      bVar2 = (byte)*puVar3;
      goto joined_r0x00384ef8;
    }
    puVar5 = (undefined8 *)FUN_00382598(param_2,param_3,param_4);
    puVar3 = (ulong *)*puVar5;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    if ((*puVar3 & 1) == 0) {
      uVar8 = puVar3[1];
      uVar7 = *puVar3;
      uVar6 = puVar3[2];
      goto LAB_00384ec0;
    }
    uVar6 = puVar3[1];
    if (0xffffffffffffffef < uVar6) goto LAB_00384fbc;
    __src = (void *)puVar3[2];
    if (uVar6 < 0x17) goto LAB_00384f14;
LAB_00384f6c:
    uVar7 = uVar6 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
    param_1[1] = uVar6;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar7 | 1;
  }
  else {
    uVar1 = *(uint *)(param_2 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 00384e70 to 00384e83 has its CatchHandler @ 00384fc8 */
      uVar4 = FUN_0030f3ac(&local_60,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 00384e84 to 00384e8b has its CatchHandler @ 00384fc4 */
      FUN_0030f41c(&local_28,uVar4);
      FUN_0030f658(&local_60);
      uVar1 = *(uint *)(param_2 + 5);
    }
    puVar3 = (ulong *)FUN_00333478(param_3 + (ulong)uVar1,*(undefined4 *)(param_4 + 0x44),
                                   *(undefined8 *)(param_4 + 0x90));
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    bVar2 = (byte)*puVar3;
joined_r0x00384ef8:
    if ((bVar2 & 1) == 0) {
      uVar8 = puVar3[1];
      uVar7 = *puVar3;
      uVar6 = puVar3[2];
LAB_00384ec0:
      param_1[2] = uVar6;
      param_1[1] = uVar8;
      *param_1 = uVar7;
      return;
    }
    uVar6 = puVar3[1];
    if (0xffffffffffffffef < uVar6) {
LAB_00384fbc:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    __src = (void *)puVar3[2];
    if (0x16 < uVar6) goto LAB_00384f6c;
LAB_00384f14:
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar6 << 1);
    if (uVar6 == 0) goto LAB_00384fa4;
  }
  memcpy(__dest,__src,uVar6);
LAB_00384fa4:
  *(undefined1 *)((long)__dest + uVar6) = 0;
  return;
}


