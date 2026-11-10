/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a38320; name: FUN_02a38320
 */


void FUN_02a38320(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint local_48;
  uint local_44;
  
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x88);
  lVar10 = *(long *)(lVar8 + 0x14c8);
  if (lVar10 != 0) {
    uVar6 = *(uint *)(lVar10 + 0x3c);
    lVar9 = lVar10;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a38378;
    do {
      do {
        lVar9 = *(long *)(lVar9 + 0x18);
        if (lVar9 == 0) goto LAB_02a38394;
        uVar6 = *(uint *)(lVar9 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a38378:
    } while (((*(char *)(lVar9 + 0x30) != '\x04') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar9 + 0x3a) != *(char *)(param_2 + 0x7d)));
LAB_02a38394:
    uVar6 = *(uint *)(lVar10 + 0x3c);
    lVar7 = lVar10;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a383b0;
    do {
      do {
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) goto LAB_02a383cc;
        uVar6 = *(uint *)(lVar7 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a383b0:
    } while (((*(char *)(lVar7 + 0x30) != '\x04') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar7 + 0x3a) != *(char *)(param_3 + 0x7d)));
LAB_02a383cc:
    if ((lVar9 != 0) && (uVar6 = *(uint *)(lVar9 + 0x3c), (uVar6 >> 0x1d & 1) != 0)) {
      if ((uVar6 >> 0x18 & 1) == 0) {
        if (lVar10 == lVar9) {
          *(undefined8 *)(lVar8 + 0x14c8) = *(undefined8 *)(lVar10 + 0x18);
        }
        lVar10 = *(long *)(lVar9 + 0x10);
        lVar11 = *(long *)(lVar9 + 0x18);
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x18) = lVar11;
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x10) = lVar10;
        }
        *(undefined8 *)(lVar9 + 0x50) = 0;
        *(undefined8 *)(lVar9 + 0x58) = 0;
        *(undefined8 *)(lVar9 + 0x40) = 0;
        *(undefined8 *)(lVar9 + 0x48) = 0;
        *(undefined8 *)(lVar9 + 0x30) = 0;
        *(undefined8 *)(lVar9 + 0x38) = 0;
        *(undefined8 *)(lVar9 + 0x20) = 0;
        *(undefined8 *)(lVar9 + 0x28) = 0;
        *(long *)(lVar9 + 0x10) = 0;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        lVar10 = *(long *)(lVar8 + 0x14d0);
        *(long *)(lVar9 + 0x18) = lVar10;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x10) = lVar9;
        }
        *(long *)(lVar8 + 0x14d0) = lVar9;
      }
      else {
        *(uint *)(lVar9 + 0x3c) = uVar6 | 0x4000000;
      }
    }
    if ((lVar7 != 0) && (uVar6 = *(uint *)(lVar7 + 0x3c), (uVar6 >> 0x1d & 1) != 0)) {
      if ((uVar6 >> 0x18 & 1) == 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x88);
        if (*(long *)(lVar8 + 0x14c8) == lVar7) {
          *(undefined8 *)(lVar8 + 0x14c8) = *(undefined8 *)(lVar7 + 0x18);
        }
        lVar10 = *(long *)(lVar7 + 0x10);
        lVar9 = *(long *)(lVar7 + 0x18);
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x18) = lVar9;
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x10) = lVar10;
        }
        *(undefined8 *)(lVar7 + 0x50) = 0;
        *(undefined8 *)(lVar7 + 0x58) = 0;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined8 *)(lVar7 + 0x30) = 0;
        *(undefined8 *)(lVar7 + 0x38) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(long *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        lVar10 = *(long *)(lVar8 + 0x14d0);
        *(long *)(lVar7 + 0x18) = lVar10;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x10) = lVar7;
        }
        *(long *)(lVar8 + 0x14d0) = lVar7;
      }
      else {
        *(uint *)(lVar7 + 0x3c) = uVar6 | 0x4000000;
      }
    }
  }
  iVar4 = FUN_029506a8(param_2,0x10);
  if (iVar4 == 0x7a) {
    lVar8 = 0;
  }
  else {
    uVar6 = local_48;
    if (iVar4 != 0x70) goto LAB_02a3861c;
    lVar8 = 1;
  }
  lVar8 = (*(code *)(&PTR_FUN_0427cdc8)[lVar8 * 2])(&local_48);
  uVar6 = local_48;
  if (lVar8 != 0) {
    uVar1 = *(undefined1 *)(param_2 + 0x7d);
    uVar5 = FUN_0295084c(param_2,0xc);
    uVar6 = local_48 & 0xffff;
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x88);
    lVar10 = *(long *)(lVar9 + 0x14d0);
    if (lVar10 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x78);
      *(undefined8 *)(lVar9 + 0x14d0) = *(undefined8 *)(lVar10 + 0x18);
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar11 = *(long *)(lVar10 + 0x18);
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x18) = lVar11;
      }
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x10) = lVar7;
      }
      *(undefined8 *)(lVar10 + 0x50) = 0;
      *(undefined8 *)(lVar10 + 0x58) = 0;
      uVar3 = 0x2000000;
      if (local_48 >> 0x10 != 0) {
        uVar3 = ~(local_48 >> 0x10) * 0x1000000 + 0x9000000;
      }
      uVar3 = uVar3 | uVar5 & 0xffff;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x48) = 0;
      *(undefined8 *)(lVar10 + 0x30) = 0;
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(long *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(uint *)(lVar10 + 0x34) = uVar3;
      *(undefined1 *)(lVar10 + 0x30) = 4;
      *(long *)(lVar10 + 0x20) = lVar8;
      *(undefined1 *)(lVar10 + 0x3a) = uVar1;
      *(short *)(lVar10 + 0x38) = (short)iVar4;
      *(undefined1 *)(lVar10 + 0x3b) = uVar1;
      *(uint *)(lVar10 + 0x3c) = (uint)uVar2 | (local_48 & 0xff) << 0x10 | 0x20000000;
      lVar8 = *(long *)(lVar9 + 0x14c8);
      if (lVar8 == 0) {
        *(long *)(lVar9 + 0x14c8) = lVar10;
      }
      else if (*(uint *)(lVar8 + 0x34) < uVar3) {
        *(long *)(lVar10 + 0x18) = lVar8;
        *(long *)(lVar8 + 0x10) = lVar10;
        *(long *)(lVar9 + 0x14c8) = lVar10;
      }
      else {
        do {
          lVar9 = *(long *)(lVar8 + 0x18);
          if (lVar9 == 0) {
            *(long *)(lVar8 + 0x18) = lVar10;
            *(long *)(lVar10 + 0x10) = lVar8;
            goto LAB_02a3861c;
          }
          lVar8 = lVar9;
        } while (uVar3 <= *(uint *)(lVar9 + 0x34));
        lVar8 = *(long *)(lVar9 + 0x10);
        *(long *)(lVar8 + 0x18) = lVar10;
        *(long *)(lVar10 + 0x10) = lVar8;
        *(long *)(lVar10 + 0x18) = lVar9;
        *(long *)(lVar9 + 0x10) = lVar10;
      }
    }
  }
