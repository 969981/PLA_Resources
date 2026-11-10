/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003758fc; name: FUN_003758fc
 */


void FUN_003758fc(long *param_1,int param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00375948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,param_4);
    return;
  }
  if (param_2 < 0) {
    FUN_0030f640(auStack_60,1,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                 ,0x148);
                    /* try { // try from 003759e0 to 00375a13 has its CatchHandler @ 00375a40 */
    uVar2 = FUN_0030f3ac(auStack_60,"Warning parsing text-format ");
    uVar2 = FUN_0030f3e8(uVar2,*(undefined8 *)(param_1[0x1b] + 8));
    uVar2 = FUN_0030f3ac(uVar2,&DAT_039403eb);
    uVar2 = FUN_0030f3e8(uVar2,param_4);
                    /* try { // try from 00375a14 to 00375a1b has its CatchHandler @ 00375a38 */
    FUN_0030f41c(auStack_28,uVar2);
  }
  else {
    FUN_0030f640(auStack_60,1,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                 ,0x144);
                    /* try { // try from 00375968 to 003759c3 has its CatchHandler @ 00375a44 */
    uVar2 = FUN_0030f3ac(auStack_60,"Warning parsing text-format ");
    uVar2 = FUN_0030f3e8(uVar2,*(undefined8 *)(param_1[0x1b] + 8));
    uVar2 = FUN_0030f3ac(uVar2,&DAT_039403eb);
    uVar2 = FUN_0030f52c(uVar2,param_2 + 1);
    uVar2 = FUN_0030f3ac(uVar2,&DAT_039b07fe);
    uVar2 = FUN_0030f52c(uVar2,param_3 + 1);
    uVar2 = FUN_0030f3ac(uVar2,&DAT_039403eb);
    uVar2 = FUN_0030f3e8(uVar2,param_4);
                    /* try { // try from 003759c4 to 003759cb has its CatchHandler @ 00375a3c */
    FUN_0030f41c(auStack_28,uVar2);
  }
  FUN_0030f658(auStack_60);
  return;
}


