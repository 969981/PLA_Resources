/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329fea0; name: FUN_0329fea0
 */


void FUN_0329fea0(long param_1,int param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  do {
    uVar2 = *(ushort *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x30 + 0x10);
    iVar12 = param_2;
    iVar6 = param_3;
    do {
      lVar8 = (long)iVar12 * 0x30;
      do {
        iVar5 = iVar12;
        lVar9 = param_1 + lVar8;
        lVar8 = lVar8 + 0x30;
        iVar12 = iVar5 + 1;
      } while (*(ushort *)(lVar9 + 0x10) < uVar2);
      lVar9 = (long)iVar6 * 0x30;
      lVar8 = param_1 + lVar8;
      iVar6 = iVar6 + 1;
      do {
        iVar7 = iVar6;
        lVar1 = param_1 + lVar9;
        lVar9 = lVar9 + -0x30;
        uVar3 = *(ushort *)(lVar1 + 0x10);
        iVar6 = iVar7 + -1;
      } while (uVar2 < uVar3);
      iVar12 = iVar5;
      if (iVar5 <= iVar6) {
        if (iVar5 != iVar6) {
          lVar9 = param_1 + lVar9;
          uVar10 = *(undefined8 *)(lVar9 + 0x38);
          uVar11 = *(undefined8 *)(lVar9 + 0x30);
          uVar15 = *(undefined8 *)(lVar9 + 0x58);
          uVar14 = *(undefined8 *)(lVar9 + 0x50);
          uVar13 = *(undefined8 *)(lVar8 + -0x28);
          *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar8 + -0x30);
          *(undefined8 *)(lVar9 + 0x38) = uVar13;
          *(undefined2 *)(lVar9 + 0x40) = *(undefined2 *)(lVar8 + -0x20);
          uVar4 = *(undefined2 *)(lVar9 + 0x42);
          *(undefined2 *)(lVar9 + 0x42) = *(undefined2 *)(lVar8 + -0x1e);
          uVar13 = *(undefined8 *)(lVar8 + -0x10);
          *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)(lVar8 + -8);
          *(undefined8 *)(lVar9 + 0x50) = uVar13;
          *(undefined8 *)(lVar8 + -0x28) = uVar10;
          *(ushort *)(lVar8 + -0x20) = uVar3;
          *(undefined8 *)(lVar8 + -0x30) = uVar11;
          *(undefined2 *)(lVar8 + -0x1e) = uVar4;
          *(undefined8 *)(lVar8 + -8) = uVar15;
          *(undefined8 *)(lVar8 + -0x10) = uVar14;
        }
        iVar6 = iVar7 + -2;
        iVar12 = iVar5 + 1;
      }
    } while (iVar12 <= iVar6);
    if (param_2 < iVar6) {
      FUN_0329fea0(param_1);
    }
    param_2 = iVar12;
  } while (iVar12 < param_3);
  return;
}


