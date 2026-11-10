/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e5108; name: FUN_029e5108
 */


void FUN_029e5108(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long local_50;
  byte local_48;
  char local_38 [8];
  
  *param_2 = 0;
  bVar1 = *param_3;
  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120);
  uVar3 = FUN_029cddec(*(undefined8 *)(param_1 + 8));
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)bVar1 * 8 + 0x120);
    uVar6 = *(byte *)(lVar5 + 0x390) + 0xff;
    if ((((uVar6 >> 8 == 0) || (0x1d < (uVar6 & 0xff))) && ((*(byte *)(lVar5 + 0x1b0) & 7) == 0)) &&
       (**(byte **)(*(long *)(param_1 + 0x40) + 0x28) < 2)) {
      if (((param_3[2] != 0) && (lVar9 != 0)) && (*(char *)(lVar9 + 0x7d) != '\x1f')) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*(char *)(lVar9 + 0x7d),
                     0);
      }
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 4);
      local_48 = param_3[1];
      local_50 = lVar9;
      FUN_029ebab4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1440),local_38,&local_50);
      if (local_38[0] != '\0') {
        lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 8);
        bVar1 = *param_3;
        if (bVar1 < 6) {
          uVar3 = 0;
        }
        else if (bVar1 < 0xc) {
          uVar3 = 2;
        }
        else if (bVar1 < 0x12) {
          uVar3 = 1;
        }
        else {
          uVar6 = 3;
          if (0x17 < bVar1) {
            uVar6 = (uint)(bVar1 < 0x1e) << 2;
          }
          uVar3 = (ulong)uVar6;
        }
        uVar6 = (uint)*(byte *)(lVar5 + uVar3 * 0x38 + 0x38);
        if (uVar6 != 0) {
          uVar4 = 0;
          do {
            if (*(byte *)(*(long *)(lVar5 + uVar3 * 0x38 + (ulong)(uVar4 & 0xff) * 8 + 8) + 0x7d) ==
                bVar1) {
              cVar2 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
              if (cVar2 != '\x06') goto LAB_029e52a8;
              break;
            }
            uVar4 = uVar4 + 1;
          } while (uVar6 != uVar4);
        }
        cVar2 = '\x06';
LAB_029e52a8:
        FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 0x28);
        lVar5 = *(long *)(param_1 + 0x50);
        uVar3 = (ulong)*(byte *)(lVar5 + 0xe);
        if (uVar3 != 0) {
          pcVar7 = (char *)(lVar5 + 8);
          uVar8 = uVar3;
          do {
            if (*pcVar7 == cVar2) goto LAB_029e52f4;
            uVar8 = uVar8 - 1;
            pcVar7 = pcVar7 + 1;
          } while (uVar8 != 0);
        }
        *(char *)(lVar5 + uVar3 + 8) = cVar2;
        *(char *)(lVar5 + 0xe) = *(char *)(lVar5 + 0xe) + '\x01';
LAB_029e52f4:
        **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 1;
        *param_2 = 1;
      }
      if (((param_3[2] != 0) && (lVar9 != 0)) && (*(char *)(lVar9 + 0x7d) != '\x1f')) {
        FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
        return;
      }
    }
  }
  return;
}


