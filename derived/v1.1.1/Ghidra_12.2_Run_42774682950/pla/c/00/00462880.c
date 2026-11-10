/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00462880; name: FUN_00462880
 */


uint FUN_00462880(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char local_54;
  char local_53;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    if ((*(byte *)((long)param_2 + 5) & 1) == 0) {
      uVar2 = 0;
      iVar1 = *param_2;
    }
    else {
      uVar2 = 1;
      iVar1 = FUN_004042b0(param_1,&DAT_038d0274,1);
      if (iVar1 != 1) {
        return 0xffffffff;
      }
      iVar1 = *param_2;
    }
    if (iVar1 == 0) {
      iVar1 = FUN_004042b0(param_1,&DAT_0388bf31,2);
      uVar2 = uVar2 | 2;
      if (iVar1 != 2) {
        uVar2 = 0xffffffff;
      }
    }
    else if (0 < iVar1) {
      uVar3 = 0;
      do {
        if ((uVar3 != 0) &&
           (iVar1 = (int)((uVar3 & 0xffffffff) * 0xd41d41d5 >> 0x20),
           (int)uVar3 + (iVar1 + ((uint)((int)uVar3 - iVar1) >> 1) >> 5) * -0x23 == 0)) {
          iVar1 = FUN_004042b0(param_1,&DAT_039107e5,2);
          if (iVar1 != 2) {
            return 0xffffffff;
          }
          uVar2 = uVar2 + 2;
        }
        local_54 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + uVar3) >> 4];
        local_53 = "0123456789ABCDEF"[(ulong)*(byte *)(*(long *)(param_2 + 2) + uVar3) & 0xf];
        iVar1 = FUN_004042b0(param_1,&local_54,2);
        if (iVar1 != 2) {
          return 0xffffffff;
        }
        uVar3 = uVar3 + 1;
        uVar2 = uVar2 + 2;
      } while ((long)uVar3 < (long)*param_2);
    }
  }
  return uVar2;
}


