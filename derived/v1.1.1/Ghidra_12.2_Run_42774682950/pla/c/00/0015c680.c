/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015c680; name: FUN_0015c680
 */


void FUN_0015c680(undefined8 param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0015cc60(param_1,0x26,(long)(param_2 * 0x10 + 0x20));
  *(char *)(lVar1 + 10) = (char)param_2;
  return;
}


