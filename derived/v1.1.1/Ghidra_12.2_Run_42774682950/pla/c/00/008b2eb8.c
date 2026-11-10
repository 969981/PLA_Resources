/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b2eb8; name: FUN_008b2eb8
 */


void FUN_008b2eb8(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
  uVar1 = FUN_00934260(uVar2,1);
  uVar2 = FUN_00923c30(**(undefined8 **)(param_1 + 0x70));
  FUN_009289bc(uVar2,uVar1);
  return;
}


