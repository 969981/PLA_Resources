/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d9aec; name: FUN_006d9aec
 */


void FUN_006d9aec(undefined8 *param_1,long param_2,long param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  *param_1 = 0;
  if (param_3 != 0) {
    param_3 = param_3 * 0x28;
    do {
      pbVar1 = (byte *)FUN_006d99cc(param_2);
      pbVar3 = *(byte **)(pbVar1 + 0x10);
      if ((*pbVar1 & 1) == 0) {
        pbVar3 = pbVar1 + 1;
      }
      uVar2 = FUN_006d99d0(param_2);
      FUN_006d9b5c(param_1,pbVar3,uVar2);
      param_2 = param_2 + 0x28;
      param_3 = param_3 + -0x28;
    } while (param_3 != 0);
  }
  return;
}


