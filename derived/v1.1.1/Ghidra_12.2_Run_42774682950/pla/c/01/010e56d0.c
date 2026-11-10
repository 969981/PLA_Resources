/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e56d0; name: FUN_010e56d0
 */


uint FUN_010e56d0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = FUN_010e713c();
  if (((uVar1 & 0xff) == 0) && (plVar2 = *(long **)(param_1 + 0x60), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_2);
  }
  return uVar1 >> 8 & 0xff;
}


