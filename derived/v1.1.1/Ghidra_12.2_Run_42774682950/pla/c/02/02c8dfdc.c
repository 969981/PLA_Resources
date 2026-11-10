/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8dfdc; name: FUN_02c8dfdc
 */


undefined1 FUN_02c8dfdc(long param_1,char param_2)

{
  int *piVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 == '\x02') {
    lVar4 = (&DAT_0428af30)[(ulong)*(uint *)(param_1 + 8) * 6];
    if (lVar4 == 0) {
      plVar3 = &DAT_0428af30;
    }
    else {
      plVar3 = &DAT_0428af30;
      if (*(char *)(lVar4 + 0x1e1) != '\0') {
        plVar3 = &DAT_0428af30 + (ulong)*(uint *)(param_1 + 8) * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x35) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x1a];
  }
  else if (param_2 == '\x01') {
    lVar4 = (&DAT_0428af30)[(ulong)*(uint *)(param_1 + 8) * 6];
    if (lVar4 == 0) {
      plVar3 = &DAT_0428af30;
    }
    else {
      plVar3 = &DAT_0428af30;
      if (*(char *)(lVar4 + 0x1e1) != '\0') {
        plVar3 = &DAT_0428af30 + (ulong)*(uint *)(param_1 + 8) * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x33) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x19];
  }
  else {
    if (param_2 != '\0') {
      return 0;
    }
    lVar4 = (&DAT_0428af30)[(ulong)*(uint *)(param_1 + 8) * 6];
    if (lVar4 == 0) {
      plVar3 = &DAT_0428af30;
    }
    else {
      plVar3 = &DAT_0428af30;
      if (*(char *)(lVar4 + 0x1e1) != '\0') {
        plVar3 = &DAT_0428af30 + (ulong)*(uint *)(param_1 + 8) * 6;
      }
    }
    piVar1 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x31) {
      return 0;
    }
    uVar2 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x18];
  }
  if ((ulong)uVar2 == 0) {
    return 0;
  }
  return *(undefined1 *)((long)piVar1 + (ulong)uVar2);
}


