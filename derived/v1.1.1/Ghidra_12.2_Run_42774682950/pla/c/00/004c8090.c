/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c8090; name: FUN_004c8090
 */


void FUN_004c8090(char *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[7];
  param_1[7] = (char)(bVar1 + 1);
  if ((((bVar1 + 1 >> 8 != 0) &&
       (bVar1 = param_1[6], param_1[6] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0)) &&
      (bVar1 = param_1[5], param_1[5] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0)) &&
     (((bVar1 = param_1[4], param_1[4] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0 &&
       (bVar1 = param_1[3], param_1[3] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0)) &&
      ((bVar1 = param_1[2], param_1[2] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0 &&
       (bVar1 = param_1[1], param_1[1] = (char)(bVar1 + 1), bVar1 + 1 >> 8 != 0)))))) {
    *param_1 = *param_1 + '\x01';
  }
  return;
}


