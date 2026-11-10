/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294d544; name: FUN_0294d544
 */


void FUN_0294d544(long param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte *pbVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  
  param_2 = param_2 & 0xff;
  pbVar6 = (byte *)(param_1 + param_2 * 0x38 + 0x38);
  bVar5 = *pbVar6;
  if ((bVar5 == 0) || (bVar5 == 1)) {
    return;
  }
  uVar4 = (ulong)(byte)(bVar5 - 1);
  cVar7 = bVar5 - 1;
  if (bVar5 <= uVar4) goto LAB_0294d5a4;
  do {
    lVar8 = *(long *)(param_1 + param_2 * 0x38 + 8 + uVar4 * 8);
    while( true ) {
      lVar9 = *(long *)(lVar8 + 0x60);
      uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar9 + 0x98));
      if ((((uVar3 & 1) == 0) &&
          ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
         (*(short *)(lVar8 + 0x74) != 0)) {
        if ((uVar4 & 0xff) == 0) {
          return;
        }
        bVar5 = 0;
        cVar7 = (&DAT_03a7eb48)[param_2];
        do {
          bVar1 = 0;
          if (bVar5 < 6) {
            bVar1 = bVar5;
          }
          FUN_029506a8(*(undefined8 *)(param_1 + (ulong)(byte)(bVar1 + cVar7) * 8 + 0x120),0x11);
          bVar5 = bVar5 + 1;
          uVar2 = (int)uVar4 - 1;
          uVar4 = (ulong)uVar2;
        } while (uVar2 != 0);
        return;
      }
      if (cVar7 == '\x01') {
        return;
      }
      uVar4 = uVar4 - 1;
      cVar7 = cVar7 + -1;
      if (uVar4 < *pbVar6) break;
LAB_0294d5a4:
      lVar8 = 0;
    }
  } while( true );
}


