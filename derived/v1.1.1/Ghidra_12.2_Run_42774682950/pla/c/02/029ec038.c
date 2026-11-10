/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ec038; name: FUN_029ec038
 */


void FUN_029ec038(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  *param_2 = 0;
  lVar8 = *param_3;
  bVar1 = *(byte *)(lVar8 + 0x7d);
  uVar7 = (ulong)bVar1;
  if (*(short *)(lVar8 + 0x496) != 0) {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0xff,uVar7,0xffff0000);
    return;
  }
  uVar3 = FUN_029506a8(lVar8,0xe);
  uVar4 = (uint)(uVar3 >> 2) & 0x3fffffff;
  if ((uint)uVar3 < 4) {
    uVar4 = 1;
  }
  uVar2 = FUN_029506a8(lVar8,0xd);
  if (uVar2 <= uVar4) {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x26e,0xffff0000);
    return;
  }
  pcVar5 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  if ((*pcVar5 == '\0') || (pcVar5[2] != bVar1)) {
    if ((pcVar5[3] == '\0') || (pcVar5[5] != bVar1)) {
      if ((pcVar5[6] == '\0') || (pcVar5[8] != bVar1)) {
        if ((pcVar5[9] == '\0') || (pcVar5[0xb] != bVar1)) {
          if ((pcVar5[0xc] == '\0') || (pcVar5[0xe] != bVar1)) {
            if (pcVar5[0xf] == '\0') {
              return;
            }
            if (pcVar5[0x11] != bVar1) {
              return;
            }
            uVar9 = 5;
          }
          else {
            uVar9 = 4;
          }
        }
        else {
          uVar9 = 3;
        }
      }
      else {
        uVar9 = 2;
      }
    }
    else {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 0;
  }
  uVar3 = FUN_029506a8(lVar8,0xe);
  uVar4 = (uint)(uVar3 >> 2) & 0x3fffffff;
  if ((uint)uVar3 < 4) {
    uVar4 = 1;
  }
  FUN_02a3b7b0(*(undefined8 *)(param_1 + 0x20),lVar8,-uVar4,0xe,uVar7,1,0);
  lVar6 = *(long *)(*(long *)(param_1 + 0x60) + 800);
  lVar8 = *(long *)(*(long *)(*(long *)(lVar6 + 0x10) + 8) + (ulong)*(byte *)(lVar8 + 0x7d) * 8 +
                   0x120);
  if (*(short *)(lVar8 + 0x76) != 0) {
    FUN_029825a0(*(undefined8 *)(lVar6 + 0x38),lVar8,1);
  }
  lVar6 = *(long *)(param_1 + 0x20);
  lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 8) + uVar7 * 8 + 0x120);
  *(short *)(lVar8 + 0x496) = (short)uVar4;
  FUN_02951fe0(lVar8,10);
  FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x38,uVar7,uVar4 & 0xffff);
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x90,uVar9);
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0xfe,uVar7,0xffff0000);
  *param_2 = 1;
  return;
}


