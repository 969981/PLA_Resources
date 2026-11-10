/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03196a14; name: FUN_03196a14
 */


void FUN_03196a14(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  short *psVar10;
  long lVar11;
  ulong uVar12;
  
  puVar6 = (uint *)((long)param_2 + 0xc);
  uVar7 = *puVar6;
  *(undefined4 *)(param_2 + 1) = 0;
  uVar1 = *(uint *)(param_1 + 0xe8);
  uVar9 = 0;
  if ((int)(uVar7 & 0x3fffffff) < (int)uVar1) {
    lVar5 = *param_2;
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1,param_2,param_3,lVar5);
      uVar7 = *puVar6;
    }
    uVar9 = (uVar7 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar9) {
      uVar9 = 0x3fffffff;
    }
    uVar7 = uVar1;
    if ((int)uVar1 <= (int)uVar9) {
      uVar7 = uVar9;
    }
    lVar5 = FUN_032bd1d4(PTR_PTR_0434a090,uVar7,4,lVar5,0,puVar6);
    uVar9 = *(uint *)(param_2 + 1);
    *param_2 = lVar5;
    bVar4 = SBORROW4(uVar1,uVar9);
    uVar7 = uVar1 - uVar9;
    if ((int)uVar1 <= (int)uVar9) goto LAB_03196bdc;
  }
  else {
    bVar4 = false;
    uVar7 = uVar1;
    if ((int)uVar1 < 1) {
LAB_03196bdc:
      if ((int)uVar7 < 0 != bVar4) {
        *(uint *)(param_2 + 1) = uVar1;
      }
      goto LAB_03196a84;
    }
  }
  *(uint *)(param_2 + 1) = uVar1;
  memset((void *)(*param_2 + (long)(int)uVar9 * 4),0xff,(ulong)(uVar1 + ~uVar9) * 4 + 4);
LAB_03196a84:
  uVar1 = *(uint *)(param_1 + 0xd8);
  iVar2 = *(int *)(param_1 + 0x30);
  lVar11 = (long)DAT_0444b53c;
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar8;
  }
  if (*(long *)(lVar8 + lVar11 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  if (0 < (int)uVar1) {
    uVar12 = 0;
    uVar9 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0xd0);
      iVar3 = *(int *)(lVar8 + uVar12 * 0x10);
      uVar7 = iVar3 - iVar2;
      if ((iVar2 <= iVar3) && (psVar10 = (short *)(lVar8 + uVar12 * 0x10 + 8), 0 < *psVar10)) {
        lVar11 = 0;
        do {
          *(int *)(*param_2 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2) +
                  lVar11 * 4) = (int)uVar12;
          lVar11 = lVar11 + 1;
        } while (lVar11 < *psVar10);
      }
      lVar8 = lVar8 + uVar12 * 0x10;
      iVar3 = *(int *)(lVar8 + 4);
      uVar7 = iVar3 - iVar2;
      if ((iVar2 <= iVar3) && (psVar10 = (short *)(lVar8 + 10), 0 < *psVar10)) {
        lVar8 = 0;
        do {
          *(int *)(*param_2 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2) +
                  lVar8 * 4) = (int)uVar12;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *psVar10);
      }
      bVar4 = 0xffe08aef < uVar9;
      uVar9 = uVar9 + 0x1f7510;
      if (bVar4) {
        lVar11 = (long)DAT_0444b53c;
        lVar8 = *(long *)(lVar5 + 0x38d490);
        if (lVar8 == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar5 + 0x38d490) = lVar8;
        }
        if (*(long *)(lVar8 + lVar11 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar1);
  }
  return;
}


