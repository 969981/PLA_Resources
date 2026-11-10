/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020af90; name: FUN_0020af90
 */


bool FUN_0020af90(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) >> 1 & 1) == 0) {
    lVar2 = FUN_0021132c();
    if (lVar2 - *(long *)(param_1 + 0x908) == *(long *)(param_1 + 0x910)) {
      bVar1 = (*(byte *)(param_1 + 0x9ab) & 0xc) == 0;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


