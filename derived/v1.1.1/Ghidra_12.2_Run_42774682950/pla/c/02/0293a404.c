/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293a404; name: FUN_0293a404
 */


/* WARNING: Removing unreachable block (ram,0x0293a438) */

bool FUN_0293a404(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x88) + 8) + (ulong)(param_2 & 0xff) * 8 + 0x120);
  bVar1 = *(byte *)(lVar2 + 0x368);
  if (bVar1 == 0) {
    uVar3 = 0;
    goto LAB_0293a494;
  }
  if (bVar1 == 1) {
    lVar4 = 0;
    uVar3 = 0;
LAB_0293a47c:
    if ((*(byte *)(lVar2 + lVar4 * 0x1c + 0x307) & 0xf) != 0) {
      uVar3 = uVar3 + 1;
    }
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)(lVar2 + 0x323);
    do {
      if ((pbVar5[-0x1c] & 0xf) != 0) {
        uVar3 = uVar3 + 1;
      }
      lVar4 = lVar4 + 2;
      if ((*pbVar5 & 0xf) != 0) {
        uVar3 = uVar3 + 1;
      }
      pbVar5 = pbVar5 + 0x38;
    } while ((ulong)bVar1 - ((ulong)bVar1 & 1) != lVar4);
    if ((bVar1 & 1) != 0) goto LAB_0293a47c;
  }
  uVar3 = uVar3 & 0xff;
LAB_0293a494:
  return 1 < bVar1 && bVar1 - 1 <= uVar3;
}


