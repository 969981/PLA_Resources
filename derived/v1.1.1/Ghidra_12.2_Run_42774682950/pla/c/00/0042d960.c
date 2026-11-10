/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042d960; name: FUN_0042d960
 */


uint FUN_0042d960(long param_1)

{
  uint *puVar1;
  
  if ((*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) ||
     (puVar1 = (uint *)**(undefined8 **)(param_1 + 0x18), puVar1 == (uint *)0x0)) {
    return 0;
  }
  return (*puVar1 >> 2 ^ 0xffffffff) & 1;
}


