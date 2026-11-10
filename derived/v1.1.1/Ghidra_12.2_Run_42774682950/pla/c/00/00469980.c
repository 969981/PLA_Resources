/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00469980; name: FUN_00469980
 */


void FUN_00469980(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_0046c140(param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_0046bce0(*(undefined8 *)(param_1 + 0x20),lVar1);
  return;
}


