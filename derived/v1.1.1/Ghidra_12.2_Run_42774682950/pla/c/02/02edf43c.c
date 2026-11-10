/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edf43c; name: FUN_02edf43c
 */


bool FUN_02edf43c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    do {
      if ((((*(long *)(lVar1 + 0x20) == *param_2) && (*(int *)(lVar1 + 0x28) == (int)param_2[1])) &&
          (*(int *)(lVar1 + 0x30) == (int)param_2[2])) &&
         (((*(char *)(lVar1 + 0x38) == (char)param_2[3] &&
           (*(char *)(lVar1 + 0x40) == (char)param_2[4])) && (*(long *)(lVar1 + 0x48) == param_2[5])
          ))) {
        lVar2 = lVar1;
        break;
      }
      lVar1 = *(long *)(lVar1 + 8);
      lVar2 = 0;
    } while (lVar1 != 0);
  }
  return lVar2 != 0;
}


