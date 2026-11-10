/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a08854; name: FUN_02a08854
 */


void FUN_02a08854(long param_1,long param_2,undefined4 *param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 local_28 [2];
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  bVar1 = *(byte *)(param_2 + 0x7d);
  if (bVar1 < 6) {
    uVar4 = 0;
  }
  else if (bVar1 < 0xc) {
    uVar4 = 2;
  }
  else if (bVar1 < 0x12) {
    uVar4 = 1;
  }
  else {
    uVar10 = 3;
    if (0x17 < bVar1) {
      uVar10 = (uint)(bVar1 < 0x1e) << 2;
    }
    uVar4 = (ulong)uVar10;
  }
  uVar10 = (uint)*(byte *)(lVar8 + uVar4 * 0x38 + 0x38);
  if (uVar10 != 0) {
    uVar5 = 0;
    do {
      if (*(byte *)(*(long *)(lVar8 + uVar4 * 0x38 + (ulong)(uVar5 & 0xff) * 8 + 8) + 0x7d) == bVar1
         ) {
        cVar3 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
        if (cVar3 != '\x06') goto LAB_02a08920;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar10 != uVar5);
  }
  cVar3 = '\x06';
LAB_02a08920:
  if (*(char *)((long)param_4 + 0x5a) != '\0') {
    pcVar9 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
    cVar2 = *(char *)(*param_4 + 0x7d);
    if ((*pcVar9 != '\0') && (pcVar9[2] == cVar2)) {
      uVar6 = 0;
      goto LAB_02a089e4;
    }
    if ((pcVar9[3] != '\0') && (pcVar9[5] == cVar2)) {
      uVar6 = 1;
      goto LAB_02a089e4;
    }
    if ((pcVar9[6] != '\0') && (pcVar9[8] == cVar2)) {
      uVar6 = 2;
      goto LAB_02a089e4;
    }
    if ((pcVar9[9] != '\0') && (pcVar9[0xb] == cVar2)) {
      uVar6 = 3;
      goto LAB_02a089e4;
    }
    if ((pcVar9[0xc] != '\0') && (pcVar9[0xe] == cVar2)) {
      uVar6 = 4;
      goto LAB_02a089e4;
    }
    if ((pcVar9[0xf] != '\0') && (pcVar9[0x11] == cVar2)) {
      uVar6 = 5;
      goto LAB_02a089e4;
    }
  }
  uVar6 = 6;
LAB_02a089e4:
  lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  lVar8 = lVar8 + (ulong)*(byte *)(lVar8 + 0x1c8) * 0x40;
  *(undefined4 *)(lVar8 + 0x18) = *param_3;
  *(undefined1 *)(lVar8 + 0x1d) = uVar6;
  *(char *)(lVar8 + 0x1c) = cVar3;
  *(undefined2 *)(lVar8 + 0x1e) = 0;
  *(undefined1 *)(lVar8 + 0x20) = 0;
  local_28[0] = 0xffffffff;
  lVar7 = *(long *)(param_1 + 0x28);
  *(short *)(lVar8 + 0x24) = (short)**(undefined4 **)(lVar7 + 8);
  FUN_02a3bf4c(*(undefined8 *)(lVar7 + 0x10),param_3,(undefined4 *)(lVar8 + 0x18),local_28);
  return;
}


