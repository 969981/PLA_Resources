/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038af6c; name: FUN_0038af6c
 */


void FUN_0038af6c(ulong *param_1,long *param_2,long param_3,long param_4,undefined4 param_5)

{
  uint uVar1;
  byte bVar2;
  ulong *puVar3;
  undefined8 uVar4;
  void *__dest;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  long local_78;
  undefined *puStack_70;
  undefined ***local_68;
  undefined **local_60;
  long *plStack_58;
  
  if (*(long *)(param_4 + 0x50) != *param_2) {
    FUN_00386850(*param_2,param_4,"GetRepeatedString","Field does not match message type.");
  }
  if (*(int *)(param_4 + 0x3c) != 3) {
    FUN_00386850(*param_2,param_4,"GetRepeatedString",
                 "Field is singular; the method requires a repeated field.");
  }
  puVar3 = *(ulong **)(param_4 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_70 = PTR_LAB_04373a98, local_78 = param_4, *puVar3 != 0xffffffffffffffff)) {
    local_60 = &puStack_70;
    plStack_58 = &local_78;
    local_68 = &local_60;
    std::__call_once(puVar3,&local_68,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(param_4 + 0x38) * 4) != 9) {
    FUN_003871e0(*param_2,param_4,"GetRepeatedString",9);
  }
  if (*(char *)(param_4 + 0x43) == '\0') {
    uVar4 = FUN_00381f58(param_2,param_3,param_4);
    puVar3 = (ulong *)FUN_0032b79c(uVar4,param_5);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    bVar2 = (byte)*puVar3;
  }
  else {
    uVar1 = *(uint *)(param_2 + 5);
    if (uVar1 == 0xffffffff) {
      FUN_0030f640(&local_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                   ,0xc4);
                    /* try { // try from 0038b080 to 0038b093 has its CatchHandler @ 0038b188 */
      uVar4 = FUN_0030f3ac(&local_60,"CHECK failed: HasExtensionSet(): ");
                    /* try { // try from 0038b094 to 0038b09b has its CatchHandler @ 0038b184 */
      FUN_0030f41c(&local_68,uVar4);
      FUN_0030f658(&local_60);
      uVar1 = *(uint *)(param_2 + 5);
    }
    puVar3 = (ulong *)FUN_003338d0(param_3 + (ulong)uVar1,*(undefined4 *)(param_4 + 0x44),param_5);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    bVar2 = (byte)*puVar3;
  }
  if ((bVar2 & 1) == 0) {
    uVar6 = puVar3[1];
    uVar5 = *puVar3;
    param_1[2] = puVar3[2];
    param_1[1] = uVar6;
    *param_1 = uVar5;
    return;
  }
  uVar5 = puVar3[1];
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)puVar3[2];
  if (uVar5 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar5 << 1);
    if (uVar5 == 0) goto LAB_0038b164;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    param_1[1] = uVar5;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar6 | 1;
  }
  memcpy(__dest,__src,uVar5);
LAB_0038b164:
  *(undefined1 *)((long)__dest + uVar5) = 0;
  return;
}


