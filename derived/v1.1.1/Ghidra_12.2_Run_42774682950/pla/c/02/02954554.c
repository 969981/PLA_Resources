/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02954554; name: FUN_02954554
 */


char FUN_02954554(char *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  
  cVar2 = false;
  if (*param_1 != '\0') {
    if (param_1[1] != param_2) {
      cVar2 = false;
      cVar1 = param_1[3];
      goto joined_r0x02954578;
    }
    cVar2 = param_1[2] == '\x1f';
  }
  cVar1 = param_1[3];
joined_r0x02954578:
  if (((cVar1 != '\0') && (param_1[4] == param_2)) && (param_1[5] == '\x1f')) {
    cVar2 = cVar2 + '\x01';
  }
  if (((param_1[6] != '\0') && (param_1[7] == param_2)) && (param_1[8] == '\x1f')) {
    cVar2 = cVar2 + '\x01';
  }
  if (((param_1[9] != '\0') && (param_1[10] == param_2)) && (param_1[0xb] == '\x1f')) {
    cVar2 = cVar2 + '\x01';
  }
  if (((param_1[0xc] != '\0') && (param_1[0xd] == param_2)) && (param_1[0xe] == '\x1f')) {
    cVar2 = cVar2 + '\x01';
  }
  if (((param_1[0xf] != '\0') && (param_1[0x10] == param_2)) && (param_1[0x11] == '\x1f')) {
    cVar2 = cVar2 + '\x01';
  }
  return cVar2;
}


