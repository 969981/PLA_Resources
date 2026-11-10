/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c3cc0; name: FUN_030c3cc0
 */


void FUN_030c3cc0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 short param_5,short param_6)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar4 = FUN_030c56d8(param_2,*(undefined8 *)(*(long *)(*(long *)*param_2 + 8) + 0x4b0),param_1);
  sVar3 = FUN_0333b4f8(param_3,uVar4,0x40);
  if ((param_5 != -1) && (sVar3 != -1)) {
    uVar8 = *(uint *)(param_3 + 0x334);
    iVar7 = *(int *)(param_3 + 0x330);
    uVar2 = iVar7 + 1;
    if (iVar7 < (int)(uVar8 & 0x3fffffff)) {
      lVar5 = *(long *)(param_3 + 0x328);
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 0x328);
      if (0x3ffffffe < iVar7) {
        FUN_032bd0a8(uVar2);
        uVar8 = *(uint *)(param_3 + 0x334);
      }
      uVar8 = (uVar8 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      uVar6 = uVar2;
      if ((int)uVar2 <= (int)uVar8) {
        uVar6 = uVar8;
      }
      lVar5 = FUN_032bd1d4(PTR_PTR_0434a080,uVar6,4,uVar4,iVar7);
      iVar7 = *(int *)(param_3 + 0x330);
      *(long *)(param_3 + 0x328) = lVar5;
    }
    psVar1 = (short *)(lVar5 + (long)iVar7 * 4);
    *(uint *)(param_3 + 0x330) = uVar2;
    *psVar1 = param_5;
    psVar1[1] = sVar3;
  }
  if ((param_6 != -1) && (sVar3 != -1)) {
    uVar8 = *(uint *)(param_3 + 0x334);
    iVar7 = *(int *)(param_3 + 0x330);
    uVar2 = iVar7 + 1;
    if (iVar7 < (int)(uVar8 & 0x3fffffff)) {
      lVar5 = *(long *)(param_3 + 0x328);
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 0x328);
      if (0x3ffffffe < iVar7) {
        FUN_032bd0a8(uVar2);
        uVar8 = *(uint *)(param_3 + 0x334);
      }
      uVar8 = (uVar8 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      uVar6 = uVar2;
      if ((int)uVar2 <= (int)uVar8) {
        uVar6 = uVar8;
      }
      lVar5 = FUN_032bd1d4(PTR_PTR_0434a080,uVar6,4,uVar4,iVar7);
      iVar7 = *(int *)(param_3 + 0x330);
      *(long *)(param_3 + 0x328) = lVar5;
    }
    psVar1 = (short *)(lVar5 + (long)iVar7 * 4);
    *(uint *)(param_3 + 0x330) = uVar2;
    *psVar1 = sVar3;
    psVar1[1] = param_6;
  }
  return;
}


