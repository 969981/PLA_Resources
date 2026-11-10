/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030bcbb0; name: FUN_030bcbb0
 */


void FUN_030bcbb0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar13;
  long *plVar12;
  int iVar14;
  
  do {
    uVar1 = param_2 + param_3 >> 1;
    lVar9 = *(long *)(param_1 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
    iVar14 = param_2;
    iVar7 = param_3;
    do {
      uVar5 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x9a);
      plVar11 = (long *)(param_1 + -0x10 + (long)iVar14 * 0x10);
      do {
        iVar6 = iVar14;
        plVar10 = plVar11;
        plVar11 = plVar10 + 2;
        iVar14 = iVar6 + 1;
      } while (*(ushort *)(*(long *)(*plVar11 + 0x20) + 0x9a) < uVar5);
      plVar12 = (long *)(param_1 + 0x10 + (long)iVar7 * 0x10);
      iVar7 = iVar7 + 1;
      do {
        iVar8 = iVar7;
        plVar13 = plVar12;
        plVar12 = plVar13 + -2;
        iVar7 = iVar8 + -1;
      } while (uVar5 < *(ushort *)(*(long *)(*plVar12 + 0x20) + 0x9a));
      iVar14 = iVar6;
      if (iVar6 <= iVar7) {
        if (iVar6 != iVar7) {
          lVar2 = *plVar12;
          lVar3 = plVar13[-1];
          lVar4 = plVar10[3];
          *plVar12 = *plVar11;
          plVar13[-1] = lVar4;
          *plVar11 = lVar2;
          plVar10[3] = lVar3;
        }
        iVar7 = iVar8 + -2;
        iVar14 = iVar6 + 1;
      }
    } while (iVar14 <= iVar7);
    if (param_2 < iVar7) {
      FUN_030bcbb0(param_1);
    }
    param_2 = iVar14;
  } while (iVar14 < param_3);
  return;
}


