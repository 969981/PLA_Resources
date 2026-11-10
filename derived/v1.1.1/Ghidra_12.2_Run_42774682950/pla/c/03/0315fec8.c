/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315fec8; name: FUN_0315fec8
 */


void FUN_0315fec8(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  
  iVar2 = (int)param_1[1];
  iVar4 = iVar2 << 1;
  if (iVar2 == 0) {
    iVar4 = 1;
  }
  iVar1 = iVar2 + 2;
  if (iVar2 + 2 <= iVar4) {
    iVar1 = iVar4;
  }
  iVar4 = iVar2;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < iVar1) {
    lVar3 = FUN_0316002c(PTR_PTR_0434a080,iVar1,*param_1,iVar2);
    iVar4 = (int)param_1[1];
    *param_1 = lVar3;
  }
  if (iVar4 != iVar1) {
    *(int *)(param_1 + 1) = iVar1;
  }
  if (iVar2 < iVar1) {
    iVar4 = iVar1 + -1;
    lVar3 = (long)iVar2;
    if (iVar2 < iVar4) {
      iVar5 = iVar2 + 1;
    }
    else {
      iVar5 = (int)param_1[2];
    }
    lVar6 = lVar3 + 1;
    puVar7 = (undefined8 *)(*param_1 + lVar3 * 0x18);
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 1) = 0xbf800000;
    *(int *)((long)puVar7 + 0xc) = iVar5;
    *(undefined4 *)(puVar7 + 2) = 0xffffffff;
    if (lVar6 < iVar1) {
      if (lVar6 < iVar4) {
        iVar5 = iVar2 + 2;
      }
      else {
        iVar5 = (int)param_1[2];
      }
      puVar7 = (undefined8 *)(*param_1 + lVar6 * 0x18);
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0xbf800000;
      *(int *)((long)puVar7 + 0xc) = iVar5;
      *(undefined4 *)(puVar7 + 2) = 0xffffffff;
      for (lVar3 = lVar3 + 2; lVar3 < iVar1; lVar3 = lVar3 + 1) {
        if (lVar3 < iVar4) {
          iVar5 = (int)lVar3 + 1;
        }
        else {
          iVar5 = (int)param_1[2];
        }
        puVar7 = (undefined8 *)(*param_1 + lVar3 * 0x18);
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0xbf800000;
        *(int *)((long)puVar7 + 0xc) = iVar5;
        *(undefined4 *)(puVar7 + 2) = 0xffffffff;
      }
    }
  }
  *(int *)(param_1 + 2) = iVar2;
  return;
}


