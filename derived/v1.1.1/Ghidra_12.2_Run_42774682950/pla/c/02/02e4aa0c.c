/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4aa0c; name: FUN_02e4aa0c
 */


void FUN_02e4aa0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 local_60 [2];
  
  if (0 < *(int *)(param_4 + 0x44)) {
    lVar2 = 0;
    lVar1 = param_4 + 0xb0;
    do {
      local_60[0] = param_2;
      local_60[1] = param_3;
      FUN_02e49ed0(param_1,lVar1,local_60[*(int *)(param_4 + lVar2 * 4)],0,param_5);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (lVar2 < *(int *)(param_4 + 0x44));
  }
  return;
}


