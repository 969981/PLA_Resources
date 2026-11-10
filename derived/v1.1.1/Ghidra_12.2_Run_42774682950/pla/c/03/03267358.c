/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03267358; name: FUN_03267358
 */


void FUN_03267358(long *param_1,int param_2,long *param_3,int param_4,long *param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (-1 < (int)param_1[2]) {
    iVar2 = (int)param_1[2] >> 5;
    lVar6 = *param_1;
    lVar3 = param_3[2];
    lVar4 = param_5[2];
    lVar7 = *param_3;
    lVar8 = *param_5;
    lVar5 = 0;
    do {
      lVar9 = lVar5 * 4;
      *(uint *)(lVar6 + (long)((iVar2 + 1) * param_2) * 4 + lVar9) =
           *(uint *)(lVar8 + (long)((((int)lVar4 >> 5) + 1) * param_6) * 4 + lVar9) ^
           *(uint *)(lVar7 + (long)((((int)lVar3 >> 5) + 1) * param_4) * 4 + lVar9);
      bVar1 = lVar5 < iVar2;
      lVar5 = lVar5 + 1;
    } while (bVar1);
  }
  return;
}


