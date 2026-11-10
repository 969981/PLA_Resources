/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4f084; name: FUN_02f4f084
 */


long FUN_02f4f084(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1[0x21] == 0) {
    return 0x7fffffffffffffff;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(*param_1 + 8) + 0x68);
    if (uVar1 != 1) {
      lVar4 = (ulong)uVar1 - 1;
      plVar5 = param_1;
      do {
        plVar5 = plVar5 + 1;
        lVar4 = lVar4 + -1;
        lVar3 = *(long *)(*(long *)(*plVar5 + 8) + 0x68) + lVar3;
      } while (lVar4 != 0);
    }
  }
  uVar2 = *(long *)(param_1[0x21] + 8) - (ulong)*(uint *)(param_1[0x22] + 0x88);
  return (uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU)) + lVar3;
}


