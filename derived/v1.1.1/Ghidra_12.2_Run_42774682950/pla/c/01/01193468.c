/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01193468; name: FUN_01193468
 */


void FUN_01193468(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = FUN_00d5f940(*(undefined8 *)(param_1 + 0x1a8));
  if ((uVar3 & 1) == 0) {
    return;
  }
  iVar1 = FUN_00d5294c(*(undefined8 *)(param_1 + 0x1a8));
  uVar2 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x1a8),iVar1);
  if (iVar1 == 1) {
    FUN_011aa510(*(undefined8 *)(param_1 + 0x1b0),uVar2);
  }
  FUN_011953c8(param_1);
  return;
}


