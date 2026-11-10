/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cfdd0; name: FUN_011cfdd0
 */


void FUN_011cfdd0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int local_50;
  undefined1 local_4c;
  undefined1 auStack_48 [8];
  long local_38;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x650) + 0xb0);
  if (lVar3 != 0 && (int)lVar3 != 0) {
    *(long *)(*(long *)(param_1 + 0x650) + 0xb0) = lVar3 - ((lVar3 << 3) >> 3);
  }
  lVar2 = *(long *)(param_1 + 0x5f0);
  lVar3 = *(long *)(param_1 + 0x5f8) - lVar2;
  if (lVar3 != 0) {
    uVar5 = 1;
    lVar4 = 0;
    while( true ) {
      if (*(int *)(lVar2 + lVar4) != 0x15) {
        lVar2 = *(long *)(param_1 + 0x650);
        local_50 = (int)uVar5 + -1;
        local_4c = 0;
        uVar1 = *(ulong *)(lVar2 + 0xb0);
        if (uVar1 < *(ulong *)(lVar2 + 0xb8)) {
          FUN_011d216c(lVar2 + 0x88,*(long *)(lVar2 + 0xa8) + uVar1 * 8,&local_50);
          *(long *)(lVar2 + 0xb0) = *(long *)(lVar2 + 0xb0) + 1;
        }
        else {
          local_38 = *(long *)(lVar2 + 0xa8) + uVar1 * 8;
          FUN_011d20a4(auStack_48,lVar2 + 0x88,&local_38,1,&local_50);
        }
      }
      if ((ulong)((lVar3 >> 2) * -0x5555555555555555) <= uVar5) break;
      lVar2 = *(long *)(param_1 + 0x5f0);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0xc;
    }
  }
  return;
}


