/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032d170; name: FUN_0032d170
 */


long * FUN_0032d170(ulong param_1,long *param_2,ulong param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong *puVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  puVar3 = (ulong *)(param_2[1] & 0xfffffffffffffffe);
  if ((param_2[1] & 1U) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)param_3) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_util.cc"
                 ,0x2ed);
                    /* try { // try from 0032d1b4 to 0032d1c7 has its CatchHandler @ 0032d294 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: submessage->GetArena() == submessage_arena: ");
                    /* try { // try from 0032d1c8 to 0032d1cf has its CatchHandler @ 0032d290 */
    FUN_0030f41c(auStack_58,uVar1);
    FUN_0030f658(auStack_50);
  }
  if (param_1 == param_3) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_util.cc"
                 ,0x2ee);
                    /* try { // try from 0032d210 to 0032d223 has its CatchHandler @ 0032d28c */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: message_arena != submessage_arena: ");
                    /* try { // try from 0032d224 to 0032d22b has its CatchHandler @ 0032d288 */
    FUN_0030f41c(auStack_58,uVar1);
    FUN_0030f658(auStack_50);
  }
  if ((param_1 == 0) || (param_3 != 0)) {
    plVar2 = (long *)(**(code **)(*param_2 + 0x20))(param_2,param_1);
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
  }
  else {
    FUN_0031e52c(param_1,param_2);
    plVar2 = param_2;
  }
  return plVar2;
}


