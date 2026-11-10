/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d0bf0; name: FUN_029d0bf0
 */


void FUN_029d0bf0(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  
  *(undefined1 *)((long)param_2 + 0x5c) = 0;
  if (*(char *)((long)param_2 + 0x5a) == '\0') {
    *(undefined1 *)((long)param_2 + 0x5c) = 0;
LAB_029d0c60:
    *(undefined1 *)((long)param_2 + 0x5c) = 0;
LAB_029d0c64:
    *(undefined1 *)((long)param_2 + 0x5c) = 0;
LAB_029d0d5c:
    uVar1 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    lVar2 = *param_2;
    *(undefined1 *)((long)param_2 + 0x5c) = 1;
    while (lVar2 != 0) {
      FUN_02979334(*(undefined8 *)(param_1 + 0x38),lVar2,0x6e);
      bVar3 = *(byte *)((long)param_2 + 0x5c);
      if (*(byte *)((long)param_2 + 0x5a) <= bVar3) {
        *(undefined1 *)((long)param_2 + 0x5c) = 0;
        if (*(byte *)((long)param_2 + 0x5a) == 0) goto LAB_029d0c60;
        goto LAB_029d0c74;
      }
      *(byte *)((long)param_2 + 0x5c) = bVar3 + 1;
      lVar2 = param_2[bVar3];
    }
    *(undefined1 *)((long)param_2 + 0x5c) = 0;
LAB_029d0c74:
    lVar2 = *param_2;
    *(undefined1 *)((long)param_2 + 0x5c) = 1;
    while (lVar2 != 0) {
      FUN_02979098(*(undefined8 *)(param_1 + 0x38),lVar2,0x6f);
      bVar3 = *(byte *)((long)param_2 + 0x5c);
      if (*(byte *)((long)param_2 + 0x5a) <= bVar3) {
        *(undefined1 *)((long)param_2 + 0x5c) = 0;
        if (*(byte *)((long)param_2 + 0x5a) == 0) goto LAB_029d0c64;
        goto LAB_029d0cc4;
      }
      *(byte *)((long)param_2 + 0x5c) = bVar3 + 1;
      lVar2 = param_2[bVar3];
    }
    *(undefined1 *)((long)param_2 + 0x5c) = 0;
LAB_029d0cc4:
    lVar2 = *param_2;
    *(undefined1 *)((long)param_2 + 0x5c) = 1;
    while (lVar2 != 0) {
      FUN_02979098(*(undefined8 *)(param_1 + 0x38),lVar2,0x6d);
      bVar3 = *(byte *)((long)param_2 + 0x5c);
      if (*(byte *)((long)param_2 + 0x5a) <= bVar3) {
        *(undefined1 *)((long)param_2 + 0x5c) = 0;
        if (*(byte *)((long)param_2 + 0x5a) == 0) goto LAB_029d0d5c;
        goto LAB_029d0d14;
      }
      *(byte *)((long)param_2 + 0x5c) = bVar3 + 1;
      lVar2 = param_2[bVar3];
    }
    *(undefined1 *)((long)param_2 + 0x5c) = 0;
LAB_029d0d14:
    *(undefined1 *)((long)param_2 + 0x5c) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    lVar2 = *param_2;
    while (lVar2 != 0) {
      FUN_02979098(uVar1,lVar2,0xd1);
      bVar3 = *(byte *)((long)param_2 + 0x5c);
      if (*(byte *)((long)param_2 + 0x5a) <= bVar3) goto LAB_029d0d5c;
      *(byte *)((long)param_2 + 0x5c) = bVar3 + 1;
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      lVar2 = param_2[bVar3];
    }
  }
  FUN_029795d0(uVar1);
  bVar3 = *(byte *)((long)param_2 + 0x5a);
  *(undefined1 *)((long)param_2 + 0x5c) = 0;
  if ((bVar3 != 0) && (*(undefined1 *)((long)param_2 + 0x5c) = 1, *param_2 != 0)) {
    bVar4 = 1;
    do {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 0x1e4) == 4) {
        FUN_029d0dd8(param_1);
        bVar4 = *(byte *)((long)param_2 + 0x5c);
        bVar3 = *(byte *)((long)param_2 + 0x5a);
      }
      if (bVar3 <= bVar4) {
        return;
      }
      uVar5 = (ulong)bVar4;
      bVar4 = bVar4 + 1;
      *(byte *)((long)param_2 + 0x5c) = bVar4;
    } while (param_2[uVar5] != 0);
  }
  return;
}


