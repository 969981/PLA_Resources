/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00519088; name: FUN_00519088
 */


void FUN_00519088(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  void *__s1;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long *local_e8;
  long local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98 [4];
  undefined1 auStack_78 [24];
  long local_60;
  char local_54 [4];
  
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x40);
  if (((lVar13 == 0) || (*(long *)(lVar13 + 0x18) != param_1)) ||
     (plVar20 = (long *)(param_1 + 0x98), *plVar20 == 0)) {
    pcVar11 = "LRS+OnResponseReceivedLocked";
    local_e0 = CONCAT44(local_e0._4_4_,0x65b);
    goto LAB_005190dc;
  }
  FUN_003c86e0(auStack_78);
  FUN_003c8870(local_98,auStack_78);
  FUN_003c8710(auStack_78);
  FUN_003c8500(*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x98) = 0;
  local_54[0] = '\0';
  local_e0 = 0;
  local_d8 = (long *)0x0;
                    /* try { // try from 0051915c to 005193a7 has its CatchHandler @ 005196a4 */
  local_e8 = &local_e0;
  uVar8 = FUN_005bde88(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18) + 0x40,local_98
                       ,local_54,&local_e8,&local_60);
  if (uVar8 == 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    puVar6 = PTR_DAT_04374a30;
                    /* try { // try from 00519544 to 0051955f has its CatchHandler @ 005196a4 */
    if ((PTR_DAT_04374a30[0x10] != '\0') &&
       (FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x678,1,
                     "[xds_client %p] LRS response received, %lu cluster names, send_all_clusters=%d, load_report_interval=%ldms"
                     ,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18),local_d8,
                     local_54[0],local_60), local_e8 != &local_e0)) {
      lVar13 = 0;
      plVar12 = local_e8;
      do {
        if ((*(byte *)(plVar12 + 4) & 1) == 0) {
          lVar18 = (long)plVar12 + 0x21;
        }
        else {
          lVar18 = plVar12[6];
        }
                    /* try { // try from 005195b8 to 005195cf has its CatchHandler @ 0051969c */
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                     ,0x680,1,"[xds_client %p] cluster_name %lu: %s",
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18),lVar13,
                     lVar18);
        lVar13 = lVar13 + 1;
        plVar14 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar14 = plVar12 + 2;
          plVar17 = (long *)*plVar14;
          if ((long *)*plVar17 != plVar12) {
            do {
              lVar18 = *plVar14;
              plVar14 = (long *)(lVar18 + 0x10);
              plVar17 = (long *)*plVar14;
            } while (*plVar17 != lVar18);
          }
        }
        else {
          do {
            plVar17 = plVar14;
            plVar14 = (long *)*plVar17;
          } while ((long *)*plVar17 != (long *)0x0);
        }
        plVar12 = plVar17;
      } while (plVar17 != &local_e0);
    }
    if ((local_60 < 1000) && (local_60 = 1000, puVar6[0x10] != '\0')) {
                    /* try { // try from 00519628 to 00519647 has its CatchHandler @ 005196a4 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x689,1,"[xds_client %p] Increased load_report_interval to minimum value %dms",
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18),1000);
    }
    cVar4 = local_54[0];
    if ((local_54[0] == *(char *)(param_1 + 0x170)) &&
       ((long *)*(long *)(param_1 + 0x188) == local_d8)) {
      if (*(long **)(param_1 + 0x178) != (long *)(param_1 + 0x180)) {
        plVar12 = *(long **)(param_1 + 0x178);
        plVar14 = local_e8;
        do {
          bVar2 = *(byte *)(plVar12 + 4);
          bVar3 = *(byte *)(plVar14 + 4);
          uVar8 = (ulong)(bVar2 >> 1);
          __n = uVar8;
          if ((bVar2 & 1) != 0) {
            __n = plVar12[5];
          }
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar14[5];
          }
          if (__n != sVar1) goto LAB_005193ac;
          __s1 = (void *)plVar12[6];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar12 + 0x21);
          }
          pcVar11 = (char *)plVar14[6];
          if ((bVar3 & 1) == 0) {
            pcVar11 = (char *)((long)plVar14 + 0x21);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pcVar15 = (char *)((long)plVar12 + 0x21);
              do {
                if (*pcVar15 != *pcVar11) goto LAB_005193ac;
                uVar8 = uVar8 - 1;
                pcVar15 = pcVar15 + 1;
                pcVar11 = pcVar11 + 1;
              } while (uVar8 != 0);
            }
          }
          else if ((__n != 0) && (iVar7 = memcmp(__s1,pcVar11,__n), iVar7 != 0)) goto LAB_005193ac;
          plVar17 = (long *)plVar12[1];
          if ((long *)plVar12[1] == (long *)0x0) {
            plVar17 = plVar12 + 2;
            plVar16 = (long *)*plVar17;
            if ((long *)*plVar16 != plVar12) {
              do {
                lVar13 = *plVar17;
                plVar17 = (long *)(lVar13 + 0x10);
                plVar16 = (long *)*plVar17;
              } while (*plVar16 != lVar13);
            }
          }
          else {
            do {
              plVar16 = plVar17;
              plVar17 = (long *)*plVar16;
            } while ((long *)*plVar16 != (long *)0x0);
          }
          plVar12 = (long *)plVar14[1];
          if ((long *)plVar14[1] == (long *)0x0) {
            plVar12 = plVar14 + 2;
            plVar17 = (long *)*plVar12;
            if ((long *)*plVar17 != plVar14) {
              do {
                lVar13 = *plVar12;
                plVar12 = (long *)(lVar13 + 0x10);
                plVar17 = (long *)*plVar12;
              } while (*plVar17 != lVar13);
            }
          }
          else {
            do {
              plVar17 = plVar12;
              plVar12 = (long *)*plVar17;
            } while ((long *)*plVar17 != (long *)0x0);
          }
          plVar12 = plVar16;
          plVar14 = plVar17;
        } while (plVar16 != (long *)(param_1 + 0x180));
      }
      if (*(long *)(param_1 + 400) == local_60) {
        if (puVar6[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                       ,0x694,1,
                       "[xds_client %p] Incoming LRS response identical to current, ignoring.",
                       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18));
        }
        goto LAB_00519418;
      }
    }
LAB_005193ac:
    puVar10 = *(undefined8 **)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x198) = 0;
    if (puVar10 != (undefined8 *)0x0) {
                    /* try { // try from 005193c0 to 005193c3 has its CatchHandler @ 005196a0 */
      (**(code **)*puVar10)();
      cVar4 = local_54[0];
    }
    *(char *)(param_1 + 0x170) = cVar4;
    FUN_0036b9a4((long *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x180));
    *(long **)(param_1 + 0x178) = local_e8;
    *(long *)(param_1 + 0x180) = local_e0;
    *(long **)(param_1 + 0x188) = local_d8;
    if (local_d8 == (long *)0x0) {
      *(long *)(param_1 + 0x178) = param_1 + 0x180;
    }
    else {
      *(long *)(local_e0 + 0x10) = param_1 + 0x180;
      local_e0 = 0;
      local_d8 = (long *)0x0;
      local_e8 = &local_e0;
    }
    *(long *)(param_1 + 400) = local_60;
                    /* try { // try from 00519410 to 00519417 has its CatchHandler @ 005196a4 */
    FUN_00516a7c(param_1);
  }
  else {
    uVar19 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18);
    uVar9 = FUN_002f1480(uVar8);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x66f,2,"[xds_client %p] LRS response parsing failed. error=%s",uVar19,uVar9);
    if (4 < uVar8) {
      FUN_002f0430(uVar8,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x672);
    }
  }
