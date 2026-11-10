/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c4870; name: FUN_032c4870
 */


int FUN_032c4870(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  while( true ) {
    bVar3 = *param_1;
    bVar4 = *param_2;
    if (bVar3 == 0) {
      return -(uint)(bVar4 != 0);
    }
    if (bVar4 == 0) break;
    uVar5 = (uint)bVar4;
    uVar1 = bVar3 + 0x20;
    if (0x19 < bVar3 - 0x41) {
      uVar1 = (uint)bVar3;
    }
    uVar2 = uVar5 + 0x20;
    if (0x19 < uVar5 - 0x41) {
      uVar2 = uVar5;
    }
    if ((uVar1 & 0xff) < (uVar2 & 0xff)) {
      return -1;
    }
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    if ((uVar2 & 0xff) < (uVar1 & 0xff)) {
      return 1;
    }
  }
  return 1;
}


