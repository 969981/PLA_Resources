/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d23070; name: FUN_00d23070
 */


void FUN_00d23070(undefined8 param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_02c44370(*(undefined8 *)(param_2 + 0x4f8));
  if ((uVar1 & 1) == 0) {
    FUN_02c44118(*(undefined8 *)(param_2 + 0x4f8),param_3,0);
  }
  FUN_02c443b4(*(undefined8 *)(param_2 + 0x4f8),param_3,1);
  FUN_02c441f8(param_1,*(undefined8 *)(param_2 + 0x4f8),param_3);
  return;
}


