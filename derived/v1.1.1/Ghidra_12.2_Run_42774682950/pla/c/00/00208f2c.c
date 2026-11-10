/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00208f2c; name: FUN_00208f2c
 */


int FUN_00208f2c(long param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  if (((param_2 & 1) == 0) || (*(ulong *)(param_1 + 0x920) >> 4 < 0x271)) {
    lVar2 = FUN_0020c738(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN_00211334();
      FUN_0020c960(lVar2,param_2,param_3);
      iVar1 = FUN_002069b8(param_1,lVar2);
      if (iVar1 == 0) {
        iVar1 = 0;
        if ((param_2 & 1) != 0) {
          *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + 1;
        }
      }
      else {
        FUN_0020c994(lVar2);
        FUN_0020c748(param_1 + 0x890,lVar2);
      }
    }
  }
  else {
    iVar1 = -0x388;
  }
  return iVar1;
}


