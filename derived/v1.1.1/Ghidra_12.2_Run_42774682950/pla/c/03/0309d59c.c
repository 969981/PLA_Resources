/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309d59c; name: FUN_0309d59c
 */


void FUN_0309d59c(long *param_1,long param_2,long *param_3,int param_4,int param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  *(undefined4 *)(param_1 + 1) = 0;
  iVar3 = *(int *)(*(long *)(param_2 + 0x4b0) + 0x20);
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar3) {
    lVar1 = FUN_0305b44c(PTR_PTR_0434a080,iVar3,*param_1,0);
    *param_1 = lVar1;
  }
  if (param_4 <= param_5) {
    lVar4 = *param_3;
    uVar8 = 0xffffffff;
    iVar3 = 0;
    lVar2 = (long)param_4 + -1;
    lVar1 = ((long)param_4 + (long)param_4 * 2) * 4;
    iVar6 = param_4;
    do {
      uVar7 = (uint)*(ushort *)(lVar4 + lVar1 + 2);
      if ((uVar8 != 0xffffffff) && (uVar8 != uVar7)) {
        lVar4 = param_1[1];
        *(int *)(param_1 + 1) = (int)lVar4 + 1;
        piVar5 = (int *)(*param_1 + (long)(int)lVar4 * 0xc);
        *piVar5 = iVar6;
        piVar5[1] = param_4 + -1;
        piVar5[2] = iVar3;
        lVar4 = *param_3;
        iVar3 = 0;
        iVar6 = param_4;
        uVar7 = (uint)*(ushort *)(lVar4 + lVar1 + 2);
      }
      uVar8 = uVar7;
      lVar9 = lVar4 + lVar1;
      lVar1 = lVar1 + 0xc;
      lVar9 = param_6 + (ulong)*(uint *)(lVar9 + 4) * 0x68;
      uVar7 = (uint)*(byte *)(lVar9 + 0x54) + (uint)*(ushort *)(lVar9 + 0x52) +
              (*(byte *)(lVar9 + 0x55) & 0x1f) >> 4;
      lVar2 = lVar2 + 1;
      if (uVar7 == 0) {
        uVar7 = 1;
      }
      iVar3 = uVar7 + iVar3;
      param_4 = param_4 + 1;
    } while (lVar2 < param_5);
    if (iVar3 != 0) {
      lVar1 = param_1[1];
      *(int *)(param_1 + 1) = (int)lVar1 + 1;
      piVar5 = (int *)(*param_1 + (long)(int)lVar1 * 0xc);
      *piVar5 = iVar6;
      piVar5[1] = param_5;
      piVar5[2] = iVar3;
    }
  }
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x38d490) == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar2;
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar2 = *(long *)(*(long *)(lVar1 + 0x38d490) + 0x10);
  }
  if (lVar2 != 0) {
    FUN_032d5af0(lVar2,"TtSort",6);
  }
  FUN_0309d7f0(*param_1,(int)param_1[1]);
  if (*(long *)(lVar1 + 0x38d490) == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar2;
    lVar1 = *(long *)(lVar2 + 0x10);
  }
  else {
    lVar1 = *(long *)(*(long *)(lVar1 + 0x38d490) + 0x10);
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_032d5b34(lVar1,&DAT_0390f40e);
  return;
}


