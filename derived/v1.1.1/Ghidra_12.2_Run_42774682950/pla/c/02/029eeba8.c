/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029eeba8; name: FUN_029eeba8
 */


void FUN_029eeba8(long param_1,undefined1 *param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *param_2 = 0;
  cVar2 = param_3[0x14];
  lVar9 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)(byte)param_3[1] * 8 + 0x120);
  uVar5 = FUN_029cddec(*(undefined8 *)(param_1 + 8));
  if ((uVar5 & 1) != 0) {
    return;
  }
  pcVar6 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  cVar3 = param_3[1];
  if ((((((*pcVar6 == '\0') || (pcVar6[2] != cVar3)) &&
        ((pcVar6[3] == '\0' || (pcVar6[5] != cVar3)))) &&
       ((pcVar6[6] == '\0' || (pcVar6[8] != cVar3)))) &&
      ((pcVar6[9] == '\0' || (pcVar6[0xb] != cVar3)))) &&
     ((pcVar6[0xc] == '\0' || (pcVar6[0xe] != cVar3)))) {
    if (pcVar6[0xf] == '\0') {
      return;
    }
    if (pcVar6[0x11] != cVar3) {
      return;
    }
  }
  uVar4 = FUN_02975784(*(undefined8 *)(param_1 + 0x38),lVar8,*(undefined4 *)(param_3 + 4),*param_3,
                       *(undefined2 *)(param_3 + 0xe),*(undefined4 *)(param_3 + 8));
  if (((*(short *)(lVar8 + 0x496) == 0) || (param_3[0x15] != '\0')) ||
     (*(char *)(lVar8 + 0x7d) == *param_3)) {
    uVar5 = FUN_029751a8(*(undefined8 *)(param_1 + 0x38),lVar8,*(undefined4 *)(param_3 + 4),*param_3
                         ,uVar4,param_3[0xc],*(undefined4 *)(param_3 + 0x10));
    if ((uVar5 & 1) != 0) {
      *param_2 = 1;
      return;
    }
    if (cVar2 != '\0') {
      lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(undefined1 *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x1c8) * 0x40 + 0x43) = 1;
      FUN_02974e90(*(undefined8 *)(param_1 + 0x38),lVar8,*(undefined4 *)(param_3 + 0x10));
    }
    if (lVar9 == 0) {
      return;
    }
    if (*(char *)(lVar9 + 0x18) == '\0') {
      return;
    }
    uVar1 = *(uint *)(lVar9 + 0x14);
    if (4 < uVar1) {
      return;
    }
    *(uint *)(lVar9 + 0x14) = uVar1 + 1;
    uVar4 = 4;
  }
  else {
    if (cVar2 != '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x48,
                   *(char *)(lVar8 + 0x7d),0xffff0000);
    }
    if (lVar9 == 0) {
      return;
    }
    if (*(char *)(lVar9 + 0x18) == '\0') {
      return;
    }
    uVar1 = *(uint *)(lVar9 + 0x14);
    if (4 < uVar1) {
      return;
    }
    *(uint *)(lVar9 + 0x14) = uVar1 + 1;
    uVar4 = 3;
  }
  *(undefined4 *)(lVar9 + (ulong)uVar1 * 4) = uVar4;
  return;
}


