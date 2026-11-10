/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027ffcb4; name: FUN_027ffcb4
 */


void FUN_027ffcb4(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  plVar2 = *(long **)(param_1 + 0x68);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    return;
  }
  if ((char)plVar2[0xfc] == '\0') {
    return;
  }
  (**(code **)(*plVar2 + 0x48))();
  lVar3 = *(long *)(param_1 + 0x68);
  uVar5 = *(ulong *)(param_1 + 0x78);
  cVar1 = *(char *)(lVar3 + 0x7e0);
  uVar4 = (uint)uVar5;
  if ((uVar4 >> 6 & 1) == 0) {
    if (cVar1 == '\a') {
      if ((uVar4 >> 4 & 1) == 0) {
        *(ulong *)(param_1 + 0x78) = uVar5 & 0xffffffffffffff00;
        *(undefined2 *)(lVar3 + 0x7e0) = 0;
        return;
      }
      return;
    }
    if (cVar1 != '\x03') {
      return;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      return;
    }
    if ((uVar4 >> 5 & 1) == 0) {
      FUN_027ffd64(param_1);
      uVar5 = *(ulong *)(param_1 + 0x78) | 2;
    }
    else {
      *(undefined2 *)(lVar3 + 0x7e0) = 0x105;
      uVar5 = *(ulong *)(param_1 + 0x78) | 0x40;
    }
  }
  else {
    if (cVar1 != '\0') {
      return;
    }
    uVar5 = uVar5 & 0xffffffffffffff00;
  }
  *(ulong *)(param_1 + 0x78) = uVar5;
  return;
}


