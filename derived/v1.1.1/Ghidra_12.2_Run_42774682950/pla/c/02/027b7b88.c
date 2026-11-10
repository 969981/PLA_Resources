/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027b7b88; name: FUN_027b7b88
 */


ulong FUN_027b7b88(long param_1)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    pcVar1 = (char *)(**(code **)(**(long **)(param_1 + 8) + 0x10))();
    lVar6 = 0;
    pcVar3 = "gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]";
    do {
      if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
          [lVar6 + 0x27] == 'T') {
        if (lVar6 == 0x3f) break;
        if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
            [lVar6 + 0x28] == ' ') {
          if (lVar6 == 0x3e) break;
          if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
              [lVar6 + 0x29] == '=') {
            if (lVar6 == 0x3d) break;
            if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
                [lVar6 + 0x2a] == ' ') {
              if (lVar6 == 0x40) {
                pcVar3 = "gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]";
                cVar5 = *pcVar1;
                if (cVar5 != '\0') goto LAB_027b7c44;
                goto LAB_027b7c5c;
              }
              pcVar3 = "static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
                       + lVar6 + 0x2b;
              break;
            }
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x40);
    cVar5 = *pcVar1;
    if (cVar5 != '\0') {
LAB_027b7c44:
      do {
        pcVar1 = pcVar1 + 1;
        if (*pcVar3 != cVar5) break;
        cVar5 = *pcVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar5 != '\0');
    }
LAB_027b7c5c:
    if (*pcVar3 == cVar5) {
      puVar2 = (uint *)FUN_027b7e20(param_1 + 8);
      uVar7 = (ulong)*puVar2 << 0x20;
      uVar4 = 1;
      goto LAB_027b7c88;
    }
  }
  uVar4 = 0;
  uVar7 = 0;
LAB_027b7c88:
  return uVar7 | uVar4;
}


