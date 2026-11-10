/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba4fc0; name: FUN_02ba4fc0
 */


void FUN_02ba4fc0(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  long lVar10;
  code *pcVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  switch(*(undefined4 *)((long)param_1 + 0x74)) {
  case 0:
    lVar10 = *param_1;
    uVar1 = *(uint *)(lVar10 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar1 < 3) {
      uVar12 = uVar12 & uVar1 - 1;
    }
    else {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar13 / uVar1);
      }
      uVar12 = uVar12 - iVar2 * uVar1;
    }
    pcVar6 = (char *)FUN_02bc0470((long)(int)uVar12,lVar10 + 0x58);
    lVar10 = param_1[6];
    uVar1 = *(uint *)(lVar10 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar1 < 3) {
      uVar12 = uVar12 & uVar1 - 1;
    }
    else {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar13 / uVar1);
      }
      uVar12 = uVar12 - iVar2 * uVar1;
    }
    pcVar8 = (char *)FUN_02bc0470((long)(int)uVar12,lVar10 + 0x58);
    lVar10 = 0;
    if (*pcVar6 != '\0') {
      lVar10 = *(long *)(pcVar6 + 8);
    }
    lVar3 = 0;
    if (*pcVar8 != '\0') {
      lVar3 = *(long *)(pcVar8 + 8);
    }
    if (lVar10 == 0) {
      return;
    }
    if (lVar3 == 0) {
      return;
    }
    if (*(long *)(lVar10 + 0x20) == 0) {
      return;
    }
    lVar15 = *(long *)(lVar3 + 0x48);
    if (lVar15 == 0) {
      return;
    }
    uVar14 = (undefined4)param_1[0xe];
    puVar7 = (undefined4 *)FUN_02b7f96c(*param_2,param_1 + 7);
    local_58 = *(undefined4 *)((long)param_1 + 0x54);
    local_54 = (undefined4)param_1[0xb];
    lVar10 = param_1[0xd] + *(long *)(lVar10 + 0x40);
    uVar4 = param_2[2];
    puVar9 = &local_58;
    pcVar11 = DAT_043f0e08;
    break;
  case 1:
    lVar10 = *param_1;
    uVar1 = *(uint *)(lVar10 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar1 < 3) {
      uVar12 = uVar12 & uVar1 - 1;
    }
    else {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar13 / uVar1);
      }
      uVar12 = uVar12 - iVar2 * uVar1;
    }
    pcVar6 = (char *)FUN_02bc0470((long)(int)uVar12,lVar10 + 0x58);
    lVar10 = param_1[6];
    uVar1 = *(uint *)(lVar10 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar1 < 3) {
      uVar12 = uVar12 & uVar1 - 1;
    }
    else {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar13 / uVar1);
      }
      uVar12 = uVar12 - iVar2 * uVar1;
    }
    pcVar8 = (char *)FUN_02bc0470((long)(int)uVar12,lVar10 + 0x58);
    lVar10 = 0;
    if (*pcVar6 != '\0') {
      lVar10 = *(long *)(pcVar6 + 8);
    }
    lVar3 = 0;
    if (*pcVar8 != '\0') {
      lVar3 = *(long *)(pcVar8 + 8);
    }
    if (lVar10 == 0) {
      return;
    }
    if (lVar3 == 0) {
      return;
    }
    lVar10 = *(long *)(lVar10 + 0x48);
    if (lVar10 == 0) {
      return;
    }
    if (*(long *)(lVar3 + 0x20) == 0) {
      return;
    }
    uVar14 = (undefined4)param_1[0xe];
    lVar15 = FUN_02b7f96c(*param_2,param_1 + 1);
    local_58 = *(undefined4 *)((long)param_1 + 0x24);
    local_54 = (undefined4)param_1[5];
    uVar4 = param_2[2];
    puVar9 = *(undefined4 **)(lVar3 + 0x40);
    puVar7 = &local_58;
    pcVar11 = DAT_043f0e10;
    break;
  case 2:
    lVar10 = *param_1;
    uVar1 = *(uint *)(lVar10 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar1 < 3) {
      uVar12 = uVar12 & uVar1 - 1;
    }
    else {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar13 / uVar1);
      }
      uVar12 = uVar12 - iVar2 * uVar1;
    }
    pcVar6 = (char *)FUN_02bc0470((long)(int)uVar12,lVar10 + 0x58);
    lVar10 = param_1[6];
    uVar1 = *(uint *)(lVar10 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar1 < 3) {
      uVar12 = uVar12 & uVar1 - 1;
    }
    else {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar13 / uVar1);
      }
      uVar12 = uVar12 - iVar2 * uVar1;
    }
    pcVar8 = (char *)FUN_02bc0470((long)(int)uVar12,lVar10 + 0x58);
    lVar3 = param_1[0xe];
    lVar10 = 0;
    if (*pcVar6 != '\0') {
      lVar10 = *(long *)(pcVar6 + 8);
    }
    lVar15 = 0;
    if (*pcVar8 != '\0') {
      lVar15 = *(long *)(pcVar8 + 8);
    }
    if (lVar10 != 0 && lVar15 != 0) {
      lVar10 = *(long *)(lVar10 + 0x48);
      lVar15 = *(long *)(lVar15 + 0x48);
      if (lVar10 != 0 && lVar15 != 0) {
        uVar4 = FUN_02b7f96c(*param_2,param_1 + 1);
        local_5c = (undefined4)param_1[3];
        local_58 = *(undefined4 *)((long)param_1 + 0x1c);
        local_54 = (undefined4)param_1[4];
        local_68 = *(undefined4 *)((long)param_1 + 0x24);
        local_64 = (undefined4)param_1[5];
        local_60 = *(undefined4 *)((long)param_1 + 0x2c);
        uVar5 = FUN_02b7f96c(*param_2,param_1 + 7);
        local_74 = (undefined4)param_1[9];
        local_70 = *(undefined4 *)((long)param_1 + 0x4c);
        local_6c = (undefined4)param_1[10];
        local_80 = *(undefined4 *)((long)param_1 + 0x54);
        local_7c = (undefined4)param_1[0xb];
        local_78 = *(undefined4 *)((long)param_1 + 0x5c);
        (*DAT_043f0e18)(param_2[2],lVar10,uVar4,&local_68,lVar15,uVar5,&local_80,(int)lVar3);
      }
    }
    return;
  case 3:
    lVar10 = *param_1;
    uVar1 = *(uint *)(lVar10 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar1 < 3) {
      uVar12 = uVar12 & uVar1 - 1;
    }
    else {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar13 / uVar1);
      }
      uVar12 = uVar12 - iVar2 * uVar1;
    }
    pcVar6 = (char *)FUN_02bc0470((long)(int)uVar12,lVar10 + 0x58);
    lVar10 = param_1[6];
    uVar1 = *(uint *)(lVar10 + 0xa0);
    uVar13 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
    uVar12 = (uint)uVar13;
    if (uVar1 < 3) {
      uVar12 = uVar12 & uVar1 - 1;
    }
    else {
      iVar2 = 0;
      if ((ulong)uVar1 != 0) {
        iVar2 = (int)(uVar13 / uVar1);
      }
      uVar12 = uVar12 - iVar2 * uVar1;
    }
    pcVar8 = (char *)FUN_02bc0470((long)(int)uVar12,lVar10 + 0x58);
    lVar10 = 0;
    if (*pcVar6 != '\0') {
      lVar10 = *(long *)(pcVar6 + 8);
    }
    lVar3 = 0;
    if (*pcVar8 != '\0') {
      lVar3 = *(long *)(pcVar8 + 8);
    }
    if ((((lVar10 != 0) && (lVar3 != 0)) && (*(long *)(lVar10 + 0x20) != 0)) &&
       (*(long *)(lVar3 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02ba53bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_043f0e20)(param_2[2],*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar3 + 0x40),
                      param_1[0xc],(int)param_1[0xe]);
      return;
    }
  default:
    goto switchD_02ba5000_default;
  }
  (*pcVar11)(uVar4,lVar10,lVar15,puVar7,puVar9,uVar14);
switchD_02ba5000_default:
  return;
}


