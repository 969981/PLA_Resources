/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02957300; name: FUN_02957300
 */


undefined8 FUN_02957300(uint param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 & 0xffff;
  uVar1 = 1;
  if (param_1 < 0x17e) {
    if ((param_1 - 0x76 < 0x31) &&
       ((1L << ((ulong)(param_1 - 0x76) & 0x3f) & 0x1800000000003U) != 0)) {
      return 1;
    }
    if ((param_1 - 0xd6 < 0x3d) &&
       ((1L << ((ulong)(param_1 - 0xd6) & 0x3f) & 0x1020000000000001U) != 0)) {
      return 1;
    }
    if (param_1 == 0x66) {
      return 1;
    }
  }
  else {
    switch(param_1) {
    case 0x232:
    case 0x25e:
    case 0x25f:
    case 0x292:
    case 0x2b7:
    case 0x2b8:
    case 0x2b9:
    case 0x2ba:
    case 699:
    case 700:
    case 0x2bd:
    case 0x2be:
    case 0x2bf:
    case 0x2cf:
    case 0x2d3:
    case 0x2d4:
    case 0x2d5:
    case 0x2d6:
    case 0x2d7:
    case 0x2d8:
      goto switchD_02957330_caseD_232;
    case 0x233:
    case 0x234:
    case 0x235:
    case 0x236:
    case 0x237:
    case 0x238:
    case 0x239:
    case 0x23a:
    case 0x23b:
    case 0x23c:
    case 0x23d:
    case 0x23e:
    case 0x23f:
    case 0x240:
    case 0x241:
    case 0x242:
    case 0x243:
    case 0x244:
    case 0x245:
    case 0x246:
    case 0x247:
    case 0x248:
    case 0x249:
    case 0x24a:
    case 0x24b:
    case 0x24c:
    case 0x24d:
    case 0x24e:
    case 0x24f:
    case 0x250:
    case 0x251:
    case 0x252:
    case 0x253:
    case 0x254:
    case 0x255:
    case 0x256:
    case 599:
    case 600:
    case 0x259:
    case 0x25a:
    case 0x25b:
    case 0x25c:
    case 0x25d:
    case 0x260:
    case 0x261:
    case 0x262:
    case 0x263:
    case 0x264:
    case 0x265:
    case 0x266:
    case 0x267:
    case 0x268:
    case 0x269:
    case 0x26a:
    case 0x26b:
    case 0x26c:
    case 0x26d:
    case 0x26e:
    case 0x26f:
    case 0x270:
    case 0x271:
    case 0x272:
    case 0x273:
    case 0x274:
    case 0x275:
    case 0x276:
    case 0x277:
    case 0x278:
    case 0x279:
    case 0x27a:
    case 0x27b:
    case 0x27c:
    case 0x27d:
    case 0x27e:
    case 0x27f:
    case 0x280:
    case 0x281:
    case 0x282:
    case 0x283:
    case 0x284:
    case 0x285:
    case 0x286:
    case 0x287:
    case 0x288:
    case 0x289:
    case 0x28a:
    case 0x28b:
    case 0x28c:
    case 0x28d:
    case 0x28e:
    case 0x28f:
    case 0x290:
    case 0x291:
    case 0x293:
    case 0x294:
    case 0x295:
    case 0x296:
    case 0x297:
    case 0x298:
    case 0x299:
    case 0x29a:
    case 0x29b:
    case 0x29c:
    case 0x29d:
    case 0x29e:
    case 0x29f:
    case 0x2a0:
    case 0x2a1:
    case 0x2a2:
    case 0x2a3:
    case 0x2a4:
    case 0x2a5:
    case 0x2a6:
    case 0x2a7:
    case 0x2a8:
    case 0x2a9:
    case 0x2aa:
    case 0x2ab:
    case 0x2ac:
    case 0x2ad:
    case 0x2ae:
    case 0x2af:
    case 0x2b0:
    case 0x2b1:
    case 0x2b2:
    case 0x2b3:
    case 0x2b4:
    case 0x2b5:
    case 0x2b6:
    case 0x2c0:
    case 0x2c1:
    case 0x2c2:
    case 0x2c3:
    case 0x2c4:
    case 0x2c5:
    case 0x2c6:
    case 0x2c7:
    case 0x2c8:
    case 0x2c9:
    case 0x2ca:
    case 0x2cb:
    case 0x2cc:
    case 0x2cd:
    case 0x2ce:
    case 0x2d0:
    case 0x2d1:
    case 0x2d2:
      break;
    default:
      if (param_1 - 0x17e < 2) {
        return 1;
      }
      if (param_1 == 0x1c0) {
        return 1;
      }
    }
  }
  uVar1 = 0;
switchD_02957330_caseD_232:
  return uVar1;
}


