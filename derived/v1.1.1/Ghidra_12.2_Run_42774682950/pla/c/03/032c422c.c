/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c422c; name: FUN_032c422c
 */


bool FUN_032c422c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong __n;
  
  __n = param_2[1] - (long)*param_2;
  if ((ulong)(param_1[1] - (long)*param_1) < __n) {
    return false;
  }
  iVar1 = memcmp((void *)*param_1,(void *)*param_2,__n);
  return iVar1 == 0;
}


