/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053f280; name: FUN_0053f280
 */


undefined1 * FUN_0053f280(long param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  if ((ulong)(*(long *)(param_1 + 0x10) - (long)puVar1) < 0x30) {
    puVar1 = (undefined1 *)FUN_0053f330(param_1,0x30);
  }
  else {
    *(undefined1 **)(param_1 + 8) = puVar1 + 0x30;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_0053f6d0(puVar1 + 8,1,param_1);
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  return puVar1;
}


