/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082f454; name: FUN_0082f454
 */


ulong FUN_0082f454(long param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  
  uVar7 = (ulong)(byte)*PTR_DAT_04377cd0;
  bVar10 = PTR_DAT_04377cd0[1];
  lVar5 = *(long *)(param_1 + 0x10);
  if ((ulong)*(byte *)(param_1 + 3) != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    uVar11 = 0;
    uVar6 = param_2 & 0xff;
    uVar1 = *(uint *)(lVar8 + 0x10);
    lVar3 = lVar8;
    do {
      if ((uVar1 != 0) && (uVar1 < *(byte *)(param_1 + 2))) {
        lVar9 = lVar8 + uVar11 * 0x18;
        lVar4 = *(long *)(lVar9 + 8);
        if (lVar4 == lVar3) {
LAB_0082f518:
          uVar7 = uVar11;
          if (((uint)*(byte *)(lVar5 + 3) <= ((uint)uVar11 & 0xff)) ||
             (*(byte *)(lVar5 + 2) <= uVar1)) {
            bVar10 = 0xff;
            goto LAB_0082f5bc;
          }
          lVar8 = lVar8 + (uVar11 & 0xffffffff) * 0x18;
          lVar4 = *(long *)(lVar8 + 8);
          lVar8 = (long)*(int *)(lVar8 + 0x14);
          if (lVar4 == lVar3) {
            bVar10 = 0;
            goto LAB_0082f654;
          }
          bVar10 = 0;
          lVar4 = lVar4 - lVar8;
          goto LAB_0082f55c;
        }
        lVar9 = (long)*(int *)(lVar9 + 0x14);
        lVar4 = lVar4 - lVar9;
        while ((*(int *)(*(long *)(*(long *)(param_1 + 0x18) + uVar6 * 8) +
                        (ulong)*(byte *)(lVar4 + 0x1c) * 4) == 1 &&
               (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)*(byte *)(lVar4 + 0x1c) * 8) +
                        uVar6 * 4) == 1))) {
          lVar4 = *(long *)(lVar4 + lVar9 + 8) - lVar9;
          if (lVar4 == lVar3 - lVar9) goto LAB_0082f518;
        }
      }
      uVar11 = uVar11 + 1;
      if (*(byte *)(param_1 + 3) <= uVar11) break;
      lVar3 = lVar8 + uVar11 * 0x18;
      uVar1 = *(uint *)(lVar3 + 0x10);
    } while( true );
  }
  bVar2 = *(byte *)(lVar5 + 3);
  if ((ulong)bVar2 != 0) {
    lVar3 = *(long *)(lVar5 + 0x10);
    uVar11 = 0;
    do {
      if (*(int *)(lVar3 + 0x10) == 0) {
        if (((uint)uVar11 & 0xff) != 0xfd) {
          if (((uint)bVar2 <= ((uint)uVar11 & 0xff)) ||
             ((uint)*(byte *)(lVar5 + 2) <= *(uint *)(lVar3 + 0x10))) {
            bVar10 = 0xff;
            goto LAB_0082f6b4;
          }
          lVar8 = (long)*(int *)(lVar3 + 0x14);
          if (*(long *)(lVar3 + 8) == lVar3) {
            bVar10 = 0;
            goto LAB_0082f688;
          }
          bVar10 = 0;
          lVar4 = *(long *)(lVar3 + 8) - lVar8;
          goto LAB_0082f61c;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      lVar3 = lVar3 + 0x18;
    } while (bVar2 != uVar11);
  }
  goto LAB_0082f5bc;
  while( true ) {
    lVar4 = *(long *)(lVar4 + lVar8 + 8) - lVar8;
    bVar10 = bVar10 + 1;
    if (lVar4 == lVar3 - lVar8) break;
LAB_0082f55c:
    if (bVar10 < *(byte *)(*(long *)(lVar4 + 0x10) + 0x91)) {
      FUN_007e8fa0(lVar3,lVar4 + lVar8,*(long *)(lVar5 + 8) + uVar6 * 0x20 + lVar8);
      goto LAB_0082f5bc;
    }
  }
LAB_0082f654:
  FUN_007e8fa0(lVar3,lVar3,*(long *)(lVar5 + 8) + uVar6 * 0x20 + lVar8);
  goto LAB_0082f5bc;
  while( true ) {
    lVar4 = *(long *)(lVar4 + lVar8 + 8) - lVar8;
    bVar10 = bVar10 + 1;
    if (lVar4 == lVar3 - lVar8) break;
LAB_0082f61c:
    if (bVar10 < *(byte *)(*(long *)(lVar4 + 0x10) + 0x91)) {
      lVar4 = lVar4 + lVar8;
      lVar5 = *(long *)(lVar5 + 8) + (param_2 & 0xff) * 0x20;
      goto LAB_0082f6ac;
    }
  }
LAB_0082f688:
  lVar5 = *(long *)(lVar5 + 8) + (param_2 & 0xff) * 0x20;
  lVar4 = lVar3;
LAB_0082f6ac:
  FUN_007e8fa0(lVar3,lVar4,lVar5 + lVar8);
LAB_0082f6b4:
  uVar7 = uVar11 & 0xffffffff;
LAB_0082f5bc:
  return uVar7 & 0xff | (ulong)bVar10 << 8;
}


