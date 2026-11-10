/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bee14; name: FUN_008bee14
 */


void FUN_008bee14(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
  iVar1 = FUN_009351b8(uVar2,*(undefined1 *)(param_1 + 0x7b));
  if (iVar1 != 0) {
    FUN_00923c30(**(undefined8 **)(param_1 + 0x70));
    uVar3 = FUN_00929154();
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_00923c30(**(undefined8 **)(param_1 + 0x70));
      FUN_009289bc(uVar2,*(undefined1 *)(param_1 + 0x7b));
      return;
    }
  }
  return;
}


