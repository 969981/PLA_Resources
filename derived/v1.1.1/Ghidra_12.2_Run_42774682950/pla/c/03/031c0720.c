/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c0720; name: FUN_031c0720
 */


void FUN_031c0720(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  *(undefined4 *)(*param_1 + (ulong)param_2 * 8) = 0xffffffff;
  uVar3 = *(uint *)((long)param_1 + 0xc);
  lVar4 = *param_1;
  uVar1 = param_2;
  do {
    uVar1 = uVar3 + uVar1 & uVar3;
  } while (*(int *)(lVar4 + (ulong)uVar1 * 8) != -1);
  uVar7 = (ulong)(uVar3 & param_2 + 1);
  iVar5 = *(int *)(lVar4 + uVar7 * 8);
  if (iVar5 != -1) {
    uVar1 = uVar1 + 1 & uVar3;
    do {
      uVar2 = (iVar5 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar5 * -0x61c8864f & 0xff00ffU) << 8;
      uVar2 = (uVar2 >> 0x10 | uVar2 << 0x10) & uVar3;
      uVar6 = (uint)uVar7;
      if ((((uVar6 < uVar1) || (uVar2 <= param_2)) &&
          ((param_2 <= uVar6 || ((uVar2 <= param_2 && (uVar6 < uVar2)))))) &&
         ((uVar2 <= param_2 || (uVar1 <= uVar2)))) {
        memcpy((void *)(lVar4 + (ulong)param_2 * 8),(void *)(lVar4 + uVar7 * 8),8);
        *(undefined4 *)(*param_1 + uVar7 * 8) = 0xffffffff;
        uVar3 = *(uint *)((long)param_1 + 0xc);
        lVar4 = *param_1;
        param_2 = uVar6;
      }
      uVar7 = (ulong)(uVar3 & uVar6 + 1);
      iVar5 = *(int *)(lVar4 + uVar7 * 8);
    } while (iVar5 != -1);
  }
  return;
}


