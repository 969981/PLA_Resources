/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb3268; name: FUN_02eb3268
 */


void FUN_02eb3268(void *param_1)

{
  if (param_1 == (void *)0x0) {
    FUN_02f33218(&DAT_0440a4a0);
    return;
  }
  memcpy(&DAT_0440a4a0,param_1,0xa8);
  if (DAT_0440a544 == 0) {
    DAT_0440a544 = 4;
  }
  memcpy(param_1,&DAT_0440a4a0,0xa8);
  return;
}


