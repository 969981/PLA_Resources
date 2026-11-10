/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028dcfbc; name: FUN_028dcfbc
 */


void FUN_028dcfbc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  undefined8 local_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (*(undefined8 **)(param_1 + 8) != puVar1) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    do {
      puVar3 = puVar2 + 4;
      local_38 = *puVar2;
      (*(code *)*param_2)(param_2 + 4,&local_38);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
  }
  return;
}


