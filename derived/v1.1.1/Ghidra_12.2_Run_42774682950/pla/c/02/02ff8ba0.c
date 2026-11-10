/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff8ba0; name: FUN_02ff8ba0
 */


void FUN_02ff8ba0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_032cf5b0(0x80);
  FUN_02fecc2c(puVar1,param_2);
  *puVar1 = &PTR_LAB_042bac88;
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  puVar1[9] = *(undefined8 *)(param_2 + 0x48);
  puVar1[0xb] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  puVar1[10] = *(undefined8 *)(param_2 + 0x50);
  puVar1[8] = uVar2;
  *(undefined1 *)(puVar1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *param_1 = puVar1;
  return;
}


