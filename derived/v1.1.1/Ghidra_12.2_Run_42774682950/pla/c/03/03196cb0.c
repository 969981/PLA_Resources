/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03196cb0; name: FUN_03196cb0
 */


void FUN_03196cb0(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  short *psVar8;
  int iVar9;
  long lVar10;
  
  uVar4 = *(uint *)((long)param_2 + 0xc);
  *(undefined4 *)(param_2 + 1) = 0;
  uVar1 = *(uint *)(param_1 + 0xe8);
  uVar6 = 0;
  if ((int)(uVar4 & 0x3fffffff) < (int)uVar1) {
    lVar5 = *param_2;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
      uVar4 = *(uint *)((long)param_2 + 0xc);
    }
    uVar6 = (uVar4 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar6) {
      uVar6 = 0x3fffffff;
    }
    uVar4 = uVar1;
    if ((int)uVar1 <= (int)uVar6) {
      uVar4 = uVar6;
    }
    lVar5 = FUN_032bd1d4(PTR_PTR_0434a090,uVar4,4,lVar5,0);
    uVar6 = *(uint *)(param_2 + 1);
    *param_2 = lVar5;
    bVar3 = SBORROW4(uVar1,uVar6);
    uVar4 = uVar1 - uVar6;
    if ((int)uVar1 <= (int)uVar6) goto LAB_03196e34;
  }
  else {
    bVar3 = false;
    uVar4 = uVar1;
    if ((int)uVar1 < 1) {
LAB_03196e34:
      if ((int)uVar4 < 0 != bVar3) {
        *(uint *)(param_2 + 1) = uVar1;
      }
      goto LAB_03196d18;
    }
  }
  *(uint *)(param_2 + 1) = uVar1;
  memset((void *)(*param_2 + (long)(int)uVar6 * 4),0xff,(ulong)(uVar1 + ~uVar6) * 4 + 4);
LAB_03196d18:
  if (0 < *(int *)(param_1 + 0xb8)) {
    lVar5 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0xb0);
      iVar9 = *(int *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar7 + lVar5 * 0x10);
      uVar1 = iVar2 - iVar9;
      if ((iVar9 <= iVar2) && (psVar8 = (short *)(lVar7 + lVar5 * 0x10 + 8), 0 < *psVar8)) {
        lVar10 = 0;
        do {
          *(int *)(*param_2 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) +
                  lVar10 * 4) = (int)lVar5;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *psVar8);
        iVar9 = *(int *)(param_1 + 0x30);
      }
      lVar7 = lVar7 + lVar5 * 0x10;
      iVar2 = *(int *)(lVar7 + 4);
      uVar1 = iVar2 - iVar9;
      if ((iVar9 <= iVar2) && (psVar8 = (short *)(lVar7 + 10), 0 < *psVar8)) {
        lVar7 = 0;
        do {
          *(int *)(*param_2 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2) +
                  lVar7 * 4) = (int)lVar5;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *psVar8);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xb8));
  }
  return;
}


