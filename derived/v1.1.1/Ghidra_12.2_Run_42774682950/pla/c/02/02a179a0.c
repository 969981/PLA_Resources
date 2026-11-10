/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a179a0; name: FUN_02a179a0
 */


void FUN_02a179a0(long param_1,long param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x88);
  lVar5 = *(long *)(lVar4 + 0x14c8);
  if (lVar5 == 0) {
    return;
  }
  cVar3 = *(char *)(param_2 + 0x7d);
  uVar6 = *(uint *)(lVar5 + 0x3c);
  if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a179cc;
  do {
    do {
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) {
        return;
      }
      uVar6 = *(uint *)(lVar5 + 0x3c);
    } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a179cc:
  } while (((*(char *)(lVar5 + 0x30) != '\0') || ((uVar6 >> 0x1a & 1) != 0)) ||
          (*(char *)(lVar5 + 0x3a) != cVar3));
  do {
    while (*(ushort *)(lVar5 + 0x38) != param_3) {
      lVar7 = *(long *)(lVar5 + 0x18);
      if (lVar7 == 0) {
        return;
      }
      pcVar1 = (char *)(lVar5 + 0x30);
      pcVar2 = (char *)(lVar5 + 0x3a);
      while (((*(char *)(lVar7 + 0x30) != *pcVar1 || (*(char *)(lVar7 + 0x3a) != *pcVar2)) ||
             (lVar5 = lVar7, (*(byte *)(lVar7 + 0x3f) >> 2 & 1) != 0))) {
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) {
          return;
        }
      }
    }
    uVar6 = *(uint *)(lVar5 + 0x3c);
    if ((uVar6 >> 0x1d & 1) == 0) {
LAB_02a17a2c:
      lVar5 = *(long *)(lVar4 + 0x14c8);
    }
    else {
      if ((uVar6 >> 0x18 & 1) != 0) {
        *(uint *)(lVar5 + 0x3c) = uVar6 | 0x4000000;
        goto LAB_02a17a2c;
      }
      lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x88);
      if (*(long *)(lVar7 + 0x14c8) == lVar5) {
        *(undefined8 *)(lVar7 + 0x14c8) = *(undefined8 *)(lVar5 + 0x18);
      }
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)(lVar5 + 0x18);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x18) = lVar9;
      }
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x10) = lVar8;
      }
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
      lVar8 = *(long *)(lVar7 + 0x14d0);
      *(long *)(lVar5 + 0x18) = lVar8;
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x10) = lVar5;
      }
      *(long *)(lVar7 + 0x14d0) = lVar5;
      lVar5 = *(long *)(lVar4 + 0x14c8);
    }
    while( true ) {
      if (lVar5 == 0) {
        return;
      }
      if ((((*(uint *)(lVar5 + 0x3c) >> 0x1d & 1) != 0) && (*(char *)(lVar5 + 0x30) == '\0')) &&
         (((*(uint *)(lVar5 + 0x3c) >> 0x1a & 1) == 0 && (*(char *)(lVar5 + 0x3a) == cVar3))))
      break;
      lVar5 = *(long *)(lVar5 + 0x18);
    }
  } while( true );
}


