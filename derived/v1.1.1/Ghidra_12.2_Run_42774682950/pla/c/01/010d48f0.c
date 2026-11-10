/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d48f0; name: FUN_010d48f0
 */


void FUN_010d48f0(uint *param_1,uint *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  uint *puVar25;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined5 local_78;
  undefined3 uStack_73;
  undefined5 local_70;
  undefined3 uStack_6b;
  undefined1 local_68;
  
LAB_010d4924:
  puVar16 = param_2 + -0xc;
  puVar9 = param_1;
LAB_010d4930:
  param_1 = puVar9;
  uVar14 = (long)param_2 - (long)param_1;
  uVar22 = ((long)uVar14 >> 4) * -0x5555555555555555;
  if (uVar22 < 2) {
    return;
  }
  switch(uVar22) {
  case 2:
    if (*param_1 <= *puVar16) {
      return;
    }
    local_90 = *(undefined8 *)param_1;
    local_88 = *(undefined8 *)(param_1 + 2);
    local_80 = *(undefined8 *)(param_1 + 4);
    local_68 = (undefined1)*(undefined8 *)(param_1 + 10);
    local_70 = (undefined5)*(undefined8 *)(param_1 + 8);
    uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + 8) >> 0x28);
    local_78 = (undefined5)*(undefined8 *)(param_1 + 6);
    uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 6) >> 0x28);
    uVar23 = *(undefined8 *)(param_2 + -4);
    uVar19 = *(undefined8 *)(param_2 + -8);
    uVar20 = *(undefined8 *)(param_2 + -6);
    *(char *)(param_1 + 10) = (char)param_2[-2];
    *(undefined8 *)(param_1 + 6) = uVar20;
    *(undefined8 *)(param_1 + 8) = uVar23;
    *(undefined8 *)(param_1 + 4) = uVar19;
    uVar19 = *(undefined8 *)(param_2 + -10);
    *(undefined8 *)param_1 = *(undefined8 *)puVar16;
    *(undefined8 *)(param_1 + 2) = uVar19;
    break;
  case 3:
    puVar9 = param_1 + 0xc;
    uVar4 = *puVar9;
    if (*param_1 <= uVar4) {
      if (uVar4 <= *puVar16) {
        return;
      }
      uVar19 = *(undefined8 *)puVar9;
      uVar1 = *(undefined8 *)(param_1 + 0xe);
      uVar20 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x12);
      uVar23 = *(undefined8 *)(param_1 + 0x14);
      uVar3 = *(undefined8 *)(param_1 + 0x16);
      uVar15 = *(undefined8 *)(param_2 + -4);
      uVar18 = *(undefined8 *)(param_2 + -8);
      uVar17 = *(undefined8 *)(param_2 + -6);
      *(char *)(param_1 + 0x16) = (char)param_2[-2];
      *(undefined8 *)(param_1 + 0x12) = uVar17;
      *(undefined8 *)(param_1 + 0x14) = uVar15;
      *(undefined8 *)(param_1 + 0x10) = uVar18;
      uVar18 = *(undefined8 *)(param_2 + -10);
      *(undefined8 *)puVar9 = *(undefined8 *)puVar16;
      *(undefined8 *)(param_1 + 0xe) = uVar18;
      *(undefined8 *)puVar16 = uVar19;
      *(undefined8 *)(param_2 + -10) = uVar1;
      local_68 = (undefined1)uVar3;
      *(undefined1 *)(param_2 + -2) = local_68;
      *(undefined8 *)(param_2 + -6) = uVar2;
      *(undefined8 *)(param_2 + -4) = uVar23;
      *(undefined8 *)(param_2 + -8) = uVar20;
      goto LAB_010d4c20;
    }
    uVar19 = *(undefined8 *)param_1;
    uVar18 = *(undefined8 *)(param_1 + 2);
    uVar20 = *(undefined8 *)(param_1 + 4);
    uVar1 = *(undefined8 *)(param_1 + 6);
    uVar23 = *(undefined8 *)(param_1 + 8);
    local_68 = (undefined1)*(undefined8 *)(param_1 + 10);
    if (*puVar16 < uVar4) {
      uVar2 = *(undefined8 *)(param_2 + -10);
      *(undefined8 *)param_1 = *(undefined8 *)puVar16;
      *(undefined8 *)(param_1 + 2) = uVar2;
      uVar17 = *(undefined8 *)(param_2 + -4);
      uVar2 = *(undefined8 *)(param_2 + -8);
      uVar3 = *(undefined8 *)(param_2 + -6);
      *(char *)(param_1 + 10) = (char)param_2[-2];
      *(undefined8 *)(param_1 + 6) = uVar3;
      *(undefined8 *)(param_1 + 8) = uVar17;
      *(undefined8 *)(param_1 + 4) = uVar2;
      *(undefined1 *)(param_2 + -2) = local_68;
      *(undefined8 *)(param_2 + -6) = uVar1;
      *(undefined8 *)(param_2 + -4) = uVar23;
      *(undefined8 *)(param_2 + -8) = uVar20;
      *(undefined8 *)puVar16 = uVar19;
      *(undefined8 *)(param_2 + -10) = uVar18;
      return;
    }
    *(undefined8 *)param_1 = *(undefined8 *)puVar9;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
    *(char *)(param_1 + 10) = (char)param_1[0x16];
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x16) = local_68;
    *(undefined8 *)(param_1 + 0x12) = uVar1;
    *(undefined8 *)(param_1 + 0x14) = uVar23;
    *(undefined8 *)puVar9 = uVar19;
    *(undefined8 *)(param_1 + 0xe) = uVar18;
    *(undefined8 *)(param_1 + 0x10) = uVar20;
    if (param_1[0xc] <= *puVar16) {
      return;
    }
    local_90 = *(undefined8 *)puVar9;
    local_88 = *(undefined8 *)(param_1 + 0xe);
    local_80 = *(undefined8 *)(param_1 + 0x10);
    local_70 = (undefined5)*(undefined8 *)(param_1 + 0x14);
    uStack_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x28);
    local_68 = (undefined1)*(undefined8 *)(param_1 + 0x16);
    local_78 = (undefined5)*(undefined8 *)(param_1 + 0x12);
    uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x28);
    uVar23 = *(undefined8 *)(param_2 + -4);
    uVar19 = *(undefined8 *)(param_2 + -8);
    uVar20 = *(undefined8 *)(param_2 + -6);
    *(char *)(param_1 + 0x16) = (char)param_2[-2];
    *(undefined8 *)(param_1 + 0x12) = uVar20;
    *(undefined8 *)(param_1 + 0x14) = uVar23;
    *(undefined8 *)(param_1 + 0x10) = uVar19;
    uVar19 = *(undefined8 *)(param_2 + -10);
    *(undefined8 *)puVar9 = *(undefined8 *)puVar16;
    *(undefined8 *)(param_1 + 0xe) = uVar19;
    break;
  case 4:
    puVar9 = param_1 + 0xc;
    uVar4 = *puVar9;
    puVar12 = param_1 + 0x18;
    uVar5 = *puVar12;
    if (uVar4 < *param_1) {
      uVar19 = *(undefined8 *)param_1;
      uVar18 = *(undefined8 *)(param_1 + 2);
      uVar20 = *(undefined8 *)(param_1 + 4);
      uVar1 = *(undefined8 *)(param_1 + 6);
      uVar23 = *(undefined8 *)(param_1 + 8);
      local_68 = (undefined1)*(undefined8 *)(param_1 + 10);
      if (uVar5 < uVar4) {
        *(undefined8 *)param_1 = *(undefined8 *)puVar12;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x1a);
        *(char *)(param_1 + 10) = (char)param_1[0x22];
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x1e);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x22) = local_68;
        *(undefined8 *)(param_1 + 0x1e) = uVar1;
        *(undefined8 *)(param_1 + 0x20) = uVar23;
        *(undefined8 *)puVar12 = uVar19;
        *(undefined8 *)(param_1 + 0x1a) = uVar18;
        *(undefined8 *)(param_1 + 0x1c) = uVar20;
      }
      else {
        *(undefined8 *)param_1 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
        *(char *)(param_1 + 10) = (char)param_1[0x16];
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
        *(undefined1 *)(param_1 + 0x16) = local_68;
        *(undefined8 *)(param_1 + 0x12) = uVar1;
        *(undefined8 *)(param_1 + 0x14) = uVar23;
        *(undefined8 *)puVar9 = uVar19;
        *(undefined8 *)(param_1 + 0xe) = uVar18;
        *(undefined8 *)(param_1 + 0x10) = uVar20;
        if (uVar5 < param_1[0xc]) {
          uVar19 = *(undefined8 *)puVar9;
          uVar18 = *(undefined8 *)(param_1 + 0xe);
          uVar20 = *(undefined8 *)(param_1 + 0x10);
          uVar1 = *(undefined8 *)(param_1 + 0x12);
          uVar23 = *(undefined8 *)(param_1 + 0x14);
          uVar2 = *(undefined8 *)(param_1 + 0x16);
          *(char *)(param_1 + 0x16) = (char)param_1[0x22];
          *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
          *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
          *(undefined8 *)puVar9 = *(undefined8 *)puVar12;
          *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
          *(undefined8 *)puVar12 = uVar19;
          *(undefined8 *)(param_1 + 0x1a) = uVar18;
          local_68 = (undefined1)uVar2;
          *(undefined1 *)(param_1 + 0x22) = local_68;
          *(undefined8 *)(param_1 + 0x1e) = uVar1;
          *(undefined8 *)(param_1 + 0x20) = uVar23;
          *(undefined8 *)(param_1 + 0x1c) = uVar20;
        }
      }
    }
    else if (uVar5 < uVar4) {
      uVar19 = *(undefined8 *)puVar9;
      uVar18 = *(undefined8 *)(param_1 + 0xe);
      uVar20 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined8 *)(param_1 + 0x12);
      uVar23 = *(undefined8 *)(param_1 + 0x14);
      uVar2 = *(undefined8 *)(param_1 + 0x16);
      *(char *)(param_1 + 0x16) = (char)param_1[0x22];
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)puVar9 = *(undefined8 *)puVar12;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
      *(undefined8 *)puVar12 = uVar19;
      *(undefined8 *)(param_1 + 0x1a) = uVar18;
      local_68 = (undefined1)uVar2;
      *(undefined1 *)(param_1 + 0x22) = local_68;
      *(undefined8 *)(param_1 + 0x1e) = uVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar23;
      *(undefined8 *)(param_1 + 0x1c) = uVar20;
      if (*puVar9 < *param_1) {
        uVar19 = *(undefined8 *)param_1;
        uVar18 = *(undefined8 *)(param_1 + 2);
        uVar20 = *(undefined8 *)(param_1 + 4);
        uVar1 = *(undefined8 *)(param_1 + 6);
        uVar23 = *(undefined8 *)(param_1 + 8);
        uVar2 = *(undefined8 *)(param_1 + 10);
        *(char *)(param_1 + 10) = (char)param_1[0x16];
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)param_1 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)puVar9 = uVar19;
        *(undefined8 *)(param_1 + 0xe) = uVar18;
        local_68 = (undefined1)uVar2;
        *(undefined1 *)(param_1 + 0x16) = local_68;
        *(undefined8 *)(param_1 + 0x12) = uVar1;
        *(undefined8 *)(param_1 + 0x14) = uVar23;
        *(undefined8 *)(param_1 + 0x10) = uVar20;
      }
    }
    if (*puVar12 <= *puVar16) {
      return;
    }
    uVar19 = *(undefined8 *)puVar12;
    uVar1 = *(undefined8 *)(param_1 + 0x1a);
    uVar20 = *(undefined8 *)(param_1 + 0x1c);
    uVar2 = *(undefined8 *)(param_1 + 0x1e);
    uVar23 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x22);
    uVar15 = *(undefined8 *)(param_2 + -4);
    uVar18 = *(undefined8 *)(param_2 + -8);
    uVar17 = *(undefined8 *)(param_2 + -6);
    *(char *)(param_1 + 0x22) = (char)param_2[-2];
    *(undefined8 *)(param_1 + 0x1e) = uVar17;
    *(undefined8 *)(param_1 + 0x20) = uVar15;
    *(undefined8 *)(param_1 + 0x1c) = uVar18;
    uVar18 = *(undefined8 *)(param_2 + -10);
    *(undefined8 *)puVar12 = *(undefined8 *)puVar16;
    *(undefined8 *)(param_1 + 0x1a) = uVar18;
    *(undefined8 *)puVar16 = uVar19;
    *(undefined8 *)(param_2 + -10) = uVar1;
    local_68 = (undefined1)uVar3;
    *(undefined1 *)(param_2 + -2) = local_68;
    *(undefined8 *)(param_2 + -6) = uVar2;
    *(undefined8 *)(param_2 + -4) = uVar23;
    *(undefined8 *)(param_2 + -8) = uVar20;
    if (*puVar9 <= *puVar12) {
      return;
    }
    uVar19 = *(undefined8 *)puVar9;
    uVar18 = *(undefined8 *)(param_1 + 0xe);
    uVar20 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x12);
    uVar23 = *(undefined8 *)(param_1 + 0x14);
    uVar2 = *(undefined8 *)(param_1 + 0x16);
    *(char *)(param_1 + 0x16) = (char)param_1[0x22];
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)puVar9 = *(undefined8 *)puVar12;
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
    *(undefined8 *)puVar12 = uVar19;
    *(undefined8 *)(param_1 + 0x1a) = uVar18;
    local_68 = (undefined1)uVar2;
    *(undefined1 *)(param_1 + 0x22) = local_68;
    *(undefined8 *)(param_1 + 0x1e) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar23;
    *(undefined8 *)(param_1 + 0x1c) = uVar20;
