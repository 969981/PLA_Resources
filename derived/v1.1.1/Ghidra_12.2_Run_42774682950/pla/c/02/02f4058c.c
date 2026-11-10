/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4058c; name: FUN_02f4058c
 */


void FUN_02f4058c(long param_1,uint *param_2)

{
  uint uVar1;
  
  FUN_02f40810(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 100) = 0;
  if (*param_2 != 0) {
    uVar1 = 0;
    do {
      FUN_02f404bc(param_1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  *(uint *)(param_1 + 0x60) = param_2[1];
  *(uint *)(param_1 + 100) = param_2[2];
  *(uint *)(param_1 + 0x68) = param_2[3];
  return;
}


