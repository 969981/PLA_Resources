/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b0c0; name: FUN_0082b0c0
 */


int FUN_0082b0c0(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar4 = *(long *)(lVar3 + 0x20);
  if (lVar4 == lVar3 + 0x18) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    lVar5 = *(long *)(lVar4 + 0x10);
    cVar1 = *(char *)(lVar5 + 0x90);
    while( true ) {
      if ((((cVar1 == -3) || (*(char *)(lVar5 + 0x91) == -3)) ||
          (*(long *)(lVar5 + 0x30) == param_2)) || (1 < *(int *)(lVar5 + 0x3c) - 1U)) {
        lVar4 = *(long *)(lVar4 + 8);
      }
      else {
        iVar2 = iVar2 + (uint)*(byte *)(lVar5 + 0x361);
        lVar4 = *(long *)(lVar4 + 8);
      }
      if (lVar4 == lVar3 + 0x18) break;
      lVar5 = *(long *)(lVar4 + 0x10);
      cVar1 = *(char *)(lVar5 + 0x90);
    }
  }
  return iVar2;
}


