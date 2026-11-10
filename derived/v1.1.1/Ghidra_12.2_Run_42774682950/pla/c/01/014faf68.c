/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014faf68; name: FUN_014faf68
 */


void FUN_014faf68(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x630) + 0xb0);
  if (lVar8 != 0) {
    *(long *)(*(long *)(param_1 + 0x630) + 0xb0) = lVar8 - ((lVar8 << 3) >> 3);
  }
  uVar2 = FUN_02c5be48(*(undefined8 *)(param_1 + 0x5b8));
  uVar3 = FUN_02c5be50(*(undefined8 *)(param_1 + 0x5b8));
  uVar4 = FUN_02c5fb2c(*(undefined8 *)(param_1 + 0x5b8));
  lVar8 = *(long *)(param_1 + 0x5b0);
  uVar9 = (ulong)*(uint *)(lVar8 + 0xc60);
  if (*(uint *)(lVar8 + 0xc60) != 0) {
    uVar11 = 0;
    lVar12 = 100;
    do {
      if ((((uVar11 < uVar9) && (*(int *)(lVar8 + lVar12) != 0)) &&
          (uVar9 = FUN_02c76514(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),
                                *(int *)(lVar8 + lVar12) + -1), (uVar9 & 1) != 0)) &&
         (iVar5 = FUN_015102f4(*(undefined8 *)(param_1 + 0x5b0),uVar11 & 0xffffffff), iVar5 != 0)) {
        FUN_014fb18c(param_1,iVar5);
      }
      lVar8 = *(long *)(param_1 + 0x5b0);
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0xc;
      uVar9 = (ulong)*(uint *)(lVar8 + 0xc60);
    } while (uVar11 < uVar9);
  }
  cVar1 = FUN_02c525c0(uVar2,uVar3);
  if (cVar1 != '\0') {
    uVar10 = 0;
    do {
      iVar5 = FUN_02c526e0(uVar2,uVar3,uVar10);
      if ((iVar5 != 2) || (uVar6 = FUN_02c52660(uVar2,uVar3,uVar10), (uVar6 & 0xffff) <= uVar4)) {
        uVar7 = FUN_02c526a0(uVar2,uVar3,uVar10);
        FUN_014fb18c(param_1,uVar7);
      }
      uVar10 = uVar10 + 1;
      uVar6 = FUN_02c525c0(uVar2,uVar3);
    } while (uVar10 < (uVar6 & 0xff));
  }
  iVar5 = FUN_01091670(uVar2,uVar3);
  if (iVar5 != 0) {
    FUN_014fb18c(param_1,iVar5);
  }
  iVar5 = FUN_02c61b14(*(undefined8 *)(param_1 + 0x5b8));
  if (iVar5 != 0) {
    FUN_014fb18c(param_1,iVar5);
  }
  iVar5 = FUN_02c6085c(*(undefined8 *)(param_1 + 0x5b8),0);
  if (iVar5 != 0) {
    FUN_014fb18c(param_1,iVar5);
  }
  iVar5 = FUN_02c6085c(*(undefined8 *)(param_1 + 0x5b8),1);
  if (iVar5 != 0) {
    FUN_014fb18c(param_1,iVar5);
  }
  iVar5 = FUN_02c6085c(*(undefined8 *)(param_1 + 0x5b8),2);
  if (iVar5 != 0) {
    FUN_014fb18c(param_1,iVar5);
  }
  iVar5 = FUN_02c6085c(*(undefined8 *)(param_1 + 0x5b8),3);
  if (iVar5 == 0) {
    return;
  }
  FUN_014fb18c(param_1,iVar5);
  return;
}


