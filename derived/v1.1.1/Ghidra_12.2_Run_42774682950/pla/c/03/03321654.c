/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03321654; name: FUN_03321654
 */


undefined4 FUN_03321654(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 == (long *)0x0) {
    return 0x80040200;
  }
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,param_2);
  return uVar1;
}


