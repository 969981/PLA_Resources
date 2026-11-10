/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044a730; name: FUN_0044a730
 */


undefined8 FUN_0044a730(undefined8 param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  byte *pbVar8;
  byte local_90 [80];
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar4 = *param_2;
  if (iVar4 < 1) {
    return 1;
  }
  pbVar8 = *(byte **)(param_2 + 2);
  lVar7 = 0;
  bVar2 = *pbVar8;
  iVar3 = 0;
  do {
    bVar6 = 0x2e;
    if (bVar2 < 0x7f) {
      bVar6 = bVar2;
      if (bVar2 != 10) {
        bVar6 = 0x2e;
      }
      bVar1 = bVar2;
      if (bVar2 != 0xd) {
        bVar1 = bVar6;
      }
      bVar6 = bVar2;
      if (bVar2 < 0x20) {
        bVar6 = bVar1;
      }
    }
    iVar5 = iVar3 + 1;
    local_90[iVar3] = bVar6;
    if (iVar3 < 0x4f) {
      if ((long)iVar4 <= lVar7 + 1) {
LAB_0044a7f8:
        if ((iVar5 < 1) || (iVar4 = FUN_004042b0(param_1,local_90), 0 < iVar4)) {
          return 1;
        }
        return 0;
      }
    }
    else {
      iVar4 = FUN_004042b0(param_1,local_90,iVar5);
      if (iVar4 < 1) {
        return 0;
      }
      iVar4 = *param_2;
      iVar5 = 0;
      if ((long)iVar4 <= lVar7 + 1) goto LAB_0044a7f8;
    }
    lVar7 = lVar7 + 1;
    bVar2 = pbVar8[lVar7];
    iVar3 = iVar5;
  } while( true );
}


