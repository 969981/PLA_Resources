/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d557c8; name: FUN_00d557c8
 */


undefined8 FUN_00d557c8(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  iVar1 = *(int *)(param_1 + 0x6d8);
  lVar13 = (long)iVar1;
  if (iVar1 == 2) {
    iVar1 = 0;
  }
  lVar6 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  uVar9 = *(uint *)(*(long *)(lVar6 + 0x8b0) + 0x14);
  lVar11 = (long)*(int *)(param_1 + 0x6d8);
  uVar2 = *(uint *)(param_1 + 0x618 + lVar13 * 0x60 + 0x28);
  iVar1 = *(int *)(param_1 + 0x618 + lVar11 * 0x60 + 0x28);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = uVar9 / uVar2;
  }
  bVar3 = *(byte *)(param_1 + 0x6ee);
  uVar8 = (uint)bVar3;
  if ((int)((uVar9 - uVar5 * uVar2) + uVar8) <= iVar1) {
    bVar4 = *(byte *)(param_1 + 0x6ef);
    if ((int)(uVar5 + bVar4) <= *(int *)(param_1 + lVar11 * 0x60 + 0x644)) {
      if (bVar4 == 0) {
LAB_00d55910:
        uVar7 = FUN_00d56844(param_1);
        return uVar7;
      }
      iVar10 = uVar9 + iVar1 * *(int *)(*(long *)(lVar6 + 0x8b0) + 0x10);
      uVar9 = 0;
      if (uVar8 != 0) goto LAB_00d558b4;
      do {
        uVar8 = 0;
        while( true ) {
          uVar9 = uVar9 + 1;
          iVar10 = iVar10 + iVar1;
          if (uVar9 == bVar4) goto LAB_00d55910;
          if (uVar8 == 0) break;
LAB_00d558b4:
          uVar12 = 0;
          do {
            if ((1 < *(uint *)(param_1 + (ulong)((int)uVar12 + uVar9 * uVar8) * 0x50 + 0x708)) &&
               (1 < *(uint *)(*(long *)(*(long *)(*(long *)(param_1 + lVar11 * 0x60 + 0x638) + 0xa8)
                                       + (ulong)(uint)(iVar10 + (int)uVar12) * 0x10) + 8))) {
              return 0;
            }
            uVar12 = uVar12 + 1;
            uVar8 = (uint)bVar3;
          } while (uVar12 < bVar3);
        }
      } while( true );
    }
  }
  return 0;
}


