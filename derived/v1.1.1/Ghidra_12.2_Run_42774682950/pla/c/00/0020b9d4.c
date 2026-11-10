/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b9d4; name: FUN_0020b9d4
 */


int FUN_0020b9d4(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_00205cf4();
  if ((lVar3 == 0) || (iVar1 = FUN_00211a98(), iVar1 == 0)) {
    iVar1 = -0x1f5;
  }
  else {
    iVar2 = FUN_00211a6c(lVar3,8);
    iVar1 = 0;
    if (iVar2 < -900) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


