/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00547b58; name: FUN_00547b58
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00547b58(long param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *******pppppppuVar6;
  undefined8 ******ppppppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 *local_160;
  undefined1 auStack_158 [176];
  undefined8 *local_a8;
  ulong uStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 *local_80 [2];
  ulong local_70;
  undefined8 *******local_68;
  ulong local_60;
  undefined8 *local_48;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0x124,1,"resolving_lb=%p: got resolver result",param_1);
  }
  local_70 = 0;
  uVar17 = *param_2;
  local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffff0000);
  uStack_88 = 0;
  local_80[0] = (undefined8 *)0x0;
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 == (long *)0x0) {
    lVar8 = *(long *)(param_1 + 0x68);
    if (lVar8 != 0) {
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        lVar15 = *plVar5;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar9 = *(long *)(lVar8 + 8);
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar9 + 8),(long *)(lVar8 + 8),lVar15,
                     lVar15 + 1);
      }
    }
    puVar3 = local_80[0];
    puVar16 = *(undefined8 **)(param_1 + 0x68);
    if (local_80[0] != (undefined8 *)0x0) {
      lVar8 = local_80[0][1];
      plVar5 = local_80[0] + 2;
      do {
        lVar15 = *plVar5;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),local_80[0] + 1,lVar15);
      }
      if (lVar15 < 1) {
                    /* try { // try from 005482e4 to 0054830b has its CatchHandler @ 00548324 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar15 == 1) {
        (**(code **)*puVar3)(puVar3);
        FUN_002e2ea0(PTR_LAB_04373088,puVar3);
      }
    }
    local_80[0] = puVar16;
  }
  else {
                    /* try { // try from 00547bac to 00547bbb has its CatchHandler @ 0054840c */
    (**(code **)(*plVar5 + 0x10))(&local_a8,plVar5,param_2);
    puVar3 = local_80[0];
    uStack_88 = uStack_a0;
    local_90 = local_a8;
    if (local_80[0] != (undefined8 *)0x0) {
      lVar8 = local_80[0][1];
      plVar5 = local_80[0] + 2;
      do {
        lVar15 = *plVar5;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar15 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 00547c00 to 00547c1f has its CatchHandler @ 00548310 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),local_80[0] + 1,lVar15);
      }
      if (lVar15 < 1) {
                    /* try { // try from 00548294 to 005482bb has its CatchHandler @ 00548310 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar15 == 1) {
        (**(code **)*puVar3)(puVar3);
        FUN_002e2ea0(PTR_LAB_04373088,puVar3);
      }
    }
    local_80[0] = local_98;
    local_98 = (undefined8 *)0x0;
    FUN_00532768(&local_98);
    if (uStack_88 != 0) {
      if (local_90._1_1_ != '\0') {
                    /* try { // try from 00547c50 to 00547d0b has its CatchHandler @ 00548324 */
        FUN_00546fe8(param_1);
        uStack_88 = 0;
      }
    }
  }
                    /* try { // try from 00547d24 to 00547d2b has its CatchHandler @ 00548410 */
  FUN_00548c50(&local_a8,param_2[0x15]);
  if (local_80[0] != (undefined8 *)0x0) {
    local_48 = local_80[0];
    local_80[0] = (undefined8 *)0x0;
    FUN_0050d238(auStack_158,param_2);
                    /* try { // try from 00547d48 to 00547d57 has its CatchHandler @ 005483ec */
    FUN_005471bc(param_1,&local_48,auStack_158);
    FUN_0050ce98(auStack_158);
    FUN_00532768(&local_48);
  }
  puVar3 = local_a8;
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 == (long *)0x0) {
LAB_00547df4:
  }
  else {
    local_a8 = (undefined8 *)0x0;
    local_160 = puVar3;
                    /* try { // try from 00547d88 to 00547d8f has its CatchHandler @ 0054832c */
    (**(code **)(*plVar5 + 0x18))(plVar5,(ulong)local_90 & 0xff,&local_160);
    puVar3 = local_160;
    if (local_160 == (undefined8 *)0x0) goto LAB_00547df4;
    lVar8 = local_160[1];
    plVar5 = local_160 + 2;
    do {
      lVar15 = *plVar5;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 00547dc4 to 00547de3 has its CatchHandler @ 0054830c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),local_160 + 1,lVar15);
    }
    if (lVar15 < 1) {
                    /* try { // try from 005482bc to 005482e3 has its CatchHandler @ 0054830c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar15 != 1) goto LAB_00547df4;
    (**(code **)*puVar3)(puVar3);
    FUN_002e2ea0(PTR_LAB_04373088,puVar3);
  }
  if ((char)local_90 != '\0') {
    bVar4 = (local_70 & 1) != 0;
    pppppppuVar11 = &local_68;
    if (bVar4) {
      pppppppuVar11 = local_68;
    }
    uVar1 = 3;
    if (bVar4) {
      uVar1 = local_60;
    }
    if (local_70 >> 1 == uVar1) {
      pppppppuVar6 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar1 << 4);
      pppppppuVar6[uVar1] = (undefined8 ******)"Service config changed";
      if (pppppppuVar6 != (undefined8 *******)0x0) {
        if (uVar1 != 0) {
          uVar10 = uVar1 & 3;
          if (uVar1 - 1 < 3) {
            lVar8 = 0;
            pppppppuVar13 = pppppppuVar11;
          }
          else {
            lVar8 = 0;
            pppppppuVar12 = pppppppuVar6 + 2;
            pppppppuVar14 = pppppppuVar11;
            do {
              pppppppuVar13 = pppppppuVar14 + 4;
              pppppppuVar12[-2] = *pppppppuVar14;
              pppppppuVar12[-1] = pppppppuVar14[1];
              *pppppppuVar12 = pppppppuVar14[2];
              lVar8 = lVar8 + 4;
              pppppppuVar12[1] = pppppppuVar14[3];
              pppppppuVar12 = pppppppuVar12 + 4;
              pppppppuVar14 = pppppppuVar13;
            } while (uVar1 - uVar10 != lVar8);
          }
          if (uVar10 != 0) {
            pppppppuVar12 = pppppppuVar6 + lVar8;
            do {
              uVar10 = uVar10 - 1;
              *pppppppuVar12 = *pppppppuVar13;
              pppppppuVar12 = pppppppuVar12 + 1;
              pppppppuVar13 = pppppppuVar13 + 1;
            } while (uVar10 != 0);
          }
        }
        if (pppppppuVar11 != (undefined8 *******)0x0) {
          memset(pppppppuVar11,0xab,uVar1 << 3);
        }
        if ((local_70 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_68);
        }
        local_70 = local_70 | 1;
        local_68 = pppppppuVar6;
        local_60 = uVar1 << 1;
      }
    }
    else {
      pppppppuVar11[local_70 >> 1] = (undefined8 ******)"Service config changed";
    }
    local_70 = local_70 + 2;
  }
  if (uStack_88 != 0) {
                    /* try { // try from 00547f54 to 00547f57 has its CatchHandler @ 00548328 */
    ppppppuVar7 = (undefined8 ******)FUN_002f1480();
    bVar4 = (local_70 & 1) != 0;
    pppppppuVar11 = &local_68;
    if (bVar4) {
      pppppppuVar11 = local_68;
    }
    uVar1 = 3;
    if (bVar4) {
      uVar1 = local_60;
    }
    if (local_70 >> 1 == uVar1) {
      pppppppuVar6 = (undefined8 *******)FUN_002e2e80(PTR_FUN_04373078,uVar1 << 4);
      pppppppuVar6[uVar1] = ppppppuVar7;
      if (pppppppuVar6 != (undefined8 *******)0x0) {
        if (uVar1 != 0) {
          uVar10 = uVar1 & 3;
          if (uVar1 - 1 < 3) {
            lVar8 = 0;
            pppppppuVar13 = pppppppuVar11;
          }
          else {
            lVar8 = 0;
            pppppppuVar12 = pppppppuVar6 + 2;
            pppppppuVar14 = pppppppuVar11;
            do {
              pppppppuVar13 = pppppppuVar14 + 4;
              pppppppuVar12[-2] = *pppppppuVar14;
              pppppppuVar12[-1] = pppppppuVar14[1];
              *pppppppuVar12 = pppppppuVar14[2];
              lVar8 = lVar8 + 4;
              pppppppuVar12[1] = pppppppuVar14[3];
              pppppppuVar12 = pppppppuVar12 + 4;
              pppppppuVar14 = pppppppuVar13;
            } while (uVar1 - uVar10 != lVar8);
          }
          if (uVar10 != 0) {
            pppppppuVar12 = pppppppuVar6 + lVar8;
            do {
              uVar10 = uVar10 - 1;
              *pppppppuVar12 = *pppppppuVar13;
              pppppppuVar12 = pppppppuVar12 + 1;
              pppppppuVar13 = pppppppuVar13 + 1;
            } while (uVar10 != 0);
          }
        }
        if (pppppppuVar11 != (undefined8 *******)0x0) {
          memset(pppppppuVar11,0xab,uVar1 << 3);
        }
        if ((local_70 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_68);
        }
        local_70 = local_70 | 1;
        local_68 = pppppppuVar6;
        local_60 = uVar1 << 1;
      }
    }
    else {
      pppppppuVar11[local_70 >> 1] = ppppppuVar7;
    }
    local_70 = local_70 + 2;
  }
  FUN_00547730(param_1,1 < uVar17,&local_70);
                    /* try { // try from 005480b0 to 005480d7 has its CatchHandler @ 00548418 */
  FUN_005479c8(param_1,&local_70);
  if (4 < uStack_88) {
    FUN_002f0430(uStack_88,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolving_lb_policy.cc"
                 ,0x15e);
  }
  puVar3 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    lVar8 = local_a8[1];
    plVar5 = local_a8 + 2;
    do {
      lVar15 = *plVar5;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 0054810c to 0054812b has its CatchHandler @ 00548320 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),local_a8 + 1,lVar15);
    }
    if (lVar15 < 1) {
                    /* try { // try from 0054826c to 00548293 has its CatchHandler @ 00548320 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar15 == 1) {
      (**(code **)*puVar3)(puVar3);
      FUN_002e2ea0(PTR_LAB_04373088,puVar3);
    }
  }
  FUN_00532768(local_80);
  if ((local_70 & 1) == 0) {
    pppppppuVar11 = &local_68;
  }
  else {
    pppppppuVar11 = local_68;
    if (local_68 == (undefined8 *******)0x0) goto LAB_00548184;
  }
  memset(pppppppuVar11,0xab,(local_70 & 0x3ffffffffffffffe) << 2);
  if ((local_70 & 1) == 0) {
    return;
  }
LAB_00548184:
  FUN_002e2ea0(PTR_LAB_04373088,local_68);
  return;
}


