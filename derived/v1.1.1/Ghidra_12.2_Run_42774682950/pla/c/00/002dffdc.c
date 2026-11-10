/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002dffdc; name: FUN_002dffdc
 */


void FUN_002dffdc(long param_1,long param_2)

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
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/common/value.pb.cc"
                 ,0x25b);
                    /* try { // try from 002e0064 to 002e0077 has its CatchHandler @ 002e03c0 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 002e0078 to 002e007f has its CatchHandler @ 002e03bc */
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
  if (iVar3 - 1U < 10) {
                    /* WARNING: Could not recover jumptable at 0x002e0028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_002e002c + (ulong)(byte)(&DAT_039f88ef)[iVar3 - 1U] * 4))();
    return;
  }
  return;
}


