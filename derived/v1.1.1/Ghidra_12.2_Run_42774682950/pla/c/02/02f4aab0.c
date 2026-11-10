/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4aab0; name: FUN_02f4aab0
 */


int FUN_02f4aab0(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  
  if ((*(uint *)(param_1 + 0xf8) == 0) || (uVar1 = *(uint *)(param_1 + 0xd0), uVar1 == 0)) {
    iVar3 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0xf0);
    piVar4 = *(int **)(param_1 + 200);
    lVar6 = lVar5 + (ulong)*(uint *)(param_1 + 0xf8) * 0x1c;
    iVar3 = 0;
    do {
      piVar9 = piVar4;
      lVar7 = (ulong)uVar1 * 0x10;
      iVar8 = *piVar4;
      while (iVar8 != *(int *)(lVar5 + 4)) {
        lVar7 = lVar7 + -0x10;
        if (lVar7 == 0) goto LAB_02f4ab68;
        piVar9 = piVar9 + 4;
        iVar8 = *piVar9;
      }
      if ((piVar9 != piVar4 + (ulong)uVar1 * 4) && (lVar7 = *(long *)(piVar9 + 2), lVar7 != 0)) {
        uVar2 = *(int *)(lVar5 + 0xc) - param_2;
        if ((*(ushort *)(lVar7 + 0xc) & 0x7c) == 4) {
          if ((((int)uVar2 < 0) || ((*(ushort *)(lVar7 + 0xc) >> 1 & 1) == 0)) ||
             (iVar8 = 0, *(int *)(lVar5 + 0x18) != 0)) {
            iVar8 = *(int *)(lVar7 + 0x20);
          }
        }
        else {
          iVar8 = 0;
        }
        if (*(short *)(lVar7 + 0x1a) == 0x11) {
          if (*(int *)(lVar5 + 0x18) == 0) {
            iVar8 = iVar8 + (uint)DAT_042ab268;
          }
          else {
            iVar8 = iVar8 + (uint)DAT_042ab268 * 4;
          }
        }
        iVar8 = iVar8 - (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
        if (iVar8 <= iVar3) {
          iVar8 = iVar3;
        }
        iVar3 = iVar8;
      }
LAB_02f4ab68:
      lVar5 = lVar5 + 0x1c;
    } while (lVar5 != lVar6);
  }
  return iVar3;
}


