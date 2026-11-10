/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423ae0; name: FUN_00423ae0
 */


long FUN_00423ae0(long param_1,undefined8 param_2)

{
  int iVar1;
  code *pcVar2;
  
  if (((*(long *)(param_1 + 0x10) == 0) ||
      (pcVar2 = *(code **)(*(long *)(param_1 + 0x10) + 0xb0), pcVar2 == (code *)0x0)) ||
     (iVar1 = (*pcVar2)(param_1,10,0,param_2), iVar1 < 1)) {
    return 0;
  }
  return (long)iVar1;
}


