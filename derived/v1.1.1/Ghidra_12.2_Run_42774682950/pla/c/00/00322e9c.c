/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00322e9c; name: FUN_00322e9c
 */


long FUN_00322e9c(long *param_1,long *param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  
  pbVar4 = param_3 + 1;
  if ((char)*param_3 < '\0') {
    if ((char)*pbVar4 < '\0') {
      if ((char)param_3[2] < '\0') {
        if ((char)param_3[3] < '\0') {
          if (7 < param_3[4]) {
            return 0;
          }
          if (0x7fffffef <
              (uint)*param_3 + (uint)*pbVar4 * 0x80 + (uint)param_3[2] * 0x4000 +
              (uint)param_3[3] * 0x200000 + (uint)param_3[4] * 0x10000000 + 0xefdfbf80) {
            return 0;
          }
          pbVar4 = param_3 + 5;
          goto LAB_00322ee4;
        }
        lVar3 = 3;
      }
      else {
        lVar3 = 2;
      }
    }
    else {
      lVar3 = 1;
    }
    pbVar4 = param_3 + lVar3 + 1;
  }
LAB_00322ee4:
  iVar2 = FUN_0031e1b4(param_1,pbVar4);
  lVar3 = param_1[0xb];
  *(int *)(param_1 + 0xb) = (int)lVar3 + -1;
  if ((int)lVar3 < 1) {
    return 0;
  }
  lVar3 = (**(code **)(*param_2 + 0x58))(param_2,pbVar4,param_1);
  if (lVar3 != 0) {
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
    if ((int)param_1[10] != 0) {
      return 0;
    }
    uVar1 = *(int *)((long)param_1 + 0x1c) + iVar2;
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return lVar3;
}


