/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028d64b8; name: FUN_028d64b8
 */


undefined8 FUN_028d64b8(long *param_1,char *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *param_1;
  cVar2 = *param_2;
  lVar3 = FUN_028cb574(param_1[1],param_3);
  if (cVar2 == '\0') {
    uVar4 = FUN_028ca890(lVar3 + 0xd0,param_5);
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)(lVar1 + 0x90);
      if (lVar3 == *(long *)(lVar1 + 0x98)) {
        return 0;
      }
      while ((*(long *)(lVar3 + 0x198) != *param_5 || (*(long *)(lVar3 + 0x178) != *param_4))) {
        lVar3 = lVar3 + 0x1d0;
        if (*(long *)(lVar1 + 0x98) == lVar3) {
          return 0;
        }
      }
      return 1;
    }
  }
  else {
    uVar4 = FUN_028ca890(lVar3 + 0x28,param_5);
    if ((uVar4 & 1) != 0) {
      lVar3 = *(long *)(lVar1 + 0x58);
      if (lVar3 != *(long *)(lVar1 + 0x60)) {
        do {
          if ((*(long *)(lVar3 + 0x88) == *param_5) && (*(long *)(lVar3 + 0x68) == *param_4)) {
            return 1;
          }
          lVar3 = lVar3 + 0xb0;
        } while (*(long *)(lVar1 + 0x60) != lVar3);
      }
      return 0;
    }
  }
  return 1;
}


