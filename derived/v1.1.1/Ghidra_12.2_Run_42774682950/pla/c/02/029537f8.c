/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029537f8; name: FUN_029537f8
 */


void FUN_029537f8(char *param_1,char param_2)

{
  char *pcVar1;
  
  if ((((((*param_1 == '\0') || (pcVar1 = param_1 + 2, *pcVar1 != param_2)) &&
        ((param_1[3] == '\0' || (pcVar1 = param_1 + 5, *pcVar1 != param_2)))) &&
       ((param_1[6] == '\0' || (pcVar1 = param_1 + 8, *pcVar1 != param_2)))) &&
      ((param_1[9] == '\0' || (pcVar1 = param_1 + 0xb, *pcVar1 != param_2)))) &&
     ((param_1[0xc] == '\0' || (pcVar1 = param_1 + 0xe, *pcVar1 != param_2)))) {
    if (param_1[0xf] == '\0') {
      return;
    }
    pcVar1 = param_1 + 0x11;
    if (*pcVar1 != param_2) {
      return;
    }
  }
  *pcVar1 = '\x1f';
  return;
}


