/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f3034; name: FUN_031f3034
 */


void FUN_031f3034(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    lVar1 = *(long *)(param_1 + 0x1a0);
    lVar2 = (long)*(int *)(param_1 + 0x1a8) * 0x50;
    do {
      FUN_031f69cc(lVar1,param_1,param_2,param_1 + 0x1b0);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  return;
}


