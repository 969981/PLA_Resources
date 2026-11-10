/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a21f10; name: FUN_02a21f10
 */


undefined8 FUN_02a21f10(long *param_1,byte param_2,uint param_3)

{
  short sVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (param_2 < 6) {
    lVar3 = 0;
  }
  else if (param_2 < 0xc) {
    lVar3 = 2;
  }
  else if (param_2 < 0x12) {
    lVar3 = 1;
  }
  else if (param_2 < 0x18) {
    lVar3 = 3;
  }
  else {
    lVar3 = (ulong)(param_2 < 0x1e) << 2;
  }
  if (*(uint *)(*param_1 + 0x110) < 3) {
    cVar2 = (&PTR_DAT_0427c9a8)[(int)*(uint *)(*param_1 + 0x110)][lVar3];
  }
  else {
    cVar2 = '\x02';
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_1[6] + 8) + 0x88) + 0x14c8);
  if (lVar3 != 0) {
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a21f8c;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a21fdc;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a21f8c:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 0) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a21fdc;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a21fdc:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    lVar5 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a21ff8;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22058;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a21ff8:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    if (*(short *)(lVar4 + 0x38) == 1) goto LAB_02a2206c;
    do {
      lVar4 = *(long *)(lVar4 + 0x18);
      if (lVar4 == 0) break;
    } while ((((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
             ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0)) || (*(short *)(lVar4 + 0x38) != 1));
LAB_02a22058:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a22074;
    do {
      do {
        lVar5 = *(long *)(lVar5 + 0x18);
        if (lVar5 == 0) goto LAB_02a220c8;
LAB_02a2206c:
        uVar6 = *(uint *)(lVar5 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a22074:
    } while (((*(char *)(lVar5 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar5 + 0x3a) != cVar2));
    while (*(short *)(lVar5 + 0x38) != 2) {
      do {
        lVar5 = *(long *)(lVar5 + 0x18);
        if (lVar5 == 0) goto LAB_02a220c8;
      } while (((*(char *)(lVar5 + 0x30) != '\x02') || (*(char *)(lVar5 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar5 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a220c8:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a220e4;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22138;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a220e4:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 3) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22138;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a22138:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a22154;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a221a8;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a22154:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 4) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a221a8;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a221a8:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a221c4;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22218;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a221c4:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 5) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22218;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a22218:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a22234;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22288;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a22234:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 6) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22288;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a22288:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a222a4;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a222f8;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a222a4:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 7) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a222f8;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a222f8:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a22314;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22368;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a22314:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 8) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22368;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a22368:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    while( true ) {
      if (((((uVar6 >> 0x1d & 1) != 0) && (*(char *)(lVar4 + 0x30) == '\x02')) &&
          ((uVar6 >> 0x1a & 1) == 0)) && (*(char *)(lVar4 + 0x3a) == cVar2)) {
        sVar1 = *(short *)(lVar4 + 0x38);
        do {
          if (sVar1 == 9) {
            return 1;
          }
          do {
            lVar4 = *(long *)(lVar4 + 0x18);
            if (lVar4 == 0) goto LAB_02a223e8;
          } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
                  ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
          sVar1 = *(short *)(lVar4 + 0x38);
        } while( true );
      }
      lVar4 = *(long *)(lVar4 + 0x18);
      if (lVar4 == 0) break;
      uVar6 = *(uint *)(lVar4 + 0x3c);
    }
LAB_02a223e8:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    while( true ) {
      if ((((uVar6 >> 0x1d & 1) != 0) && (*(char *)(lVar4 + 0x30) == '\x02')) &&
         (((uVar6 >> 0x1a & 1) == 0 && (*(char *)(lVar4 + 0x3a) == cVar2)))) {
        sVar1 = *(short *)(lVar4 + 0x38);
        do {
          if (sVar1 == 10) {
            return 1;
          }
          do {
            lVar4 = *(long *)(lVar4 + 0x18);
            if (lVar4 == 0) goto LAB_02a22468;
          } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
                  ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
          sVar1 = *(short *)(lVar4 + 0x38);
        } while( true );
      }
      lVar4 = *(long *)(lVar4 + 0x18);
      if (lVar4 == 0) break;
      uVar6 = *(uint *)(lVar4 + 0x3c);
    }
LAB_02a22468:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a22484;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a224d8;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a22484:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 0xb) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a224d8;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a224d8:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a224f4;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22548;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a224f4:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 0xc) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22548;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a22548:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a22564;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a225b8;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a22564:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 0xd) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a225b8;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a225b8:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a225d4;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22628;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a225d4:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 0xe) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22628;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a22628:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    while( true ) {
      if (((((uVar6 >> 0x1d & 1) != 0) && (*(char *)(lVar4 + 0x30) == '\x02')) &&
          ((uVar6 >> 0x1a & 1) == 0)) && (*(char *)(lVar4 + 0x3a) == cVar2)) {
        sVar1 = *(short *)(lVar4 + 0x38);
        do {
          if (sVar1 == 0xf) {
            return 1;
          }
          do {
            lVar4 = *(long *)(lVar4 + 0x18);
            if (lVar4 == 0) goto LAB_02a226a8;
          } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
                  ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
          sVar1 = *(short *)(lVar4 + 0x38);
        } while( true );
      }
      lVar4 = *(long *)(lVar4 + 0x18);
      if (lVar4 == 0) break;
      uVar6 = *(uint *)(lVar4 + 0x3c);
    }
