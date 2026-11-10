/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084f2ec; name: FUN_0084f2ec
 */


int FUN_0084f2ec(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    while (lVar1 = (**(code **)(*param_1 + 0x48))(param_1,iVar3), lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x48))(param_1,iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = (uint)*(ushort *)(lVar1 + 0x1a) + iVar2;
      if (iVar3 == 0x18) {
        return iVar2;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x18);
  return iVar2;
}


