/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293aa84; name: FUN_0293aa84
 */


undefined8 FUN_0293aa84(long param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  double dVar11;
  double dVar12;
  
  if (param_2 < 6) {
    uVar8 = 0;
  }
  else {
    uVar6 = 3;
    if (0x17 < param_2) {
      uVar6 = (uint)(param_2 < 0x1e) << 2;
    }
    uVar1 = 1;
    if (0x11 < param_2) {
      uVar1 = uVar6;
    }
    uVar6 = 2;
    if (0xb < param_2) {
      uVar6 = uVar1;
    }
    uVar8 = (ulong)uVar6;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  pbVar10 = (byte *)(lVar9 + uVar8 * 0x38 + 0x38);
  bVar2 = *pbVar10;
  bVar5 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x55),uVar8);
  if (bVar2 <= bVar5) {
    return 0;
  }
  bVar3 = *pbVar10;
  uVar6 = (uint)bVar5;
  if (uVar6 < bVar3) goto LAB_0293ab4c;
  do {
    lVar7 = 0;
    uVar4 = uRam0000000000000074;
    while( true ) {
      if (uVar4 != 0) {
        dVar12 = (double)NEON_ucvtf((ulong)*(ushort *)(lVar7 + 0x72));
        dVar12 = (double)((uint)uVar4 * 100) / dVar12;
        dVar11 = 0.5;
        if (dVar12 <= 0.0) {
          dVar11 = -0.5;
        }
        if ((int)(dVar12 * 4096.0 + dVar11) < 0x64000) {
          return 1;
        }
      }
      uVar6 = uVar6 + 1;
      if (bVar2 == uVar6) {
        return 0;
      }
      if ((uint)bVar3 <= (uVar6 & 0xff)) break;
LAB_0293ab4c:
      lVar7 = *(long *)(lVar9 + uVar8 * 0x38 + (ulong)(uVar6 & 0xff) * 8 + 8);
      uVar4 = *(ushort *)(lVar7 + 0x74);
    }
  } while( true );
}


