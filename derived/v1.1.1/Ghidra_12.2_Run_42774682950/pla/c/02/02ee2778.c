/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee2778; name: FUN_02ee2778
 */


long * FUN_02ee2778(long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 == 0) {
    return (long *)0x0;
  }
  uVar1 = (int)param_2 + param_3;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar1 / uVar2;
  }
  for (plVar4 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
      (plVar4 != (long *)0x0 && ((*plVar4 != param_2 || ((int)plVar4[1] != param_3))));
      plVar4 = (long *)plVar4[2]) {
  }
  return plVar4;
}


