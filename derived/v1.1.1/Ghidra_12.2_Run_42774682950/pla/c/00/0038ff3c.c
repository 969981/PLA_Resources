/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038ff3c; name: FUN_0038ff3c
 */


uint FUN_0038ff3c(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined **local_60;
  long *plStack_58;
  long local_30;
  undefined *puStack_28;
  undefined1 *local_18;
  
  lVar3 = *(long *)(param_2 + 0x58);
  if ((lVar3 != 0) &&
     ((*(int *)(lVar3 + 0x18) != 1 || (*(char *)(**(long **)(lVar3 + 0x20) + 0x41) == '\0')))) {
    FUN_0030f640(&local_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/generated_message_reflection.h"
                 ,0x87);
                    /* try { // try from 0038ff8c to 0038ff9f has its CatchHandler @ 00390074 */
    uVar1 = FUN_0030f3ac(&local_60,"CHECK failed: !InRealOneof(field): ");
                    /* try { // try from 0038ffa0 to 0038ffa7 has its CatchHandler @ 00390070 */
    FUN_0030f41c(&local_18,uVar1);
    FUN_0030f658(&local_60);
  }
  if (*(char *)(param_2 + 0x43) == '\0') {
    plVar4 = (long *)(*(long *)(param_2 + 0x50) + 0x28);
  }
  else if (*(long *)(param_2 + 0x60) == 0) {
    plVar4 = (long *)(*(long *)(param_2 + 0x28) + 0x80);
  }
  else {
    plVar4 = (long *)(*(long *)(param_2 + 0x60) + 0x50);
  }
  uVar5 = (int)((ulong)(param_2 - *plVar4) >> 3) * 0x286bca1b;
  uVar5 = *(uint *)(*(long *)(param_1 + 8) +
                   (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2));
  puVar2 = *(ulong **)(param_2 + 0x30);
  if (puVar2 != (ulong *)0x0) {
    puStack_28 = PTR_LAB_04373a98;
    if (*puVar2 != 0xffffffffffffffff) {
      local_60 = &puStack_28;
      plStack_58 = &local_30;
      local_30 = param_2;
      local_18 = (undefined1 *)&local_60;
      std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if ((*(int *)(param_2 + 0x38) == 0xc) || (*(int *)(param_2 + 0x38) == 9)) {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5;
}


