/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d43a4; name: FUN_032d43a4
 */


int FUN_032d43a4(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_1 + 4);
  lVar5 = param_1[3];
  if (iVar2 < (int)(*(uint *)((long)param_1 + 0x24) & 0x3fffffff)) {
    iVar9 = iVar2;
  }
  else {
    lVar5 = FUN_032d485c(*param_1,iVar2 + 1,lVar5,iVar2);
    iVar9 = *(int *)(param_1 + 4);
    param_1[3] = lVar5;
  }
  *(int *)(param_1 + 4) = iVar2 + 1;
  lVar7 = lVar5 + (long)iVar9 * 0x30;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  piVar8 = (int *)(lVar7 + 0x28);
  piVar8[0] = 0;
  piVar8[1] = -0x80000000;
  FUN_032c48e0(lVar7,0x20,param_2,0x1f);
  *(undefined1 *)(lVar7 + 0x1f) = 0;
  if (param_3 != -1) {
    plVar1 = (long *)(lVar5 + (long)iVar9 * 0x30 + 0x20);
    uVar4 = *(uint *)(lVar7 + 0x2c);
    iVar3 = *piVar8;
    iVar9 = iVar3 + 1;
    if (iVar3 < (int)(uVar4 & 0x3fffffff)) {
      lVar5 = *plVar1;
    }
    else {
      uVar6 = *param_1;
      lVar5 = *plVar1;
      if (0x3ffffffe < iVar3) {
        FUN_032bd0a8(iVar9);
        uVar4 = *(uint *)(lVar7 + 0x2c);
      }
      uVar4 = (uVar4 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar4) {
        uVar4 = 0x3fffffff;
      }
      if ((int)uVar4 < iVar9) {
        uVar4 = iVar3 + 1;
      }
      lVar5 = FUN_032bd1d4(uVar6,uVar4,4,lVar5);
      *plVar1 = lVar5;
      iVar3 = *piVar8;
    }
    *(int *)(lVar5 + (long)iVar3 * 4) = param_3;
    *piVar8 = iVar9;
  }
  return iVar2;
}


