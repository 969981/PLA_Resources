/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d8250; name: FUN_004d8250
 */


bool FUN_004d8250(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  bVar1 = false;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar3 = FUN_0040de30();
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else {
      lVar4 = FUN_0040c260();
      if ((lVar4 == 0) || (iVar2 = FUN_00412c30(lVar4,param_1,param_2,lVar3), iVar2 == 0)) {
        bVar1 = false;
      }
      else {
        iVar2 = FUN_0040c130(lVar4);
        bVar1 = iVar2 == 0;
      }
      FUN_0040def0(lVar3);
      FUN_0040c1e0(lVar4);
    }
  }
  return bVar1;
}


