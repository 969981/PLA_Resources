/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083063c; name: FUN_0083063c
 */


void FUN_0083063c(undefined8 param_1,long param_2,char *param_3,long *param_4,int *param_5,
                 long *param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (((*(char *)(param_2 + 6) == -1) || (*(char *)(param_2 + 7) == -3)) ||
     (*(char *)(param_2 + 8) == -3)) {
    local_28[0] = 0x4c11;
  }
  else {
    if ((*param_3 != *PTR_DAT_04377e08) || (param_3[1] != PTR_DAT_04377e08[1])) {
      if (*param_3 == *(char *)(param_2 + 7)) {
        FUN_00830238(param_1);
        return;
      }
      FUN_00830434(param_1);
      return;
    }
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0;
    *param_7 = 0;
    lVar3 = *(long *)(param_2 + 0x30);
    iVar1 = *(int *)(param_2 + 0x48);
    uVar2 = *(undefined4 *)(param_2 + 0x4c);
    *param_4 = lVar3;
    *param_5 = iVar1;
    *param_6 = lVar3 + (long)iVar1 * 0x38;
    *param_7 = uVar2;
    local_28[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_28);
  return;
}


