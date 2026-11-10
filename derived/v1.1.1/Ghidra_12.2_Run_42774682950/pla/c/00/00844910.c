/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00844910; name: FUN_00844910
 */


void FUN_00844910(long param_1,char *param_2,undefined4 param_3)

{
  size_t __n;
  
  FUN_00844984();
  FUN_007e60f4(param_1 + 0x1910,0x1a);
  *(undefined8 *)(param_1 + 0x1930) = 0;
  *(undefined1 *)(param_1 + 0x1938) = 0;
  *(undefined4 *)(param_1 + 0x193c) = param_3;
  __n = strlen(param_2);
  if (0x1e < __n) {
    __n = 0x1f;
  }
  memcpy((void *)(param_1 + 0x1808),param_2,__n);
  *(undefined1 *)(param_1 + 0x1808 + __n) = 0;
  return;
}


