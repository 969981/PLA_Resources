/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d67f30; name: FUN_00d67f30
 */


void FUN_00d67f30(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x5c0) != 0) {
    bVar3 = FUN_00d47cdc(*(long *)(param_1 + 0x5c0),param_3);
    *(byte *)(param_1 + 0x5e0) = bVar3 & 1;
  }
  *(undefined1 *)(param_1 + 0x5e1) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(*(long *)(param_1 + 0x5b0) + 0xd9) = *(undefined1 *)((long)param_2 + 0x12);
  plVar4 = *(long **)(param_1 + 0x5b0);
  lVar5 = plVar4[0x15];
  if (lVar5 != 0) {
    iVar1 = *(int *)(param_2 + 1);
    if (iVar1 < 4) {
      uVar2 = *(undefined4 *)((long)param_2 + 0xc);
      *(int *)(lVar5 + 0x90) = iVar1;
      *(char *)(lVar5 + 0xa2) = (char)uVar2;
      *(undefined1 *)(lVar5 + 0xa3) = 0;
    }
    *(uint *)(plVar4 + 0x1c) = (uint)(iVar1 != 0) << 2;
    plVar4 = *(long **)(param_1 + 0x5b0);
  }
  (**(code **)(*plVar4 + 0x58))(plVar4,*param_2);
  if (*(char *)((long)param_2 + 0x11) != '\0') {
    lVar5 = *(long *)(param_1 + 0x5b0);
    *(undefined1 *)(lVar5 + 0xd8) = 1;
    *(undefined4 *)(lVar5 + 0x80) = 2;
  }
  if (((*(long *)(param_1 + 0x5c0) == 0) || (lVar5 = *(long *)(param_1 + 0x440), lVar5 == 0)) ||
     (*(char *)(lVar5 + 0x62) != '\0')) {
    return;
  }
  *(undefined1 *)(lVar5 + 0x60) = 1;
  if (*(char *)(lVar5 + 0x61) != '\0') {
    FUN_0283351c(*(undefined8 *)(lVar5 + 0x58),0);
  }
  FUN_02831808(*(undefined8 *)(lVar5 + 0x58),0);
  return;
}


