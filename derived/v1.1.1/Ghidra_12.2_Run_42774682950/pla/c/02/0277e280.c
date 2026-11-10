/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0277e280; name: FUN_0277e280
 */


long FUN_0277e280(long *param_1)

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
    pcVar2 = "nn::Result>::n() [T = nn::Result]";
    do {
      if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"[lVar4 + 0x27]
          == 'T') {
        if (lVar4 == 0x21) break;
        if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"[lVar4 + 0x28]
            == ' ') {
          if (lVar4 == 0x20) break;
          if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"
              [lVar4 + 0x29] == '=') {
            if (lVar4 == 0x1f) break;
            if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"
                [lVar4 + 0x2a] == ' ') {
              if (lVar4 == 0x22) {
                pcVar2 = "nn::Result>::n() [T = nn::Result]";
                cVar3 = *pcVar1;
                if (cVar3 != '\0') goto LAB_0277e350;
                goto LAB_0277e368;
              }
              pcVar2 = "static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]" +
                       lVar4 + 0x2b;
              break;
            }
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x22);
    cVar3 = *pcVar1;
    if (cVar3 != '\0') {
LAB_0277e350:
      do {
        pcVar1 = pcVar1 + 1;
        if (*pcVar2 != cVar3) break;
        cVar3 = *pcVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar3 != '\0');
    }
LAB_0277e368:
    if (*pcVar2 == cVar3) {
      lVar4 = *param_1 + 8;
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
}


