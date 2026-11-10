/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8e134; name: FUN_02c8e134
 */


long FUN_02c8e134(long param_1,char param_2)

{
  ushort uVar1;
  int *piVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 == '\x02') {
    lVar5 = (&DAT_0428af30)[(ulong)*(uint *)(param_1 + 8) * 6];
    if (lVar5 == 0) {
      plVar3 = &DAT_0428af30;
    }
    else {
      plVar3 = &DAT_0428af30;
      if (*(char *)(lVar5 + 0x1e1) != '\0') {
        plVar3 = &DAT_0428af30 + (ulong)*(uint *)(param_1 + 8) * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x3b) {
      return 0;
    }
    uVar1 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x1d];
  }
  else {
    if (param_2 != '\x01') {
      if (param_2 != '\0') {
        return 0;
      }
      lVar5 = (&DAT_0428af30)[(ulong)*(uint *)(param_1 + 8) * 6];
      if (lVar5 == 0) {
        plVar3 = &DAT_0428af30;
      }
      else {
        plVar3 = &DAT_0428af30;
        if (*(char *)(lVar5 + 0x1e1) != '\0') {
          plVar3 = &DAT_0428af30 + (ulong)*(uint *)(param_1 + 8) * 6;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
      if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x37) {
        return 0;
      }
      uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0x1b];
      if (uVar4 == 0) {
        return 0;
      }
      goto LAB_02c8e274;
    }
    lVar5 = (&DAT_0428af30)[(ulong)*(uint *)(param_1 + 8) * 6];
    if (lVar5 == 0) {
      plVar3 = &DAT_0428af30;
    }
    else {
      plVar3 = &DAT_0428af30;
      if (*(char *)(lVar5 + 0x1e1) != '\0') {
        plVar3 = &DAT_0428af30 + (ulong)*(uint *)(param_1 + 8) * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
    if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0x39) {
      return 0;
    }
    uVar1 = ((ushort *)((long)piVar2 - (long)*piVar2))[0x1c];
  }
  uVar4 = (ulong)uVar1;
  if (uVar4 == 0) {
    return 0;
  }
LAB_02c8e274:
  return (long)*(char *)((long)piVar2 + uVar4);
}


