/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed1118; name: FUN_02ed1118
 */


uint FUN_02ed1118(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_02ed135c();
  if (iVar1 == 2) {
    uVar2 = 1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x80);
    uVar2 = *(uint *)(param_1 + 0xaa);
    if ((lVar3 != 0) && ((uVar2 >> 0x17 & 1) == 0)) {
      lVar4 = *(long *)(lVar3 + 0x80);
      uVar2 = *(uint *)(lVar3 + 0xaa);
      if ((lVar4 != 0) && ((uVar2 >> 0x17 & 1) == 0)) {
        lVar3 = *(long *)(lVar4 + 0x80);
        uVar2 = *(uint *)(lVar4 + 0xaa);
        if ((lVar3 != 0) && ((uVar2 >> 0x17 & 1) == 0)) {
          lVar4 = *(long *)(lVar3 + 0x80);
          uVar2 = *(uint *)(lVar3 + 0xaa);
          if ((lVar4 != 0) && ((uVar2 >> 0x17 & 1) == 0)) {
            do {
              uVar2 = *(uint *)(lVar4 + 0xaa);
              lVar4 = *(long *)(lVar4 + 0x80);
            } while (lVar4 != 0 && (uVar2 & 0x800000) == 0);
          }
        }
      }
    }
    uVar2 = uVar2 >> 0x19 & 2;
  }
  return uVar2;
}


