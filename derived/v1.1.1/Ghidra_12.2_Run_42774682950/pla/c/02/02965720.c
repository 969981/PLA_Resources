/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02965720; name: FUN_02965720
 */


undefined8 FUN_02965720(long param_1,uint param_2,char param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x88);
  lVar3 = *(long *)(lVar1 + 0x14c8);
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = *(uint *)(lVar3 + 0x3c);
  lVar2 = lVar3;
  if ((uVar4 >> 0x1d & 1) != 0) goto LAB_0296574c;
  do {
    do {
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 == 0) {
        return 0;
      }
      uVar4 = *(uint *)(lVar2 + 0x3c);
    } while ((uVar4 >> 0x1d & 1) == 0);
LAB_0296574c:
  } while (((*(char *)(lVar2 + 0x30) != '\x01') || ((uVar4 >> 0x1a & 1) != 0)) ||
          (*(char *)(lVar2 + 0x3a) != param_3));
  if (*(ushort *)(lVar2 + 0x38) != param_2) {
    do {
      lVar2 = *(long *)(lVar2 + 0x18);
      while( true ) {
        if (lVar2 == 0) {
          return 0;
        }
        if (((*(char *)(lVar2 + 0x30) == '\x01') && (*(char *)(lVar2 + 0x3a) == param_3)) &&
           (uVar4 = *(uint *)(lVar2 + 0x3c), (uVar4 >> 0x1a & 1) == 0)) break;
        lVar2 = *(long *)(lVar2 + 0x18);
      }
    } while (*(ushort *)(lVar2 + 0x38) != param_2);
    if ((uVar4 >> 0x1d & 1) == 0) {
      return 1;
    }
  }
  if ((uVar4 >> 0x18 & 1) != 0) {
    *(uint *)(lVar2 + 0x3c) = uVar4 | 0x4000000;
    return 1;
  }
  if (lVar3 == lVar2) {
    *(undefined8 *)(lVar1 + 0x14c8) = *(undefined8 *)(lVar3 + 0x18);
  }
  lVar3 = *(long *)(lVar2 + 0x10);
  lVar5 = *(long *)(lVar2 + 0x18);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = lVar5;
  }
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = lVar3;
  }
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(long *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  lVar3 = *(long *)(lVar1 + 0x14d0);
  *(long *)(lVar2 + 0x18) = lVar3;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = lVar2;
  }
  *(long *)(lVar1 + 0x14d0) = lVar2;
  return 1;
}


