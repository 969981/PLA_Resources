/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126b2dc; name: FUN_0126b2dc
 */


void FUN_0126b2dc(long param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 != 0) {
    if (*(long **)(lVar3 + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + 0x78) + 0x40))();
    }
    FUN_0134fb40(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    if (*(long **)(lVar3 + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)(lVar3 + 0x78) + 0x40))();
    }
    FUN_0134fb40(lVar3);
  }
  if (*(char *)(param_1 + 0x1a9) != '\0') {
    lVar3 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x1a8) * 8 + 0x70);
    bVar2 = *(byte *)(lVar3 + 0x188);
    if ((((2 < bVar2) && (lVar3 = *(long *)(lVar3 + 0x90), lVar3 != 0)) &&
        (*(int *)(lVar3 + 0x27b8) == 1)) &&
       ((bVar2 & 0xfe) != 4 && *(long *)(lVar3 + 0x27c8) == *(long *)(lVar3 + 0x27c0))) {
      FUN_0126b498(param_1);
      *(undefined1 *)(param_1 + 0x1a9) = 0;
      cVar1 = *(char *)(param_1 + 0x1a1);
      goto joined_r0x0126b3a8;
    }
  }
  cVar1 = *(char *)(param_1 + 0x1a1);
joined_r0x0126b3a8:
  if (cVar1 == '\0') {
    return;
  }
  FUN_0126b4e0(param_1);
  return;
}


