/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ebb144; name: FUN_01ebb144
 */


bool FUN_01ebb144(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  lVar2 = param_2[1];
  if ((lVar4 != lVar2) && (uVar1 = FUN_01ebb1c8(lVar4), (uVar1 & 1) == 0)) {
    do {
      lVar3 = lVar4 + 8;
      lVar4 = lVar2;
      if (lVar2 == lVar3) break;
      uVar1 = FUN_01ebb1c8(lVar3);
      lVar4 = lVar3;
    } while ((uVar1 & 1) == 0);
  }
  lVar2 = param_2[1];
  if (lVar2 != lVar4) {
    FUN_01ebb228(param_2,lVar4);
  }
  return lVar2 != lVar4;
}


