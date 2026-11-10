/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a864; name: FUN_0293a864
 */


int FUN_0293a864(long param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 < 6) {
    uVar6 = 0;
  }
  else {
    uVar7 = 3;
    if (0x17 < param_2) {
      uVar7 = (uint)(param_2 < 0x1e) << 2;
    }
    uVar4 = 1;
    if (0x11 < param_2) {
      uVar4 = uVar7;
    }
    uVar7 = 2;
    if (0xb < param_2) {
      uVar7 = uVar4;
    }
    uVar6 = (ulong)uVar7;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  bVar2 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x55),uVar6);
  bVar1 = *(byte *)(lVar8 + uVar6 * 0x38 + 0x38);
  if (bVar2 < bVar1) {
    iVar5 = 0;
    uVar7 = (uint)bVar2;
    do {
      lVar9 = *(long *)(lVar8 + uVar6 * 0x38 + (ulong)(uVar7 & 0xff) * 8 + 8);
      lVar10 = *(long *)(lVar9 + 0x60);
      uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar10 + 0x98));
      uVar4 = 0;
      if (((uVar3 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar10 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
        uVar4 = (uint)(*(short *)(lVar9 + 0x74) != 0);
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + uVar4;
    } while (bVar1 != uVar7);
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}


