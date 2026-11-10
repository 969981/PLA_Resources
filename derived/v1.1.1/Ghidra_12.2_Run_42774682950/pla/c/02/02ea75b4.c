/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea75b4; name: FUN_02ea75b4
 */


void FUN_02ea75b4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = *(char *)(param_1 + 0xb9);
  *(undefined1 *)(param_1 + 0xb9) = 1;
  uVar2 = FUN_02ea6be4(param_1 + 0x60,param_2,*param_3);
  if ((cVar1 == '\0') || ((uVar2 & 1) != 0)) {
    FUN_02ea7404(param_1);
    return;
  }
  return;
}


