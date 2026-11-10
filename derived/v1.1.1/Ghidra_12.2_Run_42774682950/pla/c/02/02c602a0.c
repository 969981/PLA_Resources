/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c602a0; name: FUN_02c602a0
 */


undefined1 FUN_02c602a0(long param_1)

{
  int *piVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98));
  lVar4 = (&DAT_0428af30)[(uVar2 & 0xffffffff) * 6];
  if (lVar4 == 0) {
    plVar3 = &DAT_0428af30;
  }
  else {
    plVar3 = &DAT_0428af30;
    if (*(char *)(lVar4 + 0x1e1) != '\0') {
      plVar3 = &DAT_0428af30 + (uVar2 & 0xffffffff) * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) ||
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9], uVar2 == 0)) {
    return 0;
  }
  return *(undefined1 *)((long)piVar1 + uVar2);
}


