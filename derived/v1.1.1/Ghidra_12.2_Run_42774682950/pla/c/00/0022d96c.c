/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022d96c; name: FUN_0022d96c
 */


undefined8 FUN_0022d96c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  do {
    if (param_1 == lVar1) {
      return 0;
    }
    uVar2 = 0;
    while (*(char *)(param_2 + uVar2) == *(char *)(lVar1 + 0x10 + uVar2)) {
      if ((*(char *)(param_2 + uVar2) == '\0') || (uVar2 = uVar2 + 1, 0x7f < uVar2)) {
        return *(undefined8 *)(lVar1 + 0x90);
      }
    }
    lVar1 = *(long *)(lVar1 + 8);
  } while( true );
}


