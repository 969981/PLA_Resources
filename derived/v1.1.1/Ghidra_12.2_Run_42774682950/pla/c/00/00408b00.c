/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00408b00; name: FUN_00408b00
 */


long FUN_00408b00(undefined8 param_1,long param_2,int param_3,int param_4,code *param_5,uint param_6
                 )

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  if (param_3 == 0) {
LAB_00408bf4:
    lVar5 = 0;
  }
  else {
    if (param_3 < 1) {
      bVar4 = false;
      lVar5 = 0;
      iVar6 = 0;
    }
    else {
      iVar7 = 0;
      do {
        iVar6 = param_3 + iVar7;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 1;
        }
        iVar6 = iVar6 >> 1;
        lVar5 = param_2 + iVar6 * param_4;
        iVar1 = (*param_5)(param_1,lVar5);
        iVar2 = iVar6;
        if (-1 < iVar1) {
          if (iVar1 == 0) {
            bVar4 = false;
            goto joined_r0x00408b88;
          }
          iVar7 = iVar6 + 1;
          iVar2 = param_3;
        }
        param_3 = iVar2;
      } while (iVar7 < param_3);
      if ((param_6 & 1) == 0) goto LAB_00408bf4;
      bVar4 = true;
    }
joined_r0x00408b88:
    if (((param_6 >> 1 & 1) != 0) && (!bVar4)) {
      lVar5 = (long)iVar6 + 1;
      lVar3 = param_2 + ((long)iVar6 + -1) * (long)param_4;
      iVar6 = iVar6 * param_4;
      do {
        iVar7 = iVar6;
        lVar5 = lVar5 + -1;
        if (lVar5 < 1) break;
        iVar2 = (*param_5)(param_1,lVar3);
        lVar3 = lVar3 - param_4;
        iVar6 = iVar7 - param_4;
      } while (iVar2 == 0);
      lVar5 = param_2 + iVar7;
    }
  }
  return lVar5;
}


