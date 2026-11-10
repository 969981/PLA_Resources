/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01224510; name: FUN_01224510
 */


bool FUN_01224510(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = FUN_0121fbdc();
  iVar2 = FUN_02c6849c(*(undefined8 *)(lVar5 + 0x98));
  bVar1 = true;
  if (((0xd < iVar2 - 0x1e0U) &&
      (4 < iVar2 - 0x281U || (1 << (ulong)(iVar2 - 0x281U & 0x1f) & 0x13U) == 0)) &&
     (iVar2 != 0x389)) {
    uVar3 = FUN_02c68b0c(*(undefined8 *)(lVar5 + 0x98));
    uVar4 = FUN_02c70958(*(undefined8 *)(lVar5 + 0x98));
    bVar1 = (uVar3 & 0xfff0 ^ uVar3 >> 0x10 ^ uVar4 >> 0x10 ^ uVar4 & 0xfff0) < 0x10;
  }
  return bVar1;
}


