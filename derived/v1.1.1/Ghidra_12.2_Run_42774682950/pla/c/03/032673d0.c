/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032673d0; name: FUN_032673d0
 */


void FUN_032673d0(long param_1,int param_2,int param_3,long param_4,undefined1 *param_5)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  
  do {
    uVar3 = *(ushort *)(param_1 + (long)(param_2 + param_3 >> 1) * 2);
    iVar13 = param_2;
    iVar6 = param_3;
    do {
      puVar7 = (ushort *)(param_1 + (long)iVar13 * 2);
      uVar2 = *puVar7;
      while (uVar2 != uVar3) {
        lVar9 = *(long *)(param_4 + 0x100);
        iVar1 = *(int *)(lVar9 + (ulong)uVar2 * 0x20);
        puVar10 = (uint *)(lVar9 + (ulong)uVar2 * 0x20 + 4);
        puVar12 = (uint *)(lVar9 + (ulong)uVar3 * 0x20 + 4);
        iVar5 = *puVar10 - iVar1;
        iVar1 = *puVar12 - iVar1;
        iVar5 = (iVar5 * 2 & 0x10000U) + iVar5;
        iVar1 = (iVar1 * 2 & 0x10000U) + iVar1;
        iVar4 = (int)(short)iVar1 * (iVar5 >> 0x10);
        iVar5 = (iVar1 >> 0x10) * (int)(short)iVar5;
        if (iVar4 == iVar5) {
          *param_5 = 1;
          if (*puVar12 <= *puVar10) break;
        }
        else if (iVar4 - iVar5 < 1) break;
        puVar7 = puVar7 + 1;
        iVar13 = iVar13 + 1;
        uVar2 = *puVar7;
      }
      puVar8 = (ushort *)(param_1 + (long)iVar6 * 2);
      uVar2 = *puVar8;
      while (uVar3 != uVar2) {
        lVar11 = *(long *)(param_4 + 0x100);
        lVar9 = (ulong)uVar3 * 0x20;
        iVar1 = *(int *)(lVar11 + lVar9);
        puVar10 = (uint *)(lVar11 + lVar9 + 4);
        puVar12 = (uint *)(lVar11 + (ulong)uVar2 * 0x20 + 4);
        iVar5 = *puVar10 - iVar1;
        iVar1 = *puVar12 - iVar1;
        iVar5 = (iVar5 * 2 & 0x10000U) + iVar5;
        iVar1 = (iVar1 * 2 & 0x10000U) + iVar1;
        iVar4 = (int)(short)iVar1 * (iVar5 >> 0x10);
        iVar5 = (iVar1 >> 0x10) * (int)(short)iVar5;
        if (iVar4 == iVar5) {
          *param_5 = 1;
          if (*puVar12 <= *puVar10) break;
        }
        else if (iVar4 - iVar5 < 1) break;
        puVar8 = puVar8 + -1;
        iVar6 = iVar6 + -1;
        uVar2 = *puVar8;
      }
      if (iVar13 <= iVar6) {
        if (iVar6 != iVar13) {
          uVar2 = *puVar8;
          *puVar8 = *puVar7;
          *puVar7 = uVar2;
        }
        iVar6 = iVar6 + -1;
        iVar13 = iVar13 + 1;
      }
    } while (iVar13 <= iVar6);
    if (param_2 < iVar6) {
      FUN_032673d0(param_1,param_2,iVar6,param_4,param_5);
    }
    param_2 = iVar13;
    if (param_3 <= iVar13) {
      return;
    }
  } while( true );
}


