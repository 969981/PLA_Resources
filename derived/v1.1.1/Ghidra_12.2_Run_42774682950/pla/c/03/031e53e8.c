/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e53e8; name: FUN_031e53e8
 */


void FUN_031e53e8(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  lVar6 = (long)(int)param_1[1] + -1;
  uVar3 = param_2[1];
  if (uVar3 != (uint)lVar6) {
    lVar6 = FUN_031e5194(param_1,*param_1 + lVar6 * 0x68);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  FUN_031cd728(*param_1 + (long)(int)uVar3 * 0x68 + 8);
  lVar6 = (long)(int)param_1[1] + -1;
  uVar5 = (uint)lVar6;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    puVar9 = (undefined4 *)(*param_1 + lVar6 * 0x68);
    puVar4 = (undefined4 *)(*param_1 + (long)(int)uVar3 * 0x68);
    puVar10 = puVar9 + 2;
    *puVar4 = *puVar9;
    FUN_031ced98(puVar4 + 2,puVar10);
    FUN_031cd728(puVar10);
  }
  lVar6 = param_1[2];
  uVar7 = (ulong)(int)param_1[3];
  uVar8 = ((long)param_2 - lVar6 >> 3) + 1U & uVar7;
  while (puVar1 = (uint *)(lVar6 + uVar8 * 8), -1 < (int)puVar1[1]) {
    lVar2 = lVar6 + ((ulong)*puVar1 & uVar7 & 0xffffffff) * 8;
    uVar8 = (ulong)(int)uVar7;
    if ((uVar8 & (long)param_2 - lVar2 >> 3) < (uVar8 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar7 = (ulong)*(uint *)(param_1 + 3);
      lVar6 = param_1[2];
      uVar8 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar8 = ((ulong)((long)puVar1 - lVar6) >> 3) + 1 & uVar8;
  }
  param_2[1] = 0xffffffff;
  return;
}


