/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025a1b8; name: FUN_0025a1b8
 */


void FUN_0025a1b8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = *(long *)(param_1 + 0x40);
  if (param_1 + 0x38 == lVar4) {
    return;
  }
  iVar5 = 0;
  lVar1 = param_2 + 0x18;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar1 != lVar2) goto LAB_0025a224;
LAB_0025a1f8:
  do {
    lVar2 = 0;
    while( true ) {
      FUN_00259b20(param_1,lVar4,lVar2);
      lVar4 = *(long *)(lVar4 + 8);
      iVar5 = iVar5 + 1;
      if (param_1 + 0x38 == lVar4) {
        return;
      }
      lVar2 = *(long *)(param_2 + 0x20);
      if (lVar1 == lVar2) break;
LAB_0025a224:
      if (iVar5 != 0) {
        iVar3 = iVar5;
        do {
          lVar2 = *(long *)(lVar2 + 8);
          if (lVar1 == lVar2) goto LAB_0025a1f8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  } while( true );
}


