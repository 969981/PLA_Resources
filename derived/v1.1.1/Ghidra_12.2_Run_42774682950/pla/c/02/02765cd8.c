/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02765cd8; name: FUN_02765cd8
 */


void FUN_02765cd8(undefined4 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (((char)bVar1 < '\0') && ((bVar1 | 3) != 0x83)) {
    *param_1 = 1;
    return;
  }
  FUN_02765d94((long)(char)bVar1,param_2);
  return;
}


