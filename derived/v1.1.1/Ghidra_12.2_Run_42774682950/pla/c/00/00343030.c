/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00343030; name: FUN_00343030
 */


undefined8 FUN_00343030(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x4b) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x68) != 2) {
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x6bd);
                    /* try { // try from 0034306c to 0034307f has its CatchHandler @ 003430b4 */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: (field_count()) == (2): ");
                    /* try { // try from 00343080 to 00343087 has its CatchHandler @ 003430b0 */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  return *(undefined8 *)(param_1 + 0x28);
}


