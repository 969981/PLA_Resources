/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f59f0; name: FUN_003f59f0
 */


undefined8 FUN_003f59f0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  plVar1 = (long *)param_1[3];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
                    /* try { // try from 003f5a0c to 003f5a0f has its CatchHandler @ 003f5a30 */
    FUN_002ebe80();
  }
  FUN_002ebe80(param_1);
  return uVar2;
}


