/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082b164; name: FUN_0082b164
 */


int FUN_0082b164(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar4 = *(long *)(lVar3 + 0x20);
  if (lVar4 == lVar3 + 0x18) {
    return 0;
  }
  iVar2 = 0;
  lVar5 = *(long *)(lVar4 + 0x10);
  cVar1 = *(char *)(lVar5 + 0x90);
  while( true ) {
    if (((cVar1 == -3) || (*(char *)(lVar5 + 0x91) == -3)) || (*(int *)(lVar5 + 0x3c) != 2)) {
      lVar4 = *(long *)(lVar4 + 8);
    }
    else {
      iVar2 = iVar2 + (uint)*(byte *)(lVar5 + 0x360);
      lVar4 = *(long *)(lVar4 + 8);
    }
    if (lVar4 == lVar3 + 0x18) break;
    lVar5 = *(long *)(lVar4 + 0x10);
    cVar1 = *(char *)(lVar5 + 0x90);
  }
  return iVar2;
}


