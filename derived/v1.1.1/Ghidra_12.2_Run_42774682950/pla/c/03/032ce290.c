/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ce290; name: FUN_032ce290
 */


void FUN_032ce290(long param_1,int param_2,uint param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  do {
    uVar4 = *(ulong *)(param_1 + (long)((int)(param_2 + param_3) >> 1) * 8);
    uVar3 = (ulong)param_3;
    iVar10 = param_2;
    do {
      while( true ) {
        puVar1 = (ulong *)(param_1 + (long)iVar10 * 8);
        do {
          iVar11 = iVar10;
          puVar5 = puVar1;
          iVar10 = iVar11 + 1;
          puVar1 = puVar5 + 1;
        } while (*puVar5 < uVar4);
        iVar2 = (int)uVar3;
        lVar6 = 0;
        iVar7 = iVar2 + 1;
        do {
          uVar8 = *(ulong *)(param_1 + (long)iVar2 * 8 + lVar6 * 8);
          lVar6 = lVar6 + -1;
          iVar7 = iVar7 + -1;
        } while (uVar4 < uVar8);
        uVar3 = lVar6 + uVar3 + 1;
        uVar9 = (uint)uVar3;
        if (iVar11 <= (int)uVar9) break;
        uVar3 = uVar3 & 0xffffffff;
        iVar10 = iVar11;
        if ((int)uVar9 < iVar11) goto LAB_032ce35c;
      }
      if (iVar11 != iVar7) {
        *(ulong *)(param_1 + (long)iVar2 * 8 + lVar6 * 8 + 8) = *puVar5;
        *puVar5 = uVar8;
      }
      uVar9 = iVar2 + (int)lVar6;
      uVar3 = (ulong)uVar9;
      iVar11 = iVar10;
    } while (iVar10 <= (int)uVar9);
LAB_032ce35c:
    if (param_2 < (int)uVar9) {
      FUN_032ce290(param_1);
    }
    param_2 = iVar11;
    if ((int)param_3 <= iVar11) {
      return;
    }
  } while( true );
}


