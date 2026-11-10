/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325e854; name: FUN_0325e854
 */


/* WARNING: Removing unreachable block (ram,0x0325e910) */

void FUN_0325e854(long param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  void *__dest;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  void *__src;
  
  if ((undefined8 *)(param_1 + 0x18) != param_2) {
    __src = (void *)*param_2;
    iVar9 = *(int *)(param_2 + 1);
    __dest = *(void **)(param_1 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar9) {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar9,0x10,__dest,
                                    *(undefined4 *)(param_1 + 0x20));
      *(void **)(param_1 + 0x18) = __dest;
    }
    memcpy(__dest,__src,(long)iVar9 << 4);
    *(int *)(param_1 + 0x20) = iVar9;
  }
  uVar1 = *(uint *)(param_3 + 1);
  uVar11 = (ulong)uVar1;
  uVar6 = *(uint *)(param_1 + 0x34);
  if ((int)(uVar6 & 0x3fffffff) < (int)uVar1) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar11);
      uVar6 = *(uint *)(param_1 + 0x34);
    }
    uVar6 = (uVar6 & 0x3fffffff) << 1;
    uVar7 = (ulong)uVar6;
    if (0x3ffffffe < uVar6) {
      uVar7 = 0x3fffffff;
    }
    uVar4 = uVar11;
    if ((int)uVar1 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    uVar5 = FUN_032bd1d4(PTR_PTR_0434a080,uVar4,4,uVar5,uVar2);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  if (*(uint *)(param_1 + 0x30) != uVar1) {
    *(uint *)(param_1 + 0x30) = uVar1;
  }
  if (0 < (int)uVar1) {
    if (uVar1 == 1) {
      lVar8 = 0;
      iVar9 = 0;
    }
    else {
      lVar8 = 0;
      iVar9 = 0;
      do {
        lVar10 = lVar8 * 4;
        lVar8 = lVar8 + 2;
        iVar3 = *(int *)(*param_3 + lVar10);
        *(int *)(*(long *)(param_1 + 0x28) + lVar10) = iVar9;
        iVar3 = iVar3 + iVar9;
        iVar9 = *(int *)(*param_3 + lVar10 + 4);
        *(int *)(*(long *)(param_1 + 0x28) + lVar10 + 4) = iVar3;
        iVar9 = iVar9 + iVar3;
      } while (uVar11 - (uVar11 & 1) != lVar8);
      if ((uVar1 & 1) == 0) goto LAB_0325e96c;
    }
    *(int *)(*(long *)(param_1 + 0x28) + lVar8 * 4) = iVar9;
  }
LAB_0325e96c:
  uVar5 = *param_4;
  *(undefined8 *)(param_1 + 0x48) = param_4[1];
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  uVar5 = param_4[2];
  *(undefined8 *)(param_1 + 0x58) = param_4[3];
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  uVar5 = *param_5;
  *(undefined8 *)(param_1 + 0x68) = param_5[1];
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  return;
}


