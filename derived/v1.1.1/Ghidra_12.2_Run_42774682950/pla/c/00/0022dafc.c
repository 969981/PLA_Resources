/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022dafc; name: FUN_0022dafc
 */


void FUN_0022dafc(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (param_1 != lVar2) {
    cVar1 = *(char *)(lVar2 + 0x98);
    while( true ) {
      if (cVar1 == '\0') {
        lVar2 = *(long *)(lVar2 + 8);
      }
      else {
        FUN_0021e944(*(undefined8 *)(lVar2 + 0x90),param_2,param_3);
        lVar2 = *(long *)(lVar2 + 8);
      }
      if (param_1 == lVar2) break;
      cVar1 = *(char *)(lVar2 + 0x98);
    }
  }
  return;
}


