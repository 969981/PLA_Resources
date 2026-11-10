/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b38b8; name: FUN_008b38b8
 */


void FUN_008b38b8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_130 [8];
  long alStack_128 [30];
  uint local_38;
  undefined8 local_28;
  
  local_28 = 0x501000000;
  uVar1 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
  FUN_009346d8(auStack_130,uVar1,&local_28);
  if (local_38 != 0) {
    lVar4 = (ulong)local_38 << 3;
    plVar3 = alStack_128;
    do {
      uVar2 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(*(long *)(*plVar3 + 0x70) + 0x60) + 0x98));
      if ((uVar2 & 1) != 0) {
        FUN_00dac5ac(4,1);
        break;
      }
      lVar4 = lVar4 + -8;
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
  }
  FUN_0093245c(auStack_130);
  return;
}


