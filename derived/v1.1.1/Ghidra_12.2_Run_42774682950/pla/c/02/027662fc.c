/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027662fc; name: FUN_027662fc
 */


void FUN_027662fc(undefined4 *param_1,ushort *param_2,long *param_3)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (((char)bVar1 < '\0') && ((bVar1 | 1) != 0x81)) {
    *param_1 = 1;
    return;
  }
  if (bVar1 == 0x81) {
    uVar2 = *(ushort *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 2;
  }
  else if (bVar1 == 0x80) {
    uVar2 = (ushort)*(byte *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
  }
  else {
    uVar2 = (ushort)bVar1;
  }
  *param_2 = uVar2;
  *param_1 = 0;
  return;
}


