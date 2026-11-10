/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9e3b8; name: FUN_02e9e3b8
 */


int FUN_02e9e3b8(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  if (*(uint *)(param_1 + 0x148) != 0) {
    lVar4 = *(long *)(param_1 + 0x140);
    lVar6 = lVar4 + (ulong)*(uint *)(param_1 + 0x148) * 0x68;
    lVar5 = *(long *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0x10);
    if (param_3 == 0) {
      do {
        if (uVar2 != 0) {
          uVar8 = *(ulong *)(lVar4 + 0x50);
          iVar3 = 0;
          uVar9 = uVar2;
          do {
            iVar7 = iVar3 + (uVar9 >> 1);
            uVar10 = *(ulong *)(lVar5 + (long)iVar7 * 8);
            if (uVar10 == uVar8) {
              if (lVar5 + (long)iVar7 * 8 != 0) {
                param_3 = param_3 + 1;
              }
              break;
            }
            if (uVar10 < uVar8) {
              iVar3 = iVar7 + 1;
            }
            uVar9 = uVar9 - (uVar10 < uVar8) >> 1;
          } while (uVar9 != 0);
        }
        lVar4 = lVar4 + 0x68;
        if (lVar4 == lVar6) {
          return param_3;
        }
      } while( true );
    }
    if (param_3 == 1) {
      iVar3 = 0;
      if (uVar2 != 0) goto LAB_02e9e3fc;
LAB_02e9e3e8:
      do {
        iVar3 = iVar3 + 1;
        while( true ) {
          lVar4 = lVar4 + 0x68;
          if (lVar4 == lVar6) {
            return iVar3;
          }
          if (uVar2 == 0) break;
LAB_02e9e3fc:
          uVar8 = *(ulong *)(lVar4 + 0x50);
          iVar7 = 0;
          uVar9 = uVar2;
          while( true ) {
            iVar1 = iVar7 + (uVar9 >> 1);
            uVar10 = *(ulong *)(lVar5 + (long)iVar1 * 8);
            if (uVar10 == uVar8) break;
            if (uVar10 < uVar8) {
              iVar7 = iVar1 + 1;
            }
            uVar9 = uVar9 - (uVar10 < uVar8) >> 1;
            if (uVar9 == 0) goto LAB_02e9e3e8;
          }
          if (lVar5 + (long)iVar1 * 8 == 0) break;
        }
      } while( true );
    }
  }
  return 0;
}


