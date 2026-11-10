/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009470dc; name: FUN_009470dc
 */


undefined8 FUN_009470dc(long param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x98);
  pcVar3 = *(code **)(lVar6 + 0xa0);
  uVar2 = *(ulong *)(lVar6 + 0xa8);
  uVar4 = uVar2 & 1;
  if (pcVar3 == (code *)0x0 && (uVar2 == 0 || uVar4 == 0 && pcVar3 == (code *)0x0)) {
    if (((*(byte *)(lVar6 + 0x13a) & 1) != 0) && (*(long *)(lVar6 + 0x58) != 0)) {
      *(undefined4 *)(*(long *)(lVar6 + 0x58) + 0x10d4) = 6;
    }
  }
  else {
    if (pcVar3 != (code *)0x0 || uVar2 != 0 && (uVar4 != 0 || pcVar3 != (code *)0x0)) {
      if (uVar4 != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)(lVar6 + ((long)uVar2 >> 1)));
      }
      uVar2 = (*pcVar3)();
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x158) + 0x68) + 0x10) +
                    0x54) == 4) {
          return 1;
        }
        FUN_0095ec68(*(undefined8 *)(*(long *)(param_1 + 8) + 0x20));
        FUN_008bc7a0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd8));
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x108);
        do {
          iVar1 = FUN_0092b6c4(uVar5);
        } while (iVar1 == 1);
        return 0;
      }
    }
    FUN_02944350(lVar6);
  }
  return 1;
}


