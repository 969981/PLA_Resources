/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f6fc4; name: FUN_029f6fc4
 */


void FUN_029f6fc4(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  char cVar11;
  char cVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_68 [8];
  long local_58;
  
  lVar14 = *param_3;
  if (*(char *)(param_3[1] + 0x5a) == '\0') {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)param_3[1];
  }
  uVar3 = FUN_029506a8(lVar14,0x10);
  uVar4 = FUN_029506a8(lVar13,0x10);
  uVar1 = *(undefined1 *)((long)param_3 + 0x11);
  uVar5 = FUN_029506a8(lVar14,0x10);
  uVar6 = FUN_029506a8(lVar13,0x10);
  uVar7 = FUN_02957290(uVar5);
  if (((uVar7 & 1) != 0) || (uVar7 = FUN_02957290(uVar6), (uVar7 & 1) != 0)) goto LAB_029f7358;
  pcVar8 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  cVar11 = *(char *)(lVar14 + 0x7d);
  if ((*pcVar8 == '\0') || (pcVar8[2] != cVar11)) {
    cVar2 = pcVar8[3];
    if ((((cVar2 == '\0') || (pcVar8[5] != cVar11)) &&
        ((pcVar8[6] == '\0' || (pcVar8[8] != cVar11)))) &&
       ((((pcVar8[9] == '\0' || (pcVar8[0xb] != cVar11)) &&
         ((pcVar8[0xc] == '\0' || (pcVar8[0xe] != cVar11)))) &&
        ((pcVar8[0xf] == '\0' || (pcVar8[0x11] != cVar11)))))) goto LAB_029f7358;
    cVar12 = *(char *)(lVar13 + 0x7d);
    cVar11 = cVar12;
    if (*pcVar8 != '\0') {
      cVar11 = pcVar8[2];
      goto LAB_029f70fc;
    }
LAB_029f7110:
    if (((((cVar2 == '\0') || (pcVar8[5] != cVar11)) &&
         ((pcVar8[6] == '\0' || (pcVar8[8] != cVar11)))) &&
        ((pcVar8[9] == '\0' || (pcVar8[0xb] != cVar11)))) &&
       (((pcVar8[0xc] == '\0' || (pcVar8[0xe] != cVar11)) &&
        ((pcVar8[0xf] == '\0' || (pcVar8[0x11] != cVar11)))))) goto LAB_029f7358;
  }
  else {
    cVar12 = *(char *)(lVar13 + 0x7d);
LAB_029f70fc:
    if (cVar11 != cVar12) {
      cVar2 = pcVar8[3];
      cVar11 = cVar12;
      goto LAB_029f7110;
    }
  }
  uVar7 = FUN_02995448(*(undefined8 *)(param_1 + 0x38),cVar11,uVar5,uVar1);
  if ((uVar7 & 1) != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar7 = (ulong)*(byte *)(lVar14 + 0x7d);
    uVar15 = (ulong)*(byte *)(lVar13 + 0x7d);
    *(undefined1 *)(lVar9 + (ulong)*(byte *)(lVar9 + 0x1c8) * 0x40 + 0x21) = 1;
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x6c,uVar7,uVar15,uVar4 & 0xffff,
                 uVar3 & 0xffff);
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0xa9,
                 *(undefined1 *)(lVar14 + 0x7d),0xffff0000);
    FUN_029948fc(*(undefined8 *)(param_1 + 0x38),uVar7,uVar3,uVar4);
    FUN_029948fc(*(undefined8 *)(param_1 + 0x38),uVar15,uVar4,uVar3);
    *(short *)(lVar14 + 0x364) = (short)uVar4;
    *(short *)(lVar13 + 0x364) = (short)uVar3;
    lVar16 = *(long *)(param_1 + 0x20);
    lVar10 = *(long *)(lVar16 + 0x20);
    lVar9 = *(long *)(*(long *)(lVar10 + 0x10) + 8) + 0x120;
    FUN_02a38320(*(undefined8 *)(lVar10 + 0x18),*(undefined8 *)(lVar9 + uVar7 * 8),
                 *(undefined8 *)(lVar9 + uVar15 * 8));
    FUN_02a3e6b8(*(undefined8 *)(lVar16 + 0x18),0x5c,uVar7,uVar15);
    FUN_02973d0c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0xa0) + 0x38),
                 *(undefined1 *)(lVar14 + 0x7d));
    FUN_02973d0c(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 0xa0) + 0x38),
                 *(undefined1 *)(lVar13 + 0x7d));
    if ((*(byte *)(lVar14 + 0x120) & 7) == 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 0xc0);
      if ((uVar3 == 0x67) || (uVar4 == 0x52)) {
        lVar16 = *(long *)(*(long *)(lVar9 + 0x60) + 800);
        lVar10 = *(long *)(*(long *)(*(long *)(lVar16 + 0x10) + 8) +
                           (ulong)*(byte *)(lVar14 + 0x7d) * 8 + 0x120);
        if (*(short *)(lVar10 + 0x76) != 0) {
          FUN_029825a0(*(undefined8 *)(lVar16 + 0x38),lVar10,7);
        }
      }
      if (uVar3 == 0x7f) {
        local_58 = lVar14;
        FUN_029ea38c(*(undefined8 *)(*(long *)(lVar9 + 0x60) + 0x1360),auStack_68,&local_58);
      }
    }
    if ((*(byte *)(lVar13 + 0x120) & 7) != 0) {
      return;
    }
    lVar14 = *(long *)(*(long *)(param_1 + 0x60) + 0xc0);
    if ((uVar3 == 0x52) || (uVar4 == 0x67)) {
      lVar10 = *(long *)(*(long *)(lVar14 + 0x60) + 800);
      lVar9 = *(long *)(*(long *)(*(long *)(lVar10 + 0x10) + 8) +
                        (ulong)*(byte *)(lVar13 + 0x7d) * 8 + 0x120);
      if (*(short *)(lVar9 + 0x76) != 0) {
        FUN_029825a0(*(undefined8 *)(lVar10 + 0x38),lVar9,7);
      }
    }
    if (uVar4 == 0x7f) {
      local_58 = lVar13;
      FUN_029ea38c(*(undefined8 *)(*(long *)(lVar14 + 0x60) + 0x1360),auStack_68,&local_58);
      return;
    }
    return;
  }
LAB_029f7358:
  if ((char)param_3[2] == '\0') {
    return;
  }
  FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
  return;
}


