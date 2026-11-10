/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029edcf8; name: FUN_029edcf8
 */


void FUN_029edcf8(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 auStack_40 [8];
  char *local_38;
  
  pcVar5 = (char *)*param_3;
  if ((ulong)(byte)pcVar5[0xd88] != 0) {
    lVar3 = 0;
    do {
      if (pcVar5[lVar3 + 0x65] == '\0') {
        local_38 = pcVar5;
        FUN_029f7504(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1800),auStack_40,&local_38);
        bVar1 = pcVar5[0xd88];
        if (bVar1 == 0) {
          return;
        }
        do {
          uVar4 = (ulong)bVar1;
          local_38 = pcVar5 + 0x65;
          while (*local_38 != '\0') {
            local_38 = local_38 + 0x60;
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) {
              return;
            }
          }
          if ((**(char **)(*(long *)(param_1 + 0x40) + 0x28) == '\x05') &&
             (*(int *)(local_38 + -0x55) != 4)) {
            *local_38 = '\x01';
          }
          else {
            local_38 = local_38 + -0x5d;
            FUN_029eccc4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1500),auStack_40,&local_38);
          }
          cVar2 = **(char **)(*(long *)(param_1 + 0x40) + 0x28);
          if (cVar2 != '\x05' && cVar2 != '\0') {
            return;
          }
          if ((ulong)(byte)pcVar5[0xd88] == 0) {
            return;
          }
          lVar3 = 0;
          while (pcVar5[lVar3 + 0x65] != '\0') {
            lVar3 = lVar3 + 0x60;
            if ((ulong)(byte)pcVar5[0xd88] * 0x60 == lVar3) {
              return;
            }
          }
          local_38 = pcVar5;
          FUN_029f7504(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1800),auStack_40,&local_38);
          bVar1 = pcVar5[0xd88];
        } while (bVar1 != 0);
        return;
      }
      lVar3 = lVar3 + 0x60;
    } while ((ulong)(byte)pcVar5[0xd88] * 0x60 != lVar3);
  }
  return;
}


