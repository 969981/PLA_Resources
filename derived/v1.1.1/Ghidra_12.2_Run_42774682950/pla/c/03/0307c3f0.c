/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307c3f0; name: FUN_0307c3f0
 */


void FUN_0307c3f0(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  do {
    uVar7 = *(ulong *)(param_1 + (long)(param_2 + param_3 >> 1) * 0x60 + 8);
    iVar15 = param_2;
    iVar5 = param_3;
    do {
      lVar8 = (long)iVar15 * 0x60;
      do {
        iVar4 = iVar15;
        lVar9 = param_1 + lVar8;
        lVar8 = lVar8 + 0x60;
        iVar15 = iVar4 + 1;
      } while (*(ulong *)(lVar9 + 8) < uVar7);
      lVar9 = (long)iVar5 * 0x60;
      iVar5 = iVar5 + 1;
      do {
        iVar6 = iVar5;
        lVar1 = param_1 + lVar9;
        lVar9 = lVar9 + -0x60;
        iVar5 = iVar6 + -1;
      } while (uVar7 < *(ulong *)(lVar1 + 8));
      iVar15 = iVar4;
      if (iVar4 <= iVar5) {
        if (iVar4 != iVar5) {
          lVar9 = param_1 + lVar9;
          uVar13 = *(undefined8 *)(lVar9 + 0x78);
          uVar10 = *(undefined8 *)(lVar9 + 0x68);
          uVar11 = *(undefined8 *)(lVar9 + 0x60);
          uVar12 = *(undefined8 *)(lVar9 + 0x70);
          uVar14 = *(undefined8 *)(lVar9 + 0x80);
          lVar8 = param_1 + lVar8;
          uVar18 = *(undefined8 *)(lVar9 + 0x98);
          uVar17 = *(undefined8 *)(lVar9 + 0x90);
          uVar20 = *(undefined8 *)(lVar9 + 0xa8);
          uVar19 = *(undefined8 *)(lVar9 + 0xa0);
          *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)(lVar8 + -0x60);
          uVar16 = *(undefined8 *)(lVar8 + -0x58);
          uVar2 = *(undefined8 *)(lVar8 + -0x50);
          uVar3 = *(undefined8 *)(lVar8 + -0x40);
          uVar22 = *(undefined8 *)(lVar9 + 0xb8);
          uVar21 = *(undefined8 *)(lVar9 + 0xb0);
          *(undefined8 *)(lVar9 + 0x78) = *(undefined8 *)(lVar8 + -0x48);
          *(undefined8 *)(lVar9 + 0x80) = uVar3;
          *(undefined8 *)(lVar9 + 0x68) = uVar16;
          *(undefined8 *)(lVar9 + 0x70) = uVar2;
          uVar16 = *(undefined8 *)(lVar8 + -0x30);
          *(undefined8 *)(lVar9 + 0x98) = *(undefined8 *)(lVar8 + -0x28);
          *(undefined8 *)(lVar9 + 0x90) = uVar16;
          uVar16 = *(undefined8 *)(lVar8 + -0x20);
          *(undefined8 *)(lVar9 + 0xa8) = *(undefined8 *)(lVar8 + -0x18);
          *(undefined8 *)(lVar9 + 0xa0) = uVar16;
          uVar16 = *(undefined8 *)(lVar8 + -0x10);
          *(undefined8 *)(lVar9 + 0xb8) = *(undefined8 *)(lVar8 + -8);
          *(undefined8 *)(lVar9 + 0xb0) = uVar16;
          *(undefined8 *)(lVar8 + -0x48) = uVar13;
          *(undefined8 *)(lVar8 + -0x60) = uVar11;
          *(undefined8 *)(lVar8 + -0x58) = uVar10;
          *(undefined8 *)(lVar8 + -0x40) = uVar14;
          *(undefined8 *)(lVar8 + -0x28) = uVar18;
          *(undefined8 *)(lVar8 + -0x30) = uVar17;
          *(undefined8 *)(lVar8 + -0x18) = uVar20;
          *(undefined8 *)(lVar8 + -0x20) = uVar19;
          *(undefined8 *)(lVar8 + -0x50) = uVar12;
          *(undefined8 *)(lVar8 + -8) = uVar22;
          *(undefined8 *)(lVar8 + -0x10) = uVar21;
        }
        iVar5 = iVar6 + -2;
        iVar15 = iVar4 + 1;
      }
    } while (iVar15 <= iVar5);
    if (param_2 < iVar5) {
      FUN_0307c3f0(param_1);
    }
    param_2 = iVar15;
  } while (iVar15 < param_3);
  return;
}


