/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03152e5c; name: FUN_03152e5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03152e5c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  uVar5 = DAT_0388a148;
  uVar4 = DAT_0388a140;
  uVar3 = _UNK_03888d18;
  uVar2 = _DAT_03888d10;
  param_1[6] = 0;
  param_1[7] = 0x8000000000000000;
  *param_1 = 0x3f80000000000000;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  lVar7 = FUN_03152f48(PTR_PTR_0434a080,(long)param_1 + 0x3c);
  iVar1 = *(int *)(param_1 + 7);
  param_1[6] = lVar7;
  uVar3 = _UNK_03888d88;
  uVar2 = _DAT_03888d80;
  if (iVar1 < 2) {
    lVar8 = (long)iVar1 + -2;
    *(undefined4 *)(param_1 + 7) = 2;
    lVar7 = lVar7 + (long)iVar1 * 0x30 + 0x2c;
    do {
      *(undefined8 *)(lVar7 + -0x14) = 0;
      bVar6 = lVar8 != -1;
      lVar8 = lVar8 + 1;
      *(undefined8 *)(lVar7 + -0x1c) = 0;
      *(undefined8 *)(lVar7 + -0xc) = 0x3f800000;
      *(undefined8 *)(lVar7 + -4) = 0x408000003c23d70a;
      *(undefined8 *)(lVar7 + -0x24) = uVar3;
      *(undefined8 *)(lVar7 + -0x2c) = uVar2;
      lVar7 = lVar7 + 0x30;
    } while (bVar6);
  }
  else if (iVar1 != 2) {
    *(undefined4 *)(param_1 + 7) = 2;
  }
  return;
}


