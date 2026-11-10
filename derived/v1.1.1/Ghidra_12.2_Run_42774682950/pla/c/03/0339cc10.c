/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339cc10; name: FUN_0339cc10
 */


void FUN_0339cc10(long *param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x78))(param_1,0,0);
  if (lVar3 != 0) {
    do {
      FUN_0339cc10(lVar3,param_2);
      lVar3 = (**(code **)(*param_1 + 0x78))(param_1,0,lVar3);
    } while (lVar3 != 0);
  }
  lVar3 = (**(code **)(*param_1 + 0x48))(param_1,0,0,0);
  puVar2 = PTR_PTR_0434a080;
  if (lVar3 != 0) {
    do {
      iVar5 = (int)param_2[1];
      lVar4 = *param_2;
      iVar1 = iVar5 + 1;
      if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar5) {
        lVar4 = FUN_0339db1c(puVar2,iVar1,lVar4,iVar5,(long)param_2 + 0xc);
        iVar5 = (int)param_2[1];
        *param_2 = lVar4;
      }
      *(long *)(lVar4 + (long)iVar5 * 8) = lVar3;
      *(int *)(param_2 + 1) = iVar1;
      lVar3 = (**(code **)(*param_1 + 0x48))(param_1,0,0,lVar3);
    } while (lVar3 != 0);
  }
  return;
}


