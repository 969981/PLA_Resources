/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b667c; name: FUN_010b667c
 */


void FUN_010b667c(long param_1,int param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ushort *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  uint *puVar26;
  long lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 local_f0;
  undefined1 auStack_e8 [16];
  uint *local_d8;
  undefined4 local_d0;
  long local_c8;
  undefined4 local_c0;
  uint *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_78;
  
  lVar14 = *(long *)(param_1 + 0x3d0);
  puVar26 = *(uint **)(lVar14 + 0x250);
  uVar15 = 0;
  if (lVar14 != 0) {
    uVar15 = *(ulong *)(lVar14 + 0x240);
  }
  if (puVar26 == (uint *)0x0) {
    local_c8 = 0;
    local_c0 = 0xffffffff;
  }
  else {
    local_a8 = 0x4000000000;
    local_a0 = 0xf424000000000;
    uStack_98 = 0;
    local_90 = 1;
    local_b8 = puVar26;
    local_b0 = uVar15;
    if ((((uVar15 < 5) || (uVar5 = *puVar26, (int)uVar5 < 1)) || (uVar15 - 1 < (ulong)uVar5)) ||
       (uVar15 = FUN_01087308((long)puVar26 + (ulong)uVar5,&local_b8), (uVar15 & 1) == 0)) {
      local_c8 = 0;
      local_c0 = 0xffffffff;
    }
    else {
      local_c0 = 0;
      local_c8 = (long)puVar26 + (ulong)*puVar26;
    }
  }
  FUN_010868dc(&local_b8,&local_c8,param_4);
  if (local_b8 != (uint *)0x0) {
    uVar15 = local_b0 & 0xffffffff;
    if ((int)local_b0 != -1) {
      lVar14 = (long)(int)*local_b8;
      if (((4 < *(ushort *)((long)local_b8 - lVar14)) &&
          (uVar19 = (ulong)((ushort *)((long)local_b8 - lVar14))[2], uVar19 != 0)) &&
         (puVar26 = (uint *)((long)local_b8 + uVar19),
         puVar26 = (uint *)((long)puVar26 + uVar15 * 4 + (ulong)*puVar26 + 4),
         piVar1 = (int *)((long)puVar26 + (ulong)*puVar26),
         puVar26 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1))),
         *(int *)((long)puVar26 + (ulong)*puVar26) != 0)) {
        lVar20 = (long)param_3;
        uVar19 = 0;
        do {
          puVar17 = (ushort *)((long)local_b8 - (long)(int)lVar14);
          if ((*puVar17 < 5) || (uVar18 = (ulong)puVar17[2], uVar18 == 0)) {
LAB_010b6d68:
            local_d8 = (uint *)0x0;
            local_d0 = 0xffffffff;
          }
          else {
            uVar21 = (ulong)*(uint *)((long)local_b8 + uVar18);
            puVar26 = (uint *)((long)((long)local_b8 + uVar18) + uVar15 * 4 + uVar21 + 4);
            uVar22 = (ulong)*puVar26;
            piVar1 = (int *)((long)puVar26 + uVar22);
            uVar23 = (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1));
            puVar26 = (uint *)((long)piVar1 + uVar23);
            uVar24 = (ulong)*puVar26;
            if (*(uint *)((long)puVar26 + uVar24) <= uVar19) goto LAB_010b6d68;
            local_d0 = *(undefined4 *)
                        ((long)local_b8 +
                        uVar19 * 4 + uVar24 + uVar15 * 4 + uVar23 + uVar22 + uVar21 + uVar18 + 8);
            local_d8 = local_b8;
          }
          local_78 = 0x46509229aa397441;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          local_f0 = 0;
          lVar14 = FUN_0108703c(auStack_e8,&local_f0);
          if (lVar14 < 0x279c8c26c1297878) {
            if (lVar14 == 0x11ed5007bd2f6560) {
              lVar27 = param_1 + 0x338;
            }
            else {
              lVar27 = param_1 + 0x278;
              if ((lVar14 != -0x5499ccfc0c399994) &&
                 (lVar27 = param_1 + 0x1f8, lVar14 == 0x1070113c2722e521)) {
                lVar27 = param_1 + 0x1b8;
              }
            }
          }
          else {
            lVar27 = param_1 + 0x2f8;
            if (((lVar14 != 0x279c8c26c1297878) &&
                (lVar27 = param_1 + 0x2b8, lVar14 != 0x52f33f26d9b811a1)) &&
               (lVar27 = param_1 + 0x1f8, lVar14 == 0x6b463adca6acf09e)) {
              lVar27 = param_1 + 0x238;
            }
          }
          local_78 = 0xa8ff76e4d666e611;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          FUN_01086c38(0,auStack_e8);
          local_78 = 0x5d9164dec9cb93d0;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          FUN_01086a70(auStack_e8,0);
          local_78 = 0xb7c1f97682e43b8;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          uVar28 = FUN_01086c38(0,auStack_e8);
          local_78 = 0x316a7f2de12017f;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          uVar29 = FUN_01086c38(0,auStack_e8);
          local_78 = 0xa565b6e7d672eef8;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          iVar8 = FUN_01086a70(auStack_e8,0);
          local_78 = 0x8f2eb49ea3382950;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          iVar9 = FUN_01086a70(auStack_e8,0);
          local_78 = 0x69e478e79e1a1456;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          uVar6 = FUN_01086a70(auStack_e8,0);
          local_78 = 0x7493955bec212752;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          iVar10 = FUN_01086a70(auStack_e8,0);
          local_78 = 0xdddc04896dc3c333;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          uVar7 = FUN_01086a70(auStack_e8,0);
          local_78 = 0x183094936cdaaf05;
          FUN_010868dc(auStack_e8,&local_d8,&local_78);
          uVar11 = FUN_01086a70(auStack_e8,0);
          if (*(char *)(lVar27 + 0x38) == '\0') {
            uVar25 = nn::pl::GetSharedFontAddress(*(undefined4 *)(lVar27 + 0x3c));
            if (*(char *)(lVar27 + 0x38) != '\0') goto LAB_010b6b00;
            uVar12 = nn::pl::GetSharedFontSize(*(undefined4 *)(lVar27 + 0x3c));
            cVar13 = *(char *)(lVar27 + 0x38);
          }
          else {
            uVar25 = *(undefined8 *)(*(long *)(lVar27 + 0x10) + 0x250);
LAB_010b6b00:
            if (*(long *)(lVar27 + 0x10) == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = *(undefined8 *)(*(long *)(lVar27 + 0x10) + 0x240);
            }
            cVar13 = '\x01';
          }
          lVar16 = *(long *)(param_1 + (long)param_2 * 8 + 0x1a0);
          lVar14 = lVar16 + 0x60;
          lVar27 = lVar14 + lVar20 * 4;
          lVar2 = lVar14 + lVar20 * 0x40;
          *(undefined4 *)(lVar2 + (ulong)*(uint *)(lVar27 + 0x16a1c) * 4 + 0x2018) = 0;
          lVar3 = lVar14 + lVar20 * 0x10;
          *(undefined1 *)(lVar3 + (ulong)*(uint *)(lVar27 + 0x16a1c) + 0x2818) = 0;
          *(undefined4 *)(lVar2 + (ulong)*(uint *)(lVar27 + 0x16a1c) * 4 + 0x2a18) = uVar28;
          *(undefined4 *)(lVar2 + (ulong)*(uint *)(lVar27 + 0x16a1c) * 4 + 0x3218) = uVar29;
          *(bool *)(lVar3 + (ulong)*(uint *)(lVar27 + 0x16a1c) + 0x4218) = iVar8 != 0;
          *(bool *)(lVar3 + (ulong)*(uint *)(lVar27 + 0x16a1c) + 0x4418) = iVar9 != 0;
          lVar4 = lVar14 + lVar20 * 0x20;
          *(undefined2 *)(lVar4 + (ulong)*(uint *)(lVar27 + 0x16a1c) * 2 + 0x4618) = uVar6;
          *(bool *)(lVar3 + (ulong)*(uint *)(lVar27 + 0x16a1c) + 0x4a18) = iVar10 != 0;
          *(undefined2 *)(lVar4 + (ulong)*(uint *)(lVar27 + 0x16a1c) * 2 + 0x4e18) = uVar7;
          *(undefined4 *)(lVar2 + (ulong)*(uint *)(lVar27 + 0x16a1c) * 4 + 0x5218) = uVar11;
          lVar14 = lVar14 + lVar20 * 0x80;
          uVar11 = 0;
          if (cVar13 != '\0') {
            uVar11 = 3;
          }
          *(undefined8 *)(lVar14 + (ulong)*(uint *)(lVar27 + 0x16a1c) * 8 + 0x18) = uVar25;
          *(undefined8 *)(lVar14 + (ulong)*(uint *)(lVar27 + 0x16a1c) * 8 + 0x1018) = uVar12;
          *(undefined4 *)(lVar2 + (ulong)*(uint *)(lVar27 + 0x16a1c) * 4 + 0x3a18) = uVar11;
          *(int *)(lVar16 + 0x16a78) = param_3 + 1;
          *(int *)(lVar27 + 0x16a1c) = *(int *)(lVar27 + 0x16a1c) + 1;
          if (local_b8 == (uint *)0x0) {
            return;
          }
          uVar15 = local_b0 & 0xffffffff;
          if ((int)local_b0 == -1) {
            return;
          }
          lVar14 = (long)(int)*local_b8;
          if (*(ushort *)((long)local_b8 - lVar14) < 5) {
            return;
          }
          uVar18 = (ulong)((ushort *)((long)local_b8 - lVar14))[2];
          if (uVar18 == 0) {
            return;
          }
          puVar26 = (uint *)((long)local_b8 + uVar18);
          puVar26 = (uint *)((long)puVar26 + uVar15 * 4 + (ulong)*puVar26 + 4);
          piVar1 = (int *)((long)puVar26 + (ulong)*puVar26);
          puVar26 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
          uVar19 = uVar19 + 1;
          if (*(uint *)((long)puVar26 + (ulong)*puVar26) <= uVar19) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}


