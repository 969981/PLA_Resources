/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281c1f0; name: FUN_0281c1f0
 */


void FUN_0281c1f0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
  if (*(code **)(param_1 + 0x390) != (code *)0x0) {
    (**(code **)(param_1 + 0x390))(param_1 + 0x3b0);
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
  iVar3 = FUN_0282d3ac(*(undefined8 *)(param_1 + 0x8b0),uVar1);
  iVar4 = FUN_0282d3ac(*(undefined8 *)(param_1 + 0x8b0),uVar2);
  if (iVar4 < iVar3 && iVar4 < *(int *)(*(long *)(param_1 + 0x8b0) + 0x10)) {
    FUN_0282efc8((float)iVar4,*(undefined8 *)(param_1 + 0x7f8),*(undefined4 *)(param_1 + 0x990));
    return;
  }
  return;
}


