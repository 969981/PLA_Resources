/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038b930; name: FUN_0038b930
 */


void FUN_0038b930(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  FUN_0030f640(auStack_60,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/generated_message_reflection.cc"
               ,0x9c);
                    /* try { // try from 0038b968 to 0038b9e3 has its CatchHandler @ 0038ba0c */
  uVar1 = FUN_0030f3ac(auStack_60,
                       "Protocol Buffer reflection usage error:\n  Method      : google::protobuf::Reflection::"
                      );
  uVar1 = FUN_0030f3ac(uVar1,param_3);
  uVar1 = FUN_0030f3ac(uVar1,"\n  Message type: ");
  uVar1 = FUN_0030f3e8(uVar1,*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_0030f3ac(uVar1,"\n  Field       : ");
  uVar1 = FUN_0030f3e8(uVar1,*(undefined8 *)(param_2 + 8));
  uVar1 = FUN_0030f3ac(uVar1,
                       "\n  Problem     : Enum value did not match field type:\n    Expected  : ");
  lVar2 = FUN_00346ae8(param_2);
  uVar1 = FUN_0030f3e8(uVar1,*(undefined8 *)(lVar2 + 8));
  uVar1 = FUN_0030f3ac(uVar1,"\n    Actual    : ");
  uVar1 = FUN_0030f3e8(uVar1,*(undefined8 *)(param_4 + 8));
                    /* try { // try from 0038b9e4 to 0038b9eb has its CatchHandler @ 0038ba08 */
  FUN_0030f41c(auStack_28,uVar1);
  FUN_0030f658(auStack_60);
  return;
}


