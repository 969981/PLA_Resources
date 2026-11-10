/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c9670; name: FUN_031c9670
 */


void FUN_031c9670(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = (long)(int)param_1[1] + -1;
  uVar5 = param_2[1];
  if (uVar5 == (uint)lVar7) {
    *(uint *)(param_1 + 1) = uVar5;
  }
  else {
    lVar7 = FUN_031acbdc(param_1,*param_1 + lVar7 * 8);
    *(uint *)(lVar7 + 4) = uVar5;
    lVar7 = (long)(int)param_1[1] + -1;
    uVar6 = (uint)lVar7;
    *(uint *)(param_1 + 1) = uVar6;
    if (uVar6 != uVar5) {
      puVar3 = (undefined4 *)(*param_1 + lVar7 * 8);
      puVar4 = (undefined4 *)(*param_1 + (long)(int)uVar5 * 8);
      *puVar4 = *puVar3;
      *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(puVar3 + 1);
    }
  }
  lVar7 = param_1[2];
  uVar8 = (ulong)(int)param_1[3];
  uVar9 = ((long)param_2 - lVar7 >> 3) + 1U & uVar8;
  while (puVar1 = (uint *)(lVar7 + uVar9 * 8), -1 < (int)puVar1[1]) {
    lVar2 = lVar7 + ((ulong)*puVar1 & uVar8 & 0xffffffff) * 8;
    uVar9 = (ulong)(int)uVar8;
    if ((uVar9 & (long)param_2 - lVar2 >> 3) < (uVar9 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar8 = (ulong)*(uint *)(param_1 + 3);
      lVar7 = param_1[2];
      uVar9 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar9 = ((ulong)((long)puVar1 - lVar7) >> 3) + 1 & uVar9;
  }
  param_2[1] = 0xffffffff;
  return;
}


