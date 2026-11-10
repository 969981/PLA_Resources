/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5088; name: FUN_031f5088
 */


void FUN_031f5088(long param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) < iVar3) {
    lVar2 = FUN_0315ac2c(PTR_PTR_0434a080,iVar3,*param_2,(int)param_2[1]);
    *param_2 = lVar2;
    iVar3 = *(int *)(param_1 + 0x20);
  }
  if (iVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    lVar4 = (long)(int)param_2[1];
    lVar6 = (long)iVar3 * 0x40 + -0x40;
    lVar2 = lVar5;
    if (((uint)lVar6 >> 6 & 1) == 0) {
      *(undefined4 *)(*param_2 + lVar4 * 4) = *(undefined4 *)(lVar5 + 0x34);
      lVar4 = lVar4 + 1;
      *(int *)(param_2 + 1) = (int)lVar4;
      lVar2 = lVar5 + 0x40;
    }
    if (lVar6 != 0) {
      do {
        lVar6 = lVar4 * 4;
        *(undefined4 *)(*param_2 + lVar6) = *(undefined4 *)(lVar2 + 0x34);
        *(int *)(param_2 + 1) = (int)lVar4 + 1;
        puVar1 = (undefined4 *)(lVar2 + 0x74);
        lVar2 = lVar2 + 0x80;
        lVar4 = lVar4 + 2;
        *(undefined4 *)(*param_2 + lVar6 + 4) = *puVar1;
        *(int *)(param_2 + 1) = (int)lVar4;
      } while (lVar5 + (long)iVar3 * 0x40 != lVar2);
    }
  }
  return;
}


