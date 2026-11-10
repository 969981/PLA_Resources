/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f8f08; name: FUN_032f8f08
 */


void FUN_032f8f08(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    plVar7 = *(long **)(param_1 + 0x58);
    lVar9 = (long)*(int *)(param_1 + 0x60) << 4;
    lVar2 = tpidr_el0;
    do {
      if (*plVar7 == plVar7[1]) {
        plVar1 = (long *)(param_1 + 0x18);
        lVar3 = FUN_032fbe00(plVar1,plVar7);
        if (lVar3 == 0) {
          uVar12 = 0xffffffff00000000;
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (ulong)*(uint *)(lVar3 + 4);
          uVar12 = (lVar3 - *(long *)(param_1 + 0x28)) * 0x20000000;
        }
        lVar3 = *(long *)(*plVar1 + ((long)((uVar6 | uVar12) << 0x20) >> 0x1c) + 8);
        if (lVar3 != 0) {
          FUN_032f916c(lVar3);
          lVar8 = *(long *)(lVar2 + 0x38d490);
          if (lVar8 == 0) {
            lVar8 = FUN_0333d16c(0,1);
            *(long *)(lVar2 + 0x38d490) = lVar8;
          }
          plVar4 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,0x28);
        }
        iVar11 = (int)(uVar6 | uVar12);
        if ((*(uint *)(param_1 + 0x30) < (uint)(uVar12 >> 0x20)) ||
           (lVar3 = *(long *)(param_1 + 0x28) + ((long)uVar12 >> 0x20) * 8,
           *(int *)(lVar3 + 4) != iVar11)) {
          lVar3 = FUN_032fbe00(plVar1,*plVar1 + (long)iVar11 * 0x10);
        }
        FUN_032fc420(plVar1,lVar3);
      }
      else {
        plVar1 = (long *)(param_1 + 0x38);
        lVar3 = FUN_032fc030(plVar1,plVar7);
        if (lVar3 == 0) {
          lVar3 = -0x100000000;
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *(uint *)(lVar3 + 4);
          lVar3 = (lVar3 - *(long *)(param_1 + 0x48)) * 0x20000000;
        }
        uVar10 = uVar10 | (uint)lVar3;
        lVar8 = *(long *)(*plVar1 + (long)(int)uVar10 * 0x18 + 0x10);
        if (lVar8 != 0) {
          FUN_032f916c(lVar8);
          lVar5 = *(long *)(lVar2 + 0x38d490);
          if (lVar5 == 0) {
            lVar5 = FUN_0333d16c(0,1);
            *(long *)(lVar2 + 0x38d490) = lVar5;
          }
          plVar4 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar8,0x28);
        }
        if ((*(uint *)(param_1 + 0x50) < (uint)((ulong)lVar3 >> 0x20)) ||
           (lVar3 = *(long *)(param_1 + 0x48) + (lVar3 >> 0x20) * 8, *(uint *)(lVar3 + 4) != uVar10)
           ) {
          lVar3 = FUN_032fc030(plVar1,*plVar1 + (long)(int)uVar10 * 0x18);
        }
        FUN_032fc52c(plVar1,lVar3);
      }
      plVar7 = plVar7 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}


