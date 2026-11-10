/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003808dc; name: FUN_003808dc
 */


void FUN_003808dc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  }
  lVar1 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (lVar1 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar1 != 0) {
    FUN_002e2f10(lVar1);
    FUN_002e2ef0(PTR_LAB_04373088,lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_002e2f10(lVar1);
  FUN_002e2ef0(PTR_LAB_04373088,lVar1);
  return;
}


