/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00206330; name: FUN_00206330
 */


void FUN_00206330(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x88);
    FUN_00211348(lVar1,param_2);
    FUN_0020c748(param_2,lVar1);
    lVar1 = lVar2;
  }
  return;
}


