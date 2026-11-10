/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e5c98; name: FUN_006e5c98
 */


void FUN_006e5c98(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x1;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_1 == param_2) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/com_google_googleapis/google/rpc/status.pb.cc"
                 ,0x135);
                    /* try { // try from 006e5ccc to 006e5cdf has its CatchHandler @ 006e5d80 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 006e5ce0 to 006e5ce7 has its CatchHandler @ 006e5d7c */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  if (*(int *)PTR_DAT_043761d0 != 0) {
    FUN_0032d2b0(PTR_DAT_043761d0);
  }
  puVar1 = PTR_DAT_043761d8;
  FUN_0038e9d0(PTR_DAT_043761d8,0);
  lVar3 = *(long *)(*(long *)(puVar1 + 0x58) + 8);
  (**(code **)(*param_2 + 0x98))(param_2);
  if (lVar3 == extraout_x1) {
    FUN_006e5d94(param_1,param_2);
    return;
  }
  FUN_0039b3d8(param_2,param_1);
  return;
}


