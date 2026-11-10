/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b77cc; name: FUN_010b77cc
 */


void FUN_010b77cc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x1a0) != 0) {
    FUN_02a75668();
  }
  if (*(long *)(param_1 + 0x1a8) != 0) {
    FUN_02a75668();
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    FUN_02a75668();
  }
  FUN_0021f850(*(long *)(param_1 + 0xd8) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0xe0) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0xe8) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0xf0) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0xf8) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x100) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x108) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x110) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x118) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x120) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x128) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x130) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x138) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x140) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x148) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x150) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x158) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x160) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x168) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x170) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x178) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x180) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x188) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 400) + 0x68);
  FUN_0021f850(*(long *)(param_1 + 0x198) + 0x68);
  lVar2 = *(long *)(*(long *)(param_1 + 0x3a8) + 0x28);
  if (lVar2 != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x3a8) + 0x20);
    lVar2 = lVar2 * 0x18;
    do {
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        *(ushort *)(lVar3 + 0x114) = *(ushort *)(lVar3 + 0x114) | 4;
      }
      plVar1 = plVar1 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  return;
}


