/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00206aec; name: FUN_00206aec
 */


int FUN_00206aec(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00205cf4();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0xdc) != 3)) {
    if ((((param_2 & 1) != 0) &&
        (((*(char *)(param_1 + 0x9aa) == '\0' && (lVar2 = *(long *)(param_1 + 0x138), lVar2 != 0))
         && (iVar1 = *(int *)(lVar2 + 8), iVar1 <= (int)param_2)))) &&
       (param_2 < *(uint *)(param_1 + 0x930))) {
      while (iVar1 < (int)param_2) {
        lVar2 = *(long *)(lVar2 + 0x88);
        if (lVar2 == 0) goto LAB_00206b7c;
        iVar1 = *(int *)(lVar2 + 8);
      }
      if ((iVar1 <= (int)param_2) && (*(char *)(lVar2 + 0x7c) == '\0')) {
        *(undefined4 *)(lVar2 + 0x78) = param_3;
        *(undefined1 *)(lVar2 + 0x7c) = 1;
        return 0;
      }
    }
LAB_00206b7c:
    lVar2 = FUN_0020c738(param_1 + 0x890,0x98);
    if (lVar2 == 0) {
      iVar1 = -0x385;
    }
    else {
      FUN_00211334();
      FUN_0020c8f4(lVar2,param_2,param_3);
      iVar1 = FUN_002069b8(param_1,lVar2);
      if (iVar1 != 0) {
        FUN_0020c914(lVar2);
        FUN_0020c748(param_1 + 0x890,lVar2);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


