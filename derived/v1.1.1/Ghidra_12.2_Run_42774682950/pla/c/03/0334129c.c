/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334129c; name: FUN_0334129c
 */


bool FUN_0334129c(undefined8 param_1)

{
  bool bVar1;
  char *local_28 [2];
  ulong local_18;
  
  FUN_032e2c7c(local_28,param_1,&DAT_043586c0);
  if ((local_18 & 1) != 0) {
    FUN_032e0c40(local_18 & 0xfffffffffffffffe);
  }
  if (local_28[0] == (char *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *local_28[0] != '\0';
  }
  return bVar1;
}


