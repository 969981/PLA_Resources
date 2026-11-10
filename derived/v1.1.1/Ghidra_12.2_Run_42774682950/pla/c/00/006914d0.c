/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006914d0; name: FUN_006914d0
 */


void FUN_006914d0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0x7d5);
                    /* try { // try from 0069154c to 0069155f has its CatchHandler @ 00691768 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 00691560 to 00691567 has its CatchHandler @ 00691764 */
    FUN_0030f41c(auStack_28,uVar4);
    FUN_0030f658(auStack_60);
    uVar6 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if ((uVar6 & 1) == 0) {
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      lVar5 = FUN_0033aecc();
    }
    else {
      lVar5 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
    }
    uVar1 = *(ulong *)(uVar6 + 0x10);
    lVar2 = *(long *)(uVar6 + 0x18);
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      lVar2 = uVar6 + 9;
      uVar1 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    }
    FUN_002e4094(lVar5,lVar2,uVar1);
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  if (iVar3 - 1U < 4) {
                    /* WARNING: Could not recover jumptable at 0x0069151c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_00691520 + (ulong)(byte)(&DAT_03a518bd)[iVar3 - 1U] * 4))();
    return;
  }
  return;
}


