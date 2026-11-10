/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0034e3c0; name: FUN_0034e3c0
 */


void FUN_0034e3c0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    FUN_0030f640(auStack_50,1,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0xe69);
                    /* try { // try from 0034e428 to 0034e45b has its CatchHandler @ 0034e480 */
    uVar2 = FUN_0030f3e8(auStack_50,param_1 + 0x38);
    uVar2 = FUN_0030f3ac(uVar2,&DAT_038bdc00);
    uVar2 = FUN_0030f3e8(uVar2,param_2);
    uVar2 = FUN_0030f3ac(uVar2,&DAT_039403eb);
    uVar2 = FUN_0030f3e8(uVar2,param_5);
                    /* try { // try from 0034e45c to 0034e463 has its CatchHandler @ 0034e47c */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0034e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x38,param_2,param_3,param_4,param_5);
  return;
}