LAB_02a226a8:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a226c4;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22724;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a226c4:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 0x10) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a22724;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
    if ((param_3 & 1) != 0) {
      return 1;
    }
LAB_02a22724:
    uVar6 = *(uint *)(lVar3 + 0x3c);
    lVar4 = lVar3;
    if ((uVar6 >> 0x1d & 1) != 0) goto LAB_02a22740;
    do {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a227a0;
        uVar6 = *(uint *)(lVar4 + 0x3c);
      } while ((uVar6 >> 0x1d & 1) == 0);
LAB_02a22740:
    } while (((*(char *)(lVar4 + 0x30) != '\x02') || ((uVar6 >> 0x1a & 1) != 0)) ||
            (*(char *)(lVar4 + 0x3a) != cVar2));
    while (*(short *)(lVar4 + 0x38) != 0x11) {
      do {
        lVar4 = *(long *)(lVar4 + 0x18);
        if (lVar4 == 0) goto LAB_02a227a0;
      } while (((*(char *)(lVar4 + 0x30) != '\x02') || (*(char *)(lVar4 + 0x3a) != cVar2)) ||
              ((*(byte *)(lVar4 + 0x3f) >> 2 & 1) != 0));
    }
LAB_02a227a0:
    do {
      if (((((*(uint *)(lVar3 + 0x3c) >> 0x1d & 1) != 0) && (*(char *)(lVar3 + 0x30) == '\x02')) &&
          ((*(uint *)(lVar3 + 0x3c) >> 0x1a & 1) == 0)) && (*(char *)(lVar3 + 0x3a) == cVar2)) {
        if (*(short *)(lVar3 + 0x38) == 0x12) {
          return 0;
        }
        do {
          lVar3 = *(long *)(lVar3 + 0x18);
          if (lVar3 == 0) {
            return 0;
          }
        } while (((*(char *)(lVar3 + 0x30) != '\x02') || (*(char *)(lVar3 + 0x3a) != cVar2)) ||
                (((*(byte *)(lVar3 + 0x3f) >> 2 & 1) != 0 || (*(short *)(lVar3 + 0x38) != 0x12))));
        return 0;
      }
      lVar3 = *(long *)(lVar3 + 0x18);
    } while (lVar3 != 0);
  }
  return 0;
}


