/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033778a4; name: FUN_033778a4
 */


bool FUN_033778a4(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong local_18;
  
  FUN_032e431c(&local_18,*param_1);
  if (local_18 < 2) {
    bVar1 = false;
  }
  else {
    FUN_032e4384(&local_18,*param_2);
    bVar1 = 1 < local_18;
  }
  return bVar1;
}


