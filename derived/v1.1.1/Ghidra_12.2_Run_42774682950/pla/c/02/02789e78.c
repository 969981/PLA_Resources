/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02789e78; name: FUN_02789e78
 */


void FUN_02789e78(void)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  char acStack_5ef0 [120];
  char acStack_5e78 [120];
  char local_5e00 [4];
  undefined8 local_5dfc [14];
  undefined4 local_5d8c;
  undefined1 local_5d88;
  undefined1 local_5d10;
  undefined1 local_5c98;
  undefined1 local_5c20;
  undefined1 local_5ba8;
  undefined1 local_5b30;
  undefined1 local_5ab8;
  undefined1 local_5a40;
  undefined1 local_59c8;
  undefined1 local_5950;
  undefined1 local_58d8;
  undefined1 local_5860;
  undefined1 local_57e8;
  undefined1 local_5770;
  undefined1 local_56f8;
  undefined1 local_5680;
  undefined1 local_5608;
  undefined1 local_5590;
  undefined1 local_5518;
  undefined1 local_54a0;
  undefined1 local_5428;
  undefined1 local_53b0;
  undefined1 local_5338;
  undefined1 local_52c0;
  undefined1 local_5248;
  undefined1 local_51d0;
  undefined1 local_5158;
  undefined1 local_50e0;
  undefined1 local_5068;
  undefined1 local_4ff0;
  undefined1 local_4f78;
  undefined1 local_4f00;
  undefined1 local_4e88;
  undefined1 local_4e10;
  undefined1 local_4d98;
  undefined1 local_4d20;
  undefined1 local_4ca8;
  undefined1 local_4c30;
  undefined1 local_4bb8;
  undefined1 local_4b40;
  undefined1 local_4ac8;
  undefined1 local_4a50;
  undefined1 local_49d8;
  undefined1 local_4960;
  undefined1 local_48e8;
  undefined1 local_4870;
  undefined1 local_47f8;
  undefined1 local_4780;
  undefined1 local_4708;
  undefined1 local_4690;
  undefined1 local_4618;
  undefined1 local_45a0;
  undefined1 local_4528;
  undefined1 local_44b0;
  undefined1 local_4438;
  undefined1 local_43c0;
  undefined1 local_4348;
  undefined1 local_42d0;
  undefined1 local_4258;
  undefined1 local_41e0;
  undefined1 local_4168;
  undefined1 local_40f0;
  undefined1 local_4078;
  undefined1 local_4000;
  undefined1 local_3f88;
  undefined1 local_3f10;
  undefined1 local_3e98;
  undefined1 local_3e20;
  undefined1 local_3da8;
  undefined1 local_3d30;
  undefined1 local_3cb8;
  undefined1 local_3c40;
  undefined1 local_3bc8;
  undefined1 local_3b50;
  undefined1 local_3ad8;
  undefined1 local_3a60;
  undefined1 local_39e8;
  undefined1 local_3970;
  undefined1 local_38f8;
  undefined1 local_3880;
  undefined1 local_3808;
  undefined1 local_3790;
  undefined1 local_3718;
  undefined1 local_36a0;
  undefined1 local_3628;
  undefined1 local_35b0;
  undefined1 local_3538;
  undefined1 local_34c0;
  undefined1 local_3448;
  undefined1 local_33d0;
  undefined1 local_3358;
  undefined1 local_32e0;
  undefined1 local_3268;
  undefined1 local_31f0;
  undefined1 local_3178;
  undefined1 local_3100;
  undefined1 local_3088;
  char local_3010 [120];
  char local_2f98 [120];
  char local_2f20 [4];
  undefined8 local_2f1c [14];
  undefined4 local_2eac [2971];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar12 = *(long **)(lVar7 + 0x2a8);
  if (plVar12 != (long *)0x0) {
    lVar7 = plVar12[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    pcVar9 = local_2f20;
    puVar8 = (undefined8 *)((long)plVar12 + 0xdd1c);
    lVar7 = 100;
    do {
      *pcVar9 = '\0';
      if (*(char *)((long)puVar8 + -4) != '\0') {
        uVar6 = *puVar8;
        uVar2 = puVar8[1];
        *(undefined8 *)(pcVar9 + 0x14) = puVar8[2];
        *(undefined8 *)(pcVar9 + 0xc) = uVar2;
        *(undefined8 *)(pcVar9 + 4) = uVar6;
        uVar6 = puVar8[3];
        uVar11 = puVar8[4];
        uVar2 = puVar8[5];
        *(undefined8 *)(pcVar9 + 0x34) = puVar8[6];
        *(undefined8 *)(pcVar9 + 0x2c) = uVar2;
        *(undefined8 *)(pcVar9 + 0x24) = uVar11;
        *(undefined8 *)(pcVar9 + 0x1c) = uVar6;
        uVar6 = puVar8[7];
        uVar11 = puVar8[8];
        uVar2 = puVar8[9];
        *(undefined8 *)(pcVar9 + 0x54) = puVar8[10];
        *(undefined8 *)(pcVar9 + 0x4c) = uVar2;
        *(undefined8 *)(pcVar9 + 0x44) = uVar11;
        *(undefined8 *)(pcVar9 + 0x3c) = uVar6;
        uVar6 = puVar8[0xb];
        uVar2 = puVar8[0xc];
        uVar11 = puVar8[0xd];
        *(undefined4 *)(pcVar9 + 0x74) = *(undefined4 *)(puVar8 + 0xe);
        *(undefined8 *)(pcVar9 + 0x6c) = uVar11;
        *(undefined8 *)(pcVar9 + 100) = uVar2;
        *(undefined8 *)(pcVar9 + 0x5c) = uVar6;
        *pcVar9 = '\x01';
      }
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 0xf;
      pcVar9 = pcVar9 + 0x78;
    } while (lVar7 != 0);
    lVar7 = 0;
    local_5e00[0] = '\0';
    lVar10 = 100;
    local_5d88 = 0;
    local_5d10 = 0;
    local_5c98 = 0;
    local_5c20 = 0;
    local_5ba8 = 0;
    local_5b30 = 0;
    local_5ab8 = 0;
    local_5a40 = 0;
    local_59c8 = 0;
    local_5950 = 0;
    local_58d8 = 0;
    local_5860 = 0;
    local_57e8 = 0;
    local_5770 = 0;
    local_56f8 = 0;
    local_5680 = 0;
    local_5608 = 0;
    local_5590 = 0;
    local_5518 = 0;
    local_54a0 = 0;
    local_5428 = 0;
    local_53b0 = 0;
    local_5338 = 0;
    local_52c0 = 0;
    local_5248 = 0;
    local_51d0 = 0;
    local_5158 = 0;
    local_50e0 = 0;
    local_5068 = 0;
    local_4ff0 = 0;
    local_4f78 = 0;
    local_4f00 = 0;
    local_4e88 = 0;
    local_4e10 = 0;
    local_4d98 = 0;
    local_4d20 = 0;
    local_4ca8 = 0;
    local_4c30 = 0;
    local_4bb8 = 0;
    local_4b40 = 0;
    local_4ac8 = 0;
    local_4a50 = 0;
    local_49d8 = 0;
    local_4960 = 0;
    local_48e8 = 0;
    local_4870 = 0;
    local_47f8 = 0;
    local_4780 = 0;
    local_4708 = 0;
    local_4690 = 0;
    local_4618 = 0;
    local_45a0 = 0;
    local_4528 = 0;
    local_44b0 = 0;
    local_4438 = 0;
    local_43c0 = 0;
    local_4348 = 0;
    local_42d0 = 0;
    local_4258 = 0;
    local_41e0 = 0;
    local_4168 = 0;
    local_40f0 = 0;
    local_4078 = 0;
    local_4000 = 0;
    local_3f88 = 0;
    local_3f10 = 0;
    local_3e98 = 0;
    local_3e20 = 0;
    local_3da8 = 0;
    local_3d30 = 0;
    local_3cb8 = 0;
    local_3c40 = 0;
    local_3bc8 = 0;
    local_3b50 = 0;
    local_3ad8 = 0;
    local_3a60 = 0;
    local_39e8 = 0;
    local_3970 = 0;
    local_38f8 = 0;
    local_3880 = 0;
    local_3808 = 0;
    local_3790 = 0;
    local_3718 = 0;
    local_36a0 = 0;
    local_3628 = 0;
    local_35b0 = 0;
    local_3538 = 0;
    local_34c0 = 0;
    local_3448 = 0;
    local_33d0 = 0;
    local_3358 = 0;
    local_32e0 = 0;
    local_3268 = 0;
    local_31f0 = 0;
    local_3178 = 0;
    local_3100 = 0;
    local_3088 = 0;
    local_3010[0] = '\0';
    local_2f98[0] = '\0';
    do {
      if (local_2f20[lVar7] == '\0') {
        if (local_5e00[lVar7] != '\0') {
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x58) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x58);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x60) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x60);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x68) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x68);
          *(undefined4 *)((long)local_2eac + lVar7) =
               *(undefined4 *)((long)local_5dfc + lVar7 + 0x70);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x38) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x38);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x40) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x40);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x48) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x48);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x50) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x50);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x18) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x18);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x20) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x20);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x28) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x28);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x30) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 0x30);
          *(undefined8 *)((long)local_2f1c + lVar7) = *(undefined8 *)((long)local_5dfc + lVar7);
          uVar6 = *(undefined8 *)((long)local_5dfc + lVar7 + 0x10);
          *(undefined8 *)((long)local_2f1c + lVar7 + 8) =
               *(undefined8 *)((long)local_5dfc + lVar7 + 8);
          *(undefined8 *)((long)local_2f1c + lVar7 + 0x10) = uVar6;
          local_2f20[lVar7] = '\x01';
        }
      }
      else if (local_5e00[lVar7] == '\0') {
        local_2f20[lVar7] = '\0';
      }
      else {
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x58) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x58);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x60) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x60);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x68) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x68);
        *(undefined4 *)((long)local_2eac + lVar7) = *(undefined4 *)((long)local_5dfc + lVar7 + 0x70)
        ;
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x38) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x38);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x40) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x40);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x48) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x48);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x50) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x50);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x18) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x18);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x20) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x20);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x28) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x28);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x30) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 0x30);
        *(undefined8 *)((long)local_2f1c + lVar7) = *(undefined8 *)((long)local_5dfc + lVar7);
        uVar6 = *(undefined8 *)((long)local_5dfc + lVar7 + 0x10);
        *(undefined8 *)((long)local_2f1c + lVar7 + 8) =
             *(undefined8 *)((long)local_5dfc + lVar7 + 8);
        *(undefined8 *)((long)local_2f1c + lVar7 + 0x10) = uVar6;
      }
      lVar10 = lVar10 + -1;
      lVar7 = lVar7 + 0x78;
    } while (lVar10 != 0);
    lVar7 = 12000;
    do {
      if (acStack_5e78[lVar7] != '\0') {
        acStack_5e78[lVar7] = '\0';
      }
      if (acStack_5ef0[lVar7] != '\0') {
        acStack_5ef0[lVar7] = '\0';
      }
      lVar7 = lVar7 + -0xf0;
    } while (lVar7 != 0);
    FUN_0110b880(plVar12,local_2f20);
    lVar7 = 12000;
    do {
      if (local_2f98[lVar7] != '\0') {
        local_2f98[lVar7] = '\0';
      }
      if (local_3010[lVar7] != '\0') {
        local_3010[lVar7] = '\0';
      }
      lVar7 = lVar7 + -0xf0;
    } while (lVar7 != 0);
    lVar7 = plVar12[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
  }
  return;
}


