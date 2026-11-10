/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e4e54; name: FUN_029e4e54
 */


void FUN_029e4e54(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long local_70;
  int local_68;
  long local_60;
  byte local_58;
  byte local_57;
  undefined1 *local_50;
  byte local_48;
  undefined1 auStack_38 [8];
  
  *param_2 = 0;
  pcVar2 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar1 = param_3[1];
  if ((((((*pcVar2 != '\0') && (pcVar2[2] == bVar1)) ||
        ((pcVar2[3] != '\0' && (pcVar2[5] == bVar1)))) ||
       ((pcVar2[6] != '\0' && (pcVar2[8] == bVar1)))) ||
      ((pcVar2[9] != '\0' && (pcVar2[0xb] == bVar1)))) ||
     (((pcVar2[0xc] != '\0' && (pcVar2[0xe] == bVar1)) ||
      ((pcVar2[0xf] != '\0' && (pcVar2[0x11] == bVar1)))))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    lVar4 = *(long *)(lVar3 + (ulong)bVar1 * 8 + 0x120);
    if ((*(short *)(lVar4 + 0x74) != 0) || (param_3[2] != 0)) {
      local_68 = *(int *)(param_3 + 4);
      if (((ulong)*param_3 == 0x1f) || (local_68 == 0)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(long *)(lVar3 + (ulong)*param_3 * 8 + 0x120);
      }
      local_70 = lVar3;
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 0xc);
      local_58 = *param_3;
      local_50 = (undefined1 *)0x0;
      if (lVar3 != 0) {
        local_50 = (undefined1 *)&local_70;
      }
      local_57 = param_3[8];
      local_48 = param_3[3] ^ 1;
      local_60 = lVar4;
      FUN_029ea15c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1340),auStack_38,&local_60);
      *param_2 = 1;
    }
  }
  return;
}


