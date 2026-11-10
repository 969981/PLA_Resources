/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b5e8; name: FUN_0020b5e8
 */


int FUN_0020b5e8(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0020c738(param_1 + 0x890,0x98);
  if (lVar2 == 0) {
    iVar1 = -0x385;
  }
  else {
    FUN_00211334();
    FUN_0020c9d0(lVar2,param_2,param_3,param_4);
    iVar1 = FUN_002069b8(param_1,lVar2);
    if (iVar1 != 0) {
      FUN_0020c9f8(lVar2);
      FUN_0020c748(param_1 + 0x890,lVar2);
    }
  }
  return iVar1;
}


