/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02846d60; name: FUN_02846d60
 */


void FUN_02846d60(long param_1,undefined4 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_02c44370(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) == 0) {
    FUN_02c44118(*(undefined8 *)(param_1 + 0x98),param_2,1);
  }
  FUN_02c443b4(*(undefined8 *)(param_1 + 0x98),param_2,1);
  FUN_02c441f8(0,*(undefined8 *)(param_1 + 0x98),param_2);
  return;
}


