/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339219c; name: FUN_0339219c
 */


void FUN_0339219c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong local_38;
  
  if ((*(char *)(param_1 + 0x290) == '\0') ||
     (local_38 = param_3, uVar2 = FUN_03397d70(param_1 + 0x2e8,&local_38), (uVar2 & 1) == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0x210) < (int)param_3) {
    *(int *)(param_1 + 0x210) = (int)param_3;
  }
  uVar1 = FUN_032e8598(param_1 + 0x2a0,param_2);
  FUN_0339202c(param_1 + 0x18,param_3 & 0xffffffff,uVar1);
  return;
}


