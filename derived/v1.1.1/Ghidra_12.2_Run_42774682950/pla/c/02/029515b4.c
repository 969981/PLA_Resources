/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029515b4; name: FUN_029515b4
 */


void FUN_029515b4(long param_1,ulong param_2,uint param_3,byte param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  long lVar4;
  byte bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  param_2 = param_2 & 0xff;
  if ((param_5 & 1) == 0) {
    lVar4 = param_1 + param_2 * 0x1c;
    *(uint *)(lVar4 + 0x300) = param_3;
    *(undefined4 *)(lVar4 + 0x307) = 0;
    if (param_3 != 0) {
      lVar4 = (&DAT_0428af30)[(ulong)param_3 * 6];
      if (lVar4 == 0) {
        plVar6 = &DAT_0428af30;
      }
      else {
        plVar6 = &DAT_0428af30;
        if (*(char *)(lVar4 + 0x1e1) != '\0') {
          plVar6 = &DAT_0428af30 + (ulong)param_3 * 6;
        }
      }
      piVar2 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
      if ((0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
         (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar7 != 0)) {
        bVar5 = *(byte *)((long)piVar2 + uVar7);
        goto LAB_02951704;
      }
    }
    bVar5 = 0;
LAB_02951704:
    param_1 = param_1 + param_2 * 0x1c;
    if (bVar5 <= param_4 || param_4 == 0) {
      param_4 = bVar5;
    }
    *(byte *)(param_1 + 0x305) = param_4;
    *(byte *)(param_1 + 0x304) = param_4;
    *(undefined1 *)(param_1 + 0x30c) = 0;
    return;
  }
  lVar4 = param_1 + param_2 * 0x1c;
  puVar1 = (uint *)(lVar4 + 0x2f4);
  *puVar1 = param_3;
  *(undefined4 *)(param_1 + param_2 * 0x1c + 0x2fb) = 0;
  if (param_3 != 0) {
    lVar8 = (&DAT_0428af30)[(ulong)param_3 * 6];
    if (lVar8 == 0) {
      plVar6 = &DAT_0428af30;
    }
    else {
      plVar6 = &DAT_0428af30;
      if (*(char *)(lVar8 + 0x1e1) != '\0') {
        plVar6 = &DAT_0428af30 + (ulong)param_3 * 6;
      }
    }
    piVar2 = (int *)((long)*(uint **)(*plVar6 + 0x250) + (ulong)**(uint **)(*plVar6 + 0x250));
    if ((0x12 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[9], uVar7 != 0)) {
      bVar5 = *(byte *)((long)piVar2 + uVar7);
      goto LAB_029516b8;
    }
  }
  bVar5 = 0;
LAB_029516b8:
  lVar8 = param_1 + param_2 * 0x1c;
  if (bVar5 <= param_4 || param_4 == 0) {
    param_4 = bVar5;
  }
  *(byte *)(lVar8 + 0x2f9) = param_4;
  *(byte *)(lVar8 + 0x2f8) = param_4;
  if (*(char *)(lVar8 + 0x30c) == '\0') {
    return;
  }
  param_1 = param_1 + param_2 * 0x1c;
  uVar3 = *(undefined4 *)(lVar4 + 0x2fb);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)puVar1;
  *(undefined4 *)(param_1 + 0x307) = uVar3;
  return;
}


