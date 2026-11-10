/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ebab4; name: FUN_029ebab4
 */


void FUN_029ebab4(long param_1,undefined1 *param_2,long *param_3)

{
  char cVar1;
  char *pcVar2;
  long local_30;
  undefined2 local_28;
  undefined1 auStack_18 [8];
  
  *param_2 = 0;
  local_30 = *param_3;
  pcVar2 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  cVar1 = *(char *)(local_30 + 0x7d);
  if (((((*pcVar2 != '\0') && (pcVar2[2] == cVar1)) || ((pcVar2[3] != '\0' && (pcVar2[5] == cVar1)))
       ) || ((((pcVar2[6] != '\0' && (pcVar2[8] == cVar1)) ||
              ((pcVar2[9] != '\0' && (pcVar2[0xb] == cVar1)))) ||
             (((pcVar2[0xc] != '\0' && (pcVar2[0xe] == cVar1)) ||
              ((pcVar2[0xf] != '\0' && (pcVar2[0x11] == cVar1)))))))) &&
     (*(short *)(local_30 + 0x74) != 0)) {
    local_28 = 0x3c;
    FUN_029ebce4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1460),auStack_18,&local_30);
    *param_2 = 1;
  }
  return;
}


