/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fc52c; name: FUN_032fc52c
 */


void FUN_032fc52c(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar6 = (long)(int)param_1[1] + -1;
  uVar4 = param_2[1];
  if (uVar4 == (uint)lVar6) {
    *(uint *)(param_1 + 1) = uVar4;
  }
  else {
    lVar6 = FUN_032fc030(param_1,*param_1 + lVar6 * 0x18);
    *(uint *)(lVar6 + 4) = uVar4;
    lVar6 = (long)(int)param_1[1] + -1;
    uVar5 = (uint)lVar6;
    *(uint *)(param_1 + 1) = uVar5;
    if (uVar5 != uVar4) {
      puVar7 = (undefined8 *)(*param_1 + lVar6 * 0x18);
      puVar10 = (undefined8 *)(*param_1 + (long)(int)uVar4 * 0x18);
      uVar3 = *puVar7;
      uVar8 = puVar7[2];
      puVar10[1] = puVar7[1];
      puVar10[2] = uVar8;
      *puVar10 = uVar3;
    }
  }
  lVar6 = param_1[2];
  uVar9 = (ulong)(int)param_1[3];
  uVar11 = ((long)param_2 - lVar6 >> 3) + 1U & uVar9;
  while (puVar1 = (uint *)(lVar6 + uVar11 * 8), -1 < (int)puVar1[1]) {
    lVar2 = lVar6 + ((ulong)*puVar1 & uVar9 & 0xffffffff) * 8;
    uVar11 = (ulong)(int)uVar9;
    if ((uVar11 & (long)param_2 - lVar2 >> 3) < (uVar11 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar9 = (ulong)*(uint *)(param_1 + 3);
      lVar6 = param_1[2];
      uVar11 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar11 = ((ulong)((long)puVar1 - lVar6) >> 3) + 1 & uVar11;
  }
  param_2[1] = 0xffffffff;
  return;
}


