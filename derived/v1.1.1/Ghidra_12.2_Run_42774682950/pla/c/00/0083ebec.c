/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083ebec; name: FUN_0083ebec
 */


void FUN_0083ebec(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0xb0);
  do {
    if (lVar3 == param_1 + 0xa8) {
      cVar1 = *(char *)(param_1 + 0xf9);
joined_r0x0083ec90:
      if (cVar1 != '\0') {
        lVar4 = *(long *)(param_1 + 0x68);
        lVar3 = param_1 + 0x60;
        if (lVar4 != lVar3) {
          do {
            uVar2 = FUN_007f0f48(lVar4 + 0x10,param_2 + 8);
            if ((uVar2 & 1) != 0) {
              FUN_007e8fec(lVar3,lVar4);
              FUN_007e8fc4(param_1 + 0x78,param_1 + 0x78,lVar4 + *(int *)(param_1 + 0x8c));
              return;
            }
            lVar4 = *(long *)(lVar4 + 8);
          } while (lVar4 != lVar3);
        }
      }
      return;
    }
    if (*(long *)(lVar3 + 0x10) == param_2) {
      FUN_007e8fec(param_1 + 0xa8,lVar3);
      FUN_007e8fc4(param_1 + 0xc0,param_1 + 0xc0,lVar3 + *(int *)(param_1 + 0xd4));
      cVar1 = *(char *)(param_1 + 0xf9);
      goto joined_r0x0083ec90;
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


