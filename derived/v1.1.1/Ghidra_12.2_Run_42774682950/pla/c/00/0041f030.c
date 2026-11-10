/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041f030; name: FUN_0041f030
 */


int FUN_0041f030(long *param_1,long param_2,byte *param_3,int param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  uint local_64;
  
  lVar8 = *(long *)(param_3 + 0x20);
  bVar2 = *param_3;
  if ((bVar2 != 0) && (*param_1 == 0)) {
    return 0;
  }
  if (lVar8 == 0) {
    pcVar10 = (code *)0x0;
  }
  else {
    pcVar10 = *(code **)(lVar8 + 0x18);
  }
  if (6 < bVar2) {
    return 0;
  }
  iVar3 = 0;
  iVar5 = 1;
  switch(bVar2) {
  case 0:
    lVar8 = *(long *)(param_3 + 0x10);
    if (lVar8 != 0) goto LAB_0041f130;
    break;
  case 2:
    if ((pcVar10 != (code *)0x0) && (iVar5 = (*pcVar10)(6,param_1,param_3,0), iVar5 == 0)) {
      return 0;
    }
    iVar5 = FUN_0041fc00(param_1,param_3);
    if ((iVar5 < 0) || (*(long *)(param_3 + 0x18) <= (long)iVar5)) {
      if (pcVar10 == (code *)0x0) {
        return 0;
      }
      (*pcVar10)(7,param_1,param_3,0);
      return 0;
    }
    lVar8 = *(long *)(param_3 + 0x10) + (long)iVar5 * 0x28;
    param_1 = (long *)FUN_0041ff60(param_1,lVar8);
    param_4 = -1;
LAB_0041f130:
    iVar5 = FUN_0041f3a0(param_1,param_2,lVar8,param_4,param_5);
    return iVar5;
  case 3:
    goto switchD_0041f0b4_caseD_3;
  case 4:
    iVar5 = (**(code **)(lVar8 + 0x28))(param_1,param_2,param_3,param_4,param_5);
    return iVar5;
  case 5:
    param_4 = -1;
    break;
  case 6:
    iVar5 = 1;
    if ((param_5 & 0x800) != 0) {
      iVar5 = 2;
    }
  case 1:
    iVar3 = FUN_0041fed0(&local_64,param_2,param_1,param_3);
    if (-1 < iVar3) {
      if (iVar3 != 0) {
        return local_64;
      }
      local_64 = 0;
      uVar1 = param_5 & 0xffffff3f;
      if (param_4 != -1) {
        uVar1 = param_5;
      }
      iVar3 = 0x10;
      if (param_4 != -1) {
        iVar3 = param_4;
      }
      if ((pcVar10 == (code *)0x0) || (iVar4 = (*pcVar10)(6,param_1,param_3,0), iVar4 != 0)) {
        if (0 < *(long *)(param_3 + 0x18)) {
          lVar9 = *(long *)(param_3 + 0x10);
          lVar8 = 0;
          do {
            lVar6 = FUN_0041ff70(param_1,lVar9,1);
            if (lVar6 == 0) {
              return 0;
            }
            uVar7 = FUN_0041ff60(param_1,lVar6);
            iVar4 = FUN_0041f3a0(uVar7,0,lVar6,0xffffffff,uVar1);
            if (iVar4 == -1) {
              return -1;
            }
            if ((int)(0x7fffffff - local_64) < iVar4) {
              return -1;
            }
            local_64 = local_64 + iVar4;
            lVar8 = lVar8 + 1;
            lVar9 = lVar9 + 0x28;
          } while (lVar8 < *(long *)(param_3 + 0x18));
        }
        iVar4 = FUN_0040a0e0(iVar5,local_64,iVar3);
        if (param_2 == 0) {
          return iVar4;
        }
        if (iVar4 == -1) {
          return -1;
        }
        FUN_00409f20(param_2,iVar5,local_64,iVar3,uVar1);
        if (0 < *(long *)(param_3 + 0x18)) {
          lVar9 = *(long *)(param_3 + 0x10);
          lVar8 = 0;
          do {
            lVar6 = FUN_0041ff70(param_1,lVar9,1);
            if (lVar6 == 0) {
              return 0;
            }
            uVar7 = FUN_0041ff60(param_1,lVar6);
            FUN_0041f3a0(uVar7,param_2,lVar6,0xffffffff,uVar1);
            lVar8 = lVar8 + 1;
            lVar9 = lVar9 + 0x28;
          } while (lVar8 < *(long *)(param_3 + 0x18));
        }
        if (iVar5 == 2) {
          FUN_0040a0c0(param_2);
        }
        if (pcVar10 == (code *)0x0) {
          return iVar4;
        }
        iVar5 = (*pcVar10)(7,param_1,param_3,0);
        if (iVar5 != 0) {
          return iVar4;
        }
      }
    }
    return 0;
  }
  iVar3 = FUN_0041f8b0(param_1,param_2,param_3,param_4,param_5);
switchD_0041f0b4_caseD_3:
  return iVar3;
}


