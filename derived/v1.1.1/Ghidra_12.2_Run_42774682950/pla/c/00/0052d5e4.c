/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052d5e4; name: FUN_0052d5e4
 */


undefined8 FUN_0052d5e4(long param_1,long param_2,ulong *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  char *pcVar20;
  ulong uVar21;
  undefined **ppuVar22;
  long local_138;
  ulong uStack_130;
  undefined ***local_128;
  long lStack_120;
  undefined **local_118;
  long lStack_110;
  long local_108;
  char *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  long *local_f0;
  long local_e8;
  long alStack_e0 [2];
  long alStack_d0 [2];
  long *local_c0;
  long *local_b0;
  ulong local_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  long *local_70;
  
  puVar4 = PTR_DAT_04374b58;
  if (*(long *)(param_1 + 0x1d8) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0xf89,2,"assertion failed: %s","connected_subchannel_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 400) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0xf8a,2,"assertion failed: %s","subchannel_call_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar20 = *(char **)(param_2 + 8);
  if (*(long *)(pcVar20 + 0x78) == 0) {
    plVar18 = *(long **)(pcVar20 + 0x10);
    if (PTR_DAT_04373fd8[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                   "%s %p:%p REF %s",plVar18[0xb],plVar18,plVar18[4],"PickSubchannelLocked");
    }
    plVar7 = plVar18 + 1;
    do {
      lVar17 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar11 = *plVar18;
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar11 + 8),plVar18,
                   "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar17,
                   lVar17 + 1,"PickSubchannelLocked");
    }
    if (lVar17 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x89,"RefNonZero");
    }
    local_100 = 
    "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
    local_f8 = 0xf93;
    puVar19 = (undefined8 *)FUN_002ebd50(0x58);
    puVar19[5] = 0;
    puVar4 = PTR_LAB_043738c8;
    *(undefined2 *)(puVar19 + 6) = 0;
    puVar19[3] = puVar4;
    puVar19[4] = puVar19;
    *puVar19 = &LAB_0052eb54;
    puVar19[1] = pcVar20;
    puVar19[9] = 0;
    *(undefined4 *)(puVar19 + 10) = 0;
    puVar19[7] = 
    "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc";
    *(undefined4 *)(puVar19 + 8) = 3999;
    FUN_002f019c(&local_100,puVar19 + 2,0);
