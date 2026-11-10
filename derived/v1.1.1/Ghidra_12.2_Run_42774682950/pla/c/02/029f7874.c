/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f7874; name: FUN_029f7874
 */


void FUN_029f7874(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ushort local_5c [6];
  
  lVar12 = *param_3;
  uVar19 = (ulong)*(byte *)(lVar12 + 0x5a);
  if (uVar19 == 0) {
    return;
  }
  lVar20 = 0;
  if (*(byte *)(lVar12 + 0x5a) == 0) goto LAB_029f78c4;
  do {
    lVar12 = *(long *)(lVar12 + lVar20 * 8);
    while( true ) {
      uVar8 = FUN_0296eaa8(*(undefined8 *)(param_1 + 0x38));
      uVar8 = FUN_0296ed7c(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar12 + 0x7d),uVar8);
      uVar7 = FUN_02977520(*(undefined8 *)(param_1 + 0x38),lVar12,1,uVar8);
      local_5c[lVar20] = uVar7;
      if (uVar19 - 1 == lVar20) {
        uVar13 = 1;
        uVar14 = 0;
        goto LAB_029f793c;
      }
      lVar12 = *param_3;
      lVar20 = lVar20 + 1;
      if ((uint)lVar20 < (uint)*(byte *)(lVar12 + 0x5a)) break;
LAB_029f78c4:
      lVar12 = 0;
    }
  } while( true );
LAB_029f793c:
  uVar1 = uVar14 + 1;
  if (uVar1 < uVar19) {
    uVar15 = uVar13;
    do {
      lVar12 = DAT_043ecde0;
      uVar7 = local_5c[uVar14];
      uVar4 = local_5c[uVar15];
      if (uVar7 < uVar4) {
LAB_029f7974:
        if ((uVar14 < 6) && (((uint)uVar15 & 0xff) < 6)) {
          lVar16 = *param_3;
          lVar9 = (uVar15 & 0xff) * 8;
          lVar10 = uVar14 * 2;
          lVar12 = lVar16 + 0x30;
          lVar20 = lVar16 + 0x4e;
          uVar11 = *(undefined8 *)(lVar16 + uVar14 * 8);
          uVar5 = *(undefined2 *)(lVar12 + lVar10);
          uVar6 = *(undefined2 *)(lVar20 + lVar10);
          *(undefined8 *)(lVar16 + uVar14 * 8) = *(undefined8 *)(lVar16 + lVar9);
          lVar17 = (uVar15 & 0xff) * 2;
          *(undefined2 *)(lVar12 + lVar10) = *(undefined2 *)(lVar12 + lVar17);
          *(undefined2 *)(lVar20 + lVar10) = *(undefined2 *)(lVar20 + lVar17);
          *(undefined8 *)(lVar16 + lVar9) = uVar11;
          *(undefined2 *)(lVar12 + lVar17) = uVar5;
          *(undefined2 *)(lVar20 + lVar17) = uVar6;
        }
        local_5c[uVar14] = uVar4;
        local_5c[uVar15] = uVar7;
      }
      else if (uVar7 == uVar4) {
        uVar2 = *(ulong *)(DAT_043ecde0 + 8);
        uVar3 = *(ulong *)(DAT_043ecde0 + 0x10);
        uVar18 = uVar3 ^ uVar2;
        *(ulong *)(DAT_043ecde0 + 8) = uVar18 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar18 << 0x10;
        *(ulong *)(lVar12 + 0x10) = uVar18 >> 0x1b | uVar18 << 0x25;
        if (((int)uVar3 + (int)uVar2 & 1U) != 0) goto LAB_029f7974;
      }
      uVar15 = uVar15 + 1;
    } while (uVar19 != uVar15);
  }
  uVar13 = uVar13 + 1;
  uVar14 = uVar1;
  if (uVar1 == uVar19) {
    return;
  }
  goto LAB_029f793c;
}


