/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092723c; name: FUN_0092723c
 */


int FUN_0092723c(long param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x88);
  uVar3 = (uint)bVar1;
  if (bVar1 == param_2) {
    return 0;
  }
  bVar1 = *(byte *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x98) + 0x370) + 8) +
                   0x38);
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    iVar2 = 0;
    do {
      if ((uVar3 != 0) && (iVar2 = iVar2 + 1, param_2 == 0)) {
        return iVar2;
      }
      param_2 = param_2 - 1;
      uVar4 = uVar4 - 1;
      uVar3 = uVar3 - 1;
    } while (uVar4 != 0);
  }
  return 0x1f;
}


