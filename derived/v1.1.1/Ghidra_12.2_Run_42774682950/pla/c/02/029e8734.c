/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e8734; name: FUN_029e8734
 */


void FUN_029e8734(long param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  
  *param_2 = 0;
  bVar1 = *param_3;
  bVar2 = param_3[1];
  if (bVar1 == bVar2) {
    return;
  }
  if (bVar1 < 6) {
    cVar8 = '\0';
joined_r0x029e87a0:
    if (5 < bVar2) goto LAB_029e87a4;
LAB_029e8788:
    bVar4 = cVar8 != '\0';
    cVar8 = '\0';
    if (bVar4) {
      return;
    }
  }
  else {
    if (bVar1 < 0xc) {
      cVar8 = '\x02';
      goto joined_r0x029e87a0;
    }
    if (bVar1 < 0x12) {
      cVar8 = '\x01';
    }
    else {
      if (0x17 < bVar1) {
        cVar8 = (bVar1 < 0x1e) << 2;
        goto joined_r0x029e87a0;
      }
      cVar8 = '\x03';
    }
    if (bVar2 < 6) goto LAB_029e8788;
LAB_029e87a4:
    if (bVar2 < 0xc) {
      if (cVar8 != '\x02') {
        return;
      }
    }
    else if (bVar2 < 0x12) {
      if (cVar8 != '\x01') {
        return;
      }
    }
    else if (bVar2 < 0x18) {
      if (cVar8 != '\x03') {
        return;
      }
    }
    else if (cVar8 != (char)((bVar2 < 0x1e) * '\x04')) {
      return;
    }
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
  lVar10 = *(long *)(lVar9 + (ulong)bVar1 * 8);
  if (*(short *)(lVar10 + 0x74) == 0) {
    return;
  }
  lVar9 = *(long *)(lVar9 + (ulong)bVar2 * 8);
  if (*(short *)(lVar9 + 0x74) == 0) {
    return;
  }
  pcVar5 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  cVar3 = *(char *)(lVar10 + 0x7d);
  if ((*pcVar5 == '\0') || (pcVar5[2] != cVar3)) {
    cVar6 = pcVar5[3];
    if ((cVar6 == '\0') || (pcVar5[5] != cVar3)) {
      if ((pcVar5[6] == '\0') || (pcVar5[8] != cVar3)) {
        if ((pcVar5[9] == '\0') || (pcVar5[0xb] != cVar3)) {
          if ((pcVar5[0xc] == '\0') || (pcVar5[0xe] != cVar3)) {
            if ((pcVar5[0xf] == '\0') || (pcVar5[0x11] != cVar3)) {
              iVar11 = 6;
              cVar7 = *(char *)(lVar9 + 0x7d);
            }
            else {
              iVar11 = 5;
              cVar7 = *(char *)(lVar9 + 0x7d);
            }
          }
          else {
            iVar11 = 4;
            cVar7 = *(char *)(lVar9 + 0x7d);
          }
        }
        else {
          iVar11 = 3;
          cVar7 = *(char *)(lVar9 + 0x7d);
        }
      }
      else {
        iVar11 = 2;
        cVar7 = *(char *)(lVar9 + 0x7d);
      }
    }
    else {
      iVar11 = 1;
      cVar7 = *(char *)(lVar9 + 0x7d);
    }
    if (*pcVar5 == '\0') goto LAB_029e897c;
    if (pcVar5[2] != cVar7) goto LAB_029e8898;
  }
  else {
    cVar7 = *(char *)(lVar9 + 0x7d);
    iVar11 = 0;
    if (cVar3 != cVar7) {
LAB_029e8898:
      cVar6 = pcVar5[3];
LAB_029e897c:
      if ((cVar6 == '\0') || (pcVar5[5] != cVar7)) {
        if ((pcVar5[6] == '\0') || (pcVar5[8] != cVar7)) {
          if ((pcVar5[9] == '\0') || (pcVar5[0xb] != cVar7)) {
            if ((pcVar5[0xc] == '\0') || (pcVar5[0xe] != cVar7)) {
              if (pcVar5[0xf] == '\0') {
                return;
              }
              if (pcVar5[0x11] != cVar7) {
                return;
              }
              uVar12 = 5;
            }
            else {
              uVar12 = 4;
            }
          }
          else {
            uVar12 = 3;
          }
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        uVar12 = 1;
      }
      goto joined_r0x029e8a00;
    }
  }
  uVar12 = 0;
joined_r0x029e8a00:
  if (iVar11 != 6) {
    FUN_02a3cad8(*(undefined8 *)(param_1 + 0x20),cVar8,iVar11,uVar12);
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x81,cVar8,iVar11,uVar12);
    FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 4);
    if (*(short *)(lVar10 + 0x74) != 0) {
      FUN_02978740(*(undefined8 *)(param_1 + 0x38),lVar10);
    }
    if (*(short *)(lVar9 + 0x74) != 0) {
      FUN_02978740(*(undefined8 *)(param_1 + 0x38),lVar9);
    }
    *param_2 = 1;
  }
  return;
}


