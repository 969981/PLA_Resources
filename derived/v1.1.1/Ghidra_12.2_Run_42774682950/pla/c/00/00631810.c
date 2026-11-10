/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00631810; name: FUN_00631810
 */


void FUN_00631810(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_60,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/friends/v1/resources.pb.cc"
                 ,0x1e8);
                    /* try { // try from 00631894 to 006318a7 has its CatchHandler @ 00631910 */
    uVar4 = FUN_0030f3ac(auStack_60,"CHECK failed: (&from) != (this): ");
                    /* try { // try from 006318a8 to 006318af has its CatchHandler @ 0063190c */
    FUN_0030f41c(auStack_28,uVar4);
    FUN_0030f658(auStack_60);
    uVar6 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
  }
  if ((uVar6 & 1) == 0) {
    cVar3 = *(char *)(param_2 + 0x10);
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
    cVar3 = *(char *)(param_2 + 0x10);
  }
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(char *)(param_2 + 0x11) != '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if (*(char *)(param_2 + 0x12) != '\0') {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return;
}


