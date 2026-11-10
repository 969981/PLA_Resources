/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006028cc; name: FUN_006028cc
 */


void FUN_006028cc(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/timestamp.pb.cc"
                 ,0x112);
                    /* try { // try from 00602930 to 00602943 has its CatchHandler @ 006029a8 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00602944 to 0060294b has its CatchHandler @ 006029a4 */
    FUN_0030f41c(auStack_58,uVar1);
    FUN_0030f658(auStack_50);
    uVar2 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_2 + 0x10);
  }
  else {
    lVar3 = (uVar2 & 0xfffffffffffffffe) + 8;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      uVar1 = FUN_0030c8c0();
      FUN_0030cefc(uVar1,lVar3);
      lVar3 = *(long *)(param_2 + 0x10);
    }
    else {
      FUN_0030cefc((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,lVar3);
      lVar3 = *(long *)(param_2 + 0x10);
    }
  }
  if (lVar3 != 0) {
    *(long *)(param_1 + 0x10) = lVar3;
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  return;
}


