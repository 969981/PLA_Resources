/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032645d0; name: FUN_032645d0
 */


ulong FUN_032645d0(long param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  iVar3 = *(int *)(param_1 + 0x138);
  uVar10 = (ulong)iVar3;
  lVar6 = uVar10 << 0x20;
  uVar11 = uVar10;
  iVar2 = 0;
  do {
    iVar7 = iVar2;
    uVar9 = uVar11;
    lVar8 = lVar6;
    if ((long)uVar9 < 1) break;
    lVar6 = lVar8 + -0x100000000;
    uVar11 = uVar9 - 1;
    iVar2 = iVar7 + 1;
  } while (param_2 <= *(uint *)(*(long *)(param_1 + 0x130) + uVar9 * 4 + -4));
  if (iVar7 == 0) {
    lVar6 = *(long *)(param_1 + 0x130);
    if ((int)(*(uint *)(param_1 + 0x13c) & 0x3fffffff) <= iVar3) {
      lVar6 = FUN_03264768(PTR_PTR_0434a080,iVar3 + 1,lVar6,iVar3);
      uVar10 = (ulong)*(int *)(param_1 + 0x138);
      *(long *)(param_1 + 0x130) = lVar6;
    }
    *(uint *)(lVar6 + uVar10 * 4) = param_2;
    *(int *)(param_1 + 0x138) = iVar3 + 1;
  }
  else if (*(uint *)(*(long *)(param_1 + 0x130) + (lVar8 >> 0x1e)) != param_2) {
    uVar11 = lVar8 >> 0x20;
    FUN_032655e0(param_1,uVar9 & 0xffffffff);
    iVar2 = *(int *)(param_1 + 0x138);
    if ((int)(*(uint *)(param_1 + 0x13c) & 0x3fffffff) <= iVar2) {
      uVar4 = FUN_03264768(PTR_PTR_0434a080,iVar2 + 1,*(undefined8 *)(param_1 + 0x130),iVar2,
                           param_1 + 0x13c);
      *(undefined8 *)(param_1 + 0x130) = uVar4;
    }
    *(int *)(param_1 + 0x138) = iVar2 + 1;
    if (iVar3 - iVar7 < iVar3) {
      uVar5 = uVar10;
      if ((iVar3 - (int)((ulong)lVar8 >> 0x20) & 1U) != 0) {
        uVar5 = uVar10 - 1;
        *(undefined4 *)(*(long *)(param_1 + 0x130) + uVar10 * 4) =
             *(undefined4 *)(*(long *)(param_1 + 0x130) + uVar5 * 4);
      }
      if (~uVar11 + uVar10 != 0) {
        do {
          lVar6 = uVar5 * 4;
          uVar5 = uVar5 - 2;
          puVar1 = (undefined4 *)(*(long *)(param_1 + 0x130) + lVar6);
          *puVar1 = puVar1[-1];
          lVar6 = *(long *)(param_1 + 0x130) + lVar6;
          *(undefined4 *)(lVar6 + -4) = *(undefined4 *)(lVar6 + -8);
        } while ((long)uVar11 < (long)uVar5);
      }
    }
    *(uint *)(*(long *)(param_1 + 0x130) + uVar11 * 4) = param_2;
  }
  return uVar9 & 0xffffffff;
}


