/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003eb610; name: FUN_003eb610
 */


undefined8 * FUN_003eb610(byte *param_1,uint param_2)

{
  long *plVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  void *__ptr;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long *local_a0 [4];
  long *local_80 [4];
  
  bVar4 = *param_1;
  lVar13 = 4;
  while (bVar4 != 0) {
    uVar16 = (uint)bVar4;
    if (uVar16 == 0x3a) {
      lVar14 = lVar13 + -3;
      if (lVar14 != 0) {
        if ((param_1[lVar13 + -3] != 0x2f) || (param_1[lVar13 + -2] != 0x2f)) {
          lVar17 = -1;
          lVar21 = -1;
          goto LAB_003eb790;
        }
        lVar17 = lVar13 + -1;
        bVar4 = param_1[lVar13 + -1];
        lVar14 = lVar13;
        if (bVar4 != 0) goto LAB_003eb73c;
        lVar20 = -1;
        bVar6 = true;
        local_a8 = lVar17;
        goto LAB_003ebf60;
      }
      break;
    }
    if ((0x19 < ((uVar16 & 0xffffffdf) - 0x41 & 0xff)) &&
       ((lVar13 == 4 ||
        ((9 < uVar16 - 0x30 &&
         ((0x2e < uVar16 || ((1L << ((ulong)bVar4 & 0x3f) & 0x680000000000U) == 0)))))))) break;
    bVar4 = param_1[lVar13 + -3];
    lVar13 = lVar13 + 1;
  }
  local_a8 = lVar13 + -4;
  pcVar10 = "scheme";
  lVar20 = local_a8;
LAB_003eb6c0:
  FUN_003ec030(param_1,lVar20,pcVar10,param_2 & 1);
  return (undefined8 *)0x0;
  while( true ) {
    lVar14 = local_a8 + 1;
    bVar4 = bVar3;
    if (bVar3 == 0) break;
LAB_003eb73c:
    local_a8 = lVar14;
    lVar14 = local_a8 + -1;
    if ((1L << ((ulong)bVar4 & 0x3f) & 0x8000800800000000U) == 0) {
      lVar14 = -1;
    }
    bVar3 = param_1[local_a8];
    lVar20 = -1;
    if (bVar4 < 0x40) {
      lVar20 = lVar14;
    }
    bVar6 = lVar20 == -1;
    if (!bVar6) break;
  }
  if (bVar3 == 0) {
LAB_003ebf60:
    lVar21 = local_a8;
  }
  else {
    lVar21 = -1;
  }
  if (!bVar6) {
    lVar21 = lVar20;
  }
  lVar14 = lVar21;
  if (lVar21 == -1) {
    pcVar10 = "authority";
    lVar20 = local_a8;
    goto LAB_003eb6c0;
  }
LAB_003eb790:
  lVar18 = 0;
  pbVar2 = param_1 + lVar14;
  bVar4 = *pbVar2;
  while (bVar4 != 0) {
    if ((bVar4 == 0x23) || (bVar4 == 0x3f)) {
      local_a8 = lVar14 + lVar18;
      if (local_a8 == -1) goto LAB_003eb7e8;
      if (bVar4 == 0x3f) {
        lStack_b8 = local_a8 + 1;
        local_a8 = lStack_b8;
        iVar7 = FUN_003ec210(param_1,&local_a8);
        if (iVar7 != 0) {
          bVar4 = param_1[local_a8];
          local_c0 = local_a8;
          if ((bVar4 == 0) || (bVar4 == 0x23)) goto joined_r0x003eb838;
        }
        pcVar10 = "query";
        lVar20 = local_a8;
        goto LAB_003eb6c0;
      }
      lStack_b8 = -1;
      local_c0 = -1;
joined_r0x003eb838:
      if (bVar4 != 0x23) goto LAB_003eb844;
      lVar12 = local_a8 + 1;
      local_a8 = lVar12;
      iVar7 = FUN_003ec210(param_1,&local_a8);
      if (iVar7 == 0) {
        lVar20 = local_a8 + 1;
      }
      else {
        lVar20 = local_a8;
        if (param_1[local_a8] == 0) {
          local_b0 = local_a8;
          goto LAB_003eb84c;
        }
      }
      pcVar10 = "fragment";
      goto LAB_003eb6c0;
    }
    lVar18 = lVar18 + 1;
    bVar4 = pbVar2[lVar18];
  }
  local_a8 = lVar14 + lVar18;
  if (local_a8 == -1) {
LAB_003eb7e8:
    local_a8 = lVar14 + lVar18;
    pcVar10 = "path";
    lVar20 = -1;
    goto LAB_003eb6c0;
  }
  local_c0 = -1;
  lStack_b8 = -1;
LAB_003eb844:
  lVar12 = -1;
  local_b0 = -1;
LAB_003eb84c:
  puVar8 = (undefined8 *)FUN_002ebd80(0x40);
  FUN_002f2f40(local_80,param_1,lVar13 + -4);
  FUN_003ec710(local_a0,local_80);
  uVar9 = FUN_00304ac0(local_a0,2);
  plVar1 = local_80[0];
  if ((local_80[0] != (long *)0x0) && (plVar11 = (long *)*local_80[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar20 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar20);
    }
    if (lVar20 < 1) goto LAB_003ebfd4;
    if (lVar20 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  plVar1 = local_a0[0];
  if ((local_a0[0] != (long *)0x0) && (plVar11 = (long *)*local_a0[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar20 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar20);
    }
    if (lVar20 < 1) goto LAB_003ebfd4;
    if (lVar20 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  *puVar8 = uVar9;
  if ((lVar17 == -1) || (lVar21 == -1)) {
    FUN_002f2710(local_80);
  }
  else {
    FUN_002f2f40(local_80,param_1 + lVar17,lVar21 - lVar17);
  }
  FUN_003ec710(local_a0,local_80);
  uVar9 = FUN_00304ac0(local_a0,2);
  plVar1 = local_80[0];
  if ((local_80[0] != (long *)0x0) && (plVar11 = (long *)*local_80[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar21);
    }
    if (lVar21 < 1) goto LAB_003ebfd4;
    if (lVar21 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  plVar1 = local_a0[0];
  if ((local_a0[0] != (long *)0x0) && (plVar11 = (long *)*local_a0[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar21 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar21);
    }
    if (lVar21 < 1) goto LAB_003ebfd4;
    if (lVar21 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  puVar8[1] = uVar9;
  if (lVar14 == -1) {
    FUN_002f2710(local_80);
  }
  else {
    FUN_002f2f40(pbVar2,lVar18);
  }
  FUN_003ec710(local_a0,local_80);
  uVar9 = FUN_00304ac0(local_a0,2);
  plVar1 = local_80[0];
  if ((local_80[0] != (long *)0x0) && (plVar11 = (long *)*local_80[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar14 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar14);
    }
    if (lVar14 < 1) goto LAB_003ebfd4;
    if (lVar14 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  plVar1 = local_a0[0];
  if ((local_a0[0] != (long *)0x0) && (plVar11 = (long *)*local_a0[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar14 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar14);
    }
    if (lVar14 < 1) goto LAB_003ebfd4;
    if (lVar14 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  puVar8[2] = uVar9;
  if ((lStack_b8 == -1) || (local_c0 == -1)) {
    FUN_002f2710(local_80);
  }
  else {
    FUN_002f2f40(local_80,param_1 + lStack_b8,local_c0 - lStack_b8);
  }
  FUN_003ec710(local_a0,local_80);
  uVar9 = FUN_00304ac0(local_a0,2);
  plVar1 = local_80[0];
  if ((local_80[0] != (long *)0x0) && (plVar11 = (long *)*local_80[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar14 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar14);
    }
    if (lVar14 < 1) goto LAB_003ebfd4;
    if (lVar14 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  plVar1 = local_a0[0];
  if ((local_a0[0] != (long *)0x0) && (plVar11 = (long *)*local_a0[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar14 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar14);
    }
    if (lVar14 < 1) goto LAB_003ebfd4;
    if (lVar14 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  puVar8[3] = uVar9;
  if ((lVar12 == -1) || (local_b0 == -1)) {
    FUN_002f2710(local_80);
  }
  else {
    FUN_002f2f40(local_80,param_1 + lVar12,local_b0 - lVar12);
  }
  FUN_003ec710(local_a0,local_80);
  uVar9 = FUN_00304ac0(local_a0,2);
  plVar1 = local_80[0];
  if ((local_80[0] != (long *)0x0) && (plVar11 = (long *)*local_80[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar14 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar14);
    }
    if (lVar14 < 1) goto LAB_003ebfd4;
    if (lVar14 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  plVar1 = local_a0[0];
  if ((local_a0[0] != (long *)0x0) && (plVar11 = (long *)*local_a0[0], plVar11 != (long *)0x0)) {
    plVar15 = plVar11 + 1;
    lVar13 = *plVar11;
    do {
      lVar14 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar11,lVar14);
    }
    if (lVar14 < 1) {
LAB_003ebfd4:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar14 == 1) {
      (*(code *)plVar1[3])(plVar1[4]);
    }
  }
  pcVar10 = (char *)puVar8[3];
  puVar8[7] = uVar9;
  if (pcVar10 == (char *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/uri/uri_parser.cc",0x91,2,
                 "assertion failed: %s","uri->query != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = puVar8 + 4;
  if (*pcVar10 == '\0') {
    *plVar1 = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    return puVar8;
  }
  FUN_002eca30(pcVar10,&DAT_0398dfe9,plVar1,puVar8 + 5);
  uVar9 = FUN_002ebd50(puVar8[5] << 3);
  puVar8[6] = uVar9;
  if (puVar8[5] == 0) {
    return puVar8;
  }
  uVar19 = 0;
  do {
    __ptr = *(void **)(*plVar1 + uVar19 * 8);
    FUN_002eca30(__ptr,&DAT_039373c7,local_80,local_a0);
    if (local_a0[0] == (long *)0x0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/uri/uri_parser.cc",0xa3,2,
                   "assertion failed: %s","num_query_param_parts > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(*plVar1 + uVar19 * 8) = *local_80[0];
    if (local_a0[0] == (long *)0x1) {
      *(undefined8 *)(puVar8[6] + uVar19 * 8) = 0;
    }
    else {
      *(long *)(puVar8[6] + uVar19 * 8) = local_80[0][1];
      if ((long *)0x2 < local_a0[0]) {
        plVar11 = (long *)0x2;
        do {
          free((void *)local_80[0][(long)plVar11]);
          plVar11 = (long *)((long)plVar11 + 1);
        } while (plVar11 < local_a0[0]);
      }
    }
    free(local_80[0]);
    free(__ptr);
    uVar19 = uVar19 + 1;
  } while (uVar19 < (ulong)puVar8[5]);
  return puVar8;
}


