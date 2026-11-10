/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02784dac; name: FUN_02784dac
 */


void FUN_02784dac(undefined1 *param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    pcVar1 = (char *)(**(code **)(**(long **)(param_2 + 8) + 0x10))();
    lVar5 = 0;
    pcVar3 = "nn::pia::Result>::n() [T = nn::pia::Result]";
    do {
      if ("static const char *boost::detail::ctti<nn::pia::Result>::n() [T = nn::pia::Result]"
          [lVar5 + 0x27] == 'T') {
        if (lVar5 == 0x2b) break;
        if ("static const char *boost::detail::ctti<nn::pia::Result>::n() [T = nn::pia::Result]"
            [lVar5 + 0x28] == ' ') {
          if (lVar5 == 0x2a) break;
          if ("static const char *boost::detail::ctti<nn::pia::Result>::n() [T = nn::pia::Result]"
              [lVar5 + 0x29] == '=') {
            if (lVar5 == 0x29) break;
            if ("static const char *boost::detail::ctti<nn::pia::Result>::n() [T = nn::pia::Result]"
                [lVar5 + 0x2a] == ' ') {
              if (lVar5 == 0x2c) {
                pcVar3 = "nn::pia::Result>::n() [T = nn::pia::Result]";
                cVar4 = *pcVar1;
                goto joined_r0x02784e58;
              }
              pcVar3 = "static const char *boost::detail::ctti<nn::pia::Result>::n() [T = nn::pia::Result]"
                       + lVar5 + 0x2b;
              break;
            }
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x2c);
    cVar4 = *pcVar1;
joined_r0x02784e58:
    if (cVar4 != '\0') {
      do {
        pcVar1 = pcVar1 + 1;
        if (*pcVar3 != cVar4) break;
        cVar4 = *pcVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar4 != '\0');
    }
    if (*pcVar3 == cVar4) {
      uVar2 = FUN_02784ff0(param_2 + 8);
      FUN_007ee578(auStack_30,uVar2);
      *param_1 = 0;
      FUN_007ee578(param_1 + 4,auStack_30);
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


