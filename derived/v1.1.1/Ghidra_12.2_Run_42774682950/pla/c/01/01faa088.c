/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01faa088; name: FUN_01faa088
 */


bool FUN_01faa088(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_01faa0e0(*param_2,param_2[1],*(undefined8 *)*param_1);
  lVar2 = param_2[1];
  if (lVar2 != lVar1) {
    FUN_01faa154(param_2,lVar1);
  }
  return lVar2 != lVar1;
}


