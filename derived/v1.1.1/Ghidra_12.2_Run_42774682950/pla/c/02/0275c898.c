/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0275c898; name: FUN_0275c898
 */


long FUN_0275c898(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  
  if ((ulong)param_1[1] < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2 << 3,8);
  if (lVar1 == 0) {
    (**(code **)(*(long *)*param_1 + 0xb8))();
  }
  return lVar1;
}


