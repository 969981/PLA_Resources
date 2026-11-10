/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03004f5c; name: FUN_03004f5c
 */


void FUN_03004f5c(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = lVar4 + (long)param_2 * 0x68;
  *(ushort *)(lVar3 + 0x42) = *(ushort *)(lVar3 + 0x42) | 4;
  iVar1 = *(int *)(lVar3 + 0x44);
  if (iVar1 != 0x7fffffff) {
    lVar3 = (long)param_2;
    piVar8 = (int *)(lVar4 + lVar3 * 0x68 + 0x34);
    iVar2 = *piVar8;
    if (iVar2 != 0x7fffffff) {
      if (iVar2 == iVar1) {
        return;
      }
      FUN_03003f7c();
    }
    lVar7 = *(long *)(param_1 + 0x38);
    lVar6 = (long)iVar1;
    *piVar8 = iVar1;
    lVar5 = lVar7 + lVar6 * 0x38;
    iVar1 = *(int *)(lVar5 + 0x1c);
    *(int *)(lVar5 + 0x1c) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined4 *)(lVar7 + lVar6 * 0x38 + 0x18) = *(undefined4 *)(lVar4 + lVar3 * 0x68 + 0x30);
    }
    else {
      lVar4 = lVar4 + lVar3 * 0x68;
      lVar3 = *(long *)(param_1 + 8) + (long)*(int *)(lVar7 + lVar6 * 0x38 + 0x18) * 0x68;
      lVar5 = *(long *)(param_1 + 8) + (long)*(int *)(lVar3 + 0x38) * 0x68;
      *(undefined4 *)(lVar5 + 0x3c) = *(undefined4 *)(lVar4 + 0x30);
      *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(lVar4 + 0x30);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar5 + 0x30);
      *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(lVar3 + 0x30);
    }
  }
  return;
}


