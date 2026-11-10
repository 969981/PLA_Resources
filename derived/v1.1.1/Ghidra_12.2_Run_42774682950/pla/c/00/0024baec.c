/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024baec; name: FUN_0024baec
 */


long FUN_0024baec(long param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (param_1 != lVar2) {
    cVar1 = *(char *)(lVar2 + 0x10);
    while( true ) {
      if ((*param_2 == cVar1) &&
         ((*param_2 == '\0' ||
          ((param_2[1] == *(char *)(lVar2 + 0x11) &&
           ((param_2[1] == '\0' ||
            ((param_2[2] == *(char *)(lVar2 + 0x12) &&
             ((param_2[2] == '\0' ||
              ((param_2[3] == *(char *)(lVar2 + 0x13) &&
               ((param_2[3] == '\0' ||
                ((param_2[4] == *(char *)(lVar2 + 0x14) &&
                 ((param_2[4] == '\0' ||
                  ((param_2[5] == *(char *)(lVar2 + 0x15) &&
                   ((param_2[5] == '\0' ||
                    ((param_2[6] == *(char *)(lVar2 + 0x16) &&
                     ((param_2[6] == '\0' || (param_2[7] == *(char *)(lVar2 + 0x17))))))))))))))))))
              ))))))))))) {
        return lVar2 + 0x18;
      }
      lVar2 = *(long *)(lVar2 + 8);
      if (param_1 == lVar2) break;
      cVar1 = *(char *)(lVar2 + 0x10);
    }
  }
  return 0;
}


