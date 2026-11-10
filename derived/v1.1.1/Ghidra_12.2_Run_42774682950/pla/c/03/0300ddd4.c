/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300ddd4; name: FUN_0300ddd4
 */


void FUN_0300ddd4(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_032cf5b0(0x38);
  *puVar2 = &DAT_042d97b8;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 1;
  uVar1 = *(undefined1 *)(param_2 + 0x18);
  *puVar2 = &DAT_042d9800;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *(undefined8 *)((long)puVar2 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *puVar2 = &DAT_042daba0;
  uVar3 = *(undefined8 *)(param_2 + 0x29);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x29) = uVar3;
  *param_1 = puVar2;
  return;
}


