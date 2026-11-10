/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031eded0; name: FUN_031eded0
 */


void FUN_031eded0(long param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  
  lVar2 = tpidr_el0;
  do {
    iVar1 = *(int *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar7 = param_2;
    iVar9 = param_3;
    do {
      uVar3 = *param_4;
      *param_4 = uVar3 + 0xe6afc;
      if (0xfff19503 < uVar3) {
        lVar5 = (long)DAT_0444b53c;
        lVar4 = *(long *)(lVar2 + 0x38d490);
        if (lVar4 == 0) {
          lVar4 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar4;
        }
        if (*(long *)(lVar4 + lVar5 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
      }
      iVar6 = 0xd1b71;
      piVar10 = (int *)(param_1 + -4 + (long)iVar7 * 4);
      do {
        iVar8 = iVar7;
        piVar10 = piVar10 + 1;
        iVar6 = iVar6 + -0xd1b71;
        iVar7 = iVar8 + 1;
      } while (*piVar10 < iVar1);
      uVar3 = *param_4 - iVar6;
      *param_4 = uVar3;
      if (uVar3 < (uint)-iVar6) {
        lVar5 = (long)DAT_0444b53c;
        lVar4 = *(long *)(lVar2 + 0x38d490);
        if (lVar4 == 0) {
          lVar4 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar4;
        }
        if (*(long *)(lVar4 + lVar5 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
        uVar3 = *param_4;
      }
      *param_4 = uVar3 + 0xe6afc;
      if (0xfff19503 < uVar3) {
        lVar5 = (long)DAT_0444b53c;
        lVar4 = *(long *)(lVar2 + 0x38d490);
        if (lVar4 == 0) {
          lVar4 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar4;
        }
        if (*(long *)(lVar4 + lVar5 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
      }
      iVar7 = 0xd1b71;
      piVar11 = (int *)(param_1 + 4 + (long)iVar9 * 4);
      iVar9 = iVar9 + 1;
      do {
        iVar6 = iVar9;
        piVar11 = piVar11 + -1;
        iVar9 = iVar6 + -1;
        iVar7 = iVar7 + -0xd1b71;
      } while (iVar1 < *piVar11);
      uVar3 = *param_4;
      *param_4 = uVar3 - iVar7;
      if (uVar3 - iVar7 < (uint)-iVar7) {
        lVar5 = (long)DAT_0444b53c;
        lVar4 = *(long *)(lVar2 + 0x38d490);
        if (lVar4 == 0) {
          lVar4 = FUN_0333d16c(0,1);
          *(long *)(lVar2 + 0x38d490) = lVar4;
        }
        if (*(long *)(lVar4 + lVar5 * 8 + 0x18) != 0) {
          FUN_0332a954();
        }
      }
      iVar7 = iVar8;
      if (iVar8 <= iVar9) {
        if (iVar8 != iVar9) {
          iVar9 = *piVar11;
          *piVar11 = *piVar10;
          *piVar10 = iVar9;
        }
        iVar9 = iVar6 + -2;
        iVar7 = iVar8 + 1;
      }
    } while (iVar7 <= iVar9);
    if (param_2 < iVar9) {
      FUN_031eded0(param_1,param_2,iVar9,param_4);
    }
    param_2 = iVar7;
  } while (iVar7 < param_3);
  return;
}


