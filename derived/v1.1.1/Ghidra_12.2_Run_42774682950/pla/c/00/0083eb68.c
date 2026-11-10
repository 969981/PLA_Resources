/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083eb68; name: FUN_0083eb68
 */


void FUN_0083eb68(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = FUN_0082deb0(param_2);
  lVar1 = param_1 + 0x60;
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 == lVar1) {
    return;
  }
  cVar2 = *(char *)(lVar6 + 0x31);
  lVar3 = *(long *)(lVar6 + 8);
  do {
    if ((cVar2 == '\0') && (lVar5 = FUN_0082deb0(lVar6 + 0x10), lVar5 == lVar4)) {
      *(undefined1 *)(lVar6 + 0x31) = 1;
      if (lVar3 == lVar1) {
        return;
      }
    }
    else if (lVar3 == lVar1) {
      return;
    }
    cVar2 = *(char *)(lVar3 + 0x31);
    lVar6 = lVar3;
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


