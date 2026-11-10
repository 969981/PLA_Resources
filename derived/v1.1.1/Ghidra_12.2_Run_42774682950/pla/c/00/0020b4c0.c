/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020b4c0; name: FUN_0020b4c0
 */


int FUN_0020b4c0(long param_1,uint param_2,undefined4 param_3,void *param_4,size_t param_5,
                undefined1 param_6)

{
  long lVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  
  if ((param_2 == 0) || ((param_2 & 1) != (uint)(*(char *)(param_1 + 0x9aa) == '\0'))) {
    lVar1 = param_1 + 0x890;
    if (param_5 == 0) {
      __dest = (void *)0x0;
LAB_0020b550:
      lVar3 = FUN_0020c738(lVar1,0x98);
      if (lVar3 != 0) {
        FUN_00211334();
        if ((int)*(uint *)(param_1 + 0x944) <= (int)param_2) {
          param_2 = *(uint *)(param_1 + 0x944);
        }
        FUN_0020c998(lVar3,param_2,param_3,__dest,param_5);
        *(undefined1 *)(lVar3 + 0x60) = param_6;
        iVar2 = FUN_002069b8(param_1,lVar3);
        if (iVar2 == 0) {
          return 0;
        }
        FUN_0020c9c0(lVar3,lVar1);
        FUN_0020c748(lVar1,lVar3);
        return iVar2;
      }
      FUN_0020c748(lVar1,__dest);
    }
    else {
      if (0x4000 < param_5 + 8) goto LAB_0020b520;
      __dest = (void *)FUN_0020c738(lVar1,param_5);
      if (__dest != (void *)0x0) {
        memcpy(__dest,param_4,param_5);
        goto LAB_0020b550;
      }
    }
    iVar2 = -0x385;
  }
  else {
LAB_0020b520:
    iVar2 = -0x1f5;
  }
  return iVar2;
}


