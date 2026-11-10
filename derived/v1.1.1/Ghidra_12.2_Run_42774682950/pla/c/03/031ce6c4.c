/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ce6c4; name: FUN_031ce6c4
 */


void FUN_031ce6c4(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x48),((ulong)*(uint *)(param_1 + 0x54) & 0x3fffffff) << 4
              );
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x38),((ulong)*(uint *)(param_1 + 0x44) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(long *)(param_1 + 0x28) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x28),((ulong)*(uint *)(param_1 + 0x34) & 0x3fffffff) << 3
              );
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < *(int *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 0x18),*(int *)(param_1 + 0x24) << 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(long *)(param_1 + 8) != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,*(long *)(param_1 + 8),((ulong)*(uint *)(param_1 + 0x14) & 0x3fffffff) * 6);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}


