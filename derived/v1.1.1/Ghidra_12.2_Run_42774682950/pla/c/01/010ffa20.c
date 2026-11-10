/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ffa20; name: FUN_010ffa20
 */


undefined8 FUN_010ffa20(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  if (plVar4 != (long *)0x0) {
    uVar3 = *param_2;
    plVar1 = plVar2;
    if ((ulong)plVar4[4] >= uVar3) {
      plVar1 = plVar4;
    }
    for (plVar4 = (long *)plVar4[(ulong)plVar4[4] < uVar3]; plVar4 != (long *)0x0;
        plVar4 = (long *)plVar4[(ulong)plVar4[4] < uVar3]) {
      if ((ulong)plVar4[4] >= uVar3) {
        plVar1 = plVar4;
      }
    }
    if ((plVar1 != plVar2) && ((ulong)plVar1[4] <= uVar3)) {
      FUN_010ffa98();
      return 1;
    }
  }
  return 0;
}


