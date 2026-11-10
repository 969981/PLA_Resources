/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d8010; name: FUN_004d8010
 */


long FUN_004d8010(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar2 = FUN_0040de30();
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_0040c260();
      if ((lVar3 != 0) && (iVar1 = FUN_00424be0(lVar3,param_3,param_1,param_2,lVar2), iVar1 == 0)) {
        FUN_0040c1e0(lVar3);
        lVar3 = 0;
      }
      FUN_0040def0(lVar2);
    }
  }
  return lVar3;
}