LAB_010d4c20:
    puVar9 = param_1 + 0xc;
    if (*puVar9 < *param_1) {
      uVar19 = *(undefined8 *)param_1;
      uVar18 = *(undefined8 *)(param_1 + 2);
      uVar20 = *(undefined8 *)(param_1 + 4);
      uVar1 = *(undefined8 *)(param_1 + 6);
      uVar23 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 10);
      *(char *)(param_1 + 10) = (char)param_1[0x16];
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)param_1 = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)puVar9 = uVar19;
      *(undefined8 *)(param_1 + 0xe) = uVar18;
      local_68 = (undefined1)uVar2;
      *(undefined1 *)(param_1 + 0x16) = local_68;
      *(undefined8 *)(param_1 + 0x12) = uVar1;
      *(undefined8 *)(param_1 + 0x14) = uVar23;
      *(undefined8 *)(param_1 + 0x10) = uVar20;
      return;
    }
    return;
  case 5:
    FUN_010d57c0(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,puVar16);
    return;
  default:
    if (0x5cf < (long)uVar14) {
      puVar9 = param_1 + (uVar14 / 0x60) * 0xc;
      if ((long)uVar14 < 0xbb51) {
        uVar4 = *puVar9;
        if (uVar4 < *param_1) {
          uVar19 = *(undefined8 *)param_1;
          uVar18 = *(undefined8 *)(param_1 + 2);
          uVar20 = *(undefined8 *)(param_1 + 4);
          uVar1 = *(undefined8 *)(param_1 + 6);
          uVar23 = *(undefined8 *)(param_1 + 8);
          local_68 = (undefined1)*(undefined8 *)(param_1 + 10);
          if (*puVar16 < uVar4) {
            uVar2 = *(undefined8 *)(param_2 + -10);
            iVar7 = 1;
            *(undefined8 *)param_1 = *(undefined8 *)puVar16;
            *(undefined8 *)(param_1 + 2) = uVar2;
            uVar17 = *(undefined8 *)(param_2 + -4);
            uVar2 = *(undefined8 *)(param_2 + -8);
            uVar3 = *(undefined8 *)(param_2 + -6);
            *(char *)(param_1 + 10) = (char)param_2[-2];
            *(undefined8 *)(param_1 + 6) = uVar3;
            *(undefined8 *)(param_1 + 8) = uVar17;
            *(undefined8 *)(param_1 + 4) = uVar2;
            *(undefined1 *)(param_2 + -2) = local_68;
            *(undefined8 *)(param_2 + -6) = uVar1;
            *(undefined8 *)(param_2 + -4) = uVar23;
            *(undefined8 *)(param_2 + -8) = uVar20;
            *(undefined8 *)puVar16 = uVar19;
            *(undefined8 *)(param_2 + -10) = uVar18;
          }
          else {
            uVar2 = *(undefined8 *)(puVar9 + 2);
            *(undefined8 *)param_1 = *(undefined8 *)puVar9;
            *(undefined8 *)(param_1 + 2) = uVar2;
            uVar17 = *(undefined8 *)(puVar9 + 8);
            uVar2 = *(undefined8 *)(puVar9 + 4);
            uVar3 = *(undefined8 *)(puVar9 + 6);
            *(char *)(param_1 + 10) = (char)puVar9[10];
            *(undefined8 *)(param_1 + 6) = uVar3;
            *(undefined8 *)(param_1 + 8) = uVar17;
            *(undefined8 *)(param_1 + 4) = uVar2;
            *(undefined1 *)(puVar9 + 10) = local_68;
            *(undefined8 *)(puVar9 + 6) = uVar1;
            *(undefined8 *)(puVar9 + 8) = uVar23;
            *(undefined8 *)(puVar9 + 4) = uVar20;
            *(undefined8 *)puVar9 = uVar19;
            *(undefined8 *)(puVar9 + 2) = uVar18;
            if ((uint)uVar19 <= *puVar16) goto LAB_010d4d74;
            uVar19 = *(undefined8 *)puVar9;
            uVar1 = *(undefined8 *)(puVar9 + 2);
            uVar20 = *(undefined8 *)(puVar9 + 4);
            uVar2 = *(undefined8 *)(puVar9 + 6);
            uVar23 = *(undefined8 *)(puVar9 + 8);
            uVar3 = *(undefined8 *)(puVar9 + 10);
            uVar15 = *(undefined8 *)(param_2 + -4);
            uVar18 = *(undefined8 *)(param_2 + -8);
            uVar17 = *(undefined8 *)(param_2 + -6);
            *(char *)(puVar9 + 10) = (char)param_2[-2];
            *(undefined8 *)(puVar9 + 6) = uVar17;
            *(undefined8 *)(puVar9 + 8) = uVar15;
            *(undefined8 *)(puVar9 + 4) = uVar18;
            uVar18 = *(undefined8 *)(param_2 + -10);
            *(undefined8 *)puVar9 = *(undefined8 *)puVar16;
            *(undefined8 *)(puVar9 + 2) = uVar18;
            *(undefined8 *)puVar16 = uVar19;
            *(undefined8 *)(param_2 + -10) = uVar1;
            local_68 = (undefined1)uVar3;
            *(undefined1 *)(param_2 + -2) = local_68;
            *(undefined8 *)(param_2 + -6) = uVar2;
            *(undefined8 *)(param_2 + -4) = uVar23;
            *(undefined8 *)(param_2 + -8) = uVar20;
LAB_010d5184:
            iVar7 = 2;
          }
        }
        else if (*puVar16 < uVar4) {
          uVar19 = *(undefined8 *)puVar9;
          uVar1 = *(undefined8 *)(puVar9 + 2);
          uVar20 = *(undefined8 *)(puVar9 + 4);
          uVar2 = *(undefined8 *)(puVar9 + 6);
          uVar23 = *(undefined8 *)(puVar9 + 8);
          uVar3 = *(undefined8 *)(puVar9 + 10);
          uVar15 = *(undefined8 *)(param_2 + -4);
          uVar18 = *(undefined8 *)(param_2 + -8);
          uVar17 = *(undefined8 *)(param_2 + -6);
          *(char *)(puVar9 + 10) = (char)param_2[-2];
          *(undefined8 *)(puVar9 + 6) = uVar17;
          *(undefined8 *)(puVar9 + 8) = uVar15;
          *(undefined8 *)(puVar9 + 4) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar9 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar9 + 2) = uVar18;
          *(undefined8 *)puVar16 = uVar19;
          *(undefined8 *)(param_2 + -10) = uVar1;
          local_68 = (undefined1)uVar3;
          *(undefined1 *)(param_2 + -2) = local_68;
          *(undefined8 *)(param_2 + -6) = uVar2;
          *(undefined8 *)(param_2 + -4) = uVar23;
          *(undefined8 *)(param_2 + -8) = uVar20;
          if (*puVar9 < *param_1) {
            uVar19 = *(undefined8 *)param_1;
            uVar1 = *(undefined8 *)(param_1 + 2);
            uVar20 = *(undefined8 *)(param_1 + 4);
            uVar2 = *(undefined8 *)(param_1 + 6);
            uVar23 = *(undefined8 *)(param_1 + 8);
            uVar3 = *(undefined8 *)(param_1 + 10);
            uVar15 = *(undefined8 *)(puVar9 + 8);
            uVar18 = *(undefined8 *)(puVar9 + 4);
            uVar17 = *(undefined8 *)(puVar9 + 6);
            *(char *)(param_1 + 10) = (char)puVar9[10];
            *(undefined8 *)(param_1 + 6) = uVar17;
            *(undefined8 *)(param_1 + 8) = uVar15;
            *(undefined8 *)(param_1 + 4) = uVar18;
            uVar18 = *(undefined8 *)(puVar9 + 2);
            *(undefined8 *)param_1 = *(undefined8 *)puVar9;
            *(undefined8 *)(param_1 + 2) = uVar18;
            *(undefined8 *)puVar9 = uVar19;
            *(undefined8 *)(puVar9 + 2) = uVar1;
            local_68 = (undefined1)uVar3;
            *(undefined1 *)(puVar9 + 10) = local_68;
            *(undefined8 *)(puVar9 + 6) = uVar2;
            *(undefined8 *)(puVar9 + 8) = uVar23;
            *(undefined8 *)(puVar9 + 4) = uVar20;
            goto LAB_010d5184;
          }
LAB_010d4d74:
          iVar7 = 1;
        }
        else {
          iVar7 = 0;
        }
      }
      else {
        iVar7 = FUN_010d57c0(param_1,param_1 + (uVar14 / 0xc0) * 0xc,puVar9,
                             puVar9 + (uVar14 / 0xc0) * 0xc,puVar16,param_3);
      }
      uVar4 = *param_1;
      if (*puVar9 <= uVar4) {
        puVar12 = param_2 + -0x18;
LAB_010d5560:
        puVar10 = puVar12;
        if (param_1 != puVar10) goto code_r0x010d5568;
        puVar12 = param_1 + 0xc;
        if (*puVar16 <= uVar4) {
          if (puVar12 == puVar16) {
            return;
          }
          puVar12 = param_1 + 0x18;
          while (puVar12[-0xc] <= uVar4) {
            puVar12 = puVar12 + 0xc;
            if (param_2 == puVar12) {
              return;
            }
          }
          uVar19 = *(undefined8 *)(puVar12 + -0xc);
          uVar1 = *(undefined8 *)(puVar12 + -10);
          uVar20 = *(undefined8 *)(puVar12 + -8);
          uVar2 = *(undefined8 *)(puVar12 + -6);
          uVar23 = *(undefined8 *)(puVar12 + -4);
          uVar3 = *(undefined8 *)(puVar12 + -2);
          uVar15 = *(undefined8 *)(param_2 + -4);
          uVar18 = *(undefined8 *)(param_2 + -8);
          uVar17 = *(undefined8 *)(param_2 + -6);
          *(char *)(puVar12 + -2) = (char)param_2[-2];
          *(undefined8 *)(puVar12 + -6) = uVar17;
          *(undefined8 *)(puVar12 + -4) = uVar15;
          *(undefined8 *)(puVar12 + -8) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)(puVar12 + -0xc) = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar12 + -10) = uVar18;
          *(undefined8 *)puVar16 = uVar19;
          *(undefined8 *)(param_2 + -10) = uVar1;
          local_68 = (undefined1)uVar3;
          *(undefined1 *)(param_2 + -2) = local_68;
          *(undefined8 *)(param_2 + -6) = uVar2;
          *(undefined8 *)(param_2 + -4) = uVar23;
          *(undefined8 *)(param_2 + -8) = uVar20;
        }
        if (puVar12 == puVar16) {
          return;
        }
        puVar10 = puVar16;
        while( true ) {
          puVar9 = puVar12 + -0xc;
          do {
            puVar25 = puVar9;
            puVar9 = puVar25 + 0xc;
          } while (*puVar9 <= *param_1);
          puVar12 = puVar25 + 0x18;
          do {
            puVar8 = puVar10;
            puVar10 = puVar8 + -0xc;
          } while (*param_1 < *puVar10);
          if (puVar10 <= puVar9) break;
          uVar19 = *(undefined8 *)puVar9;
          uVar1 = *(undefined8 *)(puVar25 + 0xe);
          uVar20 = *(undefined8 *)(puVar25 + 0x10);
          uVar2 = *(undefined8 *)(puVar25 + 0x12);
          uVar23 = *(undefined8 *)(puVar25 + 0x14);
          uVar3 = *(undefined8 *)(puVar25 + 0x16);
          uVar15 = *(undefined8 *)(puVar8 + -4);
          uVar18 = *(undefined8 *)(puVar8 + -8);
          uVar17 = *(undefined8 *)(puVar8 + -6);
          *(char *)(puVar25 + 0x16) = (char)puVar8[-2];
          *(undefined8 *)(puVar25 + 0x12) = uVar17;
          *(undefined8 *)(puVar25 + 0x14) = uVar15;
          *(undefined8 *)(puVar25 + 0x10) = uVar18;
          uVar18 = *(undefined8 *)(puVar8 + -10);
          *(undefined8 *)puVar9 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar25 + 0xe) = uVar18;
          *(undefined8 *)puVar10 = uVar19;
          *(undefined8 *)(puVar8 + -10) = uVar1;
          local_68 = (undefined1)uVar3;
          *(undefined1 *)(puVar8 + -2) = local_68;
          *(undefined8 *)(puVar8 + -6) = uVar2;
          *(undefined8 *)(puVar8 + -4) = uVar23;
          *(undefined8 *)(puVar8 + -8) = uVar20;
        }
        goto LAB_010d5054;
      }
      puVar10 = puVar16;
      goto LAB_010d4f58;
    }
    puVar9 = param_1 + 0x18;
    uVar4 = *puVar9;
    puVar16 = param_1 + 0xc;
    uVar5 = *puVar16;
    if (uVar5 < *param_1) {
      uVar19 = *(undefined8 *)param_1;
      uVar18 = *(undefined8 *)(param_1 + 2);
      uVar20 = *(undefined8 *)(param_1 + 4);
      uVar1 = *(undefined8 *)(param_1 + 6);
      uVar23 = *(undefined8 *)(param_1 + 8);
      local_68 = (undefined1)*(undefined8 *)(param_1 + 10);
      if (uVar4 < uVar5) {
        *(undefined8 *)param_1 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x1a);
        *(char *)(param_1 + 10) = (char)param_1[0x22];
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x1e);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x1c);
        *(undefined1 *)(param_1 + 0x22) = local_68;
        *(undefined8 *)(param_1 + 0x1e) = uVar1;
        *(undefined8 *)(param_1 + 0x20) = uVar23;
        *(undefined8 *)puVar9 = uVar19;
        *(undefined8 *)(param_1 + 0x1a) = uVar18;
        *(undefined8 *)(param_1 + 0x1c) = uVar20;
      }
      else {
        *(undefined8 *)param_1 = *(undefined8 *)puVar16;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
        *(char *)(param_1 + 10) = (char)param_1[0x16];
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
        *(undefined1 *)(param_1 + 0x16) = local_68;
        *(undefined8 *)(param_1 + 0x12) = uVar1;
        *(undefined8 *)(param_1 + 0x14) = uVar23;
        *(undefined8 *)puVar16 = uVar19;
        *(undefined8 *)(param_1 + 0xe) = uVar18;
        *(undefined8 *)(param_1 + 0x10) = uVar20;
        if (uVar4 < param_1[0xc]) {
          uVar19 = *(undefined8 *)puVar16;
          uVar18 = *(undefined8 *)(param_1 + 0xe);
          uVar20 = *(undefined8 *)(param_1 + 0x10);
          uVar1 = *(undefined8 *)(param_1 + 0x12);
          uVar23 = *(undefined8 *)(param_1 + 0x14);
          uVar2 = *(undefined8 *)(param_1 + 0x16);
          *(char *)(param_1 + 0x16) = (char)param_1[0x22];
          *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
          *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
          *(undefined8 *)puVar16 = *(undefined8 *)puVar9;
          *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
          *(undefined8 *)puVar9 = uVar19;
          *(undefined8 *)(param_1 + 0x1a) = uVar18;
          local_68 = (undefined1)uVar2;
          *(undefined1 *)(param_1 + 0x22) = local_68;
          *(undefined8 *)(param_1 + 0x1e) = uVar1;
          *(undefined8 *)(param_1 + 0x20) = uVar23;
          *(undefined8 *)(param_1 + 0x1c) = uVar20;
        }
      }
    }
    else if (uVar4 < uVar5) {
      uVar19 = *(undefined8 *)puVar16;
      uVar18 = *(undefined8 *)(param_1 + 0xe);
      uVar20 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = *(undefined8 *)(param_1 + 0x12);
      uVar23 = *(undefined8 *)(param_1 + 0x14);
      uVar2 = *(undefined8 *)(param_1 + 0x16);
      *(char *)(param_1 + 0x16) = (char)param_1[0x22];
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined8 *)puVar16 = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
      *(undefined8 *)puVar9 = uVar19;
      *(undefined8 *)(param_1 + 0x1a) = uVar18;
      local_68 = (undefined1)uVar2;
      *(undefined1 *)(param_1 + 0x22) = local_68;
      *(undefined8 *)(param_1 + 0x1e) = uVar1;
      *(undefined8 *)(param_1 + 0x20) = uVar23;
      *(undefined8 *)(param_1 + 0x1c) = uVar20;
      if (*puVar16 < *param_1) {
        uVar19 = *(undefined8 *)param_1;
        uVar18 = *(undefined8 *)(param_1 + 2);
        uVar20 = *(undefined8 *)(param_1 + 4);
        uVar1 = *(undefined8 *)(param_1 + 6);
        uVar23 = *(undefined8 *)(param_1 + 8);
        uVar2 = *(undefined8 *)(param_1 + 10);
        *(char *)(param_1 + 10) = (char)param_1[0x16];
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)param_1 = *(undefined8 *)puVar16;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)puVar16 = uVar19;
        *(undefined8 *)(param_1 + 0xe) = uVar18;
        local_68 = (undefined1)uVar2;
        *(undefined1 *)(param_1 + 0x16) = local_68;
        *(undefined8 *)(param_1 + 0x12) = uVar1;
        *(undefined8 *)(param_1 + 0x14) = uVar23;
        *(undefined8 *)(param_1 + 0x10) = uVar20;
      }
    }
    if (param_1 + 0x24 == param_2) {
      return;
    }
    lVar13 = 0;
    puVar16 = param_1 + 0x24;
    goto LAB_010d4e70;
  }
  *(undefined8 *)puVar16 = local_90;
  *(undefined8 *)(param_2 + -10) = local_88;
  *(undefined1 *)(param_2 + -2) = local_68;
  *(ulong *)(param_2 + -6) = CONCAT35(uStack_73,local_78);
  *(ulong *)(param_2 + -4) = CONCAT35(uStack_6b,local_70);
  *(undefined8 *)(param_2 + -8) = local_80;
  return;
