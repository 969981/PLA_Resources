/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3a560; name: FUN_02a3a560
 */


void FUN_02a3a560(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x88);
  lVar6 = *(long *)(lVar5 + 0x14c8);
  if (lVar6 == 0) {
    return;
  }
  cVar4 = *(char *)(param_2 + 0x7d);
  uVar3 = *(uint *)(param_2 + 0x290);
  uVar7 = *(uint *)(lVar6 + 0x3c);
  if ((uVar7 >> 0x1d & 1) != 0) goto LAB_02a3a590;
  do {
    do {
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 == 0) {
        return;
      }
      uVar7 = *(uint *)(lVar6 + 0x3c);
    } while ((uVar7 >> 0x1d & 1) == 0);
LAB_02a3a590:
  } while (((*(char *)(lVar6 + 0x30) != '\x06') || ((uVar7 >> 0x1a & 1) != 0)) ||
          (*(char *)(lVar6 + 0x3a) != cVar4));
  do {
    while (uVar3 != *(ushort *)(lVar6 + 0x38)) {
      lVar8 = *(long *)(lVar6 + 0x18);
      if (lVar8 == 0) {
        return;
      }
      pcVar1 = (char *)(lVar6 + 0x30);
      pcVar2 = (char *)(lVar6 + 0x3a);
      while (((*(char *)(lVar8 + 0x30) != *pcVar1 || (*(char *)(lVar8 + 0x3a) != *pcVar2)) ||
             (lVar6 = lVar8, (*(byte *)(lVar8 + 0x3f) >> 2 & 1) != 0))) {
        lVar8 = *(long *)(lVar8 + 0x18);
        if (lVar8 == 0) {
          return;
        }
      }
    }
    uVar7 = *(uint *)(lVar6 + 0x3c);
    if ((uVar7 >> 0x1d & 1) == 0) {
LAB_02a3a5f4:
      lVar6 = *(long *)(lVar5 + 0x14c8);
    }
    else {
      if ((uVar7 >> 0x18 & 1) != 0) {
        *(uint *)(lVar6 + 0x3c) = uVar7 | 0x4000000;
        goto LAB_02a3a5f4;
      }
      lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x88);
      if (*(long *)(lVar8 + 0x14c8) == lVar6) {
        *(undefined8 *)(lVar8 + 0x14c8) = *(undefined8 *)(lVar6 + 0x18);
      }
      lVar9 = *(long *)(lVar6 + 0x10);
      lVar10 = *(long *)(lVar6 + 0x18);
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x18) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar9;
      }
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined8 *)(lVar6 + 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x30) = 0;
      *(undefined8 *)(lVar6 + 0x38) = 0;
      *(undefined8 *)(lVar6 + 0x20) = 0;
      *(undefined8 *)(lVar6 + 0x28) = 0;
      *(long *)(lVar6 + 0x10) = 0;
      *(undefined8 *)(lVar6 + 0x18) = 0;
      lVar9 = *(long *)(lVar8 + 0x14d0);
      *(long *)(lVar6 + 0x18) = lVar9;
      if (lVar9 != 0) {
        *(long *)(lVar9 + 0x10) = lVar6;
      }
      *(long *)(lVar8 + 0x14d0) = lVar6;
      lVar6 = *(long *)(lVar5 + 0x14c8);
    }
    while( true ) {
      if (lVar6 == 0) {
        return;
      }
      if ((((*(uint *)(lVar6 + 0x3c) >> 0x1d & 1) != 0) && (*(char *)(lVar6 + 0x30) == '\x06')) &&
         (((*(uint *)(lVar6 + 0x3c) >> 0x1a & 1) == 0 && (*(char *)(lVar6 + 0x3a) == cVar4))))
      break;
      lVar6 = *(long *)(lVar6 + 0x18);
    }
  } while( true );
}


