/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c618; name: FUN_0020c618
 */


undefined8 FUN_0020c618(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  if (*(undefined1 **)(*(long *)(param_1 + 8) + 0x10) == puVar2) {
    uVar1 = FUN_0020c52c();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    puVar2 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
  }
  *puVar2 = param_2;
  return 0;
}


