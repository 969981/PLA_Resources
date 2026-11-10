/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f58c90; name: FUN_02f58c90
 */


long FUN_02f58c90(int param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(&DAT_0442c148 + (long)param_1 * 0x820) & param_2;
  if (*(long *)(uVar2 + 0x40) == 0) {
    uVar1 = *(uint *)(uVar2 + 0x30);
    lVar5 = *(long *)(&DAT_0442c120 + (long)param_1 * 0x820);
  }
  else {
    uVar1 = *(uint *)(uVar2 + 0x14) - 0x7d;
    if (*(uint *)(uVar2 + 0x14) < 0x7d || uVar1 == 0) {
      uVar4 = (ulong)*(uint *)(uVar2 + 0x28);
      uVar3 = (param_2 - uVar2) - 0x60;
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar3 / uVar4;
      }
      return uVar4 + (uVar2 * uVar4 - uVar3);
    }
    lVar5 = *(long *)(&DAT_0442c138 + (long)param_1 * 0x820);
  }
  return (uVar2 - param_2) + lVar5 * (ulong)uVar1;
}


