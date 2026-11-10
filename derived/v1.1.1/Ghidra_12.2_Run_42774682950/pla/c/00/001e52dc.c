/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e52dc; name: FUN_001e52dc
 */


void FUN_001e52dc(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar3 = 0;
  do {
    cVar1 = param_1[lVar3];
    if ((cVar1 == '\"') || (cVar1 == '\\')) {
      lVar2 = lVar2 + 1;
    }
    else if (cVar1 == '\0') {
      lVar2 = FUN_002044c4(lVar2 + lVar3 + 1);
      if (lVar2 == 0) {
        return;
      }
      lVar3 = 0;
      do {
        cVar1 = *param_1;
        if ((cVar1 == '\"') || (cVar1 == '\\')) {
          *(undefined1 *)(lVar2 + lVar3) = 0x5c;
          cVar1 = *param_1;
          lVar3 = lVar3 + 1;
        }
        else if (cVar1 == '\0') {
          *(undefined1 *)(lVar2 + lVar3) = 0;
          return;
        }
        *(char *)(lVar2 + lVar3) = cVar1;
        lVar3 = lVar3 + 1;
        param_1 = param_1 + 1;
      } while( true );
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


