/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea7fc8; name: FUN_02ea7fc8
 */


void FUN_02ea7fc8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*DAT_0442d138)(0,0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 1;
  }
  return;
}


