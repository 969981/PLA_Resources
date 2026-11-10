/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1c1d0; name: FUN_02f1c1d0
 */


void FUN_02f1c1d0(long param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(byte *)(param_1 + 0x6c) - 3 < 3) {
    if ((*(char *)(param_1 + 0x6d) != '\0') &&
       (*param_2 = **(undefined4 **)(param_1 + 0x20), 1 < *(byte *)(param_1 + 0x6d))) {
      uVar2 = 1;
      do {
        uVar1 = uVar2 + 1;
        param_2[uVar2] = *(undefined4 *)(*(long *)(param_1 + 0x20) + uVar2 * 4);
        uVar2 = uVar1;
      } while (uVar1 < *(byte *)(param_1 + 0x6d));
    }
  }
  else if ((*(byte *)(param_1 + 0x6c) < 3) && (*(char *)(param_1 + 0x6d) != '\0')) {
    uVar2 = 0;
    do {
      param_2[uVar2] = (float)(int)*(short *)(*(long *)(param_1 + 0x20) + uVar2 * 2) * 3.0517578e-05
      ;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x6d));
  }
  return;
}


