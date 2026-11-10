/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eab6ac; name: FUN_02eab6ac
 */


byte FUN_02eab6ac(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  long *plVar5;
  
  bVar4 = 1;
  plVar5 = *(long **)(*(long *)(param_1 + 0x180) + 0x80);
  if (plVar5 != (long *)0x0) {
    bVar2 = false;
    do {
      iVar3 = (**(code **)(*plVar5 + 0x88))(plVar5);
      if (iVar3 == 2) {
        uVar1 = *(byte *)((long)plVar5 + 0x114) & 0xf;
        if (uVar1 < 6 && (1 << (ulong)uVar1 & 0x26U) != 0) {
          return 0;
        }
        bVar2 = (bool)(bVar2 | uVar1 == 4);
      }
      plVar5 = (long *)plVar5[0x10];
    } while (plVar5 != (long *)0x0);
    if (bVar2) {
      bVar4 = *(byte *)(param_1 + 0x358) >> 4 & 1;
    }
    else {
      bVar4 = 1;
    }
  }
  return bVar4;
}


