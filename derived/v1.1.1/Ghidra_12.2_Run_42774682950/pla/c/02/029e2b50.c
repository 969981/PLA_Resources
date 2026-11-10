/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e2b50; name: FUN_029e2b50
 */


void FUN_029e2b50(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  *param_2 = 0;
  pcVar2 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar1 = *param_3;
  if ((((*pcVar2 != '\0') && (pcVar2[2] == bVar1)) || ((pcVar2[3] != '\0' && (pcVar2[5] == bVar1))))
     || ((((pcVar2[6] != '\0' && (pcVar2[8] == bVar1)) ||
          ((pcVar2[9] != '\0' && (pcVar2[0xb] == bVar1)))) ||
         (((pcVar2[0xc] != '\0' && (pcVar2[0xe] == bVar1)) ||
          ((pcVar2[0xf] != '\0' && (pcVar2[0x11] == bVar1)))))))) {
    local_38 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120);
    local_28 = 0;
    local_30 = 1;
    FUN_029d6ea4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x440),auStack_40,&local_38);
    *param_2 = 1;
  }
  return;
}


