/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02967240; name: FUN_02967240
 */


void FUN_02967240(long *param_1,byte param_2,uint param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  undefined1 *puVar6;
  
  iVar1 = *(int *)(*param_1 + 0x110);
  if (iVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1[6] + 0x70);
  uVar3 = 0;
  if (*(long *)(lVar2 + 0x20) != 0) {
    uVar3 = *(uint *)(*(long *)(lVar2 + 0x20) + 0xc);
  }
  if ((param_2 == 0x1f) || ((uVar3 & 0xff) == 0x1f)) goto LAB_02967320;
  if (param_2 < 6) {
    lVar5 = 0;
joined_r0x029672ac:
    if (iVar1 != 1) goto LAB_029672b0;
LAB_02967298:
    puVar6 = &DAT_03a7ebe5;
LAB_029672c0:
    cVar4 = puVar6[lVar5];
  }
  else {
    if (param_2 < 0xc) {
      lVar5 = 2;
      goto joined_r0x029672ac;
    }
    if (param_2 < 0x12) {
      lVar5 = 1;
    }
    else {
      if (0x17 < param_2) {
        lVar5 = (ulong)(param_2 < 0x1e) << 2;
        goto joined_r0x029672ac;
      }
      lVar5 = 3;
    }
    if (iVar1 == 1) goto LAB_02967298;
LAB_029672b0:
    if (iVar1 == 2) {
      puVar6 = &DAT_03a7ebe0;
      goto LAB_029672c0;
    }
    cVar4 = '\x02';
  }
  if ((uVar3 & 0xff) < 6) {
    lVar5 = 0;
joined_r0x02967300:
    if (iVar1 != 1) goto LAB_02967304;
LAB_029672ec:
    puVar6 = &DAT_03a7ebe5;
  }
  else {
    if ((uVar3 & 0xff) < 0xc) {
      lVar5 = 2;
      goto joined_r0x02967300;
    }
    if ((uVar3 & 0xff) < 0x12) {
      lVar5 = 1;
    }
    else {
      if (0x17 < (uVar3 & 0xff)) {
        lVar5 = (ulong)((uVar3 & 0xff) < 0x1e) << 2;
        goto joined_r0x02967300;
      }
      lVar5 = 3;
    }
    if (iVar1 == 1) goto LAB_029672ec;
LAB_02967304:
    if (iVar1 != 2) {
      if (cVar4 == '\x02') {
        return;
      }
      goto LAB_02967320;
    }
    puVar6 = &DAT_03a7ebe0;
  }
  if (cVar4 == puVar6[lVar5]) {
    return;
  }
LAB_02967320:
  if ((((*(long *)(lVar2 + 0x98) == 0) || (*(int *)(*(long *)(lVar2 + 0x98) + 0xc) != 0x1fb)) &&
      ((*(byte *)(*(long *)(*(long *)(param_1[1] + 8) + (ulong)param_2 * 8 + 0x120) + 0x1b0) & 7) ==
       0)) && (*(char *)(*(long *)(param_1[5] + 8) +
                         (ulong)*(byte *)(*(long *)(param_1[5] + 8) + 0x1c8) * 0x40 + 0x45) == '\0')
     ) {
    uVar3 = 0;
    if (*(long *)(lVar2 + 0x310) != 0) {
      uVar3 = *(uint *)(*(long *)(lVar2 + 0x310) + 0xc);
    }
    if ((uVar3 & 0xff) < (param_3 & 0xff)) {
      lVar2 = *(long *)(lVar2 + 0x28);
      if (((lVar2 != 0) && (*(byte *)(lVar2 + 10) < 2)) &&
         (*(uint *)(lVar2 + 0xc) = (uint)param_2, *(byte *)(lVar2 + 10) == 1)) {
        *(undefined1 *)(lVar2 + 10) = 2;
      }
      lVar2 = *(long *)(*(long *)(param_1[6] + 0x70) + 0x310);
      if (((lVar2 != 0) && (*(byte *)(lVar2 + 10) < 2)) &&
         (*(uint *)(lVar2 + 0xc) = param_3 & 0xff, *(byte *)(lVar2 + 10) == 1)) {
        *(undefined1 *)(lVar2 + 10) = 2;
      }
      lVar2 = *(long *)(*(long *)(param_1[6] + 0x70) + 0x318);
      if (((lVar2 != 0) && (*(byte *)(lVar2 + 10) < 2)) &&
         (*(uint *)(lVar2 + 0xc) = param_4 & 0xff, *(byte *)(lVar2 + 10) == 1)) {
        *(undefined1 *)(lVar2 + 10) = 2;
        return;
      }
    }
  }
  return;
}