LAB_02a3861c:
  local_48 = uVar6;
  iVar4 = FUN_029506a8(param_3,0x10);
  if (iVar4 == 0x7a) {
    lVar8 = 0;
  }
  else {
    if (iVar4 != 0x70) {
      return;
    }
    lVar8 = 1;
  }
  lVar8 = (*(code *)(&PTR_FUN_0427cdc8)[lVar8 * 2])(&local_44);
  if (lVar8 != 0) {
    uVar1 = *(undefined1 *)(param_3 + 0x7d);
    uVar6 = FUN_0295084c(param_3,0xc);
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x88);
    lVar10 = *(long *)(lVar9 + 0x14d0);
    if (lVar10 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x78);
      *(undefined8 *)(lVar9 + 0x14d0) = *(undefined8 *)(lVar10 + 0x18);
      lVar7 = *(long *)(lVar10 + 0x10);
      lVar11 = *(long *)(lVar10 + 0x18);
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x18) = lVar11;
      }
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x10) = lVar7;
      }
      *(undefined8 *)(lVar10 + 0x50) = 0;
      *(undefined8 *)(lVar10 + 0x58) = 0;
      uVar5 = 0x2000000;
      if (local_44 >> 0x10 != 0) {
        uVar5 = ~(local_44 >> 0x10) * 0x1000000 + 0x9000000;
      }
      uVar5 = uVar5 | uVar6 & 0xffff;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x48) = 0;
      *(undefined8 *)(lVar10 + 0x30) = 0;
      *(undefined8 *)(lVar10 + 0x38) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(long *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(uint *)(lVar10 + 0x34) = uVar5;
      *(undefined1 *)(lVar10 + 0x30) = 4;
      *(long *)(lVar10 + 0x20) = lVar8;
      *(undefined1 *)(lVar10 + 0x3a) = uVar1;
      *(short *)(lVar10 + 0x38) = (short)iVar4;
      *(undefined1 *)(lVar10 + 0x3b) = uVar1;
      *(uint *)(lVar10 + 0x3c) = (uint)uVar2 | (local_44 & 0xff) << 0x10 | 0x20000000;
      lVar8 = *(long *)(lVar9 + 0x14c8);
      if (lVar8 == 0) {
        *(long *)(lVar9 + 0x14c8) = lVar10;
      }
      else if (*(uint *)(lVar8 + 0x34) < uVar5) {
        *(long *)(lVar10 + 0x18) = lVar8;
        *(long *)(lVar8 + 0x10) = lVar10;
        *(long *)(lVar9 + 0x14c8) = lVar10;
      }
      else {
        do {
          lVar9 = *(long *)(lVar8 + 0x18);
          if (lVar9 == 0) {
            *(long *)(lVar8 + 0x18) = lVar10;
            *(long *)(lVar10 + 0x10) = lVar8;
            return;
          }
          lVar8 = lVar9;
        } while (uVar5 <= *(uint *)(lVar9 + 0x34));
        lVar8 = *(long *)(lVar9 + 0x10);
        *(long *)(lVar8 + 0x18) = lVar10;
        *(long *)(lVar10 + 0x10) = lVar8;
        *(long *)(lVar10 + 0x18) = lVar9;
        *(long *)(lVar9 + 0x10) = lVar10;
      }
    }
  }
  return;
}


