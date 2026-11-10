/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00603c70; name: FUN_00603c70
 */


void FUN_00603c70(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/field_mask.pb.cc"
                 ,0x104);
                    /* try { // try from 00603cb0 to 00603cc3 has its CatchHandler @ 00603d28 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00603cc4 to 00603ccb has its CatchHandler @ 00603d24 */
    FUN_0030f41c(auStack_58,uVar1);
    FUN_0030f658(auStack_50);
    uVar3 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar3 = *(ulong *)(param_2 + 8);
  }
  if ((uVar3 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar2 = FUN_0030c8c0();
    }
    else {
      lVar2 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    FUN_0030cefc(lVar2,(uVar3 & 0xfffffffffffffffe) + 8);
  }
  FUN_0032ba34(param_1 + 0x10,param_2 + 0x10);
  return;
}


