/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048c9d0; name: FUN_0048c9d0
 */


int FUN_0048c9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00444930();
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = FUN_0048d3e0();
    iVar1 = FUN_004449b0(lVar2,uVar3,0);
    if ((iVar1 == 0) || (iVar1 = FUN_00444ad0(lVar2,param_3,0x39), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00444c20(lVar2,param_1,param_2);
      iVar1 = -(uint)(iVar1 != 0);
    }
    FUN_00444950(lVar2);
  }
  return iVar1;
}


