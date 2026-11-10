/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00575390; name: FUN_00575390
 */


undefined8 * FUN_00575390(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_002ebd80(0x88);
  *puVar1 = &DAT_04189958;
  *(undefined4 *)(puVar1 + 0x10) = 0xb;
  *(int *)(puVar1 + 2) = param_1;
  puVar1[0xf] = 0x100;
  uVar2 = FUN_002ebd50(0x100);
  puVar1[0xe] = uVar2;
  *(uint *)((long)puVar1 + 0x14) = (uint)(param_1 == 0);
  *(uint *)(puVar1 + 3) = (uint)(param_1 == 0);
  return puVar1;
}


