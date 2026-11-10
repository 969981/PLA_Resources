/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099f36c; name: FUN_0099f36c
 */


int FUN_0099f36c(long param_1,char *param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x330) + 0xd0),param_5);
  if (lVar4 != 0) {
    sVar2 = *(short *)(*(long *)(lVar4 + 0x70) + 0x70);
    cVar1 = *(char *)(*(long *)(lVar4 + 0x70) + 0x369);
    switch(param_4) {
    case 0x33b:
      if (sVar2 == 0x387) {
        lVar4 = 0xe;
LAB_0099f4b4:
        iVar3 = snprintf(param_2,(long)param_3,"%s.wbin",(&PTR_s_ew449_pokeonly_041c3fc0)[lVar4 * 3]
                        );
        return iVar3;
      }
      break;
    case 0x33c:
      if (sVar2 == 899) {
        lVar4 = 5;
        goto LAB_0099f4b4;
      }
      break;
    case 0x33d:
    case 0x33e:
    case 0x340:
    case 0x341:
    case 0x342:
    case 0x343:
    case 0x344:
    case 0x347:
    case 0x349:
    case 0x34a:
    case 0x34c:
      break;
    case 0x33f:
      if (sVar2 == 0x389) {
        if (cVar1 == '\0') {
          lVar4 = 6;
        }
        else {
          if (cVar1 != '\x01') break;
          lVar4 = 7;
        }
        goto LAB_0099f4b4;
      }
      break;
    case 0x345:
      if (sVar2 == 0x225 && cVar1 == '\x01') {
        lVar4 = 8;
        goto LAB_0099f4b4;
      }
      break;
    case 0x346:
      if (sVar2 == 0x385) {
        lVar4 = 9;
        goto LAB_0099f4b4;
      }
      break;
    case 0x348:
      if (sVar2 == 0x274 && cVar1 == '\x01') {
        lVar4 = 10;
        goto LAB_0099f4b4;
      }
      break;
    case 0x34b:
      if (sVar2 == 0x2d4 && cVar1 == '\x01') {
        lVar4 = 0xb;
        goto LAB_0099f4b4;
      }
      break;
    case 0x34d:
      if (sVar2 == 0x1f7 && cVar1 == '\x01') {
        lVar4 = 0xc;
        goto LAB_0099f4b4;
      }
      break;
    default:
      switch(param_4) {
      case 0x1c1:
        if (sVar2 == 0x1ed) {
          lVar4 = 0;
          goto LAB_0099f4b4;
        }
        break;
      case 0x1cb:
        if (sVar2 == 0x1e3) {
          if (cVar1 == '\0') {
            lVar4 = 1;
          }
          else {
            if (cVar1 != '\x01') break;
            lVar4 = 2;
          }
          goto LAB_0099f4b4;
        }
        break;
      case 0x1cc:
        if (sVar2 == 0x1e4) {
          if (cVar1 == '\0') {
            lVar4 = 3;
          }
          else {
            if (cVar1 != '\x01') break;
            lVar4 = 4;
          }
          goto LAB_0099f4b4;
        }
        break;
      case 0x1d3:
        if (sVar2 == 0x1e7 && cVar1 == '\x01') {
          lVar4 = 0xd;
          goto LAB_0099f4b4;
        }
      }
    }
  }
  iVar3 = snprintf(param_2,(long)param_3,"ew%03d.wbin",param_4);
  return iVar3;
}


