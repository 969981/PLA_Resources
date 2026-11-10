/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00206f14; name: FUN_00206f14
 */


bool FUN_00206f14(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) == 0) {
    iVar2 = FUN_0020af90();
    if (iVar2 == 0) {
      iVar2 = FUN_0020b444(param_1);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