LAB_0052d834:
    FUN_0052e8bc(param_1,param_2);
    return 0;
  }
  if (*(char *)(param_1 + 0x394) == '\0') {
    plVar18 = *(long **)(*(long *)(param_1 + 0x2b8) + 8);
    lVar17 = *plVar18;
    uVar1 = *(uint *)(plVar18 + 1);
    cVar2 = pcVar20[0x90];
  }
  else {
    lVar17 = param_1 + 0x3a0;
    uVar1 = *(uint *)(param_1 + 0x488);
    cVar2 = pcVar20[0x90];
  }
  if (cVar2 == '\0') {
    if (((uVar1 >> 5 & 1) == 0) && (uVar21 = *(ulong *)(pcVar20 + 0x88), uVar21 != 0)) {
      if (*(char *)(param_1 + 0x1b0) != '\0') {
        if (PTR_DAT_04374b58[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0xf09,1,"chand=%p calld=%p: removing from queued picks list",pcVar20,param_1
                      );
        }
        FUN_003d6c40(*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(pcVar20 + 0xc0));
        plVar18 = (long *)(pcVar20 + 0x80);
        lVar17 = *plVar18;
        if (lVar17 != 0) {
          if (lVar17 != param_1 + 0x1a0) {
            do {
              lVar11 = lVar17;
              lVar17 = *(long *)(lVar11 + 8);
              if (lVar17 == 0) goto LAB_0052d8c8;
            } while (lVar17 != param_1 + 0x1a0);
            plVar18 = (long *)(lVar11 + 8);
          }
          *plVar18 = *(long *)(param_1 + 0x1a8);
        }
LAB_0052d8c8:
        *(undefined1 *)(param_1 + 0x1b0) = 0;
        *(undefined8 *)(param_1 + 0x1b8) = 0;
      }
      if (4 < uVar21) {
        uVar21 = FUN_002f03c0(uVar21,
                              "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                              ,0xfbb);
      }
      *param_3 = uVar21;
      return 1;
    }
    goto LAB_0052d834;
  }
  if (*(char *)(param_1 + 0x1b1) != '\x01') {
    *(undefined1 *)(param_1 + 0x1b1) = 1;
    if (puVar4[0x10] == '\0') {
      lVar11 = *(long *)(pcVar20 + 0xa0);
      plVar18 = *(long **)(pcVar20 + 0xa8);
    }
    else {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xf24,1,"chand=%p calld=%p: applying service config to call",pcVar20,param_1);
      lVar11 = *(long *)(pcVar20 + 0xa0);
      plVar18 = *(long **)(pcVar20 + 0xa8);
    }
    if (lVar11 != 0) {
      local_98 = 0;
      plVar7 = (long *)(lVar11 + 0x10);
      do {
        lVar10 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar12 = *(long *)(lVar11 + 8);
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar12 + 8),(long *)(lVar11 + 8),lVar10,
                     lVar10 + 1);
      }
    }
    local_98 = *(ulong *)(pcVar20 + 0xa0);
    if (local_98 != 0) {
      local_90 = param_1 + 0xe8;
      local_80 = *(undefined8 *)(param_1 + 0x118);
                    /* try { // try from 0052d6e4 to 0052d6f3 has its CatchHandler @ 0052e5e0 */
      lStack_88 = lVar17;
      (**(code **)(*plVar18 + 0x10))(&local_100,plVar18,&local_90);
      pcVar6 = local_100;
      if (local_100 != (char *)0x0) {
        if (alStack_d0 == local_b0) {
          pcVar13 = *(code **)(*local_b0 + 0x20);
LAB_0052d940:
          (*pcVar13)();
        }
        else if (local_b0 != (long *)0x0) {
          pcVar13 = *(code **)(*local_b0 + 0x28);
          goto LAB_0052d940;
        }
        FUN_0052ef8c(&local_f0,local_e8);
        FUN_0050d03c(&local_98);
        *param_3 = (ulong)pcVar6;
        if (pcVar6 != (char *)0x0) {
          return 1;
        }
        goto LAB_0052dc78;
      }
      FUN_0052ef8c((long *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x150));
      *(long **)(param_1 + 0x148) = local_f0;
      *(long *)(param_1 + 0x150) = local_e8;
      *(long *)(param_1 + 0x158) = alStack_e0[0];
      if (alStack_e0[0] == 0) {
        *(long *)(param_1 + 0x148) = param_1 + 0x150;
      }
      else {
        *(long *)(local_e8 + 0x10) = param_1 + 0x150;
        local_f0 = &local_e8;
        local_e8 = 0;
        alStack_e0[0] = 0;
      }
      plVar7 = *(long **)(param_1 + 0x180);
      plVar18 = (long *)(param_1 + 0x160);
      *(undefined8 *)(param_1 + 0x180) = 0;
      if (plVar18 == plVar7) {
        pcVar13 = *(code **)(*plVar7 + 0x20);
LAB_0052d99c:
        (*pcVar13)();
      }
      else if (plVar7 != (long *)0x0) {
        pcVar13 = *(code **)(*plVar7 + 0x28);
        goto LAB_0052d99c;
      }
      if (local_b0 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x180) = 0;
      }
      else if (alStack_d0 == local_b0) {
        *(long **)(param_1 + 0x180) = plVar18;
                    /* try { // try from 0052d9d8 to 0052d9df has its CatchHandler @ 0052e524 */
        (**(code **)(*local_b0 + 0x18))(local_b0,plVar18);
      }
      else {
        *(long **)(param_1 + 0x180) = local_b0;
        local_b0 = (long *)0x0;
      }
      puVar8 = *(ulong **)(param_1 + 0x118);
      do {
        uVar14 = *puVar8;
        uVar21 = uVar14 + 0x10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar3) {
          *puVar8 = uVar21;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar8[1] < uVar21) {
                    /* try { // try from 0052da00 to 0052da57 has its CatchHandler @ 0052e588 */
        puVar8 = (ulong *)FUN_003f5a34(puVar8,0x10);
      }
      else {
        puVar8 = (ulong *)((long)puVar8 + uVar14 + 0x20);
      }
      uVar21 = local_98;
      local_98 = 0;
      lVar11 = *(long *)(param_1 + 0x130);
      *puVar8 = 0;
      *puVar8 = uVar21;
      puVar5 = PTR_LAB_04374b60;
      local_118 = (undefined **)0x0;
      puVar8[1] = CONCAT44(uStack_f4,local_f8);
      *(ulong **)(lVar11 + 0x30) = puVar8;
      *(undefined **)(lVar11 + 0x38) = puVar5;
      FUN_0050d03c(&local_118);
      uVar21 = FUN_0054b2f0();
      puVar8 = (ulong *)puVar8[1];
      if (puVar8 == (ulong *)0x0) {
        *(undefined8 *)(param_1 + 0x140) = 0;
        lVar11 = *(long *)(pcVar20 + 0x98);
      }
      else {
        if (*puVar8 >> 1 <= uVar21) {
                    /* try { // try from 0052e440 to 0052e45f has its CatchHandler @ 0052e588 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x13e,"operator[]");
        }
        if ((*puVar8 & 1) == 0) {
          uVar21 = puVar8[uVar21 + 1];
          *(ulong *)(param_1 + 0x140) = uVar21;
        }
        else {
          uVar21 = *(ulong *)(puVar8[1] + uVar21 * 8);
          *(ulong *)(param_1 + 0x140) = uVar21;
        }
        if (uVar21 != 0) {
          if ((*pcVar20 != '\0') && (*(long *)(uVar21 + 8) != 0)) {
                    /* try { // try from 0052da94 to 0052dabb has its CatchHandler @ 0052e520 */
            lVar11 = FUN_002efe30(*(undefined8 *)(param_1 + 0x108));
            uVar21 = *(ulong *)(param_1 + 0x140);
            lVar11 = *(long *)(uVar21 + 8) + lVar11;
            if (lVar11 < *(long *)(param_1 + 0x110)) {
              *(long *)(param_1 + 0x110) = lVar11;
              FUN_005348c0(param_2);
              uVar21 = *(ulong *)(param_1 + 0x140);
            }
          }
          if ((*(ushort *)(uVar21 + 0x10) & 0xff) != 0) {
            lVar11 = *(long *)(*(long *)(param_1 + 0x2b8) + 8);
            uVar15 = *(uint *)(lVar11 + 8);
            if ((uVar15 >> 7 & 1) == 0) {
              if (*(ushort *)(uVar21 + 0x10) < 0x100) {
                uVar15 = uVar15 & 0xffffffdf;
              }
              else {
                uVar15 = uVar15 | 0x20;
              }
              *(uint *)(lVar11 + 8) = uVar15;
            }
          }
        }
        lVar11 = *(long *)(pcVar20 + 0x98);
      }
      if (lVar11 != 0) {
        local_118 = (undefined **)0x0;
        plVar18 = (long *)(lVar11 + 0x10);
        do {
          lVar10 = *plVar18;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *plVar18 = lVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar12 = *(long *)(lVar11 + 8);
        if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
                    /* try { // try from 0052db58 to 0052db73 has its CatchHandler @ 0052e538 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar12 + 8),(long *)(lVar11 + 8),
                       lVar10,lVar10 + 1);
        }
      }
      ppuVar22 = *(undefined ***)(pcVar20 + 0x98);
      puVar19 = *(undefined8 **)(param_1 + 0x138);
      if (puVar19 != (undefined8 *)0x0) {
        lVar11 = puVar19[1];
        plVar18 = puVar19 + 2;
        do {
          lVar10 = *plVar18;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *plVar18 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_118 = ppuVar22;
        if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
                    /* try { // try from 0052dbb0 to 0052dbcf has its CatchHandler @ 0052e528 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar11 + 8),puVar19 + 1,lVar10);
        }
        if (lVar10 < 1) {
                    /* try { // try from 0052e460 to 0052e487 has its CatchHandler @ 0052e528 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar10 == 1) {
          (**(code **)*puVar19)(puVar19);
          FUN_002e2ea0(PTR_LAB_04373088,puVar19);
        }
      }
      *(undefined ***)(param_1 + 0x138) = ppuVar22;
      local_118 = (undefined **)0x0;
      FUN_0052eec0(&local_118);
      if (alStack_d0 == local_b0) {
        pcVar13 = *(code **)(*local_b0 + 0x20);
LAB_0052dc1c:
        (*pcVar13)();
      }
      else if (local_b0 != (long *)0x0) {
        pcVar13 = *(code **)(*local_b0 + 0x28);
        goto LAB_0052dc1c;
      }
      FUN_0052ef8c(&local_f0,local_e8);
    }
    if ((*(long *)(param_1 + 0x140) == 0) || (*(long *)(*(long *)(param_1 + 0x140) + 0x18) == 0)) {
      *(byte *)(param_1 + 0x318) = *(byte *)(param_1 + 0x318) & 0xf7;
      FUN_0050d03c(&local_98);
      *param_3 = 0;
    }
    else {
      FUN_0050d03c(&local_98);
      *param_3 = 0;
    }
  }
LAB_0052dc78:
  uStack_130 = *(ulong *)(param_1 + 0xf0) & 0xff;
  if (*(long *)(param_1 + 0xe8) != 0) {
    uStack_130 = *(ulong *)(param_1 + 0xf0);
  }
  if ((long)uStack_130 < 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  local_138 = *(long *)(param_1 + 0xf8);
  local_118 = &PTR_LAB_041855c8;
  if (*(long *)(param_1 + 0xe8) == 0) {
    local_138 = param_1 + 0xf1;
  }
  lStack_120 = param_1 + 0x1c0;
  local_128 = &local_118;
                    /* try { // try from 0052dccc to 0052dcd7 has its CatchHandler @ 0052e5dc */
  lStack_110 = param_1;
  local_108 = lVar17;
  (**(code **)(**(long **)(pcVar20 + 0x78) + 0x10))
            (&local_100,*(long **)(pcVar20 + 0x78),&local_138);
  if (puVar4[0x10] != '\0') {
    lVar17 = (long)(int)(uint)local_100;
    if (2 < (uint)local_100) {
                    /* try { // try from 0052e4d8 to 0052e4f7 has its CatchHandler @ 0052e540 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                   ,0xf74,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar16 = CONCAT44(uStack_f4,local_f8);
                    /* try { // try from 0052e230 to 0052e26f has its CatchHandler @ 0052e540 */
    uVar9 = FUN_002f1480(local_f0);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                 ,0xfdc,1,"chand=%p calld=%p: LB pick returned %s (subchannel=%p, error=%s)",pcVar20
                 ,param_1,(&PTR_s_COMPLETE_04185e80)[lVar17],uVar16,uVar9);
  }
  if ((uint)local_100 == 1) {
LAB_0052dfac:
                    /* try { // try from 0052dfac to 0052dfb7 has its CatchHandler @ 0052e540 */
    FUN_0052e8bc(param_1,param_2);
    uVar16 = 0;
  }
  else {
    if ((uint)local_100 == 2) {
      uVar21 = *(ulong *)(pcVar20 + 0x168);
      if (uVar21 == 0) {
        if ((uVar1 >> 5 & 1) != 0) {
          if (&DAT_00000004 < local_f0) {
                    /* try { // try from 0052df9c to 0052dfab has its CatchHandler @ 0052e53c */
            FUN_002f0430(local_f0,
                         "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                         ,0x1004);
          }
          goto LAB_0052dfac;
        }
        local_98 = local_98 & 0xffffffff00000000;
                    /* try { // try from 0052de88 to 0052de9b has its CatchHandler @ 0052e500 */
        FUN_003d7cb0(local_f0,*(undefined8 *)(param_1 + 0x110),&local_98,0,0,0);
                    /* try { // try from 0052dea8 to 0052debb has its CatchHandler @ 0052e504 */
        if (((*(byte *)(param_1 + 0x318) >> 3 & 1) == 0) ||
           (uVar21 = FUN_0052d130(param_1,param_2,0,local_98 & 0xffffffff,0), (uVar21 & 1) == 0)) {
                    /* try { // try from 0052dff4 to 0052e023 has its CatchHandler @ 0052e51c */
          FUN_002f2c60(&local_90,"Failed to pick subchannel");
          uVar21 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                                ,0xffa,&local_90,&local_f0,1);
          if (&DAT_00000004 < local_f0) {
                    /* try { // try from 0052e034 to 0052e05b has its CatchHandler @ 0052e4fc */
            FUN_002f0430(local_f0,
                         "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                         ,0xffb);
          }
          *param_3 = uVar21;
          if (*(long **)(param_1 + 0x180) != (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x180) + 0x30))();
            plVar18 = *(long **)(param_1 + 0x180);
            *(undefined8 *)(param_1 + 0x180) = 0;
            if ((long *)(param_1 + 0x160) == plVar18) {
              pcVar13 = *(code **)(*plVar18 + 0x20);
            }
            else {
              if (plVar18 == (long *)0x0) goto LAB_0052e188;
              pcVar13 = *(code **)(*plVar18 + 0x28);
            }
            (*pcVar13)();
          }
LAB_0052e188:
          uVar16 = 1;
          cVar2 = *(char *)(param_1 + 0x1b0);
        }
        else {
          uVar16 = 0;
          cVar2 = *(char *)(param_1 + 0x1b0);
        }
        if (cVar2 != '\0') {
          lVar17 = *(long *)(param_2 + 8);
          if (puVar4[0x10] != '\0') {
                    /* try { // try from 0052e360 to 0052e383 has its CatchHandler @ 0052e504 */
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                         ,0xf09,1,"chand=%p calld=%p: removing from queued picks list",lVar17,
                         param_1);
          }
                    /* try { // try from 0052e1a8 to 0052e1ab has its CatchHandler @ 0052e504 */
          FUN_003d6c40(*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(lVar17 + 0xc0));
          plVar18 = (long *)(lVar17 + 0x80);
          lVar17 = *plVar18;
          if (lVar17 != 0) {
            if (lVar17 != param_1 + 0x1a0) {
              do {
                lVar11 = lVar17;
                lVar17 = *(long *)(lVar11 + 8);
                if (lVar17 == 0) goto LAB_0052e1e0;
              } while (lVar17 != param_1 + 0x1a0);
              plVar18 = (long *)(lVar11 + 8);
            }
            *plVar18 = *(long *)(param_1 + 0x1a8);
          }
LAB_0052e1e0:
          *(undefined1 *)(param_1 + 0x1b0) = 0;
          *(undefined8 *)(param_1 + 0x1b8) = 0;
        }
        goto LAB_0052e11c;
      }
      if (&DAT_00000004 < local_f0) {
                    /* try { // try from 0052dd0c to 0052dd8b has its CatchHandler @ 0052e53c */
        FUN_002f0430(local_f0,
                     "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                     ,0xfe6);
      }
      if (*(char *)(param_1 + 0x1b0) != '\0') {
        lVar17 = *(long *)(param_2 + 8);
        if (puVar4[0x10] != '\0') {
                    /* try { // try from 0052e314 to 0052e337 has its CatchHandler @ 0052e53c */
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0xf09,1,"chand=%p calld=%p: removing from queued picks list",lVar17,param_1)
          ;
        }
        FUN_003d6c40(*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(lVar17 + 0xc0));
        plVar18 = (long *)(lVar17 + 0x80);
        lVar17 = *plVar18;
        if (lVar17 != 0) {
          if (lVar17 != param_1 + 0x1a0) {
            do {
              lVar11 = lVar17;
              lVar17 = *(long *)(lVar11 + 8);
              if (lVar17 == 0) goto LAB_0052dd70;
            } while (lVar17 != param_1 + 0x1a0);
            plVar18 = (long *)(lVar11 + 8);
          }
          *plVar18 = *(long *)(param_1 + 0x1a8);
        }
LAB_0052dd70:
        *(undefined1 *)(param_1 + 0x1b0) = 0;
        *(undefined8 *)(param_1 + 0x1b8) = 0;
      }
      if (*(long **)(param_1 + 0x180) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x180) + 0x30))();
        plVar18 = *(long **)(param_1 + 0x180);
        *(undefined8 *)(param_1 + 0x180) = 0;
        if ((long *)(param_1 + 0x160) == plVar18) {
          pcVar13 = *(code **)(*plVar18 + 0x20);
        }
        else {
          if (plVar18 == (long *)0x0) goto LAB_0052dfcc;
          pcVar13 = *(code **)(*plVar18 + 0x28);
        }
        (*pcVar13)();
      }
