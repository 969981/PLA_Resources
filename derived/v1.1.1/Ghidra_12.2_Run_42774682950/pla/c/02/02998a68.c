/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02998a68; name: FUN_02998a68
 */


undefined1 FUN_02998a68(ulong param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  param_1 = param_1 & 0xffffffff;
  if (param_2 == 1) {
    lVar5 = (&DAT_0428af30)[param_1 * 6];
    if (lVar5 == 0) {
      plVar3 = &DAT_0428af30;
    }
    else {
      plVar3 = &DAT_0428af30;
      if (*(char *)(lVar5 + 0x1e1) != '\0') {
        plVar3 = &DAT_0428af30 + param_1 * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xaf) {
      return 0;
    }
    uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x57];
    if (uVar4 == 0) {
      return 0;
    }
  }
  else {
    if (param_2 == 2) {
      lVar5 = (&DAT_0428af30)[param_1 * 6];
      if (lVar5 == 0) {
        plVar3 = &DAT_0428af30;
      }
      else {
        plVar3 = &DAT_0428af30;
        if (*(char *)(lVar5 + 0x1e1) != '\0') {
          plVar3 = &DAT_0428af30 + param_1 * 6;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x9f) {
        return 0;
      }
      uVar1 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x4f];
    }
    else {
      lVar5 = (&DAT_0428af30)[param_1 * 6];
      if (lVar5 == 0) {
        plVar3 = &DAT_0428af30;
      }
      else {
        plVar3 = &DAT_0428af30;
        if (*(char *)(lVar5 + 0x1e1) != '\0') {
          plVar3 = &DAT_0428af30 + param_1 * 6;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x79) {
        return 0;
      }
      uVar1 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x3c];
    }
    uVar4 = (ulong)uVar1;
    if (uVar4 == 0) {
      return 0;
    }
  }
  return *(undefined1 *)((long)piVar2 + uVar4);
}


