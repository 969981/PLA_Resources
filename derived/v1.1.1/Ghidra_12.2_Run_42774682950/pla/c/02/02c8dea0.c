/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8dea0; name: FUN_02c8dea0
 */


undefined1 FUN_02c8dea0(ulong param_1)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = (&DAT_0428af30)[(param_1 & 0xffffffff) * 6];
  if (lVar4 == 0) {
    plVar2 = &DAT_0428af30;
  }
  else {
    plVar2 = &DAT_0428af30;
    if (*(char *)(lVar4 + 0x1e1) != '\0') {
      plVar2 = &DAT_0428af30 + (param_1 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar2 + 0x250) + (ulong)**(uint **)(*plVar2 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xa7) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x53], uVar3 == 0)) {
    return 0;
  }
  return *(undefined1 *)((long)piVar1 + uVar3);
}


