/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034db00; name: FUN_0034db00
 */


void FUN_0034db00(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      FUN_0030f640(auStack_50,2,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                   ,0xe33);
                    /* try { // try from 0034db64 to 0034db8b has its CatchHandler @ 0034dc14 */
      uVar2 = FUN_0030f3ac(auStack_50,"Invalid proto descriptor for file \"");
      uVar2 = FUN_0030f3e8(uVar2,param_1 + 0x38);
      uVar2 = FUN_0030f3ac(uVar2,&DAT_03984441);
                    /* try { // try from 0034db8c to 0034db93 has its CatchHandler @ 0034dc0c */
      FUN_0030f41c(auStack_58,uVar2);
      FUN_0030f658(auStack_50);
    }
    FUN_0030f640(auStack_50,2,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0xe36);
                    /* try { // try from 0034dbb4 to 0034dbe3 has its CatchHandler @ 0034dc18 */
    uVar2 = FUN_0030f3ac(auStack_50,&DAT_038eecc6);
    uVar2 = FUN_0030f3e8(uVar2,param_2);
    uVar2 = FUN_0030f3ac(uVar2,&DAT_039403eb);
    uVar2 = FUN_0030f3e8(uVar2,param_5);
                    /* try { // try from 0034dbe4 to 0034dbeb has its CatchHandler @ 0034dc10 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x38,param_2,param_3,param_4,param_5);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}


