/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec4f70; name: FUN_02ec4f70
 */


void FUN_02ec4f70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_02ec1ffc(lVar1);
    FUN_02f59e60(0,lVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


