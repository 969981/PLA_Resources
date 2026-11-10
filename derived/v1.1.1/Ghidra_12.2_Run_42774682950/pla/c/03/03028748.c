/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03028748; name: FUN_03028748
 */


void FUN_03028748(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_0434a080;
  param_2 = param_2 * 0x20;
  if (*(int *)(param_1 + 4) < param_2) {
    if (*(long *)(param_1 + 8) != 0) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,*(long *)(param_1 + 8),(long)*(int *)(param_1 + 4) + 0x30);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    uVar2 = (**(code **)(*(long *)puVar1 + 0x10))(puVar1,(long)(param_2 + 0x30),0);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(int *)(param_1 + 4) = param_2;
  }
  puVar1 = PTR_PTR_0434a080;
  if (*(int *)(param_1 + 0x14) < param_2) {
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,*(long *)(param_1 + 0x18),(long)*(int *)(param_1 + 0x14) + 0x30);
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    uVar2 = (**(code **)(*(long *)puVar1 + 0x10))(puVar1,(long)(param_2 + 0x30),0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}


