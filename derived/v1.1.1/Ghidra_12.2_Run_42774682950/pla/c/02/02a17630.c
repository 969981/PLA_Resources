/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a17630; name: FUN_02a17630
 */


undefined8 FUN_02a17630(long param_1,long param_2,uint param_3,uint param_4)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  uint local_34;
  
  uVar4 = 1;
  puVar6 = &DAT_04279698;
  while (puVar6[-4] != param_3) {
    if (*puVar6 == param_3) goto LAB_02a17690;
    uVar4 = uVar4 + 2;
    puVar6 = puVar6 + 8;
    if (uVar4 == 0x14b) {
      return 0;
    }
  }
  uVar4 = uVar4 - 1;
LAB_02a17690:
  cVar1 = *(char *)(param_2 + 0x7d);
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x88) + 0x14c8);
  while( true ) {
    if (lVar7 == 0) goto LAB_02a17734;
    if (((((*(uint *)(lVar7 + 0x3c) >> 0x1d & 1) != 0) && (*(char *)(lVar7 + 0x30) == '\0')) &&
        ((*(uint *)(lVar7 + 0x3c) >> 0x1a & 1) == 0)) && (*(char *)(lVar7 + 0x3a) == cVar1)) break;
    lVar7 = *(long *)(lVar7 + 0x18);
  }
  if (*(ushort *)(lVar7 + 0x38) == param_3) {
    return 0;
  }
  iVar9 = 0;
  while (lVar7 = *(long *)(lVar7 + 0x18), lVar7 != 0) {
    iVar9 = iVar9 + 1;
    if (*(char *)(lVar7 + 0x30) == '\0') goto LAB_02a17704;
    do {
      do {
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) goto LAB_02a17734;
      } while (*(char *)(lVar7 + 0x30) != '\0');
LAB_02a17704:
    } while ((*(char *)(lVar7 + 0x3a) != cVar1) || ((*(byte *)(lVar7 + 0x3f) >> 2 & 1) != 0));
    if (iVar9 == 8) {
      return 0;
    }
    if (*(ushort *)(lVar7 + 0x38) == param_3) {
      return 0;
    }
  }
LAB_02a17734:
  lVar7 = (**(code **)((uVar4 & 0xffffffff) * 0x10 + 0x4279690))(&local_34);
  uVar3 = 0;
  if (lVar7 != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x88);
    lVar5 = *(long *)(lVar8 + 0x14d0);
    if (lVar5 == 0) {
      uVar3 = 1;
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x78);
      *(undefined8 *)(lVar8 + 0x14d0) = *(undefined8 *)(lVar5 + 0x18);
      lVar10 = *(long *)(lVar5 + 0x10);
      lVar11 = *(long *)(lVar5 + 0x18);
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x18) = lVar11;
      }
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x10) = lVar10;
      }
      param_4 = param_4 | 0x7000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(undefined8 *)(lVar5 + 0x48) = 0;
      *(undefined8 *)(lVar5 + 0x30) = 0;
      *(undefined8 *)(lVar5 + 0x38) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      *(long *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(uint *)(lVar5 + 0x34) = param_4;
      *(undefined1 *)(lVar5 + 0x30) = 0;
      *(long *)(lVar5 + 0x20) = lVar7;
      *(char *)(lVar5 + 0x3a) = cVar1;
      *(short *)(lVar5 + 0x38) = (short)param_3;
      *(char *)(lVar5 + 0x3b) = cVar1;
      *(uint *)(lVar5 + 0x3c) = (uint)uVar2 | (local_34 & 0xff) << 0x10 | 0x20000000;
      lVar7 = *(long *)(lVar8 + 0x14c8);
      if (lVar7 == 0) {
        *(long *)(lVar8 + 0x14c8) = lVar5;
        uVar3 = 1;
      }
      else if (*(uint *)(lVar7 + 0x34) < param_4) {
        *(long *)(lVar5 + 0x18) = lVar7;
        uVar3 = 1;
        *(long *)(lVar7 + 0x10) = lVar5;
        *(long *)(lVar8 + 0x14c8) = lVar5;
      }
      else {
        do {
          lVar8 = *(long *)(lVar7 + 0x18);
          if (lVar8 == 0) {
            *(long *)(lVar7 + 0x18) = lVar5;
            *(long *)(lVar5 + 0x10) = lVar7;
            return 1;
          }
          lVar7 = lVar8;
        } while (param_4 <= *(uint *)(lVar8 + 0x34));
        lVar7 = *(long *)(lVar8 + 0x10);
        *(long *)(lVar7 + 0x18) = lVar5;
        uVar3 = 1;
        *(long *)(lVar5 + 0x10) = lVar7;
        *(long *)(lVar5 + 0x18) = lVar8;
        *(long *)(lVar8 + 0x10) = lVar5;
      }
    }
  }
  return uVar3;
}


