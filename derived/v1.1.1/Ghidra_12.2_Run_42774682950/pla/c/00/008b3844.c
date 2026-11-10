/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b3844; name: FUN_008b3844
 */


void FUN_008b3844(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00923bb4(**(undefined8 **)(param_1 + 0x70));
  if (*(char *)(lVar2 + 0x359) == '\0') {
    return;
  }
  uVar3 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
  uVar1 = FUN_00934260(uVar3,1);
  lVar2 = FUN_00923bb4(**(undefined8 **)(param_1 + 0x70));
  FUN_00927d84(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x178),uVar1,
               *(undefined4 *)(lVar2 + 0x3d4));
  return;
}


