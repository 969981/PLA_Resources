/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002deb6c; name: FUN_002deb6c
 */


void FUN_002deb6c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/common/value.pb.cc"
                 ,0x342);
                    /* try { // try from 002debb0 to 002debc3 has its CatchHandler @ 002dec40 */
    uVar3 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 002debc4 to 002debcb has its CatchHandler @ 002dec3c */
    FUN_0030f41c(auStack_28,uVar3);
    FUN_0030f658(auStack_60);
    uVar5 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if ((uVar5 & 1) != 0) {
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
  }
  FUN_002e24dc(param_1 + 0x10,param_2 + 0x10);
  return;
}


