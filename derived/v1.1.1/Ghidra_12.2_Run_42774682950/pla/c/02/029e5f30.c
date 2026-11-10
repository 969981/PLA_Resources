/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e5f30; name: FUN_029e5f30
 */


undefined8 FUN_029e5f30(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  
  if ((param_2[0x1c] != 0) && ((ulong)*param_2 != 0x1f)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    if ((*(long *)(lVar2 + (ulong)*param_2 * 8 + 0x120) != 0) &&
       (uVar3 = (ulong)param_2[1], uVar3 != 0)) {
      pcVar4 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
      param_2 = param_2 + 2;
      do {
        bVar1 = *param_2;
        if (((((((*pcVar4 != '\0') && (pcVar4[2] == bVar1)) ||
               ((pcVar4[3] != '\0' && (pcVar4[5] == bVar1)))) ||
              ((pcVar4[6] != '\0' && (pcVar4[8] == bVar1)))) ||
             ((pcVar4[9] != '\0' && (pcVar4[0xb] == bVar1)))) ||
            (((pcVar4[0xc] != '\0' && (pcVar4[0xe] == bVar1)) ||
             ((pcVar4[0xf] != '\0' && (pcVar4[0x11] == bVar1)))))) &&
           (*(short *)(*(long *)(lVar2 + (ulong)bVar1 * 8 + 0x120) + 0x74) != 0)) {
          return 1;
        }
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 1;
      } while (uVar3 != 0);
    }
  }
  return 0;
}