code_r0x010d5568:
  puVar12 = puVar10 + -0xc;
  if (*puVar10 < *puVar9) goto code_r0x010d5574;
  goto LAB_010d5560;
code_r0x010d5574:
  uVar19 = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 2);
  iVar7 = iVar7 + 1;
  uVar20 = *(undefined8 *)(param_1 + 4);
  uVar2 = *(undefined8 *)(param_1 + 6);
  uVar23 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 10);
  uVar15 = *(undefined8 *)puVar10;
  uVar24 = *(undefined8 *)(puVar10 + 8);
  uVar18 = *(undefined8 *)(puVar10 + 4);
  uVar17 = *(undefined8 *)(puVar10 + 6);
  *(char *)(param_1 + 10) = (char)puVar10[10];
  *(undefined8 *)(param_1 + 6) = uVar17;
  *(undefined8 *)(param_1 + 8) = uVar24;
  *(undefined8 *)(param_1 + 4) = uVar18;
  uVar18 = *(undefined8 *)(puVar10 + 2);
  *(undefined8 *)param_1 = uVar15;
  *(undefined8 *)(param_1 + 2) = uVar18;
  *(undefined8 *)puVar10 = uVar19;
  *(undefined8 *)(puVar10 + 2) = uVar1;
  local_68 = (undefined1)uVar3;
  *(undefined1 *)(puVar10 + 10) = local_68;
  *(undefined8 *)(puVar10 + 6) = uVar2;
  *(undefined8 *)(puVar10 + 8) = uVar23;
  *(undefined8 *)(puVar10 + 4) = uVar20;
