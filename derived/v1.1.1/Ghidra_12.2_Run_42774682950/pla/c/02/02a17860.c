/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a17860; name: FUN_02a17860
 */


void FUN_02a17860(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x88) + 0x14c8);
  if (lVar3 == 0) {
    return;
  }
  cVar2 = *(char *)(param_2 + 0x7d);
  uVar1 = *(uint *)(lVar3 + 0x3c);
  while (((((uVar1 >> 0x1d & 1) == 0 || (*(char *)(lVar3 + 0x30) != '\0')) ||
          ((uVar1 >> 0x1a & 1) != 0)) || (*(char *)(lVar3 + 0x3a) != cVar2))) {
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 == 0) {
      return;
    }
    uVar1 = *(uint *)(lVar3 + 0x3c);
  }
  cVar7 = '\0';
  lVar5 = *(long *)(lVar3 + 0x18);
  if (lVar5 == 0) goto LAB_02a178e4;
  do {
    lVar6 = lVar5;
    do {
      lVar4 = lVar3;
      if (((*(char *)(lVar6 + 0x30) == cVar7) && (*(char *)(lVar6 + 0x3a) == cVar2)) &&
         ((*(byte *)(lVar6 + 0x3f) >> 2 & 1) == 0)) break;
      lVar6 = *(long *)(lVar6 + 0x18);
    } while (lVar6 != 0);
    while( true ) {
      lVar3 = lVar6;
      if (((*(ushort *)(lVar4 + 0x38) == param_3) && (*(int *)(lVar4 + 0x58) == 0)) &&
         (uVar1 = *(uint *)(lVar4 + 0x3c), (uVar1 >> 0x1d & 1) != 0)) {
        if ((uVar1 >> 0x18 & 1) == 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x88);
          if (*(long *)(lVar6 + 0x14c8) == lVar4) {
            *(long *)(lVar6 + 0x14c8) = lVar5;
            lVar5 = *(long *)(lVar4 + 0x18);
          }
          lVar8 = *(long *)(lVar4 + 0x10);
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x18) = lVar5;
          }
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x10) = lVar8;
          }
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x40) = 0;
          *(undefined8 *)(lVar4 + 0x48) = 0;
          *(undefined8 *)(lVar4 + 0x30) = 0;
          *(undefined8 *)(lVar4 + 0x38) = 0;
          *(undefined8 *)(lVar4 + 0x20) = 0;
          *(undefined8 *)(lVar4 + 0x28) = 0;
          *(long *)(lVar4 + 0x10) = 0;
          *(undefined8 *)(lVar4 + 0x18) = 0;
          lVar5 = *(long *)(lVar6 + 0x14d0);
          *(long *)(lVar4 + 0x18) = lVar5;
          if (lVar5 != 0) {
            *(long *)(lVar5 + 0x10) = lVar4;
          }
          *(long *)(lVar6 + 0x14d0) = lVar4;
        }
        else {
          *(uint *)(lVar4 + 0x3c) = uVar1 | 0x4000000;
        }
      }
      if (lVar3 == 0) {
        return;
      }
      cVar7 = *(char *)(lVar3 + 0x30);
      cVar2 = *(char *)(lVar3 + 0x3a);
      lVar5 = *(long *)(lVar3 + 0x18);
      if (lVar5 != 0) break;
LAB_02a178e4:
      lVar4 = lVar3;
      lVar6 = 0;
    }
  } while( true );
}


