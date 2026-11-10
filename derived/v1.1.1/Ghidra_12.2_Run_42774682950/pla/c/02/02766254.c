/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02766254; name: FUN_02766254
 */


void FUN_02766254(undefined4 *param_1,uint *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(*param_3 + param_3[2]);
  param_3[2] = param_3[2] + 1;
  if (0x82 < bVar1) {
    *param_1 = 1;
    return;
  }
  uVar2 = (uint)bVar1;
  if (uVar2 == 0x82) {
    uVar2 = *(uint *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 4;
  }
  else if (bVar1 == 0x81) {
    uVar2 = (uint)*(ushort *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 2;
  }
  else if (bVar1 == 0x80) {
    uVar2 = (uint)*(byte *)(*param_3 + param_3[2]);
    param_3[2] = param_3[2] + 1;
  }
  *param_2 = uVar2;
  *param_1 = 0;
  return;
}


