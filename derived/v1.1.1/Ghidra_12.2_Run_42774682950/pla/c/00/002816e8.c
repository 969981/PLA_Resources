/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002816e8; name: FUN_002816e8
 */


void FUN_002816e8(undefined8 param_1,long param_2,long param_3,uint param_4,undefined8 param_5,
                 long param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = *(long *)(param_3 + 0x418);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar9 = *(undefined8 *)(param_6 + 0x30);
  uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x238) + 0x338);
  if (param_4 == 3) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x238) + (ulong)param_4 * 8 + 0x340);
  }
  uVar2 = FUN_0027d26c(param_1,param_3,param_4,uVar10);
  if ((uVar2 & 1) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3d0);
    uVar3 = FUN_0028d5c8(param_3 + 0x7a8,*(undefined4 *)(lVar6 + 0x38));
    FUN_00877a64(param_1,uVar1,uVar3,0x50,*(undefined8 *)(param_3 + 0x818));
    for (lVar11 = *(long *)(lVar6 + 0x18); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x68)) {
      if (0 < *(int *)(lVar11 + 0x78)) {
        FUN_00281860(param_1,uVar8,uVar9,param_3,uVar10,uVar7,lVar6,lVar11);
      }
    }
    iVar5 = *(int *)(param_3 + 0x230);
    if (0 < iVar5) {
      lVar11 = 0;
      lVar12 = 0x18;
      lVar4 = *(long *)(*(long *)(param_3 + 0xb0) + 0x18);
      if (lVar4 != 0) goto LAB_002817c0;
LAB_002817a4:
      lVar11 = lVar11 + 1;
      if (lVar11 < iVar5) {
        while( true ) {
          lVar12 = lVar12 + 0x20;
          lVar4 = *(long *)(*(long *)(param_3 + 0xb0) + lVar12);
          if (lVar4 == 0) break;
LAB_002817c0:
          if ((*(char *)(lVar4 + 0x90) == '\0') || (*(int *)(lVar4 + 0x78) < 1)) break;
          FUN_00281860(param_1,uVar8,uVar9,param_3,uVar10,uVar7,lVar6);
          iVar5 = *(int *)(param_3 + 0x230);
          lVar11 = lVar11 + 1;
          if (iVar5 <= lVar11) {
            return;
          }
        }
        goto LAB_002817a4;
      }
    }
  }
  return;
}


