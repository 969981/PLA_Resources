/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00691b24; name: FUN_00691b24
 */


void FUN_00691b24(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0xac6);
                    /* try { // try from 00691b70 to 00691b83 has its CatchHandler @ 00691bf0 */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00691b84 to 00691b8b has its CatchHandler @ 00691bec */
    FUN_0030f41c(auStack_18,uVar3);
    FUN_0030f658(auStack_50);
    uVar5 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar5 = uVar5 & 0xfffffffffffffffe;
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    lVar4 = FUN_0033aecc();
  }
  else {
    lVar4 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  uVar1 = *(ulong *)(uVar5 + 0x10);
  lVar2 = *(long *)(uVar5 + 0x18);
  if ((*(byte *)(uVar5 + 8) & 1) == 0) {
    lVar2 = uVar5 + 9;
    uVar1 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
  }
  FUN_002e4094(lVar4,lVar2,uVar1);
  return;
}


