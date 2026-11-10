/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f1ee0; name: FUN_004f1ee0
 */


long FUN_004f1ee0(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_004f1b80(param_1,0);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_00423790();
  FUN_00423420(lVar1);
  if ((lVar2 != 0) && (param_2 != (long *)0x0)) {
    FUN_00452330(*param_2);
    *param_2 = lVar2;
  }
  return lVar2;
}


