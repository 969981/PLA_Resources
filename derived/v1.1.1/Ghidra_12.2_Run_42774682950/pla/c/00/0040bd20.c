/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040bd20; name: FUN_0040bd20
 */


ulong FUN_0040bd20(long *param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if ((int)param_2 == 0) {
    return 1;
  }
  param_2 = param_2 & 0xffffffff;
  iVar2 = FUN_0040c130();
  if (iVar2 != 0) {
    uVar3 = FUN_0040c6b0(param_1,param_2);
    return uVar3;
  }
  if ((int)param_1[2] == 0) {
    lVar4 = 0;
    do {
      uVar1 = *(uint *)(param_1 + 1);
      uVar6 = (uint)param_2;
      if ((int)uVar1 <= lVar4) {
        if ((uint)lVar4 != uVar1) {
          return 1;
        }
        lVar4 = FUN_0040c660(param_1,uVar1 + 1);
        if (lVar4 == 0) {
          return 0;
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        *(uint *)(*param_1 + (ulong)uVar1 * 4) = uVar6;
        return 1;
      }
      lVar5 = lVar4 * 4;
      lVar4 = lVar4 + 1;
      uVar1 = *(uint *)(*param_1 + lVar5);
      param_2 = 1;
      *(uint *)(*param_1 + lVar5) = uVar1 + uVar6;
    } while (CARRY4(uVar1,uVar6));
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
    param_2 = FUN_0040be30(param_1,param_2);
    param_2 = param_2 & 0xffffffff;
    iVar2 = FUN_0040c130(param_1);
    if (iVar2 == 0) {
      *(uint *)(param_1 + 2) = (uint)((int)param_1[2] == 0);
      return param_2;
    }
  }
  return param_2;
}


