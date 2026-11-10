/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a39100; name: FUN_02a39100
 */


void FUN_02a39100(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x88) + 0x14c8);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if ((((*(uint *)(lVar2 + 0x3c) >> 0x1d & 1) != 0) &&
        ((*(uint *)(lVar2 + 0x3c) >> 0x1a & 1) == 0)) && (*(char *)(lVar2 + 0x30) == '\x03')) break;
    lVar2 = *(long *)(lVar2 + 0x18);
  }
  cVar5 = '\x03';
  lVar4 = *(long *)(lVar2 + 0x18);
  if (lVar4 == 0) goto LAB_02a39168;
  do {
    lVar6 = lVar4;
    do {
      lVar3 = lVar2;
      if ((*(char *)(lVar6 + 0x30) == cVar5) && ((*(byte *)(lVar6 + 0x3f) >> 2 & 1) == 0)) break;
      lVar6 = *(long *)(lVar6 + 0x18);
    } while (lVar6 != 0);
    while( true ) {
      lVar2 = lVar6;
      if ((*(ushort *)(lVar3 + 0x38) == param_2) &&
         (uVar1 = *(uint *)(lVar3 + 0x3c), (uVar1 >> 0x1d & 1) != 0)) {
        if ((uVar1 >> 0x18 & 1) == 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x88);
          if (*(long *)(lVar6 + 0x14c8) == lVar3) {
            *(long *)(lVar6 + 0x14c8) = lVar4;
            lVar4 = *(long *)(lVar3 + 0x18);
          }
          lVar7 = *(long *)(lVar3 + 0x10);
          if (lVar7 != 0) {
            *(long *)(lVar7 + 0x18) = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar7;
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
          lVar4 = *(long *)(lVar6 + 0x14d0);
          *(long *)(lVar3 + 0x18) = lVar4;
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar3;
          }
          *(long *)(lVar6 + 0x14d0) = lVar3;
        }
        else {
          *(uint *)(lVar3 + 0x3c) = uVar1 | 0x4000000;
        }
      }
      if (lVar2 == 0) {
        return;
      }
      cVar5 = *(char *)(lVar2 + 0x30);
      lVar4 = *(long *)(lVar2 + 0x18);
      if (lVar4 != 0) break;
LAB_02a39168:
      lVar3 = lVar2;
      lVar6 = 0;
    }
  } while( true );
}