LAB_00519418:
  FUN_0036b9a4(&local_e8,local_e0);
  if ((local_98[0] != (long *)0x0) && (plVar12 = (long *)*local_98[0], plVar12 != (long *)0x0)) {
    plVar14 = plVar12 + 1;
    lVar13 = *plVar12;
    do {
      lVar18 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar12,lVar18);
    }
    if (lVar18 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar18 == 1) {
      (*(code *)local_98[0][3])(local_98[0][4]);
    }
  }
  if (*(char *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x18) + 0x170) == '\0') {
    local_e0 = 0;
    local_a0 = 0;
    local_e8 = DAT_0388a848;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    local_d8 = plVar20;
    if (*(long *)(param_1 + 0x28) == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x6b0,2,"assertion failed: %s","call_ != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar7 = FUN_003cba10(*(long *)(param_1 + 0x28),&local_e8,1,param_1 + 0xa0);
    if (iVar7 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x6b4,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    return;
  }
  local_e0 = CONCAT44(local_e0._4_4_,0x6a6);
  pcVar11 = "LRS+OnResponseReceivedLocked+xds_shutdown";
LAB_005190dc:
  local_e8 = (long *)0x3942339;
  FUN_00518fac(param_1,&local_e8,pcVar11);
  return;
}


