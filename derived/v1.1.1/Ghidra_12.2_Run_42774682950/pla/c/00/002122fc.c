/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002122fc; name: FUN_002122fc
 */


int FUN_002122fc(long param_1,undefined8 param_2,int param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_50;
  int local_48;
  
  iVar1 = -0x1f5;
  if ((param_3 != 0) && (param_4 != (int *)0x0)) {
    if (*param_4 == param_3) {
      iVar1 = -0x1f5;
    }
    else {
      local_50 = *(undefined8 *)param_4;
      local_48 = param_4[2];
      FUN_00205c38(&local_50);
      lVar2 = FUN_0020c738(param_1 + 0x890,0x98);
      if (lVar2 == 0) {
        iVar1 = -0x385;
      }
      else {
        FUN_00211334();
        FUN_0020c8c4(lVar2,param_3,&local_50);
        iVar1 = FUN_002069b8(param_1,lVar2);
        if (iVar1 != 0) {
          FUN_0020c8f0(lVar2);
          FUN_0020c748(param_1 + 0x890,lVar2);
        }
      }
    }
  }
  return iVar1;
}


