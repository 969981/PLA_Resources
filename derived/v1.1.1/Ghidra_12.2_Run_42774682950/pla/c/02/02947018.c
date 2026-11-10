/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02947018; name: FUN_02947018
 */


uint FUN_02947018(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x140);
  do {
    iVar1 = FUN_02a0a96c(uVar6);
  } while (iVar1 == 1);
  lVar5 = *(long *)(param_1 + 0x150);
  if (lVar5 == 0) {
    uVar2 = 0;
    lVar5 = *(long *)(param_1 + 0x158);
  }
  else {
    pcVar4 = *(code **)(lVar5 + 0xe0);
    if ((*(ulong *)(lVar5 + 0xe8) & 1) != 0) {
      pcVar4 = *(code **)(pcVar4 + *(long *)(lVar5 + ((long)*(ulong *)(lVar5 + 0xe8) >> 1)));
    }
    uVar2 = (*pcVar4)();
    lVar5 = *(long *)(param_1 + 0x158);
  }
  if (lVar5 != 0) {
    pcVar4 = *(code **)(lVar5 + 0xe0);
    if ((*(ulong *)(lVar5 + 0xe8) & 1) != 0) {
      pcVar4 = *(code **)(pcVar4 + *(long *)(lVar5 + ((long)*(ulong *)(lVar5 + 0xe8) >> 1)));
    }
    uVar3 = (*pcVar4)();
    uVar2 = uVar2 | uVar3;
  }
  lVar5 = *(long *)(param_1 + 0x160);
  if (lVar5 != 0) {
    pcVar4 = *(code **)(lVar5 + 0xe0);
    if ((*(ulong *)(lVar5 + 0xe8) & 1) != 0) {
      pcVar4 = *(code **)(pcVar4 + *(long *)(lVar5 + ((long)*(ulong *)(lVar5 + 0xe8) >> 1)));
    }
    uVar3 = (*pcVar4)();
    uVar2 = uVar2 | uVar3;
  }
  lVar5 = *(long *)(param_1 + 0x168);
  if (lVar5 != 0) {
    pcVar4 = *(code **)(lVar5 + 0xe0);
    if ((*(ulong *)(lVar5 + 0xe8) & 1) != 0) {
      pcVar4 = *(code **)(pcVar4 + *(long *)(lVar5 + ((long)*(ulong *)(lVar5 + 0xe8) >> 1)));
    }
    uVar3 = (*pcVar4)();
    uVar2 = uVar2 | uVar3;
  }
  lVar5 = *(long *)(param_1 + 0x170);
  if (lVar5 != 0) {
    pcVar4 = *(code **)(lVar5 + 0xe0);
    if ((*(ulong *)(lVar5 + 0xe8) & 1) != 0) {
      pcVar4 = *(code **)(pcVar4 + *(long *)(lVar5 + ((long)*(ulong *)(lVar5 + 0xe8) >> 1)));
    }
    uVar3 = (*pcVar4)();
    uVar2 = uVar2 | uVar3;
  }
  return uVar2 & 1;
}


