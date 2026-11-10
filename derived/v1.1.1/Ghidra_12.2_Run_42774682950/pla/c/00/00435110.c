/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00435110; name: FUN_00435110
 */


ulong FUN_00435110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = FUN_0040c130(param_3);
  if (iVar1 != 0) {
    uVar3 = FUN_0040c6b0(param_1,1);
    return uVar3;
  }
  iVar1 = FUN_0040d1e0(param_3,1);
  if (iVar1 == 0) {
    FUN_0040e090(param_5);
    lVar4 = FUN_0040e240(param_5);
    if ((lVar4 == 0) || (iVar1 = FUN_00433be0(lVar4,param_2,param_4), iVar1 == 0)) {
LAB_00435214:
      uVar3 = 0;
    }
    else {
      iVar1 = FUN_0040c070(param_3);
      if (-1 < iVar1 + -2) {
        iVar1 = iVar1 + -1;
        do {
          iVar2 = FUN_00434320(lVar4,lVar4,param_4,param_5);
          if (iVar2 == 0) goto LAB_00435214;
          iVar1 = iVar1 + -1;
          iVar2 = FUN_0040cdc0(param_3,iVar1);
          if ((iVar2 != 0) &&
             (iVar2 = FUN_004340a0(lVar4,lVar4,param_2,param_4,param_5), iVar2 == 0))
          goto LAB_00435214;
        } while (0 < iVar1);
      }
      lVar4 = FUN_0040c5d0(param_1,lVar4);
      uVar3 = (ulong)(lVar4 != 0);
    }
    FUN_0040e1b0(param_5);
  }
  else {
    lVar4 = FUN_0040c5d0(param_1,param_2);
    uVar3 = (ulong)(lVar4 != 0);
  }
  return uVar3;
}


