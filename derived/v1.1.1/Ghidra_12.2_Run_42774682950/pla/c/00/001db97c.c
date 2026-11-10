/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001db97c; name: FUN_001db97c
 */


undefined8 FUN_001db97c(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = DAT_0438eac8 + 1;
  bVar1 = DAT_0438eac8 == 0;
  DAT_0438eac8 = iVar2;
  if (bVar1) {
    if ((param_2 & 1) != 0) {
      FUN_00204448();
    }
    FUN_002045ac();
    lVar3 = FUN_002128ec();
    if (((lVar3 == 0) || (iVar2 = FUN_00203af0(), iVar2 == 0)) ||
       (iVar2 = FUN_001df7dc(), iVar2 != 0)) {
      return 2;
    }
    if ((param_1 >> 2 & 1) != 0) {
      *(undefined4 *)PTR_DAT_04372740 = 1;
    }
    FUN_0020360c();
  }
  return 0;
}


