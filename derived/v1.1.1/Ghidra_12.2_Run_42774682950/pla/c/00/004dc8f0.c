/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dc8f0; name: FUN_004dc8f0
 */


undefined8 FUN_004dc8f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  
  lVar1 = FUN_004e30e0(param_2,local_18);
  uVar2 = 0;
  if ((lVar1 != 0) && (lVar1 = FUN_004dc940(param_1,local_18[0]), uVar2 = 0, lVar1 != 0)) {
    *(long *)(*(long *)(param_1 + 0xa8) + 0x308) = lVar1;
    uVar2 = 1;
  }
  return uVar2;
}


