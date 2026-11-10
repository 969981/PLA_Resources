/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c5c4; name: FUN_0020c5c4
 */


undefined8 FUN_0020c5c4(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar3 = *(undefined1 **)(lVar2 + 0x20);
  if (*(undefined1 **)(lVar2 + 0x10) == puVar3) {
    uVar1 = FUN_0020c52c();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    lVar2 = *(long *)(param_1 + 8);
    puVar3 = *(undefined1 **)(lVar2 + 0x20);
  }
  *(undefined1 **)(lVar2 + 0x20) = puVar3 + 1;
  *puVar3 = param_2;
  return 0;
}


