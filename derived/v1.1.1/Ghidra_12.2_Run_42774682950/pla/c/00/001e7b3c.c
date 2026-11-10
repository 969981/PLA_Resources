/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e7b3c; name: FUN_001e7b3c
 */


undefined8 FUN_001e7b3c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    uVar1 = FUN_001e693c();
    if ((int)uVar1 == 0) {
      FUN_001ffe6c(param_2,0);
      if (*(int *)(param_2 + 0x60) != 0xe) {
        *(undefined4 *)(param_2 + 0x60) = 0xe;
      }
      uVar1 = 0;
      *(undefined8 *)(param_2 + 0x10) = param_3;
      *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) | 1;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


