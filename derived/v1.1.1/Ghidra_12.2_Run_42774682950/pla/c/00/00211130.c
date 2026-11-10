/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211130; name: FUN_00211130
 */


undefined8 FUN_00211130(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  iVar5 = (int)param_1[3];
  if ((ulong)(uint)(iVar5 * 3) < param_1[2] * 4 + 4U) {
    iVar5 = iVar5 << 1;
    lVar1 = FUN_0020c76c(param_1[1],iVar5,8);
    if (lVar1 == 0) {
      return 0xfffffc7b;
    }
    uVar4 = (ulong)*(uint *)(param_1 + 3);
    if (*(uint *)(param_1 + 3) != 0) {
      uVar6 = 0;
      do {
        puVar3 = *(undefined8 **)(*param_1 + uVar6 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          do {
            puVar7 = (undefined8 *)*puVar3;
            *puVar3 = 0;
            FUN_0021121c(lVar1,iVar5);
            puVar3 = puVar7;
          } while (puVar7 != (undefined8 *)0x0);
          uVar4 = (ulong)*(uint *)(param_1 + 3);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
    FUN_0020c748(param_1[1],*param_1);
    *(int *)(param_1 + 3) = iVar5;
    *param_1 = lVar1;
  }
  else {
    lVar1 = *param_1;
  }
  uVar2 = FUN_0021121c(lVar1,iVar5,param_2);
  if ((int)uVar2 == 0) {
    param_1[2] = param_1[2] + 1;
  }
  return uVar2;
}


