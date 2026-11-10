/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027851a0; name: FUN_027851a0
 */


long FUN_027851a0(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  
  lVar4 = 0;
  if (param_1 != (long *)0x0) {
    if ((long *)*param_1 == (long *)0x0) {
      pcVar1 = (char *)FUN_0277de00("void>::n() [T = void]");
    }
    else {
      pcVar1 = (char *)(**(code **)(*(long *)*param_1 + 0x10))();
    }
    lVar4 = 0;
    pcVar2 = "nn::err::ErrorCode>::n() [T = nn::err::ErrorCode]";
    do {
      if ("static const char *boost::detail::ctti<nn::err::ErrorCode>::n() [T = nn::err::ErrorCode]"
          [lVar4 + 0x27] == 'T') {
        if (lVar4 == 0x31) break;
        if ("static const char *boost::detail::ctti<nn::err::ErrorCode>::n() [T = nn::err::ErrorCode]"
            [lVar4 + 0x28] == ' ') {
          if (lVar4 == 0x30) break;
          if ("static const char *boost::detail::ctti<nn::err::ErrorCode>::n() [T = nn::err::ErrorCode]"
              [lVar4 + 0x29] == '=') {
            if (lVar4 == 0x2f) break;
            if ("static const char *boost::detail::ctti<nn::err::ErrorCode>::n() [T = nn::err::ErrorCode]"
                [lVar4 + 0x2a] == ' ') {
              if (lVar4 == 0x32) {
                pcVar2 = "nn::err::ErrorCode>::n() [T = nn::err::ErrorCode]";
                cVar3 = *pcVar1;
                if (cVar3 != '\0') goto LAB_02785270;
                goto LAB_02785288;
              }
              pcVar2 = "static const char *boost::detail::ctti<nn::err::ErrorCode>::n() [T = nn::err::ErrorCode]"
                       + lVar4 + 0x2b;
              break;
            }
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x32);
    cVar3 = *pcVar1;
    if (cVar3 != '\0') {
LAB_02785270:
      do {
        pcVar1 = pcVar1 + 1;
        if (*pcVar2 != cVar3) break;
        cVar3 = *pcVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar3 != '\0');
    }
LAB_02785288:
    if (*pcVar2 == cVar3) {
      lVar4 = *param_1 + 8;
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
}


