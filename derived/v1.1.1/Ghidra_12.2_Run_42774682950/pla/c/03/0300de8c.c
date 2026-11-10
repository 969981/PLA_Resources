/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300de8c; name: FUN_0300de8c
 */


void FUN_0300de8c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_032cf5b0(0x30);
  *puVar1 = &DAT_042d97b8;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 0x18);
  *puVar1 = &DAT_042d9800;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *puVar1 = &DAT_042dab58;
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *param_1 = puVar1;
  return;
}


