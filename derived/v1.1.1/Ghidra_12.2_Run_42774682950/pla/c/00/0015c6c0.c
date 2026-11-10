/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015c6c0; name: FUN_0015c6c0
 */


long FUN_0015c6c0(undefined8 param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_0015cc60(param_1,6,(long)(int)(param_2 * 8 + 0x20));
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(char *)(lVar1 + 10) = (char)param_2;
  if (param_2 != 0) {
    memset((undefined8 *)(lVar1 + 0x18) + ((long)(int)param_2 - (ulong)(param_2 - 1)),0,
           (ulong)param_2 << 3);
  }
  return lVar1;
}


