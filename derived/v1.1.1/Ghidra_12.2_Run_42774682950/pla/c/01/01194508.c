/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01194508; name: FUN_01194508
 */


void FUN_01194508(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1d4) == 0) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x1d4) != 1) {
      return;
    }
    FUN_00d4be50(*(undefined8 *)(param_1 + 0x1a8),1,1);
    FUN_00d42438(*(undefined8 *)(param_1 + 0x1a8),1,1);
    FUN_00d469b4(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + 0x68),*(long *)(param_1 + 0x1a8),0);
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  return;
}


