/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03048368; name: FUN_03048368
 */


void FUN_03048368(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_032cf5b0(0x20);
  puVar2[2] = 1;
  *puVar2 = &DAT_042bae88;
  puVar2[1] = 0xffffffff;
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)((long)puVar2 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined4 *)(puVar2 + 3) = uVar1;
  *puVar2 = &DAT_042b2880;
  *param_1 = puVar2;
  return;
}


