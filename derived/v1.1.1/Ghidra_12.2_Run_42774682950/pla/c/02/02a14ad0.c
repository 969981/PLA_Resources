/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a14ad0; name: FUN_02a14ad0
 */


void FUN_02a14ad0(long param_1,byte param_2)

{
  char *pcVar1;
  byte *pbVar2;
  
  FUN_02952464(*(undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)param_2 * 8 + 0x120));
  pcVar1 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  if ((((((*pcVar1 == '\0') || (pbVar2 = (byte *)(pcVar1 + 2), *pbVar2 != param_2)) &&
        ((pcVar1[3] == '\0' || (pbVar2 = (byte *)(pcVar1 + 5), *pbVar2 != param_2)))) &&
       ((pcVar1[6] == '\0' || (pbVar2 = (byte *)(pcVar1 + 8), *pbVar2 != param_2)))) &&
      ((pcVar1[9] == '\0' || (pbVar2 = (byte *)(pcVar1 + 0xb), *pbVar2 != param_2)))) &&
     ((pcVar1[0xc] == '\0' || (pbVar2 = (byte *)(pcVar1 + 0xe), *pbVar2 != param_2)))) {
    if (pcVar1[0xf] == '\0') {
      return;
    }
    pbVar2 = (byte *)(pcVar1 + 0x11);
    if (*pbVar2 != param_2) {
      return;
    }
  }
  *pbVar2 = 0x1f;
  return;
}


