/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293abc0; name: FUN_0293abc0
 */


undefined8 FUN_0293abc0(long param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  
  if (param_2 < 6) {
    uVar9 = 0;
  }
  else {
    uVar5 = 3;
    if (0x17 < param_2) {
      uVar5 = (uint)(param_2 < 0x1e) << 2;
    }
    uVar6 = 1;
    if (0x11 < param_2) {
      uVar6 = uVar5;
    }
    uVar5 = 2;
    if (0xb < param_2) {
      uVar5 = uVar6;
    }
    uVar9 = (ulong)uVar5;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  pbVar11 = (byte *)(lVar10 + uVar9 * 0x38 + 0x38);
  bVar1 = *pbVar11;
  bVar4 = FUN_0294da60(*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x110),
                       *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x58) + 0x58) + 0x55),uVar9);
  if (bVar1 <= bVar4) {
    return 0;
  }
  bVar2 = *pbVar11;
  uVar5 = (uint)bVar4;
  if (uVar5 < bVar2) goto LAB_0293ac78;
  do {
    lVar8 = 0;
    sVar3 = sRam0000000000000074;
    while( true ) {
      if ((sVar3 != 0) && (uVar6 = (uint)*(byte *)(lVar8 + 0x368), *(byte *)(lVar8 + 0x368) != 0)) {
        pcVar7 = (char *)(lVar8 + 0x305);
        do {
          if (*pcVar7 != pcVar7[-1]) {
            return 1;
          }
          pcVar7 = pcVar7 + 0x1c;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar5 = uVar5 + 1;
      if (uVar5 == bVar1) {
        return 0;
      }
      if ((uint)bVar2 <= (uVar5 & 0xff)) break;
LAB_0293ac78:
      lVar8 = *(long *)(lVar10 + uVar9 * 0x38 + (ulong)(uVar5 & 0xff) * 8 + 8);
      sVar3 = *(short *)(lVar8 + 0x74);
    }
  } while( true );
}


