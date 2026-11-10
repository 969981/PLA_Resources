/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029cdf30; name: FUN_029cdf30
 */


undefined8 FUN_029cdf30(long param_1,long param_2,char param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                       *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),0);
  if (((uVar2 & 1) == 0) || ((char)((2 < *(uint *)(param_1 + 0x110)) * '\x02') != param_3)) {
LAB_029cdff8:
    uVar2 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                         *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),1);
    if ((uVar2 & 1) != 0) {
      cVar5 = '\x01';
      if (2 < *(uint *)(param_1 + 0x110)) {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        lVar6 = *(long *)(param_2 + 8);
        if (*(char *)(lVar6 + 0x70) != '\0') {
          uVar2 = 0;
          cVar5 = '\0';
          do {
            lVar7 = *(long *)(lVar6 + 0x40 + uVar2 * 8);
            lVar8 = *(long *)(lVar7 + 0x60);
            uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar8 + 0x98));
            bVar1 = false;
            if (((uVar3 & 1) == 0) &&
               ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
              bVar1 = *(short *)(lVar7 + 0x74) != 0;
            }
            cVar5 = cVar5 + bVar1;
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(byte *)(lVar6 + 0x70));
          if (cVar5 != '\0') goto LAB_029ce26c;
        }
      }
    }
    uVar2 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                         *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),2);
    if (((uVar2 & 1) != 0) && ((char)((*(int *)(param_1 + 0x110) != 1) * '\x02') == param_3)) {
      lVar6 = *(long *)(param_2 + 8);
      if (*(char *)(lVar6 + 0xa8) != '\0') {
        uVar2 = 0;
        cVar5 = '\0';
        do {
          lVar7 = *(long *)(lVar6 + 0x78 + uVar2 * 8);
          lVar8 = *(long *)(lVar7 + 0x60);
          uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar8 + 0x98));
          bVar1 = false;
          if (((uVar3 & 1) == 0) &&
             ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
            bVar1 = *(short *)(lVar7 + 0x74) != 0;
          }
          cVar5 = cVar5 + bVar1;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(byte *)(lVar6 + 0xa8));
        if (cVar5 != '\0') goto LAB_029ce26c;
      }
    }
    uVar2 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                         *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),3);
    if ((uVar2 & 1) != 0) {
      cVar5 = '\x01';
      if (*(int *)(param_1 + 0x110) != 1) {
        cVar5 = '\x02';
      }
      if (cVar5 == param_3) {
        lVar6 = *(long *)(param_2 + 8);
        if (*(char *)(lVar6 + 0xe0) != '\0') {
          uVar2 = 0;
          cVar5 = '\0';
          do {
            lVar7 = *(long *)(lVar6 + 0xb0 + uVar2 * 8);
            lVar8 = *(long *)(lVar7 + 0x60);
            uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar8 + 0x98));
            bVar1 = false;
            if (((uVar3 & 1) == 0) &&
               ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
              bVar1 = *(short *)(lVar7 + 0x74) != 0;
            }
            cVar5 = cVar5 + bVar1;
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(byte *)(lVar6 + 0xe0));
          if (cVar5 != '\0') goto LAB_029ce26c;
        }
      }
    }
    uVar2 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                         *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),4);
    if ((param_3 == '\x02') && ((uVar2 & 1) != 0)) {
      lVar6 = *(long *)(param_2 + 8);
      if (*(char *)(lVar6 + 0x118) != '\0') {
        uVar2 = 0;
        cVar5 = '\0';
        do {
          lVar7 = *(long *)(lVar6 + 0xe8 + uVar2 * 8);
          lVar8 = *(long *)(lVar7 + 0x60);
          uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar8 + 0x98));
          bVar1 = false;
          if (((uVar3 & 1) == 0) &&
             ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
            bVar1 = *(short *)(lVar7 + 0x74) != 0;
          }
          cVar5 = cVar5 + bVar1;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(byte *)(lVar6 + 0x118));
        if (cVar5 != '\0') goto LAB_029ce26c;
      }
    }
    uVar4 = 1;
  }
  else {
    lVar6 = *(long *)(param_2 + 8);
    if (*(char *)(lVar6 + 0x38) == '\0') goto LAB_029cdff8;
    uVar2 = 0;
    cVar5 = '\0';
    do {
      lVar7 = *(long *)(lVar6 + 8 + uVar2 * 8);
      lVar8 = *(long *)(lVar7 + 0x60);
      uVar3 = FUN_02c6cf3c(*(undefined8 *)(lVar8 + 0x98));
      bVar1 = false;
      if (((uVar3 & 1) == 0) &&
         ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
        bVar1 = *(short *)(lVar7 + 0x74) != 0;
      }
      cVar5 = cVar5 + bVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(lVar6 + 0x38));
    if (cVar5 == '\0') goto LAB_029cdff8;
LAB_029ce26c:
    uVar4 = 0;
  }
  return uVar4;
}


