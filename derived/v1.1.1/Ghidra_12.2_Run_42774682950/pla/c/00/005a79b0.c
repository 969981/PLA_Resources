/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a79b0; name: FUN_005a79b0
 */


bool FUN_005a79b0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
  }
  if (uVar1 < 5) {
    return false;
  }
  lVar2 = param_1[2];
  if (*param_1 == 0) {
    lVar2 = (long)param_1 + 9;
  }
  return *(int *)(lVar2 + uVar1 + -4) == 0x6e69622d;
}


