/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0295e444; name: FUN_0295e444
 */


undefined8 FUN_0295e444(long param_1,byte param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 6) && ((int)param_3 < 5)) {
    uVar1 = *(undefined8 *)
             (*(long *)(param_1 + 0x68) + (ulong)param_2 * 0xa0 + (ulong)param_3 * 0x20 + 8);
  }
  return uVar1;
}


