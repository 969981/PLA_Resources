/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01234390; name: FUN_01234390
 */


void FUN_01234390(long param_1,int param_2)

{
  undefined8 uVar1;
  
  FUN_01234434();
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0x218) != -1) {
      return;
    }
    uVar1 = 2;
  }
  else {
    if (param_2 != 2) {
      if ((param_2 != 3) || (*(int *)(param_1 + 0x2c8) != -1)) {
        return;
      }
      FUN_01234434(param_1,1);
      uVar1 = 2;
      goto LAB_01234428;
    }
    if (*(int *)(param_1 + 0x270) != -1) {
      return;
    }
    uVar1 = 1;
  }
  FUN_01234434(param_1,uVar1);
  uVar1 = 3;
LAB_01234428:
  FUN_01234434(param_1,uVar1);
  return;
}


