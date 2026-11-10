/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e2f1c; name: FUN_031e2f1c
 */


void FUN_031e2f1c(long *param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_PTR_0434a090;
  iVar6 = (int)param_1[1] + -1;
  if (0 < (int)param_1[1]) {
    iVar5 = (int)param_2[1];
    do {
      puVar7 = (undefined8 *)(*param_1 + (long)iVar6 * 0xc);
      uVar8 = *puVar7;
      uVar2 = *(undefined4 *)(puVar7 + 1);
      lVar4 = *param_2;
      iVar1 = iVar5 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar5) {
        lVar4 = FUN_031e4894(puVar3,iVar1,lVar4,iVar5,(long)param_2 + 0xc);
        iVar5 = (int)param_2[1];
        *param_2 = lVar4;
      }
      puVar7 = (undefined8 *)(lVar4 + (long)iVar5 * 0xc);
      *puVar7 = uVar8;
      *(undefined4 *)(puVar7 + 1) = uVar2;
      iVar6 = iVar6 + -1;
      *(int *)(param_2 + 1) = iVar1;
      iVar5 = iVar1;
    } while (-1 < iVar6);
  }
  return;
}


