/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161c998; name: FUN_0161c998
 */


ulong FUN_0161c998(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar6 = (uint)param_3;
  if (param_2 == -0x4aed51323ed38e9d) {
    uVar3 = FUN_02c5be48(*(undefined8 *)(param_1 + 0xb0));
  }
  else if (param_2 < 0x2731e1ecceab56b4) {
    if (0x16009bd33e533605 < param_2) {
      if (param_2 != 0x16009bd33e533606) {
        return 0;
      }
      uVar5 = FUN_02c5d92c(*(undefined8 *)(param_1 + 0xb0),7);
      bVar1 = (uVar5 & 0xffffffff) == param_3;
      goto LAB_0161c9d4;
    }
    if (param_2 == -0x5505376a78379747) {
      cVar2 = FUN_02c5be58(*(undefined8 *)(param_1 + 0xb0));
      if (cVar2 == '\0') {
        return 0;
      }
      uVar3 = 0;
      do {
        FUN_02c5bed0(*(undefined8 *)(param_1 + 0xb0),uVar3);
        uVar4 = FUN_02c8dc80();
        if ((uVar4 & 0xff) == (uVar6 & 0xff)) {
          return 1;
        }
        uVar3 = uVar3 + 1;
        uVar4 = FUN_02c5be58(*(undefined8 *)(param_1 + 0xb0));
      } while (uVar3 < (uVar4 & 0xff));
      return 0;
    }
    if (param_2 == -0x46d1a670bc32d187) {
      if (param_3 == 1) {
        uVar5 = FUN_02c628dc(*(undefined8 *)(param_1 + 0xb0));
        return uVar5;
      }
      return 1;
    }
    if (param_2 != -0x36027dfb6975bef8) {
      return 0;
    }
    uVar3 = FUN_02c624d0(*(undefined8 *)(param_1 + 0xb0));
  }
  else {
    if (param_2 != 0x68a3732777251727) {
      if (param_2 != 0x707151e61ea4b74d) {
        if (param_2 == 0x2731e1ecceab56b4) {
          uVar5 = FUN_02c60754(*(undefined8 *)(param_1 + 0xb0),param_3 & 0xffffffff);
          return uVar5;
        }
        return 0;
      }
      uVar3 = FUN_02c63ba8(*(undefined8 *)(param_1 + 0xb0));
      if ((uVar3 & 0xff) == (uVar6 & 0xff)) {
        return 1;
      }
      uVar3 = FUN_02c63ce0(*(undefined8 *)(param_1 + 0xb0));
      if ((uVar3 & 0xff) == (uVar6 & 0xff)) {
        return 1;
      }
      return 0;
    }
    uVar3 = FUN_02c624c8(*(undefined8 *)(param_1 + 0xb0));
  }
  bVar1 = uVar3 == uVar6;
LAB_0161c9d4:
  return (ulong)bVar1;
}


