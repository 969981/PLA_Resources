/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02764218; name: FUN_02764218
 */


void FUN_02764218(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    do {
      *puVar1 = &PTR_LAB_0426b9b8;
      FUN_0276429c(puVar1 + 1,param_2 + 8);
      FUN_006e4bd8(puVar1 + 5,param_2 + 0x28);
      *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 0x30);
      param_2 = param_2 + 0x38;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 0x38);
      *(undefined8 **)(param_1 + 8) = puVar1;
    } while (param_3 != param_2);
  }
  return;
}


