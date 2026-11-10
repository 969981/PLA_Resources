/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e4b30; name: FUN_005e4b30
 */


/* WARNING: Removing unreachable block (ram,0x005e4de0) */
/* WARNING: Removing unreachable block (ram,0x005e4d0c) */
/* WARNING: Removing unreachable block (ram,0x005e4d04) */
/* WARNING: Removing unreachable block (ram,0x005e4d5c) */
/* WARNING: Removing unreachable block (ram,0x005e5064) */
/* WARNING: Removing unreachable block (ram,0x005e4d18) */
/* WARNING: Removing unreachable block (ram,0x005e4d3c) */
/* WARNING: Removing unreachable block (ram,0x005e4d44) */
/* WARNING: Removing unreachable block (ram,0x005e4d74) */
/* WARNING: Removing unreachable block (ram,0x005e4d88) */
/* WARNING: Removing unreachable block (ram,0x005e4dac) */
/* WARNING: Removing unreachable block (ram,0x005e4d50) */
/* WARNING: Removing unreachable block (ram,0x005e4db4) */
/* WARNING: Removing unreachable block (ram,0x005e4dc0) */
/* WARNING: Removing unreachable block (ram,0x005e4dc4) */
/* WARNING: Removing unreachable block (ram,0x005e4dd4) */
/* WARNING: Removing unreachable block (ram,0x005e5010) */
/* WARNING: Removing unreachable block (ram,0x005e5008) */
/* WARNING: Removing unreachable block (ram,0x005e50e8) */
/* WARNING: Removing unreachable block (ram,0x005e5020) */
/* WARNING: Removing unreachable block (ram,0x005e5044) */
/* WARNING: Removing unreachable block (ram,0x005e504c) */
/* WARNING: Removing unreachable block (ram,0x005e5058) */
/* WARNING: Removing unreachable block (ram,0x005e507c) */
/* WARNING: Removing unreachable block (ram,0x005e5090) */
/* WARNING: Removing unreachable block (ram,0x005e50b4) */
/* WARNING: Removing unreachable block (ram,0x005e50bc) */
/* WARNING: Removing unreachable block (ram,0x005e50c8) */
/* WARNING: Removing unreachable block (ram,0x005e50cc) */
/* WARNING: Removing unreachable block (ram,0x005e50dc) */
/* WARNING: Removing unreachable block (ram,0x005e521c) */
/* WARNING: Removing unreachable block (ram,0x005e5134) */
/* WARNING: Removing unreachable block (ram,0x005e5240) */
/* WARNING: Removing unreachable block (ram,0x005e5244) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_005e4b30(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  void *__ptr;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong local_f8;
  undefined1 local_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 *******local_a8;
  ulong local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  ulong local_68;
  
  local_b0 = 0;
                    /* try { // try from 005e4b6c to 005e4b6f has its CatchHandler @ 005e558c */
  __ptr = (void *)FUN_002ebd80((*param_1 >> 1) * 0x30);
  puVar4 = PTR_LAB_04373088;
  uVar19 = *param_1;
  if (uVar19 < 2) {
    uVar18 = 0;
  }
  else {
    uVar11 = 0;
    puVar17 = (undefined8 *)((long)__ptr + 0x20);
    lVar7 = 0x88;
    do {
      puVar1 = param_1 + 1;
      if ((uVar19 & 1) != 0) {
        puVar1 = (ulong *)param_1[1];
      }
                    /* try { // try from 005e4bdc to 005e4be7 has its CatchHandler @ 005e5718 */
      FUN_003086d0(local_78,(long)puVar1 + lVar7 + -0x88,1);
      uVar19 = (ulong)local_78 | 1;
      if (((ulong)local_78[0] & 1) != 0) {
        uVar19 = local_68;
      }
                    /* try { // try from 005e4bf8 to 005e4bff has its CatchHandler @ 005e5728 */
      FUN_002f2ff0(&local_98,uVar19);
      puVar17[-3] = uStack_90;
      puVar17[-4] = local_98;
      puVar17[-1] = uStack_80;
      puVar17[-2] = local_88;
      if (*param_1 >> 1 <= uVar11) {
                    /* try { // try from 005e535c to 005e537b has its CatchHandler @ 005e53f8 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e
                      ,"operator[]");
      }
      puVar1 = param_1 + 1;
      if ((*param_1 & 1) != 0) {
        puVar1 = (ulong *)param_1[1];
      }
                    /* try { // try from 005e4c28 to 005e4c2f has its CatchHandler @ 005e5738 */
      FUN_005e5ba0(*(undefined8 *)((long)puVar1 + lVar7));
      uVar10 = FUN_002ec2d0();
      pvVar5 = (void *)*puVar17;
      *puVar17 = uVar10;
      if (pvVar5 != (void *)0x0) {
                    /* try { // try from 005e4c40 to 005e4c43 has its CatchHandler @ 005e5704 */
        free(pvVar5);
      }
      if (((ulong)local_78[0] & 1) != 0) {
        FUN_002e2ea0(puVar4,local_68);
      }
      uVar19 = *param_1;
      uVar11 = uVar11 + 1;
      puVar17 = puVar17 + 6;
      lVar7 = lVar7 + 0x90;
      uVar18 = uVar19 >> 1;
    } while (uVar11 < uVar18);
  }
  plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x38);
  if (plVar6 != (long *)0x0) {
    plVar6[3] = (long)&LAB_005e58a0;
    plVar6[2] = 1;
    puVar4 = PTR_DAT_04375138;
    plVar6[4] = uVar19 & 0xfffffffffffffffe;
    plVar6[5] = 0;
    *plVar6 = (long)(puVar4 + 0x10);
    plVar6[1] = 0;
                    /* try { // try from 005e4cac to 005e4caf has its CatchHandler @ 005e54dc */
    lVar7 = FUN_002ebd80(uVar18 * 0x60);
    plVar6[6] = lVar7;
    if (uVar18 != 0) {
      pvVar5 = __ptr;
      do {
                    /* try { // try from 005e4cc0 to 005e4ccb has its CatchHandler @ 005e5708 */
        FUN_005e58ac(plVar6,pvVar5,(long)pvVar5 + 0x20);
        uVar18 = uVar18 - 1;
        pvVar5 = (void *)((long)pvVar5 + 0x30);
      } while (uVar18 != 0);
    }
  }
                    /* try { // try from 005e4cd8 to 005e4cdf has its CatchHandler @ 005e5504 */
  free(__ptr);
                    /* try { // try from 005e4ce0 to 005e4ceb has its CatchHandler @ 005e54f8 */
  FUN_005b66c0(&local_98,plVar6);
  uStack_d8 = uStack_80;
  uStack_e0 = local_88;
  local_f8 = 2;
                    /* try { // try from 005e4e0c to 005e4e13 has its CatchHandler @ 005e54ec */
  plVar8 = (long *)FUN_004fcc40(param_2);
  local_78[0] = (undefined8 *)0x0;
  if (plVar8 != (long *)0x0) {
                    /* try { // try from 005e4e24 to 005e4e2b has its CatchHandler @ 005e54d8 */
    (**(code **)(*plVar8 + 0x18))(&local_98);
                    /* try { // try from 005e4e2c to 005e4e37 has its CatchHandler @ 005e5418 */
    FUN_00573aec(local_78,&local_98);
    puVar17 = local_98;
    if (local_98 != (undefined8 *)0x0) {
      lVar7 = local_98[1];
      plVar8 = local_98 + 2;
      do {
        lVar16 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 005e4e6c to 005e4e8b has its CatchHandler @ 005e5408 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),local_98 + 1,lVar16);
      }
      if (lVar16 < 1) {
                    /* try { // try from 005e53cc to 005e53f3 has its CatchHandler @ 005e5408 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar16 == 1) {
        (**(code **)*puVar17)(puVar17);
        FUN_002e2ea0(PTR_LAB_04373088,puVar17);
      }
    }
    if (local_78[0] == (undefined8 *)0x0) {
                    /* try { // try from 005e5334 to 005e535b has its CatchHandler @ 005e53f4 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb_channel_secure.cc"
                   ,0x5b,2,"assertion failed: %s","creds_sans_call_creds != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pppppppuVar15 = &local_a8;
    if ((local_b0 & 1) == 0) {
      uVar19 = 1;
    }
    else {
      uVar19 = local_a0;
      pppppppuVar15 = local_a8;
    }
    if (local_b0 >> 1 == uVar19) {
      pppppppuVar9 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar19 << 4);
      pppppppuVar9[uVar19] = (undefined8 ******)"grpc.channel_credentials";
      if (pppppppuVar9 != (undefined8 *******)0x0) {
        if (uVar19 != 0) {
          uVar11 = uVar19 & 3;
          if (uVar19 - 1 < 3) {
            lVar7 = 0;
            pppppppuVar13 = pppppppuVar15;
          }
          else {
            lVar7 = 0;
            pppppppuVar12 = pppppppuVar9 + 2;
            pppppppuVar14 = pppppppuVar15;
            do {
              pppppppuVar13 = pppppppuVar14 + 4;
              pppppppuVar12[-2] = *pppppppuVar14;
              pppppppuVar12[-1] = pppppppuVar14[1];
              *pppppppuVar12 = pppppppuVar14[2];
              lVar7 = lVar7 + 4;
              pppppppuVar12[1] = pppppppuVar14[3];
              pppppppuVar12 = pppppppuVar12 + 4;
              pppppppuVar14 = pppppppuVar13;
            } while (uVar19 - uVar11 != lVar7);
          }
          if (uVar11 != 0) {
            pppppppuVar12 = pppppppuVar9 + lVar7;
            do {
              uVar11 = uVar11 - 1;
              *pppppppuVar12 = *pppppppuVar13;
              pppppppuVar12 = pppppppuVar12 + 1;
              pppppppuVar13 = pppppppuVar13 + 1;
            } while (uVar11 != 0);
          }
        }
        if (pppppppuVar15 != (undefined8 *******)0x0) {
          memset(pppppppuVar15,0xab,uVar19 << 3);
        }
        if ((local_b0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_a8);
        }
        local_b0 = local_b0 | 1;
        local_a8 = pppppppuVar9;
        local_a0 = uVar19 << 1;
      }
    }
    else {
      pppppppuVar15[local_b0 >> 1] = (undefined8 ******)"grpc.channel_credentials";
    }
    local_b0 = local_b0 + 2;
                    /* try { // try from 005e4ff4 to 005e4ffb has its CatchHandler @ 005e5414 */
    FUN_004fcc20(&local_98,local_78[0]);
    uStack_c8 = uStack_90;
    puStack_d0 = local_98;
    uStack_b8 = uStack_80;
    uStack_c0 = local_88;
    local_f8 = 4;
  }
  pppppppuVar15 = &local_a8;
  if ((local_b0 & 1) != 0) {
    pppppppuVar15 = local_a8;
  }
                    /* try { // try from 005e513c to 005e514f has its CatchHandler @ 005e559c */
  uVar10 = FUN_002e4270(param_2,pppppppuVar15,local_b0 >> 1,local_f0,local_f8 >> 1);
  FUN_002e4a10(param_2);
  puVar17 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    lVar7 = local_78[0][1];
    plVar8 = local_78[0] + 2;
    do {
      lVar16 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 005e5184 to 005e51a3 has its CatchHandler @ 005e5410 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),local_78[0] + 1,lVar16);
    }
    if (lVar16 < 1) {
                    /* try { // try from 005e537c to 005e53a3 has its CatchHandler @ 005e5410 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar16 == 1) {
      (**(code **)*puVar17)(puVar17);
      FUN_002e2ea0(PTR_LAB_04373088,puVar17);
    }
  }
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[1];
    plVar8 = plVar6 + 2;
    do {
      lVar16 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 005e51e4 to 005e5203 has its CatchHandler @ 005e540c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar6 + 1,lVar16);
    }
    if (lVar16 < 1) {
                    /* try { // try from 005e53a4 to 005e53cb has its CatchHandler @ 005e540c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar16 == 1) {
      (**(code **)*plVar6)(plVar6);
      FUN_002e2ea0(PTR_LAB_04373088,plVar6);
    }
  }
  memset(local_f0,0xab,local_f8 << 4);
  pppppppuVar15 = &local_a8;
  if ((((local_b0 & 1) != 0) && (pppppppuVar15 = local_a8, local_a8 == (undefined8 *******)0x0)) ||
     (memset(pppppppuVar15,0xab,(local_b0 & 0x3ffffffffffffffe) << 2), (local_b0 & 1) != 0)) {
    FUN_002e2ea0(PTR_LAB_04373088,local_a8);
  }
  return uVar10;
}


