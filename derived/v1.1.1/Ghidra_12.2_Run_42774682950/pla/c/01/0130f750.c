/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130f750; name: FUN_0130f750
 */


void FUN_0130f750(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  iVar1 = *(int *)(*(long *)(param_1 + 0x5c0) + 0x84);
  if (iVar1 - 5U < 2) {
    lVar7 = 0;
    do {
      lVar3 = param_1 + lVar7;
      lVar7 = lVar7 + 0x10;
      lVar4 = *(long *)(lVar3 + 0xd80);
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      lVar3 = *(long *)(lVar3 + 0xd88);
      *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
    } while (lVar7 != 0x800);
    *(byte *)(*(long *)(param_1 + 0x1580) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1580) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1588) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1588) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1590) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1590) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1598) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1598) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15a0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15a0) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15a8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15a8) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15b0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15b0) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15b8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15b8) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15c0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15c0) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15c8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15c8) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15d0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15d0) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15d8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15d8) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15e0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15e0) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15e8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15e8) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15f0) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15f0) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x15f8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x15f8) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1600) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1600) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1608) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1608) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1610) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1610) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1618) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1618) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1620) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1620) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1628) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1628) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1630) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1630) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1638) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1638) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1640) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1640) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1648) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1648) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1650) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1650) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1658) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1658) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1660) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1660) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1668) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1668) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1670) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1670) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1678) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1678) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1680) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1680) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1688) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1688) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1690) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1690) + 0x58) & 0xfe;
    *(byte *)(*(long *)(param_1 + 0x1698) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0x1698) + 0x58) & 0xfe;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x5c0) + 0x78);
    uVar5 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x1580 + uVar5 * 8);
      bVar2 = FUN_0131b970(uVar6,iVar1,uVar5 & 0xffffffff);
      uVar5 = uVar5 + 1;
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | ~bVar2 & 1;
    } while (uVar5 != 0x24);
  }
  return;
}


