/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d8060; name: FUN_003d8060
 */


undefined8 FUN_003d8060(int param_1)

{
  if (param_1 < 0x1f6) {
    switch(param_1) {
    case 400:
      return 0xd;
    case 0x191:
      return 0x10;
    case 0x192:
    case 0x195:
    case 0x196:
    case 0x197:
    case 0x198:
    case 0x199:
    case 0x19a:
    case 0x19b:
    case 0x19c:
    case 0x19d:
    case 0x19e:
    case 0x19f:
    case 0x1a0:
    case 0x1a1:
    case 0x1a2:
    case 0x1a3:
    case 0x1a4:
    case 0x1a5:
    case 0x1a6:
    case 0x1a7:
    case 0x1a8:
    case 0x1a9:
    case 0x1aa:
    case 0x1ab:
    case 0x1ac:
      break;
    case 0x193:
      return 7;
    case 0x194:
      return 0xc;
    case 0x1ad:
      return 0xe;
    default:
      if (param_1 == 200) {
        return 0;
      }
    }
  }
  else {
    if (param_1 == 0x1f6) {
      return 0xe;
    }
    if (param_1 == 0x1f7) {
      return 0xe;
    }
    if (param_1 == 0x1f8) {
      return 0xe;
    }
  }
  return 2;
}


