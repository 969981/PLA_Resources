/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a38210; name: FUN_02a38210
 */


void FUN_02a38210(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x88);
  lVar3 = *(long *)(lVar2 + 0x14c8);
  if (lVar3 != 0) {
    cVar1 = *(char *)(param_2 + 0x7d);
    uVar4 = *(uint *)(lVar3 + 0x3c);
    if ((uVar4 >> 0x1d & 1) != 0) goto LAB_02a3823c;
    do {
      do {
        lVar3 = *(long *)(lVar3 + 0x18);
        if (lVar3 == 0) {
          return;
        }
        uVar4 = *(uint *)(lVar3 + 0x3c);
      } while ((uVar4 >> 0x1d & 1) == 0);
LAB_02a3823c:
    } while (((*(char *)(lVar3 + 0x30) != '\x04') || ((uVar4 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar3 + 0x3a) != cVar1));
    while (*(int *)(lVar3 + 0x50) == 0) {
      if ((uVar4 >> 0x1d & 1) == 0) {
LAB_02a382d8:
        lVar3 = *(long *)(lVar2 + 0x14c8);
      }
      else {
        if ((uVar4 >> 0x18 & 1) != 0) {
          *(uint *)(lVar3 + 0x3c) = uVar4 | 0x4000000;
          goto LAB_02a382d8;
        }
        lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x88);
        if (*(long *)(lVar5 + 0x14c8) == lVar3) {
          *(undefined8 *)(lVar5 + 0x14c8) = *(undefined8 *)(lVar3 + 0x18);
        }
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar7 = *(long *)(lVar3 + 0x18);
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x18) = lVar7;
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x10) = lVar6;
        }
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined8 *)(lVar3 + 0x58) = 0;
        *(undefined8 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x48) = 0;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        *(undefined8 *)(lVar3 + 0x38) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x28) = 0;
        *(long *)(lVar3 + 0x10) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        lVar6 = *(long *)(lVar5 + 0x14d0);
        *(long *)(lVar3 + 0x18) = lVar6;
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x10) = lVar3;
        }
        *(long *)(lVar5 + 0x14d0) = lVar3;
        lVar3 = *(long *)(lVar2 + 0x14c8);
      }
      while( true ) {
        if (lVar3 == 0) {
          return;
        }
        uVar4 = *(uint *)(lVar3 + 0x3c);
        if ((((uVar4 >> 0x1d & 1) != 0) && (*(char *)(lVar3 + 0x30) == '\x04')) &&
           (((uVar4 >> 0x1a & 1) == 0 && (*(char *)(lVar3 + 0x3a) == cVar1)))) break;
        lVar3 = *(long *)(lVar3 + 0x18);
      }
    }
  }
  return;
}


