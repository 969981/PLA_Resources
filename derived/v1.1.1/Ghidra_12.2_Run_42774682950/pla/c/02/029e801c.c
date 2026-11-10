/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e801c; name: FUN_029e801c
 */


void FUN_029e801c(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  *param_2 = 0;
  bVar2 = param_3[3];
  if (bVar2 != 0) {
    uVar6 = 0;
    do {
      bVar1 = param_3[uVar6 + 4];
      pcVar4 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
      if (((((*pcVar4 != '\0') && (pcVar4[2] == bVar1)) ||
           ((pcVar4[3] != '\0' && (pcVar4[5] == bVar1)))) ||
          ((((pcVar4[6] != '\0' && (pcVar4[8] == bVar1)) ||
            ((pcVar4[9] != '\0' && (pcVar4[0xb] == bVar1)))) ||
           (((pcVar4[0xc] != '\0' && (pcVar4[0xe] == bVar1)) ||
            ((pcVar4[0xf] != '\0' && (pcVar4[0x11] == bVar1)))))))) &&
         (lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120),
         *(short *)(lVar5 + 0x74) != 0)) {
        FUN_02a3b7b0(*(undefined8 *)(param_1 + 0x20),lVar5,
                     *(undefined4 *)(param_3 + uVar6 * 4 + 0xc),param_3[0x24],*param_3,
                     param_3[1] == '\0',0);
        if (param_3[2] == '\0') {
          lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 800);
          lVar5 = *(long *)(*(long *)(*(long *)(lVar3 + 0x10) + 8) +
                            (ulong)*(byte *)(lVar5 + 0x7d) * 8 + 0x120);
          if (*(short *)(lVar5 + 0x76) != 0) {
            FUN_029825a0(*(undefined8 *)(lVar3 + 0x38),lVar5,1);
          }
        }
        *param_2 = 1;
        bVar2 = param_3[3];
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < bVar2);
  }
  return;
}


