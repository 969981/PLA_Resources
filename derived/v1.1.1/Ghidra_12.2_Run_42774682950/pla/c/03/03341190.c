/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03341190; name: FUN_03341190
 */


undefined8 FUN_03341190(long *param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  if (*param_2 != 0) {
    uVar2 = 1;
    uVar5 = 0;
    do {
      uVar3 = uVar2;
      **(undefined8 **)(param_3 + uVar5 * 8) = 0;
      uVar2 = (ulong)((int)uVar3 + 1);
      uVar5 = uVar3;
    } while (uVar3 < *param_2);
  }
  lVar4 = *param_1;
  uVar7 = 0;
  lVar8 = lVar4 + -1;
  if (-1 < lVar8) {
    do {
      uVar6 = *(undefined8 *)(param_1[1] + lVar8 * 8 + 8);
      uVar2 = FUN_0334129c(uVar6);
      if ((uVar2 & 1) == 0) break;
      uVar7 = uVar7 + 1;
      if (*param_2 != 0) {
        uVar2 = 0;
        uVar5 = 1;
        do {
          uVar3 = FUN_032e225c(uVar6,param_2[uVar2 + 1]);
          if ((uVar3 & 1) != 0) {
            **(long **)(param_3 + uVar2 * 8) = param_1[lVar8 + 2];
            param_1[lVar8 + 2] = 0;
            break;
          }
          bVar1 = uVar5 < *param_2;
          uVar2 = uVar5;
          uVar5 = (ulong)((int)uVar5 + 1);
        } while (bVar1);
      }
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    lVar4 = *param_1;
  }
  *param_1 = lVar4 - (ulong)uVar7;
  return 0;
}


