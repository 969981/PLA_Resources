/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ecf2c; name: FUN_029ecf2c
 */


void FUN_029ecf2c(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  char *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  char cVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined1 auStack_60 [8];
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined ***local_28;
  
  if (*(char *)(*param_3 + 0x5d) != '\0') {
    return;
  }
  *(undefined1 *)(*param_3 + 0x5d) = 1;
  plVar12 = (long *)*param_3;
  lVar5 = *plVar12;
  if (lVar5 == 0) {
    return;
  }
  if (*(short *)(lVar5 + 0x74) == 0) {
    return;
  }
  bVar2 = *(byte *)(lVar5 + 0x7d);
  pcVar7 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  if ((((((*pcVar7 == '\0') || (pcVar7[2] != bVar2)) &&
        ((pcVar7[3] == '\0' || (pcVar7[5] != bVar2)))) &&
       ((pcVar7[6] == '\0' || (pcVar7[8] != bVar2)))) &&
      ((pcVar7[9] == '\0' || (pcVar7[0xb] != bVar2)))) &&
     ((pcVar7[0xc] == '\0' || (pcVar7[0xe] != bVar2)))) {
    if (pcVar7[0xf] == '\0') {
      return;
    }
    if (pcVar7[0x11] != bVar2) {
      return;
    }
  }
  if (((*(byte *)(lVar5 + 0x1b0) & 7) != 0) &&
     (((int)plVar12[1] != 4 || ((**(uint **)(*(long *)(param_1 + 8) + 0x58) & 0xfffffffe) != 2)))) {
    if (*(char *)(lVar5 + 0x38f) != '\0') {
      lVar8 = *(long *)(param_1 + 0x20);
      *(undefined1 *)
       (*(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x10) + 8) + (ulong)bVar2 * 8 +
                 0x120) + 0x38f) = 0;
      FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x33,*(undefined1 *)(lVar5 + 0x7d),3,0);
    }
    FUN_02978410(*(undefined8 *)(param_1 + 0x38),plVar12);
    return;
  }
  if ((*(byte *)((long)plVar12 + 0x2c) & 0x18) != 0) {
    FUN_02a3c3b4(*(undefined8 *)(param_1 + 0x20),(ulong)bVar2,(char)plVar12[6],(long)plVar12 + 0x34)
    ;
    plVar12 = (long *)*param_3;
  }
  FUN_02977d44(*(undefined8 *)(param_1 + 0x38),plVar12);
  *(byte *)(*(long *)*param_3 + 900) = *(byte *)(*(long *)*param_3 + 900) | 1;
  ppuVar13 = (undefined **)*param_3;
  iVar4 = *(int *)(ppuVar13 + 1);
  if (iVar4 == 7) {
switchD_029ed264_caseD_7:
    uVar3 = 0xa4;
    lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0x100);
LAB_029ed094:
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x18),uVar3,(*ppuVar13)[0x7d]);
    goto switchD_029ed264_default;
  }
  uVar1 = **(uint **)(*(long *)(param_1 + 8) + 0x58);
  if ((uVar1 < 4) && (uVar1 != 1)) {
    ppuVar9 = (undefined **)*ppuVar13;
    bVar2 = *(byte *)((long)ppuVar9 + 0x7d);
    if (bVar2 < 6) {
      cVar11 = '\0';
    }
    else if (bVar2 < 0xc) {
      cVar11 = '\x02';
    }
    else if (bVar2 < 0x12) {
      cVar11 = '\x01';
    }
    else if (bVar2 < 0x18) {
      cVar11 = '\x03';
    }
    else {
      cVar11 = (bVar2 < 0x1e) << 2;
    }
    if ((*(char *)(*(long *)(param_1 + 8) + 0x130) != cVar11) &&
       (*(int *)((long)ppuVar9 + 0x2b4) == 2)) {
      local_50 = CONCAT71(local_50._1_7_,1);
      local_28 = (undefined ***)((ulong)local_28 & 0xffffffffffffff00);
      local_58 = ppuVar9;
      FUN_029d21c0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1a0),&local_28,&local_58);
      if ((byte)local_28 != '\0') goto switchD_029ed264_default;
      iVar4 = *(int *)(ppuVar13 + 1);
    }
  }
  switch(iVar4) {
  case 1:
    local_58 = ppuVar13;
    FUN_029dcb34(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x6c0),&local_28,&local_58);
    break;
  case 2:
    local_58 = (undefined **)*ppuVar13;
    local_50._0_4_ = CONCAT13(*(undefined1 *)(ppuVar13 + 3),*(undefined3 *)((long)ppuVar13 + 0x1a));
    FUN_029fd5d8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1300),&local_28,&local_58);
    break;
  case 3:
    local_58 = (undefined **)*ppuVar13;
    local_50 = CONCAT71(local_50._1_7_,*(undefined1 *)((long)ppuVar13 + 0x1f));
    FUN_029eb040(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x13e0),&local_28,&local_58);
    local_58 = &PTR_LAB_04277240;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_39 = 0;
    uStack_38 = 0;
    if ((byte)local_28 < 0x1e) {
      local_50._1_7_ = (uint7)local_28 & 0xff;
      local_50 = CONCAT71(local_50._1_7_,1);
    }
    local_28 = &local_58;
    FUN_029d07c4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x80),auStack_60,&local_28);
    break;
  case 4:
    local_58 = (undefined **)*ppuVar13;
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)((long)ppuVar13 + 0x24));
    FUN_029db038(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x640),&local_28,&local_58);
    if ((byte)local_28 == '\0') break;
    lVar5 = *(long *)(param_1 + 0x40);
    uVar6 = 5;
    goto LAB_029ed3c8;
  case 5:
    FUN_02a3fa08(*(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x180) + 0x20) + 0x18),0x9d,0x110
                 ,(*ppuVar13)[0x7d],0xffff0000);
    break;
  case 6:
    uVar3 = 0xa3;
    lVar5 = *(long *)(*(long *)(param_1 + 0x60) + 0xe0);
    goto LAB_029ed094;
  case 7:
    goto switchD_029ed264_caseD_7;
  case 8:
    lVar5 = *(long *)(param_1 + 0x40);
    uVar6 = 4;
LAB_029ed3c8:
    **(undefined1 **)(lVar5 + 0x28) = uVar6;
  }
switchD_029ed264_default:
  if ((int)((long *)*param_3)[1] - 1U < 2) {
    lVar5 = *(long *)*param_3;
    *(byte *)(lVar5 + 900) = *(byte *)(lVar5 + 900) | 2;
    lVar5 = *(long *)(param_1 + 0x20);
    lVar8 = *(long *)*param_3;
    lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x10) + 8) +
                       (ulong)*(byte *)(lVar8 + 0x7d) * 8 + 0x120);
    *(byte *)(lVar10 + 0x387) = *(byte *)(lVar10 + 0x387) | 1;
    FUN_02a3e6b8(*(undefined8 *)(lVar5 + 0x18),0x1e,*(undefined1 *)(lVar8 + 0x7d),0);
  }
  if (**(char **)(*(long *)(param_1 + 0x40) + 0x28) != '\x05') {
    FUN_029780fc(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)*param_3,
                 *(undefined4 *)((undefined8 *)*param_3 + 1));
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xa1,
               *(undefined1 *)(*(long *)*param_3 + 0x7d));
  return;
}


