/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00386850; name: FUN_00386850
 */


void FUN_00386850(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  FUN_0030f640(auStack_60,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
               ,0x70);
                    /* try { // try from 00386888 to 003868df has its CatchHandler @ 00386908 */
  uVar1 = FUN_0030f3ac(auStack_60,
                       "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::"
                      );
  uVar1 = FUN_0030f3ac(uVar1,param_3);
  uVar1 = FUN_0030f3ac(uVar1,"\n  Message type: ");
  uVar1 = FUN_0030f3e8(uVar1,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_0030f3ac(uVar1,"\n  Field       : ");
  uVar1 = FUN_0030f3e8(uVar1,*(undefined8 *)(param_2 + 8));
  uVar1 = FUN_0030f3ac(uVar1,"\n  Problem     : ");
  uVar1 = FUN_0030f3ac(uVar1,param_4);
                    /* try { // try from 003868e0 to 003868e7 has its CatchHandler @ 00386904 */
  FUN_0030f41c(auStack_28,uVar1);
  FUN_0030f658(auStack_60);
  return;
}


