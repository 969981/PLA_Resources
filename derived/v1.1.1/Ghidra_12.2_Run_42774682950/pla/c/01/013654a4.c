/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013654a4; name: FUN_013654a4
 */


long FUN_013654a4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_01365500(*param_2,param_2[1],*(undefined8 *)*param_1);
  if ((long *)param_2[1] == plVar1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*plVar1 != 0) {
      lVar2 = *plVar1 + -0x48;
    }
  }
  return lVar2;
}


