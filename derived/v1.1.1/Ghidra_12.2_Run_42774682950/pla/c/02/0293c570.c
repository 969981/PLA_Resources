/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0293c570; name: FUN_0293c570
 */


undefined8 FUN_0293c570(undefined8 param_1,byte param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 uVar6;
  
  lVar5 = (&DAT_0428af30)[(ulong)param_4 * 6];
  if (lVar5 == 0) {
    plVar3 = &DAT_0428af30;
  }
  else {
    plVar3 = &DAT_0428af30;
    if (*(char *)(lVar5 + 0x1e1) != '\0') {
      plVar3 = &DAT_0428af30 + (ulong)param_4 * 6;
    }
  }
  piVar1 = (int *)((long)*(uint **)(*plVar3 + 0x250) + (ulong)**(uint **)(*plVar3 + 0x250));
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar4 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined1 *)((long)piVar1 + uVar4);
  }
  if (param_2 < 6) {
    lVar5 = 0;
  }
  else if (param_2 < 0xc) {
    lVar5 = 2;
  }
  else if (param_2 < 0x12) {
    lVar5 = 1;
  }
  else if (param_2 < 0x18) {
    lVar5 = 3;
  }
  else {
    lVar5 = (ulong)(param_2 < 0x1e) << 2;
  }
  iVar2 = FUN_029395ec(param_1,param_3,lVar5);
  switch(uVar6) {
  case 4:
    if (iVar2 == 0x1a) {
      return 1;
    }
    break;
  case 9:
    if (iVar2 == 0x12) {
      return 1;
    }
    break;
  case 10:
    if (iVar2 == 0xb) {
      return 1;
    }
    if (iVar2 == 0x72) {
      return 1;
    }
    if (iVar2 == 0x57) {
      return 1;
    }
    break;
  case 0xb:
    if (iVar2 == 0x9d) {
      return 1;
    }
    break;
  case 0xc:
    if (iVar2 == 10) {
      return 1;
    }
    if (iVar2 == 0x1f) {
      return 1;
    }
    if (iVar2 == 0x4e) {
      return 1;
    }
  }
  return 0;
}


