/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bd5d8; name: FUN_032bd5d8
 */


void FUN_032bd5d8(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  
  iVar9 = (int)(((long)param_2 + 0xeffU & 0xfffffffffffff100) / 0xf00);
  if (0 < iVar9) {
    iVar10 = 0;
    lVar3 = tpidr_el0;
    do {
      lVar7 = *(long *)(lVar3 + 0x38d490);
      if (lVar7 == 0) {
        lVar7 = FUN_0333d16c(0,1);
        *(long *)(lVar3 + 0x38d490) = lVar7;
      }
      plVar8 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
      lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,0xf50,0);
      uVar11 = lVar7 + 0x4fU & 0xffffffffffffffc0;
      *(long **)(uVar11 - 0x10) = plVar8;
      *(undefined4 *)(uVar11 - 8) = 0xf40;
      *(int *)(uVar11 - 4) = (int)uVar11 - (int)lVar7;
      iVar5 = *(int *)(param_1 + 0x40);
      uVar6 = *(uint *)(param_1 + 0x44);
      uVar1 = iVar5 + 1;
      if (iVar5 < (int)(uVar6 & 0x3fffffff)) {
        lVar7 = *(long *)(param_1 + 0x38);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        if (0x3ffffffe < iVar5) {
          FUN_032bd0a8(uVar1);
          uVar6 = *(uint *)(param_1 + 0x44);
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar6) {
          uVar2 = uVar6;
        }
        lVar7 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,uVar4,iVar5,(uint *)(param_1 + 0x44));
        iVar5 = *(int *)(param_1 + 0x40);
        *(long *)(param_1 + 0x38) = lVar7;
      }
      *(ulong *)(lVar7 + (long)iVar5 * 8) = uVar11;
      *(uint *)(param_1 + 0x40) = uVar1;
      iVar5 = *(int *)(param_1 + 0x50);
      uVar6 = *(uint *)(param_1 + 0x54);
      uVar1 = iVar5 + 1;
      if (iVar5 < (int)(uVar6 & 0x3fffffff)) {
        lVar7 = *(long *)(param_1 + 0x48);
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x48);
        if (0x3ffffffe < iVar5) {
          FUN_032bd0a8(uVar1);
          uVar6 = *(uint *)(param_1 + 0x54);
        }
        uVar6 = (uVar6 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar6) {
          uVar2 = uVar6;
        }
        lVar7 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,uVar4,iVar5,(uint *)(param_1 + 0x54));
        iVar5 = *(int *)(param_1 + 0x50);
        *(long *)(param_1 + 0x48) = lVar7;
      }
      iVar10 = iVar10 + 1;
      *(ulong *)(lVar7 + (long)iVar5 * 8) = uVar11;
      *(uint *)(param_1 + 0x50) = uVar1;
    } while (iVar10 < iVar9);
  }
  return;
}


