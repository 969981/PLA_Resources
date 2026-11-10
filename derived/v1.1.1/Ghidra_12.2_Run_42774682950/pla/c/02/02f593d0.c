/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f593d0; name: FUN_02f593d0
 */


long FUN_02f593d0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + (param_3 + 0xfU >> 4 & 0xffffffff) * 0x10);
  plVar3 = (long *)*plVar1;
  if (plVar3 == (long *)0x0) {
    lVar2 = FUN_02f59480();
    return lVar2;
  }
  *plVar1 = *plVar3;
  return (long)plVar3;
}


