/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dbf58; name: FUN_032dbf58
 */


long FUN_032dbf58(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  int local_34;
  
  lVar8 = *param_1;
  local_34 = param_3;
  lVar5 = FUN_032e0754((long *)(lVar8 + 0xa0),&local_34);
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar8 + 0xa0);
    if (lVar8 + (long)*(int *)(lVar5 + 4) * 0x18 != 0) {
      lVar8 = lVar8 + (long)*(int *)(lVar5 + 4) * 0x18;
      iVar4 = *(int *)(lVar8 + 0x10);
      if (iVar4 != 0) {
        plVar9 = *(long **)(lVar8 + 8);
        lVar5 = (long)iVar4 << 3;
        do {
          iVar4 = FUN_032e3dac(*plVar9,param_2);
          if (iVar4 == 0) {
            return *plVar9;
          }
          plVar9 = plVar9 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
  }
  lVar5 = FUN_032e0b60(param_2);
  if (lVar5 != 0) {
    iVar4 = FUN_032e8598(*param_1 + 0x58,lVar5);
    if (iVar4 == param_3) {
      plVar9 = (long *)FUN_032dc0e0(*param_1 + 0xa0,&local_34);
      puVar3 = PTR_PTR_0434a080;
      iVar4 = (int)plVar9[1];
      puVar6 = (uint *)((long)plVar9 + 0xc);
      uVar7 = *puVar6;
      uVar1 = iVar4 + 1;
      if (iVar4 < (int)(uVar7 & 0x3fffffff)) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = *plVar9;
        if (0x3ffffffe < iVar4) {
          FUN_032bd0a8(uVar1);
          uVar7 = *puVar6;
        }
        uVar7 = (uVar7 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar7) {
          uVar7 = 0x3fffffff;
        }
        uVar2 = uVar1;
        if ((int)uVar1 <= (int)uVar7) {
          uVar2 = uVar7;
        }
        lVar8 = FUN_032bd1d4(puVar3,uVar2,8,lVar8,iVar4,puVar6);
        iVar4 = (int)plVar9[1];
        *plVar9 = lVar8;
      }
      *(long *)(lVar8 + (long)iVar4 * 8) = lVar5;
      *(uint *)(plVar9 + 1) = uVar1;
    }
    else {
      lVar5 = 0;
    }
  }
  return lVar5;
}


