/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00602f7c; name: FUN_00602f7c
 */


void FUN_00602f7c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x1;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_1 == param_2) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/empty.pb.cc"
                 ,0xca);
                    /* try { // try from 00602fb0 to 00602fc3 has its CatchHandler @ 00603064 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00602fc4 to 00602fcb has its CatchHandler @ 00603060 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  if (*(int *)PTR_DAT_043751d8 != 0) {
    FUN_0032d2b0(PTR_DAT_043751d8);
  }
  puVar1 = PTR_DAT_043751e0;
  FUN_0038e9d0(PTR_DAT_043751e0,0);
  lVar3 = *(long *)(*(long *)(puVar1 + 0x58) + 8);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar3 == extraout_x1) {
    FUN_00603078(param_1,param_2);
    return;
  }
  FUN_0039b3d8(param_2,param_1);
  return;
}


