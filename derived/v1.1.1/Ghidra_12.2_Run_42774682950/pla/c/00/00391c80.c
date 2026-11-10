/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00391c80; name: FUN_00391c80
 */


void FUN_00391c80(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  undefined8 local_40;
  long lStack_38;
  
  lVar1 = FUN_00391bac();
  local_40 = *(undefined8 *)(param_1 + 0x10);
  lStack_38 = param_1;
  uVar2 = FUN_00392810(lVar1 + 8,&local_40);
  if ((uVar2 & 1) == 0) {
    FUN_0030f640(&local_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message.cc"
                 ,0xcf);
                    /* try { // try from 00391cc0 to 00391cdb has its CatchHandler @ 00391cfc */
    uVar3 = FUN_0030f3ac(&local_40,"File is already registered: ");
    uVar3 = FUN_0030f3ac(uVar3,*(undefined8 *)(param_1 + 0x10));
                    /* try { // try from 00391cdc to 00391ce3 has its CatchHandler @ 00391cf8 */
    FUN_0030f41c(auStack_48,uVar3);
    FUN_0030f658(&local_40);
  }
  return;
}


