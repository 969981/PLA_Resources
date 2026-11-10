/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e6778; name: FUN_029e6778
 */


void FUN_029e6778(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  undefined1 uVar9;
  
  *param_2 = 0;
  pcVar7 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  bVar1 = *param_3;
  if (((((*pcVar7 != '\0') && (pcVar7[2] == bVar1)) || ((pcVar7[3] != '\0' && (pcVar7[5] == bVar1)))
       ) || ((((pcVar7[6] != '\0' && (pcVar7[8] == bVar1)) ||
              ((pcVar7[9] != '\0' && (pcVar7[0xb] == bVar1)))) ||
             (((pcVar7[0xc] != '\0' && (pcVar7[0xe] == bVar1)) ||
              ((pcVar7[0xf] != '\0' && (pcVar7[0x11] == bVar1)))))))) &&
     (*(short *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120) +
                0x74) != 0)) {
    lVar6 = *(long *)(param_1 + 0x20);
    bVar2 = param_3[1];
    bVar3 = param_3[2];
    bVar4 = param_3[5];
    bVar5 = param_3[8];
    lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 8) + (ulong)bVar1 * 8 +
                     0x120);
    if (bVar2 < 3) {
      *(byte *)(lVar8 + 0x2e4) = bVar2;
      uVar9 = 0;
      if (bVar2 != 1) {
        uVar9 = 5;
      }
      *(undefined1 *)(lVar8 + 0x2e7) = uVar9;
    }
    if (bVar3 < 3) {
      *(byte *)(lVar8 + 0x2e5) = bVar3;
      uVar9 = 0;
      if (bVar3 != 1) {
        uVar9 = 5;
      }
      *(undefined1 *)(lVar8 + 0x2e8) = uVar9;
    }
    if (bVar4 < 3) {
      *(byte *)(lVar8 + 0x2e6) = bVar4;
      uVar9 = 0;
      if (bVar4 != 1) {
        uVar9 = 5;
      }
      *(undefined1 *)(lVar8 + 0x2e9) = uVar9;
    }
    if (bVar5 < 4) {
      *(byte *)(lVar8 + 0x36b) = bVar5;
    }
    FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0xe);
    *param_2 = 1;
  }
  return;
}


