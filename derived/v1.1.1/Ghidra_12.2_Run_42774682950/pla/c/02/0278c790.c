/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0278c790; name: FUN_0278c790
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0278c790(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  size_t __n;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  void *pvVar17;
  short *psVar18;
  long lVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  long *plVar22;
  uint uVar23;
  char *pcVar24;
  ulong uVar25;
  char local_b80 [4];
  byte local_b7c;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  byte local_b40;
  byte local_b3f;
  undefined6 uStack_b3e;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  uint local_b00 [30];
  undefined1 auStack_a88 [56];
  void *local_a50;
  void *local_a48;
  long local_a40;
  long *plStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined4 local_a20;
  char local_a18 [4];
  char local_a14 [4];
  char local_a10 [4];
  char acStack_a0c [4];
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined4 local_9a0;
  undefined1 local_99c;
  undefined1 local_920;
  char local_8a4;
  char local_828;
  char local_7ac;
  char local_730;
  char local_6b4;
  char local_638;
  char local_5bc;
  char local_540;
  char local_4c4;
  char local_448;
  char local_3cc;
  char local_350;
  char local_2d4;
  char local_258;
  char local_1dc;
  char local_160;
  char local_e4;
  
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar16 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar16;
  plVar22 = *(long **)(lVar16 + 0x2a8);
  if (plVar22 != (long *)0x0) {
    lVar16 = plVar22[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar10 = FUN_02786460();
    FUN_0110c3e4(local_a18,plVar22 + 0x22b5);
    puVar21 = (undefined8 *)((ulong)local_b80 | 4);
    pbVar20 = &DAT_03a7e064;
    do {
      bVar3 = *pbVar20;
      uVar11 = bVar3 - 1;
      if (uVar11 < 5) {
        uVar25 = (ulong)uVar11 & 0xff;
        local_b80[0] = '\0';
        FUN_027946a0(local_a18 + uVar25 * 0x1f0,local_b80);
        plStack_a38 = *(long **)(param_1 + 8);
        local_a20 = 0;
        local_a50 = (void *)0x0;
        local_a48 = (void *)0x0;
        local_a40 = 0;
        local_a30 = 0x3fffffffffffffff;
        uStack_a28 = 0;
        uVar11 = FUN_0278a818();
        if (uVar11 != 0) {
          uVar23 = 0;
          do {
            FUN_0278aa48(local_b80,uVar23);
            cVar5 = local_b80[0];
            if ((((local_b80[0] != '\0') && ((uint)local_b3f == (uint)bVar3)) &&
                (local_b40 <= bVar10)) && (uVar14 = FUN_0278cf28(&uStack_b70), (uVar14 & 1) == 0)) {
              local_b00[0] = uVar23;
              FUN_0278d0f8(&local_a50,local_b00);
            }
            if (cVar5 != '\0') {
              local_b80[0] = '\0';
            }
            uVar23 = uVar23 + 1;
          } while (uVar11 != uVar23);
        }
        FUN_02793abc(auStack_a88,param_1 + uVar25 * 0x38 + 0x100);
        uVar14 = 0;
        pvVar17 = local_a48;
        do {
          if (local_a50 == pvVar17) break;
          pcVar24 = local_a18 + uVar14 * 0x7c + uVar25 * 0x1f0;
          if (*pcVar24 == '\0') {
            lVar16 = FUN_0278d150(((long)pvVar17 - (long)local_a50 >> 2) + -1);
            uVar2 = *(undefined4 *)((long)local_a50 + lVar16 * 4);
            if (uVar14 < 2) {
              FUN_0278aa48(local_b00,uVar2);
              FUN_0278d284(local_b80,(ulong)local_b00 | 4,auStack_a88);
              cVar5 = local_b80[0];
            }
            else {
              FUN_0278aa48(local_b00,uVar2);
              FUN_0278d4b0(local_b80,param_1,(ulong)local_b00 | 4,auStack_a88);
              cVar5 = local_b80[0];
            }
            if ((char)local_b00[0] != '\0') {
              local_b00[0] = local_b00[0] & 0xffffff00;
            }
            local_b80[0] = cVar5;
            if (cVar5 != '\0') {
              cVar4 = *pcVar24;
              lVar19 = uVar14 * 0x7c + uVar25 * 0x1f0 + -0xa18;
              *(undefined4 *)(local_a14 + lVar19 + 0xa18) = (&DAT_03a7e050)[uVar14];
              uVar13 = puVar21[1];
              *(undefined8 *)(local_a14 + lVar19 + 0xa1c) = *puVar21;
              *(undefined8 *)((long)&uStack_a08 + lVar19 + 0xa18) = uVar13;
              uVar13 = puVar21[5];
              *(undefined8 *)((long)&local_9f0 + lVar19 + 0xa18) = puVar21[4];
              *(undefined8 *)((long)&uStack_9e8 + lVar19 + 0xa18) = uVar13;
              uVar13 = puVar21[3];
              *(undefined8 *)((long)&local_a00 + lVar19 + 0xa18) = puVar21[2];
              *(undefined8 *)((long)&uStack_9f8 + lVar19 + 0xa18) = uVar13;
              uVar13 = puVar21[9];
              *(undefined8 *)((long)&local_9d0 + lVar19 + 0xa18) = puVar21[8];
              *(undefined8 *)((long)&uStack_9c8 + lVar19 + 0xa18) = uVar13;
              uVar13 = puVar21[7];
              *(undefined8 *)((long)&local_9e0 + lVar19 + 0xa18) = puVar21[6];
              *(undefined8 *)((long)&uStack_9d8 + lVar19 + 0xa18) = uVar13;
              (&local_9a0)[uVar25 * 0x7c + uVar14 * 0x1f] = *(undefined4 *)(puVar21 + 0xe);
              uVar13 = puVar21[0xd];
              *(undefined8 *)((long)&local_9b0 + lVar19 + 0xa18) = puVar21[0xc];
              *(undefined8 *)((long)&uStack_9a8 + lVar19 + 0xa18) = uVar13;
              uVar13 = puVar21[0xb];
              *(undefined8 *)((long)&local_9c0 + lVar19 + 0xa18) = puVar21[10];
              *(undefined8 *)((long)&local_9b8 + lVar19 + 0xa18) = uVar13;
              if (cVar4 == '\0') {
                *pcVar24 = '\x01';
              }
              puVar15 = (undefined8 *)FUN_02794ca8();
              uVar11 = 0;
              *(undefined8 *)PTR_DAT_04387d28 = *puVar15;
              psVar18 = (short *)((long)&local_9c0 + uVar14 * 0x7c + uVar25 * 0x1f0 + 4);
              do {
                if (*psVar18 == 0x10) {
                  lVar19 = (ulong)(ushort)psVar18[1] + 2;
                  psVar18 = psVar18 + lVar19;
                }
                else {
                  if (*psVar18 == 0) break;
                  psVar18 = psVar18 + 1;
                  lVar19 = 1;
                }
                uVar11 = (int)lVar19 + uVar11;
              } while (uVar11 < 0x800);
              FUN_027de4e8();
            }
            pvVar17 = (void *)((long)local_a50 + lVar16 * 4);
            __n = (long)local_a48 - ((long)pvVar17 + 4);
            if (__n != 0) {
              memmove(pvVar17,(void *)((long)pvVar17 + 4),__n);
            }
            pvVar17 = (void *)((long)pvVar17 + ((long)__n >> 2) * 4);
            local_a48 = pvVar17;
            if (cVar5 != '\0') {
              local_b80[0] = '\0';
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != 4);
        FUN_0278d9bc(local_b80,param_1,bVar3,local_a18 + uVar25 * 0x1f0,auStack_a88);
        uVar13 = uStack_b70;
        if (local_b80[0] != '\0') {
          pcVar24 = local_a18 + (ulong)local_b7c * 0x7c + uVar25 * 0x1f0;
          *(undefined8 *)(pcVar24 + 4) = local_b78;
          uVar7 = uStack_b60;
          *(undefined8 *)(pcVar24 + 0x14) = local_b68;
          *(undefined8 *)(pcVar24 + 0x1c) = uVar7;
          *(undefined8 *)(pcVar24 + 0xc) = uVar13;
          uVar13 = CONCAT62(uStack_b3e,CONCAT11(local_b3f,local_b40));
          *(undefined8 *)(pcVar24 + 0x34) = local_b48;
          uVar7 = uStack_b50;
          *(undefined8 *)(pcVar24 + 0x24) = local_b58;
          *(undefined8 *)(pcVar24 + 0x3c) = uVar13;
          uVar8 = uStack_b20;
          uVar13 = local_b28;
          *(undefined8 *)(pcVar24 + 0x2c) = uVar7;
          *(undefined8 *)(pcVar24 + 0x54) = uVar13;
          *(undefined8 *)(pcVar24 + 0x5c) = uVar8;
          uVar13 = uStack_b30;
          *(undefined8 *)(pcVar24 + 0x44) = local_b38;
          *(undefined8 *)(pcVar24 + 0x74) = local_b08;
          *(undefined8 *)(pcVar24 + 0x4c) = uVar13;
          uVar13 = uStack_b10;
          *(undefined8 *)(pcVar24 + 100) = local_b18;
          *(undefined8 *)(pcVar24 + 0x6c) = uVar13;
          if (*pcVar24 == '\0') {
            *pcVar24 = '\x01';
          }
          local_b80[0] = '\0';
        }
        FUN_02793cc8(auStack_a88);
        plVar9 = plStack_a38;
        pvVar17 = local_a50;
        if (local_a50 != (void *)0x0) {
          local_a48 = local_a50;
          lVar16 = local_a40 - (long)local_a50;
          uVar25 = (**(code **)(*plStack_a38 + 0xc0))(plStack_a38);
          if ((uVar25 & 1) != 0) {
            lVar19 = tpidr_el0;
            if (*(char *)(lVar19 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar19 + 0x38d488) = 1;
              *(undefined8 *)(lVar19 + 0x38d478) = 0;
              *(undefined8 *)(lVar19 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar19 + 0x38d480)) {
              FUN_02bcc824(plVar9,pvVar17,lVar16,4);
              goto LAB_0278c8a4;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,pvVar17,lVar16,4);
        }
      }
LAB_0278c8a4:
      pbVar20 = pbVar20 + 1;
    } while (pbVar20 != &UNK_03a7e069);
    FUN_0110bd14(plVar22,local_a18);
    local_160 = '\0';
    local_e4 = '\0';
    local_1dc = '\0';
    local_258 = '\0';
    local_2d4 = '\0';
    local_350 = '\0';
    local_3cc = '\0';
    local_448 = '\0';
    local_4c4 = '\0';
    local_540 = '\0';
    local_5bc = '\0';
    local_638 = '\0';
    local_6b4 = '\0';
    local_730 = '\0';
    local_7ac = '\0';
    local_828 = '\0';
    local_8a4 = '\0';
    local_920 = 0;
    local_99c = 0;
    if (local_a18[0] != '\0') {
      local_a18[0] = '\0';
    }
    lVar16 = plVar22[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar22 + 0x20))(plVar22);
    }
  }
  return;
}


