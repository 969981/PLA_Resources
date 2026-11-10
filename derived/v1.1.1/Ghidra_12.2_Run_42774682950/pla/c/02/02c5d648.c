/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5d648; name: FUN_02c5d648
 */


void FUN_02c5d648(long param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 == 0x226) {
    sVar1 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    if (sVar1 == 2) {
      FUN_02c8ad24(*(undefined8 *)(param_1 + 0x98));
      if (0x270e < param_2) {
        param_2 = 9999;
      }
      FUN_02c8a9e4(*(undefined8 *)(param_1 + 0x98),param_2);
      return;
    }
  }
  return;
}


