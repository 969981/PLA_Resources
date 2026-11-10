/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dac6c; name: FUN_027dac6c
 */


void FUN_027dac6c(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if ((((bVar1 == 0x86) || ((bVar1 | 1) == 0x85)) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
    FUN_027d82c8(bVar1,param_2);
    return;
  }
  *param_1 = 1;
  return;
}


