/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01674434; name: FUN_01674434
 */


undefined8 FUN_01674434(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 8);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x1e1) == '\0')) {
      uVar1 = 0;
    }
    else {
      FUN_0167448c(param_1);
      uVar1 = 1;
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


