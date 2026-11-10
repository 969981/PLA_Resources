/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01311460; name: FUN_01311460
 */


void FUN_01311460(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined1 local_508;
  
  if (*(int *)(*(long *)(param_1 + 0x5c0) + 0x84) != 7) {
    lVar2 = 0;
    do {
      lVar3 = param_1 + lVar2;
      lVar2 = lVar2 + 0x10;
      lVar5 = *(long *)(lVar3 + 0xd80);
      *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
      lVar3 = *(long *)(lVar3 + 0xd88);
      *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    } while (lVar2 != 0x800);
    *(byte *)(*(long *)(param_1 + 0x1580) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1580) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1588) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1588) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1590) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1590) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1598) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1598) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15a0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15a0) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15a8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15a8) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15b0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15b0) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15b8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15b8) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15c0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15c0) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15c8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15c8) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15d0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15d0) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15d8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15d8) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15e0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15e0) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15e8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15e8) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15f0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15f0) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x15f8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15f8) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1600) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1600) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1608) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1608) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1610) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1610) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1618) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1618) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1620) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1620) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1628) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1628) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1630) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1630) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1638) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1638) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1640) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1640) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1648) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1648) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1650) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1650) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1658) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1658) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1660) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1660) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1668) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1668) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1670) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1670) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1678) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1678) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1680) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1680) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1688) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1688) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1690) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1690) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x1698) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1698) + 0x58) | 1;
    FUN_0130f750(param_1);
    lVar2 = *(long *)(param_1 + 0x5c0);
    *(undefined4 *)(param_1 + 0x16b0) = *(undefined4 *)(lVar2 + 0x1b0);
    *(undefined1 *)(param_1 + 0x16b4) = *(undefined1 *)(lVar2 + 0x1b4);
    *(undefined4 *)(param_1 + 0x16b8) = *(undefined4 *)(lVar2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x16f0) = *(undefined4 *)(lVar2 + 0x1f0);
    *(undefined4 *)(param_1 + 0x16a0) = *(undefined4 *)(lVar2 + 0x340);
    *(undefined4 *)(param_1 + 0x16a4) = *(undefined4 *)(lVar2 + 0x344);
    *(undefined4 *)(param_1 + 0x16a8) = *(undefined4 *)(lVar2 + 0x348);
    *(undefined4 *)(param_1 + 0x16ac) = *(undefined4 *)(lVar2 + 0x34c);
    *(undefined8 *)(param_1 + 0x16c8) = *(undefined8 *)(lVar2 + 0x1c8);
    *(undefined8 *)(param_1 + 0x16c0) = *(undefined8 *)(lVar2 + 0x1c0);
    *(undefined8 *)(param_1 + 0x16d8) = *(undefined8 *)(lVar2 + 0x1d8);
    *(undefined8 *)(param_1 + 0x16d0) = *(undefined8 *)(lVar2 + 0x1d0);
    *(undefined8 *)(param_1 + 0x16e8) = *(undefined8 *)(lVar2 + 0x1e8);
    *(undefined8 *)(param_1 + 0x16e0) = *(undefined8 *)(lVar2 + 0x1e0);
    *(undefined8 *)(param_1 + 0x1708) = *(undefined8 *)(lVar2 + 0x208);
    *(undefined8 *)(param_1 + 0x1700) = *(undefined8 *)(lVar2 + 0x200);
    uVar4 = *(undefined8 *)(lVar2 + 0x218);
    *(undefined8 *)(param_1 + 0x1710) = *(undefined8 *)(lVar2 + 0x210);
    *(undefined8 *)(param_1 + 0x1718) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x220);
    *(undefined8 *)(param_1 + 0x1728) = *(undefined8 *)(lVar2 + 0x228);
    *(undefined8 *)(param_1 + 0x1720) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x230);
    *(undefined8 *)(param_1 + 0x1738) = *(undefined8 *)(lVar2 + 0x238);
    *(undefined8 *)(param_1 + 0x1730) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x240);
    *(undefined8 *)(param_1 + 0x1748) = *(undefined8 *)(lVar2 + 0x248);
    *(undefined8 *)(param_1 + 0x1740) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x250);
    *(undefined8 *)(param_1 + 0x1758) = *(undefined8 *)(lVar2 + 600);
    *(undefined8 *)(param_1 + 0x1750) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x260);
    *(undefined8 *)(param_1 + 0x1768) = *(undefined8 *)(lVar2 + 0x268);
    *(undefined8 *)(param_1 + 0x1760) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x270);
    *(undefined8 *)(param_1 + 0x1778) = *(undefined8 *)(lVar2 + 0x278);
    *(undefined8 *)(param_1 + 6000) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x280);
    *(undefined8 *)(param_1 + 0x1788) = *(undefined8 *)(lVar2 + 0x288);
    *(undefined8 *)(param_1 + 0x1780) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x290);
    *(undefined8 *)(param_1 + 0x1798) = *(undefined8 *)(lVar2 + 0x298);
    *(undefined8 *)(param_1 + 0x1790) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x2a0);
    *(undefined8 *)(param_1 + 0x17a8) = *(undefined8 *)(lVar2 + 0x2a8);
    *(undefined8 *)(param_1 + 0x17a0) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x2b0);
    *(undefined8 *)(param_1 + 0x17b8) = *(undefined8 *)(lVar2 + 0x2b8);
    *(undefined8 *)(param_1 + 0x17b0) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x2c0);
    *(undefined8 *)(param_1 + 0x17c8) = *(undefined8 *)(lVar2 + 0x2c8);
    *(undefined8 *)(param_1 + 0x17c0) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x2d0);
    *(undefined8 *)(param_1 + 0x17d8) = *(undefined8 *)(lVar2 + 0x2d8);
    *(undefined8 *)(param_1 + 0x17d0) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x2e0);
    *(undefined8 *)(param_1 + 0x17e8) = *(undefined8 *)(lVar2 + 0x2e8);
    *(undefined8 *)(param_1 + 0x17e0) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x2f0);
    *(undefined8 *)(param_1 + 0x17f8) = *(undefined8 *)(lVar2 + 0x2f8);
    *(undefined8 *)(param_1 + 0x17f0) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x300);
    *(undefined8 *)(param_1 + 0x1808) = *(undefined8 *)(lVar2 + 0x308);
    *(undefined8 *)(param_1 + 0x1800) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x310);
    *(undefined8 *)(param_1 + 0x1818) = *(undefined8 *)(lVar2 + 0x318);
    *(undefined8 *)(param_1 + 0x1810) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 800);
    *(undefined8 *)(param_1 + 0x1828) = *(undefined8 *)(lVar2 + 0x328);
    *(undefined8 *)(param_1 + 0x1820) = uVar4;
    uVar4 = *(undefined8 *)(lVar2 + 0x330);
    *(undefined8 *)(param_1 + 0x1838) = *(undefined8 *)(lVar2 + 0x338);
    *(undefined8 *)(param_1 + 0x1830) = uVar4;
    FUN_0131ddc4(&local_540);
    *(undefined8 *)(param_1 + 0x1848) = local_538;
    *(undefined8 *)(param_1 + 0x1858) = local_528;
    *(undefined8 *)(param_1 + 0x1840) = local_540;
    *(undefined8 *)(param_1 + 0x1860) = local_520;
    *(undefined8 *)(param_1 + 0x1850) = local_530;
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x5c0) + 0x84);
    FUN_0131e4d0(&local_540,uVar1);
    *(undefined1 *)(param_1 + 0x18a8) = local_508;
    *(undefined8 *)(param_1 + 0x1898) = local_518;
    *(undefined8 *)(param_1 + 0x1878) = local_538;
    *(undefined8 *)(param_1 + 0x1888) = local_528;
    *(undefined8 *)(param_1 + 0x18a0) = uStack_510;
    *(undefined8 *)(param_1 + 0x1880) = local_530;
    *(undefined8 *)(param_1 + 0x1870) = local_540;
    *(undefined8 *)(param_1 + 0x1890) = local_520;
    FUN_0131e6e0(&local_540,uVar1);
    memcpy((void *)(param_1 + 0x18b0),&local_540,0x501);
    FUN_0130648c(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x198));
    FUN_01306f1c(*(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x1a0),
                 *(undefined4 *)(*(long *)(param_1 + 0x5c0) + 0x84),
                 *(undefined8 *)(param_1 + 0x1dc0));
    FUN_013134e0(param_1);
    if (*(code **)(param_1 + 0x850) != (code *)0x0) {
      (**(code **)(param_1 + 0x850))(param_1 + 0x870);
    }
    FUN_01317788(param_1,0);
    *(undefined8 *)(param_1 + 0xd74) = 0;
    *(undefined4 *)(param_1 + 0xd7c) = 0;
    *(undefined1 *)(param_1 + 0xd5c) = 0;
  }
  return;
}


