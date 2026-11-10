/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e70c88; name: FUN_02e70c88
 */


void FUN_02e70c88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_02f59e30(7,0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(byte *)((long)puVar1 + 0x14) = *(byte *)((long)puVar1 + 0x14) & 0xf0 | 0xb;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  return;
}