LAB_010d4f58:
  puVar12 = param_1 + 0xc;
  puVar25 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar12 = puVar25 + -0xc;
      do {
        puVar8 = puVar12;
        puVar12 = puVar8 + 0xc;
      } while (*puVar12 < *puVar9);
      puVar25 = puVar8 + 0x18;
      do {
        puVar11 = puVar10;
        puVar10 = puVar11 + -0xc;
      } while (*puVar9 <= *puVar10);
      if (puVar10 < puVar12) break;
      uVar19 = *(undefined8 *)puVar12;
      uVar1 = *(undefined8 *)(puVar8 + 0xe);
      iVar7 = iVar7 + 1;
      uVar20 = *(undefined8 *)(puVar8 + 0x10);
      uVar2 = *(undefined8 *)(puVar8 + 0x12);
      uVar23 = *(undefined8 *)(puVar8 + 0x14);
      uVar3 = *(undefined8 *)(puVar8 + 0x16);
      uVar15 = *(undefined8 *)(puVar11 + -4);
      uVar18 = *(undefined8 *)(puVar11 + -8);
      uVar17 = *(undefined8 *)(puVar11 + -6);
      *(char *)(puVar8 + 0x16) = (char)puVar11[-2];
      *(undefined8 *)(puVar8 + 0x12) = uVar17;
      *(undefined8 *)(puVar8 + 0x14) = uVar15;
      *(undefined8 *)(puVar8 + 0x10) = uVar18;
      uVar18 = *(undefined8 *)(puVar11 + -10);
      *(undefined8 *)puVar12 = *(undefined8 *)puVar10;
      *(undefined8 *)(puVar8 + 0xe) = uVar18;
      *(undefined8 *)puVar10 = uVar19;
      *(undefined8 *)(puVar11 + -10) = uVar1;
      local_68 = (undefined1)uVar3;
      *(undefined1 *)(puVar11 + -2) = local_68;
      *(undefined8 *)(puVar11 + -6) = uVar2;
      *(undefined8 *)(puVar11 + -4) = uVar23;
      *(undefined8 *)(puVar11 + -8) = uVar20;
      puVar8 = puVar10;
      if (puVar9 != puVar12) {
        puVar8 = puVar9;
      }
      puVar9 = puVar8;
    }
  }
  if ((puVar12 != puVar9) && (*puVar9 < *puVar12)) {
    uVar19 = *(undefined8 *)puVar12;
    uVar1 = *(undefined8 *)(puVar12 + 2);
    iVar7 = iVar7 + 1;
    uVar20 = *(undefined8 *)(puVar12 + 4);
    uVar2 = *(undefined8 *)(puVar12 + 6);
    uVar23 = *(undefined8 *)(puVar12 + 8);
    uVar3 = *(undefined8 *)(puVar12 + 10);
    uVar15 = *(undefined8 *)(puVar9 + 8);
    uVar18 = *(undefined8 *)(puVar9 + 4);
    uVar17 = *(undefined8 *)(puVar9 + 6);
    *(char *)(puVar12 + 10) = (char)puVar9[10];
    *(undefined8 *)(puVar12 + 6) = uVar17;
    *(undefined8 *)(puVar12 + 8) = uVar15;
    *(undefined8 *)(puVar12 + 4) = uVar18;
    uVar18 = *(undefined8 *)(puVar9 + 2);
    *(undefined8 *)puVar12 = *(undefined8 *)puVar9;
    *(undefined8 *)(puVar12 + 2) = uVar18;
    *(undefined8 *)puVar9 = uVar19;
    *(undefined8 *)(puVar9 + 2) = uVar1;
    local_68 = (undefined1)uVar3;
    *(undefined1 *)(puVar9 + 10) = local_68;
    *(undefined8 *)(puVar9 + 6) = uVar2;
    *(undefined8 *)(puVar9 + 8) = uVar23;
    *(undefined8 *)(puVar9 + 4) = uVar20;
  }
  if (iVar7 == 0) {
    uVar14 = FUN_010d5ce0(param_1,puVar12,param_3);
    uVar22 = FUN_010d5ce0(puVar12 + 0xc,param_2,param_3);
    if ((uVar22 & 1) != 0) goto code_r0x010d528c;
    puVar9 = puVar12 + 0xc;
    if ((uVar14 & 1) != 0) goto LAB_010d4930;
  }
  if (((long)param_2 - (long)puVar12 >> 4) * -0x5555555555555555 <=
      ((long)puVar12 - (long)param_1 >> 4) * -0x5555555555555555) {
    FUN_010d48f0(puVar12 + 0xc,param_2,param_3);
    param_2 = puVar12;
    goto LAB_010d4924;
  }
  FUN_010d48f0(param_1,puVar12,param_3);
  puVar9 = puVar12 + 0xc;
