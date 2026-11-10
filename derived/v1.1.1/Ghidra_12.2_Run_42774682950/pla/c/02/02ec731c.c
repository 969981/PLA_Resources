/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec731c; name: FUN_02ec731c
 */


undefined8 FUN_02ec731c(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = (undefined8 *)FUN_02f59e30(0,0x20);
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  return 1;
}


