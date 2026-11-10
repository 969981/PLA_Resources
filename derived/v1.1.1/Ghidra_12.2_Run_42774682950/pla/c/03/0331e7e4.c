/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331e7e4; name: FUN_0331e7e4
 */


bool FUN_0331e7e4(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  bVar1 = false;
  if (param_1 != 0) {
    lVar2 = FUN_032e23fc();
    if (lVar2 == 0) {
      uVar3 = FUN_032e2598(param_1);
      bVar1 = (uVar3 & 0x20) == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


