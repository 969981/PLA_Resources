/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c37c0; name: FUN_001c37c0
 */


void FUN_001c37c0(long param_1,int param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  
  do {
    lVar5 = *(long *)(param_1 + (long)((int)(param_2 + param_3) >> 1) * 8);
    uVar4 = (ulong)param_3;
    iVar11 = param_2;
    do {
      while( true ) {
        iVar1 = *(int *)(lVar5 + 0x58);
        plVar2 = (long *)(param_1 + (long)iVar11 * 8);
        do {
          iVar12 = iVar11;
          plVar6 = plVar2;
          iVar11 = iVar12 + 1;
          plVar2 = plVar6 + 1;
        } while (*(int *)(*plVar6 + 0x58) < iVar1);
        iVar3 = (int)uVar4;
        lVar7 = 0;
        iVar9 = iVar3 + 1;
        do {
          lVar10 = *(long *)(param_1 + (long)iVar3 * 8 + lVar7 * 8);
          lVar7 = lVar7 + -1;
          iVar9 = iVar9 + -1;
        } while (iVar1 < *(int *)(lVar10 + 0x58));
        uVar4 = lVar7 + uVar4 + 1;
        uVar8 = (uint)uVar4;
        if (iVar12 <= (int)uVar8) break;
        uVar4 = uVar4 & 0xffffffff;
        iVar11 = iVar12;
        if ((int)uVar8 < iVar12) goto LAB_001c3898;
      }
      if (iVar12 != iVar9) {
        *(long *)(param_1 + (long)iVar3 * 8 + lVar7 * 8 + 8) = *plVar6;
        *plVar6 = lVar10;
      }
      uVar8 = iVar3 + (int)lVar7;
      uVar4 = (ulong)uVar8;
      iVar12 = iVar11;
    } while (iVar11 <= (int)uVar8);
LAB_001c3898:
    if (param_2 < (int)uVar8) {
      FUN_001c37c0(param_1);
    }
    param_2 = iVar12;
    if ((int)param_3 <= iVar12) {
      return;
    }
  } while( true );
}


