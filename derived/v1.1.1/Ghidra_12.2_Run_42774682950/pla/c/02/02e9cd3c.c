/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9cd3c; name: FUN_02e9cd3c
 */


void FUN_02e9cd3c(long param_1,short param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  if (param_2 == 0x1c) {
    *(undefined4 *)(param_1 + 0x130) = uVar1;
  }
  else {
    if (param_2 == 0x1b) {
      *(undefined4 *)(param_1 + 300) = uVar1;
      return;
    }
    if (param_2 == 0x1a) {
      *(undefined4 *)(param_1 + 0x128) = uVar1;
      return;
    }
  }
  return;
}