LAB_0052dfcc:
      if (4 < uVar21) {
                    /* try { // try from 0052dfd4 to 0052dfe7 has its CatchHandler @ 0052e53c */
        uVar21 = FUN_002f03c0(uVar21,
                              "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                              ,0xfe9);
      }
      *param_3 = uVar21;
    }
    else {
      if (*(char *)(param_1 + 0x1b0) != '\0') {
        lVar17 = *(long *)(param_2 + 8);
        if (puVar4[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0xf09,1,"chand=%p calld=%p: removing from queued picks list",lVar17,param_1)
          ;
        }
                    /* try { // try from 0052ddcc to 0052ddcf has its CatchHandler @ 0052e540 */
        FUN_003d6c40(*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(lVar17 + 0xc0));
        plVar18 = (long *)(lVar17 + 0x80);
        lVar17 = *plVar18;
        if (lVar17 != 0) {
          if (lVar17 != param_1 + 0x1a0) {
            do {
              lVar11 = lVar17;
              lVar17 = *(long *)(lVar11 + 8);
              if (lVar17 == 0) goto LAB_0052de04;
            } while (lVar17 != param_1 + 0x1a0);
            plVar18 = (long *)(lVar11 + 8);
          }
          *plVar18 = *(long *)(param_1 + 0x1a8);
        }
LAB_0052de04:
        *(undefined1 *)(param_1 + 0x1b0) = 0;
        *(undefined8 *)(param_1 + 0x1b8) = 0;
      }
      if (CONCAT44(uStack_f4,local_f8) == 0) {
                    /* try { // try from 0052e274 to 0052e2ab has its CatchHandler @ 0052e4f8 */
        FUN_002f2c60(&local_90,"Call dropped by load balancing policy");
        uVar16 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                              ,0x1010,&local_90,0,0);
        local_f0 = (long *)FUN_002f0d20(uVar16,3,0xe);
        if (*(long **)(param_1 + 0x180) != (long *)0x0) {
                    /* try { // try from 0052e2c0 to 0052e2eb has its CatchHandler @ 0052e540 */
          (**(code **)(**(long **)(param_1 + 0x180) + 0x30))();
          goto LAB_0052df6c;
        }
      }
      else {
        lVar17 = *(long *)(CONCAT44(uStack_f4,local_f8) + 0x50);
        if (lVar17 == 0) {
          local_90 = 0;
          puVar19 = *(undefined8 **)(param_1 + 0x1d8);
        }
        else {
          plVar18 = (long *)(lVar17 + 0x10);
          do {
            lVar11 = *plVar18;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *plVar18 = lVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar10 = *(long *)(lVar17 + 8);
          if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 0052de4c to 0052de67 has its CatchHandler @ 0052e518 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar10 + 8),(long *)(lVar17 + 8),
                         lVar11,lVar11 + 1);
          }
          puVar19 = *(undefined8 **)(param_1 + 0x1d8);
          local_90 = lVar17;
        }
        if (puVar19 != (undefined8 *)0x0) {
          lVar11 = puVar19[1];
          plVar18 = puVar19 + 2;
          do {
            lVar10 = *plVar18;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
            if (bVar3) {
              *plVar18 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
                    /* try { // try from 0052df08 to 0052df27 has its CatchHandler @ 0052e508 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar11 + 8),puVar19 + 1,lVar10);
          }
          if (lVar10 < 1) {
                    /* try { // try from 0052e4b0 to 0052e4d7 has its CatchHandler @ 0052e508 */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar10 == 1) {
            (**(code **)*puVar19)(puVar19);
            FUN_002e2ea0(PTR_LAB_04373088,puVar19);
          }
        }
        *(long *)(param_1 + 0x1d8) = lVar17;
        local_90 = 0;
        FUN_0052ea88(&local_90);
        if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* try { // try from 0052e488 to 0052e4af has its CatchHandler @ 0052e540 */
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
                       ,0x1018,2,"assertion failed: %s","connected_subchannel_ != nullptr");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (((*(byte *)(param_1 + 0x318) >> 4 & 1) != 0) &&
           (*(long **)(param_1 + 0x180) != (long *)0x0)) {
                    /* try { // try from 0052df68 to 0052df6b has its CatchHandler @ 0052e540 */
          (**(code **)(**(long **)(param_1 + 0x180) + 0x30))();
LAB_0052df6c:
          plVar18 = *(long **)(param_1 + 0x180);
          *(undefined8 *)(param_1 + 0x180) = 0;
          if ((long *)(param_1 + 0x160) == plVar18) {
            pcVar13 = *(code **)(*plVar18 + 0x20);
          }
          else {
            if (plVar18 == (long *)0x0) goto LAB_0052e08c;
            pcVar13 = *(code **)(*plVar18 + 0x28);
          }
          (*pcVar13)();
        }
      }
