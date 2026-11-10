/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00391d10; name: FUN_00391d10
 */


void FUN_00391d10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long local_60;
  undefined8 uStack_58;
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_00391bac();
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar2 = FUN_003420d0();
  if (lVar5 != lVar2) {
    FUN_0030f640(&local_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message.cc"
                 ,0xd5);
                    /* try { // try from 00391d5c to 00391d7b has its CatchHandler @ 00391e04 */
    uVar3 = FUN_0030f3ac(&local_60,
                         "CHECK failed: (descriptor->file()->pool()) == (DescriptorPool::generated_pool()): "
                        );
    uVar3 = FUN_0030f3ac(uVar3,
                         "Tried to register a non-generated type with the generated type registry.")
    ;
                    /* try { // try from 00391d7c to 00391d83 has its CatchHandler @ 00391dfc */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(&local_60);
  }
  local_60 = param_1;
  uStack_58 = param_2;
  uVar4 = FUN_00392e40(lVar1 + 0x50,&local_60);
  if ((uVar4 & 1) == 0) {
    FUN_0030f640(&local_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message.cc"
                 ,0xde);
                    /* try { // try from 00391db8 to 00391dd3 has its CatchHandler @ 00391e00 */
    uVar3 = FUN_0030f3ac(&local_60,"Type is already registered: ");
    uVar3 = FUN_0030f3e8(uVar3,*(undefined8 *)(param_1 + 8));
                    /* try { // try from 00391dd4 to 00391ddb has its CatchHandler @ 00391df8 */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(&local_60);
  }
  return;
}