LAB_010d5054:
  goto LAB_010d4930;
code_r0x010d528c:
  param_2 = puVar12;
  if ((uVar14 & 1) != 0) {
    return;
  }
  goto LAB_010d4924;
LAB_010d4e70:
  uVar4 = *puVar16;
  if (uVar4 < *puVar9) {
    uVar19 = *(undefined8 *)(puVar16 + 1);
    uVar23 = *(undefined8 *)(puVar16 + 3);
    uVar20 = *(undefined8 *)(puVar16 + 5);
    uVar18 = *(undefined8 *)(puVar16 + 7);
    uStack_73 = (undefined3)((ulong)uVar18 >> 0x28);
    local_70 = (undefined5)*(undefined8 *)(puVar16 + 9);
    lVar6 = lVar13;
    do {
      lVar21 = lVar6;
      *(undefined8 *)((long)param_1 + lVar21 + 0xa0) =
           *(undefined8 *)((long)param_1 + lVar21 + 0x70);
      *(undefined8 *)((long)param_1 + lVar21 + 0xa8) =
           *(undefined8 *)((long)param_1 + lVar21 + 0x78);
      *(undefined1 *)((long)param_1 + lVar21 + 0xb8) =
           *(undefined1 *)((long)param_1 + lVar21 + 0x88);
      *(undefined8 *)((long)param_1 + lVar21 + 0xb0) =
           *(undefined8 *)((long)param_1 + lVar21 + 0x80);
      *(undefined8 *)((long)param_1 + lVar21 + 0x90) =
           *(undefined8 *)((long)param_1 + lVar21 + 0x60);
      *(undefined8 *)((long)param_1 + lVar21 + 0x98) =
           *(undefined8 *)((long)param_1 + lVar21 + 0x68);
      if (lVar21 == -0x60) {
        puVar9 = param_1;
        goto LAB_010d4f08;
      }
      lVar6 = lVar21 + -0x30;
    } while (uVar4 < *(uint *)((long)param_1 + lVar21 + 0x30));
    puVar9 = (uint *)((long)param_1 + lVar21 + 0x60);
LAB_010d4f08:
    *puVar9 = uVar4;
    *(undefined8 *)(puVar9 + 1) = uVar19;
    *(ulong *)((long)puVar9 + 0x21) = CONCAT53(local_70,uStack_73);
    *(undefined8 *)(puVar9 + 7) = uVar18;
    *(undefined8 *)(puVar9 + 5) = uVar20;
    *(undefined8 *)(puVar9 + 3) = uVar23;
  }
  puVar12 = puVar16 + 0xc;
  lVar13 = lVar13 + 0x30;
  puVar9 = puVar16;
  puVar16 = puVar12;
  if (puVar12 == param_2) {
    return;
  }
  goto LAB_010d4e70;
}


