/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df49c; name: FUN_001df49c
 */


bool FUN_001df49c(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = *(ulong *)(*(long *)(lVar3 + 0xd8) + 0x150);
  if ((long)uVar4 < 0) {
    uVar4 = (long)*(int *)(*(long *)(lVar3 + 0xd8) + 0x18) << 2;
  }
  *param_1 = 0;
  plVar2 = (long *)0x0;
  if (uVar4 != 0) {
    uVar1 = FUN_001defc0(lVar3);
    if (uVar4 < uVar1) {
      FUN_001f3934(lVar3,"Connection cache is full, closing the oldest one.\n");
      plVar2 = (long *)FUN_001df530(lVar3);
      if (plVar2 != (long *)0x0) {
        FUN_001fcddc(lVar3,plVar2,0);
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
  }
  return plVar2 != param_1;
}


