/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f33f8; name: FUN_029f33f8
 */


void FUN_029f33f8(long param_1,undefined1 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  long local_38;
  undefined4 local_30;
  char local_28 [8];
  
  *param_2 = 0;
  **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 5;
  uVar1 = (ulong)*(byte *)(*(long *)(param_1 + 8) + 0x130);
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  if ((*(char *)(lVar2 + uVar1 * 0x38 + 0x38) != '\0') &&
     (local_38 = *(long *)(lVar2 + uVar1 * 0x38 + 8), local_38 != 0)) {
    local_30 = *param_3;
    FUN_029db038(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x640),local_28,&local_38);
    if (local_28[0] != '\0') {
      FUN_029fbef4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1980),local_28,&local_38);
      *param_2 = 1;
    }
  }
  return;
}


