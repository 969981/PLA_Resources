/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d5ce0; name: FUN_010d5ce0
 */


ulong FUN_010d5ce0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined3 uStack_23;
  undefined5 local_20;
  undefined1 local_18;
  
  lVar8 = (long)param_2 - (long)param_1 >> 4;
  if ((ulong)(lVar8 * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x010d5d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)(&UNK_010d5d24 +
                      (ulong)*(ushort *)(&DAT_03a78d18 + lVar8 * 0x5555555555555556) * 4))(1);
    return uVar7;
  }
  puVar9 = param_1 + 0x18;
  uVar4 = *puVar9;
  puVar11 = param_1 + 0xc;
  uVar5 = *puVar11;
  if (uVar5 < *param_1) {
    uVar12 = *(undefined8 *)param_1;
    uVar16 = *(undefined8 *)(param_1 + 2);
    uVar13 = *(undefined8 *)(param_1 + 4);
    uVar2 = *(undefined8 *)(param_1 + 6);
    uVar15 = *(undefined8 *)(param_1 + 8);
    local_18 = (undefined1)*(undefined8 *)(param_1 + 10);
    if (uVar4 < uVar5) {
      *(undefined8 *)param_1 = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0x1a);
      *(char *)(param_1 + 10) = (char)param_1[0x22];
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x1e);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x1c);
      *(undefined1 *)(param_1 + 0x22) = local_18;
      *(undefined8 *)(param_1 + 0x1e) = uVar2;
      *(undefined8 *)(param_1 + 0x20) = uVar15;
      *(undefined8 *)puVar9 = uVar12;
      *(undefined8 *)(param_1 + 0x1a) = uVar16;
      *(undefined8 *)(param_1 + 0x1c) = uVar13;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)puVar11;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
      *(char *)(param_1 + 10) = (char)param_1[0x16];
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x16) = local_18;
      *(undefined8 *)(param_1 + 0x12) = uVar2;
      *(undefined8 *)(param_1 + 0x14) = uVar15;
      *(undefined8 *)puVar11 = uVar12;
      *(undefined8 *)(param_1 + 0xe) = uVar16;
      *(undefined8 *)(param_1 + 0x10) = uVar13;
      if (uVar4 < param_1[0xc]) {
        uVar12 = *(undefined8 *)puVar11;
        uVar16 = *(undefined8 *)(param_1 + 0xe);
        uVar13 = *(undefined8 *)(param_1 + 0x10);
        uVar2 = *(undefined8 *)(param_1 + 0x12);
        uVar15 = *(undefined8 *)(param_1 + 0x14);
        uVar3 = *(undefined8 *)(param_1 + 0x16);
        *(char *)(param_1 + 0x16) = (char)param_1[0x22];
        *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
        *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
        *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
        *(undefined8 *)puVar9 = uVar12;
        *(undefined8 *)(param_1 + 0x1a) = uVar16;
        local_18 = (undefined1)uVar3;
        *(undefined1 *)(param_1 + 0x22) = local_18;
        *(undefined8 *)(param_1 + 0x1e) = uVar2;
        *(undefined8 *)(param_1 + 0x20) = uVar15;
        *(undefined8 *)(param_1 + 0x1c) = uVar13;
      }
    }
  }
  else if (uVar4 < uVar5) {
    uVar12 = *(undefined8 *)puVar11;
    uVar16 = *(undefined8 *)(param_1 + 0xe);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x12);
    uVar15 = *(undefined8 *)(param_1 + 0x14);
    uVar3 = *(undefined8 *)(param_1 + 0x16);
    *(char *)(param_1 + 0x16) = (char)param_1[0x22];
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 0x1e);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)puVar11 = *(undefined8 *)puVar9;
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x1a);
    *(undefined8 *)puVar9 = uVar12;
    *(undefined8 *)(param_1 + 0x1a) = uVar16;
    local_18 = (undefined1)uVar3;
    *(undefined1 *)(param_1 + 0x22) = local_18;
    *(undefined8 *)(param_1 + 0x1e) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar15;
    *(undefined8 *)(param_1 + 0x1c) = uVar13;
    if (*puVar11 < *param_1) {
      uVar12 = *(undefined8 *)param_1;
      uVar16 = *(undefined8 *)(param_1 + 2);
      uVar13 = *(undefined8 *)(param_1 + 4);
      uVar2 = *(undefined8 *)(param_1 + 6);
      uVar15 = *(undefined8 *)(param_1 + 8);
      uVar3 = *(undefined8 *)(param_1 + 10);
      *(char *)(param_1 + 10) = (char)param_1[0x16];
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)param_1 = *(undefined8 *)puVar11;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)puVar11 = uVar12;
      *(undefined8 *)(param_1 + 0xe) = uVar16;
      local_18 = (undefined1)uVar3;
      *(undefined1 *)(param_1 + 0x16) = local_18;
      *(undefined8 *)(param_1 + 0x12) = uVar2;
      *(undefined8 *)(param_1 + 0x14) = uVar15;
      *(undefined8 *)(param_1 + 0x10) = uVar13;
    }
  }
  if (param_1 + 0x24 != param_2) {
    lVar8 = 0;
    iVar10 = 0;
    puVar11 = param_1 + 0x24;
    do {
      uVar4 = *puVar11;
      if (uVar4 < *puVar9) {
        uVar12 = *(undefined8 *)(puVar11 + 1);
        uVar15 = *(undefined8 *)(puVar11 + 3);
        uVar13 = *(undefined8 *)(puVar11 + 5);
        uVar16 = *(undefined8 *)(puVar11 + 7);
        uStack_23 = (undefined3)((ulong)uVar16 >> 0x28);
        local_20 = (undefined5)*(undefined8 *)(puVar11 + 9);
        lVar6 = lVar8;
        do {
          lVar14 = lVar6;
          *(undefined8 *)((long)param_1 + lVar14 + 0xa0) =
               *(undefined8 *)((long)param_1 + lVar14 + 0x70);
          *(undefined8 *)((long)param_1 + lVar14 + 0xa8) =
               *(undefined8 *)((long)param_1 + lVar14 + 0x78);
          *(undefined1 *)((long)param_1 + lVar14 + 0xb8) =
               *(undefined1 *)((long)param_1 + lVar14 + 0x88);
          *(undefined8 *)((long)param_1 + lVar14 + 0xb0) =
               *(undefined8 *)((long)param_1 + lVar14 + 0x80);
          *(undefined8 *)((long)param_1 + lVar14 + 0x90) =
               *(undefined8 *)((long)param_1 + lVar14 + 0x60);
          *(undefined8 *)((long)param_1 + lVar14 + 0x98) =
               *(undefined8 *)((long)param_1 + lVar14 + 0x68);
          if (lVar14 == -0x60) {
            puVar9 = param_1;
            goto LAB_010d5f1c;
          }
          lVar6 = lVar14 + -0x30;
        } while (uVar4 < *(uint *)((long)param_1 + lVar14 + 0x30));
        puVar9 = (uint *)((long)param_1 + lVar14 + 0x60);
LAB_010d5f1c:
        *puVar9 = uVar4;
        *(undefined8 *)(puVar9 + 1) = uVar12;
        iVar10 = iVar10 + 1;
        *(ulong *)((long)puVar9 + 0x21) = CONCAT53(local_20,uStack_23);
        *(undefined8 *)(puVar9 + 7) = uVar16;
        *(undefined8 *)(puVar9 + 5) = uVar13;
        *(undefined8 *)(puVar9 + 3) = uVar15;
        if (iVar10 == 8) {
          return (ulong)(puVar11 + 0xc == param_2);
        }
      }
      puVar1 = puVar11 + 0xc;
      lVar8 = lVar8 + 0x30;
      puVar9 = puVar11;
      puVar11 = puVar1;
    } while (puVar1 != param_2);
  }
  return 1;
}


