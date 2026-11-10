/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00462a00; name: FUN_00462a00
 */


int FUN_00462a00(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  char local_44;
  char local_43;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0) {
      iVar2 = FUN_004042b0(param_1,&DAT_0390f9d5,1);
      if (iVar2 == 1) {
        return 1;
      }
      return -1;
    }
    if (0 < *param_2) {
      uVar3 = 0;
      iVar2 = 0;
      while( true ) {
        if ((uVar3 != 0) &&
           (iVar1 = (int)((uVar3 & 0xffffffff) * 0xd41d41d5 >> 0x20),
           (int)uVar3 + (iVar1 + ((uint)((int)uVar3 - iVar1) >> 1) >> 5) * -0x23 == 0)) {
          iVar1 = FUN_004042b0(param_1,&DAT_039107e5,2);
          if (iVar1 != 2) {
            return -1;
          }
          iVar2 = iVar2 + 2;
        }
        local_44 = "0123456789ABCDEF"[*(byte *)(*(long *)(param_2 + 2) + uVar3) >> 4];
        local_43 = "0123456789ABCDEF"[(ulong)*(byte *)(*(long *)(param_2 + 2) + uVar3) & 0xf];
        iVar1 = FUN_004042b0(param_1,&local_44,2);
        if (iVar1 != 2) break;
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 2;
        if ((long)*param_2 <= (long)uVar3) {
          return iVar2;
        }
      }
      return -1;
    }
  }
  return 0;
}


