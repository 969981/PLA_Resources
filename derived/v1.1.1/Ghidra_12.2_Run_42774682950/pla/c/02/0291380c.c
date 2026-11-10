/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291380c; name: FUN_0291380c
 */


undefined8 FUN_0291380c(float param_1,long param_2,int param_3,undefined4 param_4)

{
  long *plVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  plVar1 = *(long **)(*(long *)(param_2 + 0x158) + 0x60);
  (**(code **)(*plVar1 + 200))(plVar1,param_3,(int)(param_1 * 1000.0),param_4);
  return 1;
}


