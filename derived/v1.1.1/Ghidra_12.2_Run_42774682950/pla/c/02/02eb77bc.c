/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb77bc; name: FUN_02eb77bc
 */


undefined8 FUN_02eb77bc(float param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  float *pfVar3;
  
  plVar1 = *(long **)(param_2 + 0x28);
  if ((plVar1 != (long *)0x0) && (*(uint *)(plVar1 + 1) != 0)) {
    lVar2 = (ulong)*(uint *)(plVar1 + 1) << 3;
    pfVar3 = (float *)(*plVar1 + 4);
    while ((param_1 < pfVar3[-1] || (*pfVar3 < param_1))) {
      lVar2 = lVar2 + -8;
      pfVar3 = pfVar3 + 2;
      if (lVar2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