LAB_0052e08c:
      if (local_c0 == (long *)0x0) {
        local_70 = (long *)0x0;
      }
      else if (alStack_e0 == local_c0) {
        local_70 = &local_90;
        (**(code **)(*local_c0 + 0x18))(local_c0,&local_90);
      }
      else {
                    /* try { // try from 0052e0ac to 0052e0d7 has its CatchHandler @ 0052e540 */
        local_70 = (long *)(**(code **)(*local_c0 + 0x10))();
      }
      FUN_0052efdc(&local_90,param_1 + 0x1e0);
      if (&local_90 == local_70) {
        pcVar13 = *(code **)(*local_70 + 0x20);
LAB_0052e10c:
        (*pcVar13)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar13 = *(code **)(*local_70 + 0x28);
        goto LAB_0052e10c;
      }
      *param_3 = (ulong)local_f0;
    }
    uVar16 = 1;
  }
LAB_0052e11c:
  if (alStack_e0 == local_c0) {
    pcVar13 = *(code **)(*local_c0 + 0x20);
  }
  else {
    if (local_c0 == (long *)0x0) goto LAB_0052e14c;
    pcVar13 = *(code **)(*local_c0 + 0x28);
  }
  (*pcVar13)();
LAB_0052e14c:
  FUN_0052f160((ulong)&local_100 | 8);
  return uVar16;
}


