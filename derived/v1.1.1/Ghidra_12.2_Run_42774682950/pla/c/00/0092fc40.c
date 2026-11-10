/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092fc40; name: FUN_0092fc40
 */


int FUN_0092fc40(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_24 [4];
  byte local_18 [4];
  char local_14 [4];
  
  lVar1 = *(long *)(*param_1 + 0x58);
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      lVar1 = FUN_009300c4(lVar1,local_14,local_18,auStack_24);
      if (((lVar1 != 0) && (local_14[0] == '\x01')) &&
         ((local_18[0] - 1 < 2 || ((local_18[0] == 0xc || (local_18[0] == 0xd1)))))) {
        iVar2 = iVar2 + 1;
      }
    } while (lVar1 != 0);
  }
  return iVar2;
}


