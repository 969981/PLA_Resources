/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0153c220; name: FUN_0153c220
 */


void FUN_0153c220(long param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_02c43e18(*(undefined8 *)(param_1 + 0x578));
  FUN_02c43e50(*(undefined8 *)(param_1 + 0x578),uVar1,*(undefined8 *)(param_2 + 8),0);
  uVar2 = FUN_02c44370(*(undefined8 *)(param_1 + 0x578),uVar1);
  if ((uVar2 & 1) == 0) {
    FUN_02c44118(*(undefined8 *)(param_1 + 0x578),uVar1,1);
  }
  FUN_02c443b4(*(undefined8 *)(param_1 + 0x578),uVar1,1);
  FUN_02c441f8(0,*(undefined8 *)(param_1 + 0x578),uVar1);
  return;
}


