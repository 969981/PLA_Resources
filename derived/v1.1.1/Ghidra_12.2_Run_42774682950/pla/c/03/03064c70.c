/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03064c70; name: FUN_03064c70
 */


void FUN_03064c70(long param_1,long *param_2,long *param_3,ulong param_4,ulong param_5,long param_6,
                 long param_7,long param_8)

{
  ulong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint **ppuVar32;
  uint5 uVar33;
  unkbyte9 Var34;
  ushort uVar35;
  bool bVar36;
  int iVar37;
  uint uVar38;
  ulong *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  long *plVar45;
  ulong uVar46;
  uint *puVar47;
  undefined4 *puVar48;
  ulong uVar49;
  undefined1 (*pauVar50) [16];
  long *plVar51;
  long lVar52;
  long lVar53;
  uint *puVar54;
  uint *puVar55;
  long lVar56;
  undefined1 *puVar57;
  ushort uVar58;
  uint uVar59;
  long lVar60;
  uint uVar61;
  short sVar62;
  int iVar63;
  uint *puVar64;
  long lVar65;
  undefined4 *puVar66;
  undefined8 *puVar67;
  long lVar68;
  undefined1 (*pauVar69) [16];
  int *piVar70;
  uint *puVar71;
  long *plVar72;
  undefined1 (*pauVar73) [16];
  long *plVar74;
  ulong *puVar75;
  long lVar76;
  undefined1 (*pauVar77) [16];
  undefined8 *puVar78;
  uint *puVar79;
  byte bVar80;
  ushort uVar81;
  int iVar82;
  float fVar83;
  undefined8 uVar84;
  int iVar89;
  int iVar91;
  undefined1 auVar85 [12];
  undefined1 auVar86 [16];
  float fVar90;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined4 uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  long local_308;
  long local_268;
  uint *local_218;
  uint *local_210;
  uint local_204;
  ulong *local_200;
  ulong *local_1f8;
  ulong local_1f0;
  undefined1 (*local_1e8) [16];
  uint *local_1e0;
  long local_1d8;
  ulong local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long *local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0 [2];
  uint local_198 [2];
  undefined1 (*local_190) [16];
  long local_188;
  long local_180;
  uint local_178;
  long local_170;
  long local_168;
  undefined1 (*local_160) [16];
  undefined1 (*local_158) [16];
  long local_150;
  long local_148;
  uint local_140;
  long local_138;
  long local_130;
  undefined1 (*local_128) [16];
  long local_120 [2];
  undefined8 *local_110;
  uint *local_108;
  uint local_100;
  int local_fc;
  uint local_f8;
  undefined4 uStack_f4;
  ulong local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  float local_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  uint *local_90;
  undefined8 local_88;
  long *local_80;
  
  local_110 = *(undefined8 **)(param_1 + 0x4e0);
  local_120[0] = *param_2;
  local_108 = (uint *)0x0;
  local_fc = 0;
  uVar59 = *(uint *)(*(long *)(param_1 + 8) + 0x5c);
  puVar79 = *(uint **)(param_1 + 0x4b0);
  *(undefined1 (***) [16])(puVar79 + 10) = &local_158;
  *(undefined1 (***) [16])(puVar79 + 0xc) = &local_190;
  lVar68 = param_3[0x10];
  local_1c0 = param_2[2];
  uVar38 = *(int *)*param_3 + 1;
  plVar45 = *(long **)(*(long *)(param_1 + 8) + 0x4b8);
  puVar1 = (ulong *)(*(long *)(lVar68 + 0x5c0) +
                    (long)*(int *)(*(long *)(lVar68 + 0x170) +
                                  (-(ulong)(uVar38 >> 0x1f) & 0xffffffc000000000 |
                                  (ulong)uVar38 << 6)) * 0x40);
  do {
    uVar46 = *puVar1;
    cVar7 = '\x01';
    bVar36 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar36) {
      *puVar1 = uVar46 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  local_1d0 = param_4;
  local_1c8 = param_8;
  local_1b8 = param_1;
  local_1b0 = param_2;
  if ((uint)uVar46 < (uint)(uVar46 >> 0x20)) {
    local_f0 = CONCAT44(local_f0._4_4_,(uint)uVar46);
LAB_03064d38:
    lVar68 = lVar68 + (ulong)*(uint *)(lVar68 + 0x128) * 0x10;
    uVar38 = (uint)uVar46;
    lVar60 = lVar68 + 0x18;
    if (*(uint *)(lVar68 + 0x30) <= uVar38) {
      lVar60 = lVar68 + 0x28;
    }
    plVar51 = (long *)(lVar60 + 0x10);
    do {
      puVar47 = (uint *)(plVar51 + -1);
      plVar51 = plVar51 + -2;
      uVar46 = (ulong)(uVar38 - *puVar47);
    } while (uVar38 < *puVar47);
    plVar72 = (long *)(*plVar51 + uVar46 * 0x10);
    if (plVar72 == (long *)0x0) {
      pauVar69 = (undefined1 (*) [16])0x0;
      uVar81 = 0xffff;
    }
    else {
      lVar68 = *plVar72 + (ulong)*(ushort *)(*plVar51 + uVar46 * 0x10 + 8);
      param_3[0xfd] = lVar68 + 0x20;
      cVar7 = *(char *)(lVar68 + 0x2b);
      if (cVar7 == '\x01') {
        uVar81 = 0xffff;
        lVar60 = *(long *)(*(long *)(*param_3 + 8) + 0x500) + 0x20;
        *(int *)(param_3 + 0x12) = (int)param_3[0x12] + 1;
      }
      else {
        if (cVar7 == '\0') {
          lVar60 = *(long *)(*(long *)(*param_3 + 8) + 0x500) + 0x540;
        }
        else {
          lVar60 = *(long *)(*(long *)(*param_3 + 8) + 0x500);
          if (cVar7 == '\x02') {
            lVar60 = lVar60 + 0x20;
            uVar81 = 0xffff;
            *(int *)((long)param_3 + 0x94) = *(int *)((long)param_3 + 0x94) + 1;
            goto LAB_03064dc8;
          }
          lVar60 = *(long *)(lVar60 + 0x950);
        }
        uVar81 = 0;
        *(int *)(param_3 + 0x13) = (int)param_3[0x13] + 1;
      }
LAB_03064dc8:
      puVar71 = *(uint **)(lVar68 + 0x20);
      uVar58 = *(ushort *)(lVar68 + 0x28);
      puVar47 = (uint *)param_3[6];
      uVar38 = *(uint *)(param_3 + 7);
      if (puVar47 == puVar71) {
        iVar37 = uVar38 + 1;
      }
      else {
        if (uVar38 != 0) {
          if (uVar38 == (*puVar47 & 0xffff)) {
            lVar68 = param_3[5];
            puVar78 = (undefined8 *)param_3[8];
            *(undefined8 *)(*(long *)(lVar68 + 0x10) + (long)(int)puVar47[1] * 8) = 0;
            *(undefined1 *)(lVar68 + 0xc) = 1;
            iVar37 = *(int *)(puVar78 + 0xb);
            lVar68 = puVar78[1];
            *(uint **)(lVar68 + (long)iVar37 * 8) = puVar47;
            *(int *)(puVar78 + 0xb) = iVar37 + 1;
            if (*(int *)((long)puVar78 + 0x5c) <= iVar37 + 1) {
              (**(code **)(*(long *)*puVar78 + 0x28))
                        ((long *)*puVar78,lVar68 + (long)(iVar37 + -5) * 8,6);
              *(int *)(puVar78 + 0xb) = iVar37 + -5;
            }
          }
          else {
            do {
              cVar7 = '\x01';
              bVar36 = (bool)ExclusiveMonitorPass(puVar47,0x10);
              if (bVar36) {
                *puVar47 = *puVar47 - uVar38;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          *(undefined4 *)(param_3 + 7) = 0;
          *(undefined1 *)(param_3[5] + 0xc) = 1;
        }
        param_3[5] = lVar60;
        param_3[6] = (long)puVar71;
        iVar37 = 1;
      }
      lVar68 = param_3[0xc];
      *(int *)(param_3 + 7) = iVar37;
      param_3[2] = (long)puVar71;
      param_3[3] = (long)puVar71 + (ulong)uVar58 + 0x20;
      param_3[4] = 0x100000000;
      if (lVar68 != lVar60 + 0x100) {
        uVar38 = *(uint *)(param_3 + 0xe);
        if (uVar38 != 0) {
          puVar47 = (uint *)param_3[0xd];
          if (uVar38 == (*puVar47 & 0xffff)) {
            puVar78 = (undefined8 *)param_3[0xf];
            *(undefined8 *)(*(long *)(lVar68 + 0x10) + (long)(int)puVar47[1] * 8) = 0;
            *(undefined1 *)(lVar68 + 0xc) = 1;
            iVar37 = *(int *)(puVar78 + 0xb);
            lVar68 = puVar78[1];
            *(uint **)(lVar68 + (long)iVar37 * 8) = puVar47;
            *(int *)(puVar78 + 0xb) = iVar37 + 1;
            if (*(int *)((long)puVar78 + 0x5c) <= iVar37 + 1) {
              (**(code **)(*(long *)*puVar78 + 0x28))
                        ((long *)*puVar78,lVar68 + (long)(iVar37 + -5) * 8,6);
              *(int *)(puVar78 + 0xb) = iVar37 + -5;
            }
          }
          else {
            do {
              cVar7 = '\x01';
              bVar36 = (bool)ExclusiveMonitorPass(puVar47,0x10);
              if (bVar36) {
                *puVar47 = *puVar47 - uVar38;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          *(undefined4 *)(param_3 + 0xe) = 0;
          *(undefined1 *)(param_3[0xc] + 0xc) = 1;
        }
        param_3[0xc] = lVar60 + 0x100;
      }
      *(undefined4 *)(param_3 + 0x10f) = *(undefined4 *)((long)puVar71 + (ulong)uVar58 + 0x24);
      pauVar69 = (undefined1 (*) [16])((long)puVar71 + (ulong)uVar58 + 0x20);
      lVar68 = *param_3;
      *(undefined4 *)((long)param_3 + 0x87c) = *(undefined4 *)*pauVar69;
      puVar48 = *(undefined4 **)
                 (*(long *)(lVar68 + 0x530) + (long)*(int *)(lVar68 + 0x538) * 8 + -8);
      uVar102 = *puVar48;
      uVar3 = *puVar48;
      *(undefined4 **)(lVar68 + 0x730) = puVar48;
      *(short *)(lVar68 + 0x738) = (short)((uint)uVar102 >> 0x10);
      *(short *)(lVar68 + 0x73a) = (short)uVar3;
      *(int *)(lVar68 + 0x73c) = -*(int *)(lVar68 + 0x528);
    }
  }
  else {
    iVar37 = FUN_0332bfc4(lVar68 + 0x130,(ulong)uVar38,1,&local_f0);
    if (iVar37 != 0) {
      uVar46 = local_f0 & 0xffffffff;
      goto LAB_03064d38;
    }
    pauVar69 = (undefined1 (*) [16])0x0;
    uVar81 = 0xffff;
  }
  if (*(int *)(local_1b8 + 0x760) == 0) {
    local_268 = 0;
joined_r0x030651d4:
    local_1d8 = 0;
  }
  else {
    lVar68 = tpidr_el0;
    lVar60 = *(long *)(lVar68 + 0x38d490);
    if (lVar60 == 0) {
      lVar60 = FUN_0333d16c(0,1);
      *(long *)(lVar68 + 0x38d490) = lVar60;
    }
    local_268 = *(long *)(lVar60 + 0x10);
    puVar78 = *(undefined8 **)(local_268 + 8);
    if (*(undefined8 **)(local_268 + 0x18) <= puVar78) goto joined_r0x030651d4;
    if (*(int *)(local_1b8 + 0x760) != 0) {
      if (local_268 == 0) {
        local_268 = 0;
      }
      else {
        puVar48 = *(undefined4 **)(local_1b8 + 0x758);
        lVar68 = (long)*(int *)(local_1b8 + 0x760) * 4;
        while( true ) {
          lVar68 = lVar68 + -4;
          if (puVar78 != (undefined8 *)0x0) {
            puVar66 = (undefined4 *)((long)puVar78 + 0x13U & 0xfffffffffffffffc);
            uVar46 = (long)puVar66 + 0xbU & 0xfffffffffffffff8;
            if (uVar46 <= *(ulong *)(local_268 + 0x10)) {
              uVar102 = *puVar48;
              *(ulong *)(local_268 + 8) = uVar46;
              *puVar78 = &DAT_038f7b98;
              puVar78[1] = &DAT_04356710;
              if (puVar66 != (undefined4 *)0x0) {
                *puVar66 = uVar102;
              }
            }
          }
          if (lVar68 == 0) break;
          puVar48 = puVar48 + 1;
          puVar78 = *(undefined8 **)(local_268 + 8);
        }
      }
    }
    local_1d8 = 1;
  }
  if (pauVar69 != (undefined1 (*) [16])0x0) {
    plVar51 = param_3 + 9;
    local_1e0 = puVar79 + 0x18;
    puVar47 = puVar79 + 0x14;
    local_210 = puVar79 + 0xe;
    local_218 = puVar79 + 0x10;
    local_1f8 = (ulong *)(param_3 + 0xfe);
    bVar36 = local_1d8 != 0;
    local_200 = (ulong *)(param_3 + 0x10a);
    local_204 = uVar59;
    do {
      if (*(int *)(local_1d0 + 0x18) < 0xe01) {
        puVar71 = (uint *)(*(long *)(local_1d0 + 0x10) + (long)*(int *)(local_1d0 + 0x18) + 0x20);
      }
      else {
        puVar71 = (uint *)FUN_032bf82c(local_1d0);
      }
      pauVar77 = pauVar69;
      pauVar50 = pauVar69;
      pauVar73 = pauVar69;
      puVar64 = puVar71;
      puVar54 = puVar71;
      puVar55 = puVar71;
      switch((*pauVar69)[9]) {
      case 0xe:
        pauVar50 = pauVar69 + 1;
        uVar41 = *(undefined8 *)*pauVar69;
        puVar54 = puVar71 + 4;
        *(undefined8 *)(puVar71 + 2) = *(undefined8 *)(*pauVar69 + 8);
        *(undefined8 *)puVar71 = uVar41;
      case 0xd:
        pauVar77 = pauVar50 + 1;
        uVar41 = *(undefined8 *)*pauVar50;
        puVar64 = puVar54 + 4;
        *(undefined8 *)(puVar54 + 2) = *(undefined8 *)(*pauVar50 + 8);
        *(undefined8 *)puVar54 = uVar41;
      case 0xc:
        pauVar73 = pauVar77 + 1;
        uVar41 = *(undefined8 *)*pauVar77;
        puVar55 = puVar64 + 4;
        *(undefined8 *)(puVar64 + 2) = *(undefined8 *)(*pauVar77 + 8);
        *(undefined8 *)puVar64 = uVar41;
      case 0xb:
        pauVar50 = pauVar73 + 1;
        uVar41 = *(undefined8 *)*pauVar73;
        puVar54 = puVar55 + 4;
        *(undefined8 *)(puVar55 + 2) = *(undefined8 *)(*pauVar73 + 8);
        *(undefined8 *)puVar55 = uVar41;
      case 10:
        pauVar77 = pauVar50 + 1;
        uVar41 = *(undefined8 *)*pauVar50;
        puVar64 = puVar54 + 4;
        *(undefined8 *)(puVar54 + 2) = *(undefined8 *)(*pauVar50 + 8);
        *(undefined8 *)puVar54 = uVar41;
      case 9:
        pauVar50 = pauVar77 + 1;
        uVar41 = *(undefined8 *)*pauVar77;
        puVar54 = puVar64 + 4;
        *(undefined8 *)(puVar64 + 2) = *(undefined8 *)(*pauVar77 + 8);
        *(undefined8 *)puVar64 = uVar41;
      case 8:
        pauVar77 = pauVar50 + 1;
        uVar41 = *(undefined8 *)*pauVar50;
        puVar64 = puVar54 + 4;
        *(undefined8 *)(puVar54 + 2) = *(undefined8 *)(*pauVar50 + 8);
        *(undefined8 *)puVar54 = uVar41;
      case 7:
        pauVar50 = pauVar77 + 1;
        uVar41 = *(undefined8 *)*pauVar77;
        puVar54 = puVar64 + 4;
        *(undefined8 *)(puVar64 + 2) = *(undefined8 *)(*pauVar77 + 8);
        *(undefined8 *)puVar64 = uVar41;
      case 6:
        pauVar77 = pauVar50 + 1;
        uVar41 = *(undefined8 *)*pauVar50;
        puVar64 = puVar54 + 4;
        *(undefined8 *)(puVar54 + 2) = *(undefined8 *)(*pauVar50 + 8);
        *(undefined8 *)puVar54 = uVar41;
      case 5:
        pauVar50 = pauVar77 + 1;
        uVar41 = *(undefined8 *)*pauVar77;
        puVar54 = puVar64 + 4;
        *(undefined8 *)(puVar64 + 2) = *(undefined8 *)(*pauVar77 + 8);
        *(undefined8 *)puVar64 = uVar41;
      case 4:
        pauVar77 = pauVar50 + 1;
        uVar41 = *(undefined8 *)*pauVar50;
        puVar64 = puVar54 + 4;
        *(undefined8 *)(puVar54 + 2) = *(undefined8 *)(*pauVar50 + 8);
        *(undefined8 *)puVar54 = uVar41;
      case 3:
        pauVar50 = pauVar77 + 1;
        uVar41 = *(undefined8 *)*pauVar77;
        puVar54 = puVar64 + 4;
        *(undefined8 *)(puVar64 + 2) = *(undefined8 *)(*pauVar77 + 8);
        *(undefined8 *)puVar64 = uVar41;
      case 2:
        pauVar77 = pauVar50 + 1;
        uVar41 = *(undefined8 *)*pauVar50;
        puVar64 = puVar54 + 4;
        *(undefined8 *)(puVar54 + 2) = *(undefined8 *)(*pauVar50 + 8);
        *(undefined8 *)puVar54 = uVar41;
      case 1:
        auVar86 = *pauVar77;
        *(long *)(puVar64 + 2) = auVar86._8_8_;
        *(long *)puVar64 = auVar86._0_8_;
      }
      local_f8 = puVar71[1];
      uVar46 = (ulong)local_f8 & 0xffffff;
      local_198[0] = *puVar71;
      if (uVar59 < (uint)uVar46) {
LAB_030669ec:
        if (*(long *)(puVar79 + 0x18) != 0) {
          if (*(char *)((long)puVar79 + 0x7a) == '\0') {
LAB_03066ab4:
            FUN_0301e778(puVar79,local_1b8,local_1b0);
          }
          else {
            uVar41 = **(undefined8 **)(puVar79 + 0x12);
            *(undefined4 *)(*(long *)(puVar79 + 0x18) + 8) = 0x7777;
            plVar72 = *(long **)(puVar79 + 0x12);
            uVar61 = *(uint *)((long)plVar72 + 0x1c);
            uVar38 = uVar61 + *(int *)(*plVar72 + 8) + puVar79[0x17];
            if (uVar38 != 0) {
              puVar54 = *(uint **)puVar47;
              puVar64 = (uint *)plVar72[2];
              if (puVar54 == puVar64) {
                uVar81 = *(ushort *)((long)puVar79 + 0x5a);
              }
              else {
                uVar81 = *(ushort *)((long)puVar79 + 0x5a);
                if ((uint)uVar81 == (*puVar54 & 0xffff)) {
                  uVar81 = 0;
                  puVar54 = *(uint **)(puVar54 + 2);
                  puVar79[0x16] = 0;
                  puVar64 = (uint *)plVar72[2];
                  if (puVar54 != (uint *)plVar72[2]) goto LAB_03066ff0;
                }
                else if (puVar54 != puVar64) {
LAB_03066ff0:
                  uVar61 = *puVar54;
                  goto LAB_03066a44;
                }
                puVar54 = puVar64;
                uVar61 = *(uint *)((long)plVar72 + 0x1c);
              }
LAB_03066a44:
              *(ushort *)((long)puVar79 + 0x5a) = (short)uVar61 - uVar81;
              *(uint **)(puVar79 + 0x14) = puVar54;
            }
            puVar79[0x17] = uVar38;
            uVar38 = *(uint *)((long)plVar72 + 0x1c);
            lVar68 = *plVar72;
            if (uVar38 == 0) {
              piVar70 = (int *)(lVar68 + 0x18);
              iVar37 = *piVar70;
              if (iVar37 < 2) goto LAB_03066830;
              puVar78 = (undefined8 *)plVar72[1];
              iVar63 = *(int *)(puVar78 + 0xb);
              lVar76 = *(long *)(*(long *)(lVar68 + 0x10) + (long)(iVar37 + -2) * 8);
              lVar60 = puVar78[1];
              *(undefined8 *)(lVar60 + (long)iVar63 * 8) =
                   *(undefined8 *)(*(long *)(lVar68 + 0x10) + (long)(iVar37 + -1) * 8);
              *(int *)(puVar78 + 0xb) = iVar63 + 1;
              if (*(int *)((long)puVar78 + 0x5c) <= iVar63 + 1) {
                (**(code **)(*(long *)*puVar78 + 0x28))
                          ((long *)*puVar78,lVar60 + (long)(iVar63 + -5) * 8,6);
                *(int *)(puVar78 + 0xb) = iVar63 + -5;
              }
              *(undefined8 *)(lVar76 + 8) = 0;
              uVar38 = 0xffffffff;
            }
            else {
LAB_03066830:
              puVar64 = (uint *)plVar72[2];
              piVar70 = (int *)(lVar68 + 8);
              lVar68 = plVar72[3];
              puVar64[2] = 0;
              puVar64[3] = 0;
              *puVar64 = *puVar64 & 0xffff0000 | uVar38 & 0xffff;
              *puVar64 = *puVar64 & 0xffff | (int)lVar68 << 0x10;
            }
LAB_03066858:
            *piVar70 = *piVar70 + uVar38;
            *plVar72 = 0;
            plVar72[2] = 0;
            FUN_032bf658(*(undefined8 *)(puVar79 + 0x12),uVar41,puVar47);
            plVar72 = *(long **)(puVar79 + 0x12);
            lVar68 = plVar72[3];
            iVar37 = *(int *)((long)plVar72 + 0x1c);
            iVar63 = *(int *)(*plVar72 + 8);
            *(long *)(puVar79 + 0x14) = plVar72[2];
            *(short *)(puVar79 + 0x16) = (short)lVar68;
            *(short *)((long)puVar79 + 0x5a) = (short)iVar37;
            puVar79[0x17] = -(iVar37 + iVar63);
            local_1e0[0] = 0;
            local_1e0[1] = 0;
            local_1e0[2] = 0;
            local_1e0[3] = 0;
          }
        }
LAB_030668b4:
        local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
        local_1a0[0] = 0xffffffff;
        plVar72 = *(long **)(*(long *)(local_1b8 + 0x40) + (ulong)(byte)puVar71[2] * 8 + 0x13b8);
        (**(code **)(*plVar72 + 0x18))
                  (plVar72,local_1b8,local_1b0,puVar71,plVar51,&local_f8,local_198,&local_f0,
                   local_1a0);
      }
      else {
        uVar42 = (ulong)local_198[0] & 0xffffff;
        if (uVar59 < (uint)uVar42) goto LAB_030669ec;
        pauVar73 = (undefined1 (*) [16])(local_1c0 + uVar46 * 0xc0);
        uVar59 = *(uint *)pauVar73[8];
        pauVar77 = (undefined1 (*) [16])(local_1c0 + uVar42 * 0xc0);
        uVar61 = *(uint *)pauVar77[8];
        lVar68 = local_1b0[3] + (ulong)uVar61 * 0x80;
        lVar60 = local_1b0[3] + (ulong)uVar59 * 0x80;
        Hint_Prefetch(lVar60,0,0,0);
        Hint_Prefetch(lVar60 + 0x40,0,0,0);
        Hint_Prefetch(lVar68,0,0,0);
        Hint_Prefetch(lVar68 + 0x40,0,0,0);
        uVar58 = *(ushort *)(pauVar77[5] + 8) | *(ushort *)(pauVar73[5] + 8);
        uVar44 = *(uint *)(pauVar73[5] + 4);
        pauVar50 = pauVar77 + 5;
        uVar4 = *(uint *)(*pauVar50 + 4);
        uVar38 = uVar4 & uVar44;
        uVar4 = uVar4 | uVar44;
        lVar76 = local_1c8;
        if ((uVar58 & 0xfbfd) != 0) {
          lVar52 = local_1c0 + uVar46 * 0xc0;
          lVar53 = local_1c0 + uVar42 * 0xc0;
          iVar37 = -(uint)((float)*(undefined8 *)(lVar52 + 0x70) <=
                          (float)*(undefined8 *)(lVar53 + 0x60));
          iVar63 = -(uint)((float)((ulong)*(undefined8 *)(lVar52 + 0x70) >> 0x20) <=
                          (float)((ulong)*(undefined8 *)(lVar53 + 0x60) >> 0x20));
          iVar20 = -(uint)(*(float *)(lVar52 + 0x6c) <= (float)*(undefined8 *)(lVar53 + 0x68));
          iVar82 = -(uint)((float)*(undefined8 *)(lVar53 + 0x70) <= *(float *)(lVar52 + 0x60));
          iVar89 = -(uint)((float)((ulong)*(undefined8 *)(lVar53 + 0x70) >> 0x20) <=
                          *(float *)(lVar52 + 100));
          iVar91 = -(uint)((float)((ulong)*(undefined8 *)(lVar53 + 0x68) >> 0x20) <=
                          *(float *)(lVar52 + 0x68));
          uVar44 = CONCAT13((byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                            CONCAT12((byte)((uint)iVar82 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                                     CONCAT11((byte)((uint)iVar82 >> 8) & (byte)((uint)iVar37 >> 8),
                                              (byte)iVar82 & (byte)iVar37)));
          auVar85._0_8_ =
               CONCAT17((byte)((uint)iVar89 >> 0x18) & (byte)((uint)iVar63 >> 0x18),
                        CONCAT16((byte)((uint)iVar89 >> 0x10) & (byte)((uint)iVar63 >> 0x10),
                                 CONCAT15((byte)((uint)iVar89 >> 8) & (byte)((uint)iVar63 >> 8),
                                          CONCAT14((byte)iVar89 & (byte)iVar63,uVar44))));
          auVar85[8] = (byte)iVar91 & (byte)iVar20;
          auVar85[9] = (byte)((uint)iVar91 >> 8) & (byte)((uint)iVar20 >> 8);
          auVar85[10] = (byte)((uint)iVar91 >> 0x10) & (byte)((uint)iVar20 >> 0x10);
          auVar85[0xb] = (byte)((uint)iVar91 >> 0x18) & (byte)((uint)iVar20 >> 0x18);
          if ((uVar81 & uVar58 & 1) == 0 &&
              (uVar44 & (uint)((ulong)auVar85._0_8_ >> 0x20) & auVar85._8_4_) != 0) {
            if ((uVar4 >> 3 & 1) != 0) {
              if ((uVar38 >> 1 & 1) != 0) {
                lVar76 = param_7;
                local_1a8 = (undefined8 *)local_1d0;
                if (((byte)(*pauVar69)[0xf] >> 1 & 1) == 0) goto joined_r0x03066468;
                local_1a8 = *(undefined8 **)(local_1b8 + 0x4e0);
                puVar64 = *(uint **)(*(long *)(param_6 + 0x10) + (long)*(int *)(param_6 + 0x18) * 8
                                    + -8);
                uVar38 = *puVar64;
                if (uVar38 >> 0x13 < 0x1db) {
                  local_1f0 = uVar46;
                }
                else {
                  puVar54 = puVar64;
                  local_1f0 = uVar46;
                  do {
                    puVar78 = local_1a8;
                    iVar37 = *(int *)(local_1a8 + 0xb) + -1;
                    if (*(int *)(local_1a8 + 0xb) < 1) {
                      lVar76 = local_1a8[1];
                      (**(code **)(*(long *)*local_1a8 + 0x20))((long *)*local_1a8,lVar76,6);
                      *(undefined4 *)(puVar78 + 0xb) = 5;
                      puVar78 = (undefined8 *)(lVar76 + 0x28);
                    }
                    else {
                      *(int *)(local_1a8 + 0xb) = iVar37;
                      puVar78 = (undefined8 *)(local_1a8[1] + (long)iVar37 * 8);
                    }
                    puVar64 = (uint *)*puVar78;
                    puVar64[4] = 0;
                    puVar64[5] = 0;
                    puVar64[6] = 0;
                    puVar64[7] = 0;
                    puVar64[0] = 0;
                    puVar64[1] = 0;
                    puVar64[2] = 0;
                    puVar64[3] = 0;
                    puVar64[1] = *(uint *)(param_6 + 0x18);
                    iVar37 = *(int *)(param_6 + 0x18);
                    uVar44 = *(uint *)(param_6 + 0x1c);
                    uVar38 = iVar37 + 1;
                    if (iVar37 < (int)(uVar44 & 0x3fffffff)) {
                      lVar76 = *(long *)(param_6 + 0x10);
                    }
                    else {
                      uVar41 = *(undefined8 *)(param_6 + 0x10);
                      if (0x3ffffffe < iVar37) {
                        FUN_032bd0a8(uVar38);
                        uVar44 = *(uint *)(param_6 + 0x1c);
                      }
                      uVar44 = (uVar44 & 0x3fffffff) << 1;
                      if (0x3ffffffe < uVar44) {
                        uVar44 = 0x3fffffff;
                      }
                      uVar2 = uVar38;
                      if ((int)uVar38 <= (int)uVar44) {
                        uVar2 = uVar44;
                      }
                      lVar76 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,uVar41,iVar37,
                                            (uint *)(param_6 + 0x1c));
                      *(long *)(param_6 + 0x10) = lVar76;
                      iVar37 = *(int *)(param_6 + 0x18);
                    }
                    *(uint **)(lVar76 + (long)iVar37 * 8) = puVar64;
                    *(uint *)(param_6 + 0x18) = uVar38;
                    *(uint **)(puVar54 + 2) = puVar64;
                    uVar38 = *puVar64;
                    puVar54 = puVar64;
                  } while (0x1da < uVar38 >> 0x13);
                }
                do {
                  cVar7 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(puVar64,0x10);
                  if (bVar8) {
                    *puVar64 = *puVar64 + 0x80001;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
                *(uint *)((long)puVar64 + (ulong)(uVar38 >> 0x10) + 0x20) = uVar59;
                *(uint *)((long)puVar64 + (ulong)(uVar38 >> 0x10) + 0x24) = uVar61;
                uVar46 = local_1f0;
                lVar76 = param_7;
              }
              local_1a8 = (undefined8 *)local_1d0;
              if ((uVar58 >> 6 & 1) == 0) goto LAB_03065448;
LAB_0306646c:
              local_1e8 = pauVar77;
              if (plVar45 == (long *)0x0) {
                uVar38 = 0x24;
              }
              else {
                uVar38 = (**(code **)(*plVar45 + 0x48))(plVar45,pauVar73,pauVar77);
              }
              pauVar69 = local_1e8;
              uVar61 = uVar38 >> 5 & 7;
              if ((uVar61 == *(byte *)((long)puVar71 + 0xe) >> 5) &&
                 (((*(byte *)((long)puVar71 + 0xe) ^ uVar38) & 0x1c) == 0)) {
                uVar81 = (ushort)puVar71[3];
                uVar59 = local_204;
                pauVar77 = local_1e8;
                goto joined_r0x03066d50;
              }
              local_1f0 = uVar46;
              if (*(long *)(puVar79 + 0x18) != 0) {
                if (*(char *)((long)puVar79 + 0x7a) == '\0') {
                  FUN_0301e778(puVar79,local_1b8,local_1b0);
                }
                else {
                  uVar41 = **(undefined8 **)(puVar79 + 0x12);
                  *(undefined4 *)(*(long *)(puVar79 + 0x18) + 8) = 0x7777;
                  plVar72 = *(long **)(puVar79 + 0x12);
                  uVar44 = *(uint *)((long)plVar72 + 0x1c);
                  uVar59 = uVar44 + *(int *)(*plVar72 + 8) + puVar79[0x17];
                  if (uVar59 != 0) {
                    puVar54 = *(uint **)puVar47;
                    puVar64 = (uint *)plVar72[2];
                    if (puVar54 == puVar64) {
                      uVar81 = *(ushort *)((long)puVar79 + 0x5a);
                    }
                    else {
                      uVar81 = *(ushort *)((long)puVar79 + 0x5a);
                      if ((uint)uVar81 == (*puVar54 & 0xffff)) {
                        uVar81 = 0;
                        puVar54 = *(uint **)(puVar54 + 2);
                        puVar79[0x16] = 0;
                        puVar64 = (uint *)plVar72[2];
                        if (puVar54 != (uint *)plVar72[2]) goto LAB_0306703c;
                      }
                      else if (puVar54 != puVar64) {
LAB_0306703c:
                        uVar44 = *puVar54;
                        goto LAB_03066574;
                      }
                      puVar54 = puVar64;
                      uVar44 = *(uint *)((long)plVar72 + 0x1c);
                    }
LAB_03066574:
                    *(ushort *)((long)puVar79 + 0x5a) = (short)uVar44 - uVar81;
                    *(uint **)(puVar79 + 0x14) = puVar54;
                  }
                  puVar79[0x17] = uVar59;
                  uVar59 = *(uint *)((long)plVar72 + 0x1c);
                  lVar52 = *plVar72;
                  if (uVar59 == 0) {
                    piVar70 = (int *)(lVar52 + 0x18);
                    iVar37 = *piVar70;
                    if (iVar37 < 2) goto LAB_030665a0;
                    puVar78 = (undefined8 *)plVar72[1];
                    lVar56 = *(long *)(*(long *)(lVar52 + 0x10) + (long)(iVar37 + -2) * 8);
                    iVar63 = *(int *)(puVar78 + 0xb);
                    lVar53 = puVar78[1];
                    *(undefined8 *)(lVar53 + (long)iVar63 * 8) =
                         *(undefined8 *)(*(long *)(lVar52 + 0x10) + (long)(iVar37 + -1) * 8);
                    *(int *)(puVar78 + 0xb) = iVar63 + 1;
                    if (*(int *)((long)puVar78 + 0x5c) <= iVar63 + 1) {
                      (**(code **)(*(long *)*puVar78 + 0x28))
                                ((long *)*puVar78,lVar53 + (long)(iVar63 + -5) * 8,6);
                      *(int *)(puVar78 + 0xb) = iVar63 + -5;
                    }
                    *(undefined8 *)(lVar56 + 8) = 0;
                    uVar59 = 0xffffffff;
                  }
                  else {
LAB_030665a0:
                    puVar64 = (uint *)plVar72[2];
                    piVar70 = (int *)(lVar52 + 8);
                    lVar52 = plVar72[3];
                    puVar64[2] = 0;
                    puVar64[3] = 0;
                    *puVar64 = *puVar64 & 0xffff0000 | uVar59 & 0xffff;
                    *puVar64 = *puVar64 & 0xffff | (int)lVar52 << 0x10;
                  }
                  pauVar69 = local_1e8;
                  *piVar70 = *piVar70 + uVar59;
                  *plVar72 = 0;
                  plVar72[2] = 0;
                  FUN_032bf658(*(undefined8 *)(puVar79 + 0x12),uVar41,puVar47);
                  plVar72 = *(long **)(puVar79 + 0x12);
                  lVar52 = plVar72[3];
                  iVar37 = *(int *)((long)plVar72 + 0x1c);
                  iVar63 = *(int *)(*plVar72 + 8);
                  *(long *)(puVar79 + 0x14) = plVar72[2];
                  *(short *)(puVar79 + 0x16) = (short)lVar52;
                  *(short *)((long)puVar79 + 0x5a) = (short)iVar37;
                  puVar79[0x17] = -(iVar37 + iVar63);
                  local_1e0[0] = 0;
                  local_1e0[1] = 0;
                  local_1e0[2] = 0;
                  local_1e0[3] = 0;
                }
              }
              local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
              local_1a0[0] = 0xffffffff;
              plVar72 = *(long **)(*(long *)(local_1b8 + 0x40) + (ulong)(byte)puVar71[2] * 8 +
                                  0x13b8);
              (**(code **)(*plVar72 + 0x18))
                        (plVar72,local_1b8,local_1b0,puVar71,plVar51,&local_f8,local_198,&local_f0,
                         local_1a0);
              uVar59 = local_204;
              local_138 = *(long *)(local_1c0 + local_1f0 * 0xc0 + 0x78);
              if ((local_138 == 0) || (*(char *)(local_138 + 0x18) != '\x15')) {
                local_140 = 0xffffffff;
                local_190 = pauVar69;
              }
              else {
                plVar72 = (long *)(local_138 + (ulong)uVar61 * 8 + 0x48);
                local_138 = *plVar72;
                if (local_138 == 0) {
                  local_138 = 0;
                }
                else {
                  local_138 = local_138 + (long)plVar72;
                }
                local_140 = (uVar38 >> 5) << 0x1d | 0x1fffffff;
                local_190 = local_1e8;
              }
              local_170 = *(long *)(local_1c0 + uVar42 * 0xc0 + 0x78);
              if ((local_170 == 0) || (*(char *)(local_170 + 0x18) != '\x15')) {
                local_178 = 0xffffffff;
                pauVar77 = local_190;
              }
              else {
                plVar72 = (long *)(local_170 + (ulong)(uVar38 >> 2 & 7) * 8 + 0x48);
                local_170 = *plVar72;
                if (local_170 == 0) {
                  local_170 = 0;
                }
                else {
                  local_170 = local_170 + (long)plVar72;
                }
                local_178 = (uVar38 >> 2) << 0x1d | 0x1fffffff;
                pauVar77 = local_1e8;
              }
              local_d8 = *(long *)(local_1b8 + 8);
              local_f0 = *(ulong *)(local_d8 + 0x8a8);
              local_e8 = *(undefined8 *)(local_d8 + 0x898);
              local_e0 = *(long *)(local_d8 + 0x508);
              local_d8 = local_d8 + 0x530;
              bVar6 = (byte)uVar38;
              local_d0 = (float)CONCAT31(local_d0._1_3_,1);
              bVar5 = *(byte *)(local_138 + 0x19);
              bVar80 = *(byte *)(local_170 + 0x19);
              uVar61 = (uint)bVar80;
              uVar33 = CONCAT14(bVar80,(uint)bVar5);
              if (((*(uint *)(pauVar73[5] + 4) & 1) == 0) &&
                 (((uint)local_1f0 <= (uint)uVar42 || ((*(uint *)(*pauVar50 + 4) >> 1 & 1) == 0))))
              {
                uVar61 = (uint)bVar5;
                uStack_c8 = pauVar73;
                local_c0 = pauVar77;
                local_b0 = local_138;
                uStack_a8 = local_170;
                bVar5 = bVar80;
              }
              else {
                bVar6 = (byte)(uVar38 >> 3) & 0x1c | bVar6 & 3 | (byte)((uVar38 >> 2 & 7) << 5);
                uVar33 = CONCAT14(bVar5,uVar61);
                uStack_c8 = pauVar77;
                local_c0 = pauVar73;
                local_b0 = local_170;
                uStack_a8 = local_138;
              }
              local_a0 = (ulong)uVar33;
              fStack_b8 = (float)CONCAT31(fStack_b8._1_3_,bVar6);
              local_158 = pauVar73;
              puVar71 = (uint *)(**(code **)(local_e0 + (ulong)uVar61 * 0x68 + (ulong)bVar5 * 8 + 8)
                                )(&local_f0,local_1d0);
              if (puVar71 == (uint *)0x0) goto LAB_0306581c;
              if (*(byte *)((long)puVar71 + 9) != 0) {
                *(uint *)(local_1d0 + 0x18) =
                     *(int *)(local_1d0 + 0x18) + (uint)*(byte *)((long)puVar71 + 9) * -0x10;
                *(int *)(local_1d0 + 0x1c) = *(int *)(local_1d0 + 0x1c) + -1;
              }
              *(undefined2 *)(puVar71 + 3) = 0;
              uVar46 = local_1f0;
              goto LAB_03065450;
            }
            if (*(short *)((long)puVar71 + 10) < 0) {
              if (*(int *)(param_5 + 0x18) < 0xe01) {
                puVar71 = (uint *)(*(long *)(param_5 + 0x10) + (long)*(int *)(param_5 + 0x18) + 0x20
                                  );
              }
              else {
                local_1e8 = pauVar77;
                puVar71 = (uint *)FUN_032bf82c(param_5);
                pauVar77 = local_1e8;
              }
              bVar80 = (*pauVar69)[9];
              uVar59 = (uint)bVar80;
              puVar64 = puVar71;
              uVar38 = uVar59;
              if ((bVar80 + (bVar80 == 0) & 1) != 0) {
                uVar38 = *(uint *)(*pauVar69 + 8);
                uVar61 = *(uint *)(*pauVar69 + 0xc);
                *(undefined8 *)puVar71 = *(undefined8 *)*pauVar69;
                puVar71[2] = uVar38;
                puVar71[3] = uVar61;
                pauVar69 = pauVar69 + 1;
                puVar64 = puVar71 + 4;
                uVar38 = uVar59 - 1;
              }
              if (uVar59 != (bVar80 != 0)) {
                do {
                  uVar38 = uVar38 - 2;
                  uVar59 = *(uint *)(*pauVar69 + 8);
                  uVar61 = *(uint *)(*pauVar69 + 0xc);
                  *(undefined8 *)puVar64 = *(undefined8 *)*pauVar69;
                  puVar64[2] = uVar59;
                  puVar64[3] = uVar61;
                  uVar59 = *(uint *)(pauVar69[1] + 8);
                  uVar61 = *(uint *)(pauVar69[1] + 0xc);
                  *(undefined8 *)(puVar64 + 4) = *(undefined8 *)pauVar69[1];
                  puVar64[6] = uVar59;
                  puVar64[7] = uVar61;
                  pauVar69 = pauVar69 + 2;
                  puVar64 = puVar64 + 8;
                } while (0 < (int)uVar38);
              }
              lVar76 = 0;
              local_1a8 = (undefined8 *)param_5;
joined_r0x03066468:
              if ((uVar58 >> 6 & 1) != 0) goto LAB_0306646c;
              goto LAB_03065448;
            }
            lVar68 = *(long *)(local_1b8 + 0x40);
            if (((ulong)(byte)puVar71[2] == 2) && (2 < *(byte *)((long)puVar71 + 9))) {
              if (*(long *)(puVar71 + 8) != 0) {
                *(byte *)((long)puVar71 + 0xf) = *(byte *)((long)puVar71 + 0xf) | 8;
              }
              puVar71[8] = 0;
              puVar71[9] = 0;
              *(undefined2 *)(puVar71 + 10) = 0;
            }
            plVar72 = *(long **)(lVar68 + (ulong)(byte)puVar71[2] * 8 + 0x13b8);
            if ((int)plVar72[1] != 0) {
              (**(code **)(*plVar72 + 0x30))(plVar72,puVar71,plVar51,param_5 + 0x28);
            }
            bVar80 = *(byte *)((long)puVar71 + 9);
            uVar38 = (uint)bVar80;
            if ((int)(uVar38 * 0x10 + *(int *)(param_5 + 0x18)) < 0xee1) {
              puVar78 = (undefined8 *)
                        (*(long *)(param_5 + 0x10) + (long)*(int *)(param_5 + 0x18) + 0x20);
            }
            else {
              puVar78 = (undefined8 *)FUN_032bf82c(param_5);
            }
            uVar59 = (uint)bVar80;
            if (((uint)bVar80 + (uint)(uVar38 == 0) & 1) != 0) {
              uVar59 = puVar71[2];
              uVar61 = puVar71[3];
              *puVar78 = *(undefined8 *)puVar71;
              *(uint *)(puVar78 + 1) = uVar59;
              *(uint *)((long)puVar78 + 0xc) = uVar61;
              puVar78 = puVar78 + 2;
              puVar71 = puVar71 + 4;
              uVar59 = bVar80 - 1;
            }
            if ((bool)bVar80 != (uVar38 != 0)) {
              do {
                uVar59 = uVar59 - 2;
                uVar61 = puVar71[2];
                uVar44 = puVar71[3];
                *puVar78 = *(undefined8 *)puVar71;
                *(uint *)(puVar78 + 1) = uVar61;
                *(uint *)((long)puVar78 + 0xc) = uVar44;
                uVar61 = puVar71[6];
                uVar44 = puVar71[7];
                puVar78[2] = *(undefined8 *)(puVar71 + 4);
                *(uint *)(puVar78 + 3) = uVar61;
                *(uint *)((long)puVar78 + 0x1c) = uVar44;
                puVar71 = puVar71 + 8;
                puVar78 = puVar78 + 4;
              } while (0 < (int)uVar59);
            }
            *(uint *)(param_5 + 0x18) = *(int *)(param_5 + 0x18) + uVar38 * 0x10;
            *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) + 1;
            uVar59 = local_204;
            goto LAB_0306581c;
          }
          uVar59 = local_204;
          if (*(long *)(puVar79 + 0x18) == 0) goto LAB_030668b4;
          if (*(char *)((long)puVar79 + 0x7a) == '\0') goto LAB_03066ab4;
          uVar41 = **(undefined8 **)(puVar79 + 0x12);
          *(undefined4 *)(*(long *)(puVar79 + 0x18) + 8) = 0x7777;
          plVar72 = *(long **)(puVar79 + 0x12);
          uVar61 = *(uint *)((long)plVar72 + 0x1c);
          uVar38 = uVar61 + *(int *)(*plVar72 + 8) + puVar79[0x17];
          if (uVar38 != 0) {
            puVar54 = *(uint **)puVar47;
            puVar64 = (uint *)plVar72[2];
            if (puVar54 == puVar64) {
              uVar81 = *(ushort *)((long)puVar79 + 0x5a);
            }
            else {
              uVar81 = *(ushort *)((long)puVar79 + 0x5a);
              if ((uint)uVar81 == (*puVar54 & 0xffff)) {
                uVar81 = 0;
                puVar54 = *(uint **)(puVar54 + 2);
                puVar79[0x16] = 0;
                puVar64 = (uint *)plVar72[2];
                if (puVar54 != (uint *)plVar72[2]) goto LAB_03066ebc;
              }
              else if (puVar54 != puVar64) {
LAB_03066ebc:
                uVar61 = *puVar54;
                goto LAB_03066804;
              }
              puVar54 = puVar64;
              uVar61 = *(uint *)((long)plVar72 + 0x1c);
            }
LAB_03066804:
            *(ushort *)((long)puVar79 + 0x5a) = (short)uVar61 - uVar81;
            *(uint **)(puVar79 + 0x14) = puVar54;
          }
          puVar79[0x17] = uVar38;
          uVar38 = *(uint *)((long)plVar72 + 0x1c);
          lVar68 = *plVar72;
          if (uVar38 == 0) {
            piVar70 = (int *)(lVar68 + 0x18);
            iVar37 = *piVar70;
            if (iVar37 < 2) goto LAB_03066830;
            puVar78 = (undefined8 *)plVar72[1];
            iVar63 = *(int *)(puVar78 + 0xb);
            lVar76 = *(long *)(*(long *)(lVar68 + 0x10) + (long)(iVar37 + -2) * 8);
            lVar60 = puVar78[1];
            *(undefined8 *)(lVar60 + (long)iVar63 * 8) =
                 *(undefined8 *)(*(long *)(lVar68 + 0x10) + (long)(iVar37 + -1) * 8);
            *(int *)(puVar78 + 0xb) = iVar63 + 1;
            if (*(int *)((long)puVar78 + 0x5c) <= iVar63 + 1) {
              (**(code **)(*(long *)*puVar78 + 0x28))
                        ((long *)*puVar78,lVar60 + (long)(iVar63 + -5) * 8,6);
              *(int *)(puVar78 + 0xb) = iVar63 + -5;
            }
            *(undefined8 *)(lVar76 + 8) = 0;
            uVar38 = 0xffffffff;
            uVar59 = local_204;
            goto LAB_03066858;
          }
          goto LAB_03066830;
        }
        local_1a8 = (undefined8 *)local_1d0;
        if ((uVar38 >> 1 & 1) == 0) {
LAB_03065448:
          uVar81 = (ushort)puVar71[3];
          uVar59 = local_204;
        }
        else {
          lVar76 = param_7;
          if ((*(byte *)((long)puVar71 + 0xf) >> 1 & 1) == 0) goto LAB_03065448;
          puVar78 = *(undefined8 **)(local_1b8 + 0x4e0);
          puVar64 = *(uint **)(*(long *)(param_6 + 0x10) + (long)*(int *)(param_6 + 0x18) * 8 + -8);
          uVar38 = *puVar64;
          if (uVar38 >> 0x13 < 0x1db) {
            local_1f0 = uVar46;
          }
          else {
            puVar54 = puVar64;
            local_1f0 = uVar46;
            do {
              iVar37 = *(int *)(puVar78 + 0xb) + -1;
              if (*(int *)(puVar78 + 0xb) < 1) {
                lVar76 = puVar78[1];
                (**(code **)(*(long *)*puVar78 + 0x20))((long *)*puVar78,lVar76,6);
                *(undefined4 *)(puVar78 + 0xb) = 5;
                puVar67 = (undefined8 *)(lVar76 + 0x28);
              }
              else {
                *(int *)(puVar78 + 0xb) = iVar37;
                puVar67 = (undefined8 *)(puVar78[1] + (long)iVar37 * 8);
              }
              puVar64 = (uint *)*puVar67;
              puVar64[4] = 0;
              puVar64[5] = 0;
              puVar64[6] = 0;
              puVar64[7] = 0;
              puVar64[0] = 0;
              puVar64[1] = 0;
              puVar64[2] = 0;
              puVar64[3] = 0;
              puVar64[1] = *(uint *)(param_6 + 0x18);
              iVar37 = *(int *)(param_6 + 0x18);
              uVar44 = *(uint *)(param_6 + 0x1c);
              uVar38 = iVar37 + 1;
              local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,iVar37);
              if (iVar37 < (int)(uVar44 & 0x3fffffff)) {
                lVar76 = *(long *)(param_6 + 0x10);
              }
              else {
                uVar41 = *(undefined8 *)(param_6 + 0x10);
                if (0x3ffffffe < iVar37) {
                  FUN_032bd0a8(uVar38);
                  uVar44 = *(uint *)(param_6 + 0x1c);
                }
                uVar44 = (uVar44 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar44) {
                  uVar44 = 0x3fffffff;
                }
                uVar2 = uVar38;
                if ((int)uVar38 <= (int)uVar44) {
                  uVar2 = uVar44;
                }
                lVar76 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,uVar41,(ulong)local_1a8 & 0xffffffff,
                                      (uint *)(param_6 + 0x1c));
                *(long *)(param_6 + 0x10) = lVar76;
                local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,*(undefined4 *)(param_6 + 0x18));
              }
              *(uint **)(lVar76 + (long)(int)local_1a8 * 8) = puVar64;
              *(uint *)(param_6 + 0x18) = uVar38;
              *(uint **)(puVar54 + 2) = puVar64;
              uVar38 = *puVar64;
              puVar54 = puVar64;
            } while (0x1da < uVar38 >> 0x13);
          }
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar64,0x10);
            if (bVar8) {
              *puVar64 = *puVar64 + 0x80001;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
          *(uint *)((long)puVar64 + (ulong)(uVar38 >> 0x10) + 0x20) = uVar59;
          *(uint *)((long)puVar64 + (ulong)(uVar38 >> 0x10) + 0x24) = uVar61;
          uVar81 = (ushort)puVar71[3];
          uVar46 = local_1f0;
          lVar76 = param_7;
          uVar59 = local_204;
          local_1a8 = (undefined8 *)local_1d0;
        }
joined_r0x03066d50:
        local_204 = uVar59;
        if (uVar81 == 0) {
LAB_03065450:
          uVar43 = (ulong)*(ushort *)(local_1c0 + uVar46 * 0xc0 + 0x8a);
          uVar81 = *(ushort *)(local_1c0 + uVar42 * 0xc0 + 0x8a);
          lVar52 = *(long *)(local_1b8 + 0x20);
          if (*(long *)local_1e0 != 0) {
            local_1f0 = uVar43;
            local_1e8 = pauVar77;
            if (*(char *)((long)puVar79 + 0x7a) == '\0') {
              FUN_0301e778(puVar79,local_1b8,local_1b0);
              uVar43 = local_1f0;
              pauVar77 = local_1e8;
            }
            else {
              uVar41 = **(undefined8 **)(puVar79 + 0x12);
              *(undefined4 *)(*(long *)local_1e0 + 8) = 0x7777;
              plVar72 = *(long **)(puVar79 + 0x12);
              uVar59 = *(uint *)((long)plVar72 + 0x1c);
              uVar38 = uVar59 + *(int *)(*plVar72 + 8) + puVar79[0x17];
              if (uVar38 != 0) {
                puVar54 = *(uint **)puVar47;
                puVar64 = (uint *)plVar72[2];
                if (puVar54 == puVar64) {
                  uVar58 = *(ushort *)((long)puVar79 + 0x5a);
                }
                else {
                  uVar58 = *(ushort *)((long)puVar79 + 0x5a);
                  if ((uint)uVar58 == (*puVar54 & 0xffff)) {
                    puVar54 = *(uint **)(puVar54 + 2);
                    puVar79[0x16] = 0;
                    uVar58 = 0;
                    puVar64 = (uint *)plVar72[2];
                    uVar35 = 0;
                    if (puVar54 == (uint *)plVar72[2]) goto LAB_03066e34;
                  }
                  else {
                    uVar35 = uVar58;
                    if (puVar54 == puVar64) {
LAB_03066e34:
                      puVar54 = puVar64;
                      uVar59 = *(uint *)((long)plVar72 + 0x1c);
                      goto LAB_030654c4;
                    }
                  }
                  uVar58 = uVar35;
                  uVar59 = *puVar54;
                }
LAB_030654c4:
                *(ushort *)((long)puVar79 + 0x5a) = (short)uVar59 - uVar58;
                *(uint **)(puVar79 + 0x14) = puVar54;
              }
              puVar79[0x17] = uVar38;
              uVar38 = *(uint *)((long)plVar72 + 0x1c);
              lVar53 = *plVar72;
              if (uVar38 == 0) {
                piVar70 = (int *)(lVar53 + 0x18);
                iVar37 = *piVar70;
                if (iVar37 < 2) goto LAB_030654f8;
                puVar78 = (undefined8 *)plVar72[1];
                lVar65 = *(long *)(*(long *)(lVar53 + 0x10) + (long)(iVar37 + -2) * 8);
                iVar63 = *(int *)(puVar78 + 0xb);
                lVar56 = puVar78[1];
                *(undefined8 *)(lVar56 + (long)iVar63 * 8) =
                     *(undefined8 *)(*(long *)(lVar53 + 0x10) + (long)(iVar37 + -1) * 8);
                *(int *)(puVar78 + 0xb) = iVar63 + 1;
                if (*(int *)((long)puVar78 + 0x5c) <= iVar63 + 1) {
                  (**(code **)(*(long *)*puVar78 + 0x28))
                            ((long *)*puVar78,lVar56 + (long)(iVar63 + -5) * 8,6);
                  *(int *)(puVar78 + 0xb) = iVar63 + -5;
                }
                *(undefined8 *)(lVar65 + 8) = 0;
                uVar38 = 0xffffffff;
              }
              else {
LAB_030654f8:
                puVar64 = (uint *)plVar72[2];
                lVar56 = plVar72[3];
                puVar64[2] = 0;
                puVar64[3] = 0;
                *puVar64 = *puVar64 & 0xffff0000 | uVar38 & 0xffff;
                piVar70 = (int *)(lVar53 + 8);
                *puVar64 = *puVar64 & 0xffff | (int)lVar56 << 0x10;
              }
              *piVar70 = *piVar70 + uVar38;
              *plVar72 = 0;
              plVar72[2] = 0;
              FUN_032bf658(*(undefined8 *)(puVar79 + 0x12),uVar41,puVar47);
              plVar72 = *(long **)(puVar79 + 0x12);
              lVar53 = plVar72[3];
              iVar37 = *(int *)((long)plVar72 + 0x1c);
              iVar63 = *(int *)(*plVar72 + 8);
              *(long *)(puVar79 + 0x14) = plVar72[2];
              *(short *)(puVar79 + 0x16) = (short)lVar53;
              *(short *)((long)puVar79 + 0x5a) = (short)iVar37;
              puVar79[0x17] = -(iVar37 + iVar63);
              local_1e0[0] = 0;
              local_1e0[1] = 0;
              local_1e0[2] = 0;
              local_1e0[3] = 0;
              uVar43 = local_1f0;
              pauVar77 = local_1e8;
            }
          }
          *(long *)(puVar79 + 6) = lVar76;
          *(bool *)((long)puVar79 + 5) = lVar76 == local_1c8;
          ppuVar32 = &local_210;
          if (lVar76 != local_1c8) {
            ppuVar32 = &local_218;
          }
          plVar72 = *(long **)*ppuVar32;
          *(long **)(puVar79 + 0x12) = plVar72;
          if ((puVar79[2] & uVar4) == 0) {
            if (lVar76 == local_1c8) {
              *(bool *)(puVar79 + 0x1e) = (*(ushort *)((long)puVar71 + 10) & 0x90) != 0;
              goto LAB_03065e64;
            }
            *(undefined1 *)(puVar79 + 0x1e) = 0;
            bVar80 = 0;
          }
          else {
            *(undefined1 *)(puVar79 + 0x1e) = 1;
            if (lVar76 == local_1c8) {
LAB_03065e64:
              bVar80 = *(byte *)((long)puVar71 + 10) >> 4 & 1;
            }
            else {
              bVar80 = 0;
            }
          }
          *(byte *)((long)puVar79 + 0x79) = bVar80;
          iVar63 = *(int *)(*plVar72 + 8);
          lVar53 = plVar72[3];
          iVar37 = *(int *)((long)plVar72 + 0x1c);
          *(long *)(puVar79 + 0x14) = plVar72[2];
          *(short *)(puVar79 + 0x16) = (short)lVar53;
          *(short *)((long)puVar79 + 0x5a) = (short)iVar37;
          puVar79[0x17] = -(iVar37 + iVar63);
          if ((int)plVar72[3] < 0xdd1) {
            lVar53 = plVar72[2] + (long)(int)plVar72[3] + 0x20;
          }
          else {
            local_1f0 = uVar43;
            lVar53 = FUN_032bf82c();
            plVar72 = *(long **)(puVar79 + 0x12);
            uVar43 = local_1f0;
          }
          *(long *)(puVar79 + 0x18) = lVar53;
          *(int *)(plVar72 + 3) = (int)plVar72[3] + 0x10;
          *(int *)((long)plVar72 + 0x1c) = *(int *)((long)plVar72 + 0x1c) + 1;
          *(uint *)(*(long *)(puVar79 + 0x18) + 4) = puVar71[1];
          **(uint **)(puVar79 + 0x18) = *puVar71;
          *(undefined4 *)(*(long *)(puVar79 + 0x18) + 8) = 0;
          *(undefined1 *)(*(long *)(puVar79 + 0x18) + 0xe) = 0;
          *(undefined2 *)(*(long *)(puVar79 + 0x18) + 0xc) = *(undefined2 *)((long)puVar71 + 10);
          puVar79[0x1c] = 0;
          if ((char)puVar79[1] != '\0') {
            plVar72 = *(long **)(*(long *)(local_1b8 + 8) + 0x658);
            local_1e8 = pauVar77;
            (**(code **)(*plVar72 + 0x60))
                      (plVar72,local_1c8,
                       *(long *)(local_1b8 + 0x500) + ((ulong)*puVar79 & 0xffffff) * 0x20);
            *(undefined1 *)(puVar79 + 1) = 0;
            pauVar77 = local_1e8;
          }
          *puVar79 = puVar71[1];
          puVar79[0x1d] = uVar4;
          if ((local_1d8 != 0) && (local_268 != 0)) {
            lVar53 = local_1c0 + uVar46 * 0xc0;
            uVar41 = *(undefined8 *)(lVar53 + 0x68);
            Var34 = *(unkbyte9 *)(lVar53 + 0x60);
            uVar84 = *(undefined8 *)(lVar53 + 0x70);
            lVar53 = local_1c0 + uVar42 * 0xc0;
            auVar86 = *(undefined1 (*) [16])(lVar53 + 0x60);
            auVar105._0_8_ = *(undefined8 *)(lVar53 + 0x70);
            puVar78 = *(undefined8 **)(local_268 + 8);
            uVar49 = (ulong)((long)puVar78 + 0x17) & 0xfffffffffffffff8;
            if (uVar49 <= *(ulong *)(local_268 + 0x10)) {
              *(ulong *)(local_268 + 8) = uVar49;
              local_1f0 = uVar43;
              if (puVar78 == (undefined8 *)0x0) {
                puVar78 = (undefined8 *)&DAT_00000010;
              }
              else {
                *puVar78 = &DAT_0398be87;
                uVar40 = nn::os::GetSystemTick();
                puVar78[1] = uVar40;
                puVar78 = *(undefined8 **)(local_268 + 8);
                uVar43 = local_1f0;
              }
            }
            if (puVar78 != (undefined8 *)0x0) {
              puVar67 = (undefined8 *)((ulong)((long)puVar78 + 0x13) & 0xfffffffffffffffc);
              uVar49 = (long)puVar67 + 0x1fU & 0xfffffffffffffff8;
              if (uVar49 <= *(ulong *)(local_268 + 0x10)) {
                *(ulong *)(local_268 + 8) = uVar49;
                *puVar78 = &DAT_038f7b98;
                puVar78[1] = &DAT_04356660;
                if (puVar67 != (undefined8 *)0x0) {
                  auVar105._8_4_ = auVar86._12_4_;
                  auVar105._12_4_ = 0;
                  auVar31._8_4_ = (int)((ulong)uVar41 >> 0x20);
                  auVar31._0_8_ = uVar84;
                  auVar31._12_4_ = 0;
                  auVar103 = NEON_fmax(auVar31,auVar105,4);
                  *puVar67 = auVar103._0_8_;
                  *(int *)(puVar67 + 1) = auVar103._8_4_;
                  auVar19[9] = (char)((ulong)uVar41 >> 8);
                  auVar19._0_9_ = Var34;
                  auVar19[10] = (char)((ulong)uVar41 >> 0x10);
                  auVar19[0xb] = (char)((ulong)uVar41 >> 0x18);
                  auVar19[0xc] = (char)((ulong)uVar41 >> 0x20);
                  auVar19[0xd] = (char)((ulong)uVar41 >> 0x28);
                  auVar19[0xe] = (char)((ulong)uVar41 >> 0x30);
                  auVar19[0xf] = (char)((ulong)uVar41 >> 0x38);
                  auVar86 = NEON_fmin(auVar19,auVar86,4);
                  *(long *)((long)puVar67 + 0xc) = auVar86._0_8_;
                  *(int *)((long)puVar67 + 0x14) = auVar86._8_4_;
                }
              }
            }
          }
          puVar78 = local_1a8;
          Hint_Prefetch(pauVar73 + 8,0,0,0);
          local_148 = lVar52 + uVar43 * 0x50;
          Hint_Prefetch(pauVar73 + 0xc,0,0,0);
          Hint_Prefetch(pauVar77 + 8,0,0,0);
          Hint_Prefetch(pauVar77 + 0xc,0,0,0);
          bVar80 = *(byte *)((long)puVar71 + 0xe);
          local_138 = *(long *)(local_1c0 + uVar46 * 0xc0 + 0x78);
          if ((local_138 == 0) || (*(char *)(local_138 + 0x18) != '\x15')) {
            local_140 = 0xffffffff;
          }
          else {
            plVar72 = (long *)(local_138 + (ulong)(bVar80 >> 5) * 8 + 0x48);
            local_138 = *plVar72;
            if (local_138 == 0) {
              local_138 = 0;
            }
            else {
              local_138 = local_138 + (long)plVar72;
            }
            local_140 = (uint)(bVar80 >> 5) << 0x1d | 0x1fffffff;
          }
          local_180 = lVar52 + (ulong)uVar81 * 0x50;
          local_170 = *(long *)(local_1c0 + uVar42 * 0xc0 + 0x78);
          if ((local_170 == 0) || (*(char *)(local_170 + 0x18) != '\x15')) {
            local_178 = 0xffffffff;
          }
          else {
            plVar72 = (long *)(local_170 + (ulong)(bVar80 >> 2 & 7) * 8 + 0x48);
            local_170 = *plVar72;
            if (local_170 == 0) {
              local_170 = 0;
            }
            else {
              local_170 = local_170 + (long)plVar72;
            }
            local_178 = (uint)(bVar80 >> 2) << 0x1d | 0x1fffffff;
          }
          local_190 = pauVar77;
          local_188 = lVar68;
          local_160 = pauVar77;
          local_150 = lVar60;
          local_128 = pauVar73;
          if ((ulong)(byte)puVar71[2] == 2) {
            lVar68 = *(long *)(*(long *)(local_1b8 + 0x40) + 0x13c8);
            iVar37 = (int)param_3[0xfb];
            local_168 = local_170;
            local_158 = pauVar73;
            local_130 = local_138;
            if (iVar37 != 0) {
              local_308 = nn::os::GetSystemTick();
            }
            if ((((2 < *(byte *)((long)puVar71 + 9)) && (*(long *)(puVar79 + 6) != 0)) &&
                (*(long *)(puVar71 + 8) != 0)) && ((*(byte *)((long)puVar71 + 0xb) >> 2 & 1) != 0))
            {
              uVar59 = (uint)*(byte *)((long)puVar71 + 0x96) * 0x100;
              uVar38 = (uint)(ushort)puVar71[0x25];
              if (uVar59 <= (ushort)puVar71[0x25]) {
                uVar38 = uVar59;
              }
              iVar63 = uVar38 - ((uint)*(ushort *)(local_190[5] + 10) +
                                (uint)*(ushort *)(local_158[5] + 10));
              if (iVar63 < 1) {
                *(int *)(param_3 + 0x1a) = (int)param_3[0x1a] + 1;
              }
              else {
                uVar81 = *(ushort *)(local_190[5] + 8) | *(ushort *)(local_158[5] + 8);
                if ((uVar81 >> 2 & 1) == 0) {
                  if (((uVar81 >> 10 & 1) != 0) &&
                     (((short)puVar71[0xf] != 0x3f80 ||
                      ((*(byte *)((long)puVar71 + 0x2e) >> 5 & 1) != 0)))) {
                    uVar81 = *(ushort *)((long)puVar71 + 0x86);
                    uVar41 = *(undefined8 *)(local_1b0[1] + 0x48);
                    fVar83 = (float)*(undefined8 *)(local_150 + 0x38) -
                             (float)*(undefined8 *)(local_188 + 0x38);
                    fVar93 = (float)((ulong)*(undefined8 *)(local_150 + 0x38) >> 0x20) -
                             (float)((ulong)*(undefined8 *)(local_188 + 0x38) >> 0x20);
                    fVar92 = *(float *)(local_150 + 0x34) - *(float *)(local_188 + 0x34);
                    fVar83 = fVar83 * fVar83;
                    fVar93 = fVar93 * fVar93;
                    fVar92 = fVar92 * fVar92;
                    fVar90 = fVar83 + fVar93 + fVar92;
                    fVar92 = fVar83 + fVar93 + fVar92;
                    uVar95 = (undefined1)((uint)fVar92 >> 8);
                    uVar96 = (undefined1)((uint)fVar92 >> 0x10);
                    uVar97 = (undefined1)((uint)fVar92 >> 0x18);
                    uVar84 = NEON_frsqrte(CONCAT17(uVar97,CONCAT16(uVar96,CONCAT15(uVar95,CONCAT14(
                                                  SUB41(fVar92,0),fVar90)))),4);
                    fVar83 = (float)uVar84;
                    fVar93 = (float)((ulong)uVar84 >> 0x20);
                    uVar84 = NEON_frsqrts(CONCAT17(uVar97,CONCAT16(uVar96,CONCAT15(uVar95,CONCAT14(
                                                  SUB41(fVar92,0),fVar90)))),
                                          CONCAT44(fVar93 * fVar93,fVar83 * fVar83),4);
                    iVar20 = -(uint)(fVar90 <= 0.0);
                    fVar90 = fVar83 * (float)uVar84 * fVar90;
                    fVar83 = *(float *)(local_1b0[1] + 0x20);
                    fVar93 = (float)uVar41;
                    if (uVar81 == 0) {
                      fVar92 = (float)((uint)*(ushort *)(local_158[9] + 4) << 0x10) *
                               *(float *)(*(long *)(local_1b8 + 0x10) +
                                          (ulong)(byte)local_158[8][9] * 0x40 + 0x24);
                      fVar94 = (float)((uint)*(ushort *)(local_190[9] + 4) << 0x10) *
                               *(float *)(*(long *)(local_1b8 + 0x10) +
                                          (ulong)(byte)local_190[8][9] * 0x40 + 0x24);
                      uVar84 = NEON_fmin(CONCAT17((char)((uint)fVar92 >> 0x18),
                                                  CONCAT16((char)((uint)fVar92 >> 0x10),
                                                           CONCAT15((char)((uint)fVar92 >> 8),
                                                                    CONCAT14(SUB41(fVar92,0),fVar92)
                                                                   ))),
                                         CONCAT17((char)((uint)fVar94 >> 0x18),
                                                  CONCAT16((char)((uint)fVar94 >> 0x10),
                                                           CONCAT15((char)((uint)fVar94 >> 8),
                                                                    CONCAT14(SUB41(fVar94,0),fVar94)
                                                                   ))),4);
                      auVar88._0_8_ =
                           CONCAT44((int)((float)((ulong)uVar41 >> 0x20) *
                                         (float)((ulong)uVar84 >> 0x20)),
                                    (int)(fVar93 * (float)uVar84));
                      auVar88._8_8_ = auVar88._0_8_;
                      uVar41 = NEON_sqxtun(auVar88._0_8_,auVar88,4);
                      uVar81 = (ushort)uVar41;
                      *(ushort *)((long)puVar71 + 0x86) = uVar81;
                    }
                    iVar20 = ~(int)(fVar83 * fVar93 *
                                   (float)CONCAT13((byte)((uint)fVar90 >> 0x18) &
                                                   ~(byte)((uint)iVar20 >> 0x18),
                                                   CONCAT12((byte)((uint)fVar90 >> 0x10) &
                                                            ~(byte)((uint)iVar20 >> 0x10),
                                                            CONCAT11((byte)((uint)fVar90 >> 8) &
                                                                     ~(byte)((uint)iVar20 >> 8),
                                                                     SUB41(fVar90,0) & ~(byte)iVar20
                                                                    )))) + (uint)uVar81;
                    if (iVar20 < 1) {
                      *(int *)((long)param_3 + 0xd4) = *(int *)((long)param_3 + 0xd4) + 1;
                      goto LAB_030675d4;
                    }
                    *(short *)((long)puVar71 + 0x86) = (short)iVar20;
                  }
                  *(short *)(puVar71 + 0x25) = (short)iVar63;
                  if (*(char *)((long)puVar79 + 0x79) == '\0') {
                    (**(code **)(**(long **)(*(long *)(local_1b8 + 8) + 0x658) + 0x68))();
                  }
                  else {
                    puVar67 = *(undefined8 **)local_1e0;
                    puVar78 = puVar67;
                    if (*(char *)((long)puVar67 + 0xe) == '\0') {
                      if (*(int *)(puVar67 + 1) != 0) {
                        lVar68 = *(long *)(puVar79 + 0x12);
                        if (*(int *)(lVar68 + 0x18) < 0xed1) {
                          puVar78 = (undefined8 *)
                                    (*(long *)(lVar68 + 0x10) + (long)*(int *)(lVar68 + 0x18) + 0x20
                                    );
                        }
                        else {
                          puVar78 = (undefined8 *)FUN_032bf82c(lVar68);
                        }
                        uVar41 = puVar67[1];
                        *puVar78 = *puVar67;
                        puVar78[1] = uVar41;
                        *(undefined8 **)local_1e0 = puVar78;
                        *(int *)(lVar68 + 0x18) = *(int *)(lVar68 + 0x18) + 0x10;
                        *(int *)(lVar68 + 0x1c) = *(int *)(lVar68 + 0x1c) + 1;
                      }
                      iVar63 = 1;
                      *(undefined1 *)((long)puVar78 + 0xe) = 1;
                    }
                    else {
                      iVar63 = *(int *)(puVar67 + 1) + 1;
                    }
                    *(int *)(puVar78 + 1) = iVar63;
                    *(undefined1 *)((long)puVar79 + 0x7a) = 0;
                    lVar68 = local_148 - *(long *)(local_1b8 + 0x20);
                    lVar76 = *(long *)(puVar79 + 0x12);
                    lVar60 = local_180 - *(long *)(local_1b8 + 0x20);
                    if (*(int *)(lVar76 + 0x18) < 0xed1) {
                      puVar78 = (undefined8 *)
                                (*(long *)(lVar76 + 0x10) + (long)*(int *)(lVar76 + 0x18) + 0x20);
                    }
                    else {
                      puVar78 = (undefined8 *)FUN_032bf82c(lVar76);
                    }
                    *puVar78 = puVar71;
                    *(short *)(puVar78 + 1) = (short)(lVar68 >> 4) * -0x3333;
                    *(short *)((long)puVar78 + 10) = (short)(lVar60 >> 4) * -0x3333;
                    *(int *)(lVar76 + 0x18) = *(int *)(lVar76 + 0x18) + 0x10;
                    *(int *)(lVar76 + 0x1c) = *(int *)(lVar76 + 0x1c) + 1;
                  }
                  uVar59 = local_204;
                  if (iVar37 != 0) {
                    lVar68 = nn::os::GetSystemTick();
                    param_3[0x15] = param_3[0x15] + (lVar68 - local_308);
                    *(int *)(param_3 + 0x16) = (int)param_3[0x16] + 1;
                    param_3[0x1c] = param_3[0x1c] + (lVar68 - local_308);
                    *(int *)(param_3 + 0x1d) = (int)param_3[0x1d] + 1;
                    uVar59 = local_204;
                  }
                  goto joined_r0x03067b40;
                }
              }
LAB_030675d4:
              *(undefined2 *)((long)puVar71 + 0x86) = 0;
            }
            puVar78 = *(undefined8 **)(puVar79 + 0x18);
            lVar60 = *(long *)(puVar79 + 0x12);
            iVar63 = *(int *)(lVar60 + 0x18);
            if (*(char *)((long)puVar78 + 0xe) == '\0') {
              if (0xce0 < iVar63) goto LAB_030682c4;
LAB_030675f8:
              lVar76 = *(long *)(lVar60 + 0x10) + (long)iVar63 + 0x20;
              iVar63 = (int)param_3[0xfb];
            }
            else {
              if (iVar63 < 0xed1) {
                puVar67 = (undefined8 *)(*(long *)(lVar60 + 0x10) + (long)iVar63 + 0x20);
              }
              else {
                puVar67 = (undefined8 *)FUN_032bf82c(lVar60);
              }
              uVar41 = puVar78[1];
              *puVar67 = *puVar78;
              puVar67[1] = uVar41;
              *(undefined8 **)local_1e0 = puVar67;
              *(undefined4 *)(puVar67 + 1) = 0;
              *(undefined1 *)((long)puVar67 + 0xe) = 0;
              iVar63 = *(int *)(lVar60 + 0x18) + 0x10;
              *(int *)(lVar60 + 0x18) = iVar63;
              *(int *)(lVar60 + 0x1c) = *(int *)(lVar60 + 0x1c) + 1;
              if (iVar63 < 0xce1) goto LAB_030675f8;
LAB_030682c4:
              lVar76 = FUN_032bf82c(lVar60);
              iVar63 = (int)param_3[0xfb];
            }
            if (iVar63 != 0) {
              nn::os::GetSystemTick();
            }
            uVar81 = *(ushort *)local_190[9];
            uVar84 = NEON_scvtf((ulong)CONCAT24(*(ushort *)local_158[9],
                                                (uint)*(ushort *)local_158[9]),4);
            uVar41 = NEON_scvtf((ulong)CONCAT15((char)(uVar81 >> 8),
                                                CONCAT14((char)uVar81,(uint)uVar81)),4);
            local_d8 = CONCAT44((float)((ulong)*(undefined8 *)(local_1b0[1] + 0x50) >> 0x20) *
                                ((float)((ulong)uVar84 >> 0x20) + (float)((ulong)uVar41 >> 0x20)),
                                (float)*(undefined8 *)(local_1b0[1] + 0x50) *
                                ((float)uVar84 + (float)uVar41));
            fVar83 = *(float *)(local_130 + 0x20);
            local_f0 = CONCAT44(fVar83,fVar83);
            fVar90 = *(float *)(local_168 + 0x20);
            local_e8 = CONCAT17((char)((uint)fVar90 >> 0x18),
                                CONCAT16((char)((uint)fVar90 >> 0x10),
                                         CONCAT15((char)((uint)fVar90 >> 8),
                                                  CONCAT14(SUB41(fVar90,0),fVar90))));
            local_e0 = CONCAT44(fVar83 + fVar90,fVar83 + fVar90);
            uVar102 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
            uVar41 = *(undefined8 *)(local_160[1] + 8);
            uVar95 = (undefined1)((ulong)uVar41 >> 8);
            uVar96 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar97 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x38);
            auVar9[9] = uVar95;
            auVar9._0_9_ = *(unkbyte9 *)local_160[1];
            auVar9[10] = uVar96;
            auVar9[0xb] = uVar97;
            auVar9[0xc] = uVar98;
            auVar9[0xd] = uVar99;
            auVar9[0xe] = uVar100;
            auVar9[0xf] = uVar101;
            auVar10[9] = uVar95;
            auVar10._0_9_ = *(unkbyte9 *)local_160[1];
            auVar10[10] = uVar96;
            auVar10[0xb] = uVar97;
            auVar10[0xc] = uVar98;
            auVar10[0xd] = uVar99;
            auVar10[0xe] = uVar100;
            auVar10[0xf] = uVar101;
            NEON_ext(auVar9,auVar10,8,1);
            NEON_ext(*local_160,*local_160,8,1);
            auVar21._12_4_ = uVar102;
            auVar21._0_12_ = *(undefined1 (*) [12])local_160[2];
            auVar22._12_4_ = uVar102;
            auVar22._0_12_ = *(undefined1 (*) [12])local_160[2];
            NEON_ext(auVar21,auVar22,8,1);
            pauVar69 = local_160 + 2;
            uVar102 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
            auVar86 = *local_160;
            pauVar77 = local_160 + 1;
            uVar41 = *(undefined8 *)(local_160[1] + 8);
            uVar95 = (undefined1)((ulong)uVar41 >> 8);
            uVar96 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar97 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x38);
            auVar11[9] = uVar95;
            auVar11._0_9_ = *(unkbyte9 *)*pauVar77;
            auVar11[10] = uVar96;
            auVar11[0xb] = uVar97;
            auVar11[0xc] = uVar98;
            auVar11[0xd] = uVar99;
            auVar11[0xe] = uVar100;
            auVar11[0xf] = uVar101;
            auVar12[9] = uVar95;
            auVar12._0_9_ = *(unkbyte9 *)*pauVar77;
            auVar12[10] = uVar96;
            auVar12[0xb] = uVar97;
            auVar12[0xc] = uVar98;
            auVar12[0xd] = uVar99;
            auVar12[0xe] = uVar100;
            auVar12[0xf] = uVar101;
            auVar104 = NEON_ext(auVar11,auVar12,8,1);
            auVar103 = NEON_ext(auVar86,auVar86,8,1);
            auVar23._12_4_ = uVar102;
            auVar23._0_12_ = *(undefined1 (*) [12])*pauVar69;
            auVar24._12_4_ = uVar102;
            auVar24._0_12_ = *(undefined1 (*) [12])*pauVar69;
            auVar105 = NEON_ext(auVar23,auVar24,8,1);
            fVar92 = (float)((ulong)*(undefined8 *)*pauVar69 >> 0x20);
            fVar83 = (float)*(undefined8 *)local_128[2];
            fVar90 = (float)((ulong)*(undefined8 *)local_128[2] >> 0x20);
            fVar93 = (float)*(undefined8 *)(local_128[2] + 8);
            uStack_a8 = CONCAT44(auVar105._4_4_ * fVar93 + fVar92 * fVar83 + auVar105._4_4_ * fVar90
                                 ,auVar105._0_4_ * fVar93 +
                                  (float)*(undefined8 *)*pauVar69 * fVar83 + fVar92 * fVar90);
            local_b0 = CONCAT44(auVar104._0_4_ * fVar93 +
                                (float)*(undefined8 *)*pauVar77 * fVar83 +
                                (float)((ulong)*(undefined8 *)*pauVar77 >> 0x20) * fVar90,
                                auVar103._0_4_ * fVar93 +
                                auVar86._0_4_ * fVar83 + auVar86._4_4_ * fVar90);
            pauVar69 = local_160 + 2;
            uVar102 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
            auVar86 = *local_160;
            pauVar77 = local_160 + 1;
            uVar41 = *(undefined8 *)(local_160[1] + 8);
            uVar95 = (undefined1)((ulong)uVar41 >> 8);
            uVar96 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar97 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x38);
            auVar13[9] = uVar95;
            auVar13._0_9_ = *(unkbyte9 *)*pauVar77;
            auVar13[10] = uVar96;
            auVar13[0xb] = uVar97;
            auVar13[0xc] = uVar98;
            auVar13[0xd] = uVar99;
            auVar13[0xe] = uVar100;
            auVar13[0xf] = uVar101;
            auVar14[9] = uVar95;
            auVar14._0_9_ = *(unkbyte9 *)*pauVar77;
            auVar14[10] = uVar96;
            auVar14[0xb] = uVar97;
            auVar14[0xc] = uVar98;
            auVar14[0xd] = uVar99;
            auVar14[0xe] = uVar100;
            auVar14[0xf] = uVar101;
            auVar104 = NEON_ext(auVar13,auVar14,8,1);
            auVar103 = NEON_ext(auVar86,auVar86,8,1);
            auVar25._12_4_ = uVar102;
            auVar25._0_12_ = *(undefined1 (*) [12])*pauVar69;
            auVar26._12_4_ = uVar102;
            auVar26._0_12_ = *(undefined1 (*) [12])*pauVar69;
            auVar105 = NEON_ext(auVar25,auVar26,8,1);
            fVar92 = (float)((ulong)*(undefined8 *)*pauVar69 >> 0x20);
            fVar83 = (float)*(undefined8 *)local_128[1];
            fVar90 = (float)((ulong)*(undefined8 *)local_128[1] >> 0x20);
            fVar93 = (float)*(undefined8 *)(local_128[1] + 8);
            fStack_b8 = auVar105._0_4_ * fVar93 +
                        (float)*(undefined8 *)*pauVar69 * fVar83 + fVar92 * fVar90;
            fStack_b4 = auVar105._4_4_ * fVar93 + fVar92 * fVar83 + auVar105._4_4_ * fVar90;
            local_c0 = (undefined1 (*) [16])
                       CONCAT44(auVar104._0_4_ * fVar93 +
                                (float)*(undefined8 *)*pauVar77 * fVar83 +
                                (float)((ulong)*(undefined8 *)*pauVar77 >> 0x20) * fVar90,
                                auVar103._0_4_ * fVar93 +
                                auVar86._0_4_ * fVar83 + auVar86._4_4_ * fVar90);
            pauVar69 = local_160 + 2;
            uVar102 = (undefined4)((ulong)*(undefined8 *)(local_160[2] + 8) >> 0x20);
            auVar86 = *local_160;
            pauVar77 = local_160 + 1;
            uVar41 = *(undefined8 *)(local_160[1] + 8);
            uVar95 = (undefined1)((ulong)uVar41 >> 8);
            uVar96 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar97 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x38);
            auVar15[9] = uVar95;
            auVar15._0_9_ = *(unkbyte9 *)*pauVar77;
            auVar15[10] = uVar96;
            auVar15[0xb] = uVar97;
            auVar15[0xc] = uVar98;
            auVar15[0xd] = uVar99;
            auVar15[0xe] = uVar100;
            auVar15[0xf] = uVar101;
            auVar16[9] = uVar95;
            auVar16._0_9_ = *(unkbyte9 *)*pauVar77;
            auVar16[10] = uVar96;
            auVar16[0xb] = uVar97;
            auVar16[0xc] = uVar98;
            auVar16[0xd] = uVar99;
            auVar16[0xe] = uVar100;
            auVar16[0xf] = uVar101;
            auVar104 = NEON_ext(auVar15,auVar16,8,1);
            auVar103 = NEON_ext(auVar86,auVar86,8,1);
            auVar27._12_4_ = uVar102;
            auVar27._0_12_ = *(undefined1 (*) [12])*pauVar69;
            auVar28._12_4_ = uVar102;
            auVar28._0_12_ = *(undefined1 (*) [12])*pauVar69;
            auVar105 = NEON_ext(auVar27,auVar28,8,1);
            fVar92 = (float)((ulong)*(undefined8 *)*pauVar69 >> 0x20);
            fVar83 = (float)*(undefined8 *)*local_128;
            fVar90 = (float)((ulong)*(undefined8 *)*local_128 >> 0x20);
            fVar93 = (float)*(undefined8 *)(*local_128 + 8);
            local_d0 = auVar103._0_4_ * fVar93 + auVar86._0_4_ * fVar83 + auVar86._4_4_ * fVar90;
            fStack_cc = auVar104._0_4_ * fVar93 +
                        (float)*(undefined8 *)*pauVar77 * fVar83 +
                        (float)((ulong)*(undefined8 *)*pauVar77 >> 0x20) * fVar90;
            uStack_c8 = (undefined1 (*) [16])
                        CONCAT44(auVar105._4_4_ * fVar93 + fVar92 * fVar83 + auVar105._4_4_ * fVar90
                                 ,auVar105._0_4_ * fVar93 +
                                  (float)*(undefined8 *)*pauVar69 * fVar83 + fVar92 * fVar90);
            uVar102 = (undefined4)((ulong)*(undefined8 *)(*local_160 + 8) >> 0x20);
            fVar83 = ((float)*(undefined8 *)local_128[3] - *(float *)local_160[3]) +
                     ((float)*(undefined8 *)local_128[4] - (float)*(undefined8 *)local_160[4]);
            fVar90 = ((float)((ulong)*(undefined8 *)local_128[3] >> 0x20) -
                     *(float *)(local_160[3] + 4)) +
                     ((float)((ulong)*(undefined8 *)local_128[4] >> 0x20) -
                     (float)((ulong)*(undefined8 *)local_160[4] >> 0x20));
            fVar93 = ((float)*(undefined8 *)(local_128[3] + 8) - *(float *)(local_160[3] + 8)) +
                     ((float)*(undefined8 *)(local_128[4] + 8) -
                     (float)*(undefined8 *)(local_160[4] + 8));
            auVar29._12_4_ = uVar102;
            auVar29._0_12_ = *(undefined1 (*) [12])*local_160;
            auVar30._12_4_ = uVar102;
            auVar30._0_12_ = *(undefined1 (*) [12])*local_160;
            auVar103 = NEON_ext(auVar29,auVar30,8,1);
            auVar86 = local_160[1];
            pauVar69 = local_160 + 2;
            uVar41 = *(undefined8 *)(local_160[2] + 8);
            uVar95 = (undefined1)((ulong)uVar41 >> 8);
            uVar96 = (undefined1)((ulong)uVar41 >> 0x10);
            uVar97 = (undefined1)((ulong)uVar41 >> 0x18);
            uVar98 = (undefined1)((ulong)uVar41 >> 0x20);
            uVar99 = (undefined1)((ulong)uVar41 >> 0x28);
            uVar100 = (undefined1)((ulong)uVar41 >> 0x30);
            uVar101 = (undefined1)((ulong)uVar41 >> 0x38);
            local_80 = param_3 + 0x1f;
            auVar104 = NEON_ext(auVar86,auVar86,8,1);
            auVar17[9] = uVar95;
            auVar17._0_9_ = *(unkbyte9 *)*pauVar69;
            auVar17[10] = uVar96;
            auVar17[0xb] = uVar97;
            auVar17[0xc] = uVar98;
            auVar17[0xd] = uVar99;
            auVar17[0xe] = uVar100;
            auVar17[0xf] = uVar101;
            auVar18[9] = uVar95;
            auVar18._0_9_ = *(unkbyte9 *)*pauVar69;
            auVar18[10] = uVar96;
            auVar18[0xb] = uVar97;
            auVar18[0xc] = uVar98;
            auVar18[0xd] = uVar99;
            auVar18[0xe] = uVar100;
            auVar18[0xf] = uVar101;
            auVar105 = NEON_ext(auVar17,auVar18,8,1);
            fVar92 = (float)((ulong)*(undefined8 *)*pauVar69 >> 0x20);
            auVar87._0_8_ =
                 CONCAT44(auVar104._0_4_ * fVar93 + auVar86._0_4_ * fVar83 + auVar86._4_4_ * fVar90,
                          auVar103._0_4_ * fVar93 +
                          (float)*(undefined8 *)*local_160 * fVar83 +
                          (float)((ulong)*(undefined8 *)*local_160 >> 0x20) * fVar90);
            auVar87._8_4_ =
                 auVar105._0_4_ * fVar93 +
                 (float)*(undefined8 *)*pauVar69 * fVar83 + fVar92 * fVar90;
            auVar87._12_4_ = auVar105._4_4_ * fVar93 + fVar92 * fVar83 + auVar105._4_4_ * fVar90;
            uStack_98 = auVar87._8_8_;
            local_88 = *(undefined8 *)(puVar79 + 4);
            plVar72 = *(long **)(lVar68 + (ulong)*(byte *)(local_130 + 0x18) * 0xf8 +
                                 (ulong)*(byte *)(local_168 + 0x18) * 8 + 0x10);
            local_a0 = auVar87._0_8_;
            local_90 = puVar71;
            uVar38 = (**(code **)(*plVar72 + 0x20))
                               (plVar72,local_1b8,local_1b0,&local_f0,&local_158,&local_190,puVar71,
                                lVar76,&local_f8);
            if (iVar37 != 0) {
              lVar68 = CONCAT44(uStack_f4,local_f8);
              lVar76 = nn::os::GetSystemTick();
              *(long *)(lVar68 + 8) = (lVar76 - local_308) + *(long *)(lVar68 + 8);
              *(int *)(lVar68 + 0x10) = *(int *)(lVar68 + 0x10) + 1;
            }
            if (0 < (int)uVar38) {
              if (*(long *)(puVar79 + 0x1a) == 0) {
                *(long *)(puVar79 + 0x1a) =
                     *(long *)(lVar60 + 0x10) + (long)*(int *)(lVar60 + 0x18) + 0x20;
              }
              if ((int)uVar38 < 1) {
                iVar63 = *(int *)(lVar60 + 0x18);
              }
              else {
                iVar63 = *(int *)(lVar60 + 0x18);
                lVar68 = *(long *)(lVar60 + 0x10) + (long)iVar63;
                uVar59 = *(uint *)(*(long *)(lVar68 + 200) + 0x14) | puVar79[0x1c] |
                         *(uint *)(*(long *)(lVar68 + 0xd0) + 0x14);
                if (uVar38 != 1) {
                  lVar76 = (ulong)uVar38 - 1;
                  plVar72 = (long *)(lVar68 + 0x1d0);
                  do {
                    lVar76 = lVar76 + -1;
                    uVar59 = *(uint *)(plVar72[-1] + 0x14) | uVar59 | *(uint *)(*plVar72 + 0x14);
                    plVar72 = plVar72 + 0x20;
                  } while (lVar76 != 0);
                }
                puVar79[0x1c] = uVar59;
              }
              *(uint *)(lVar60 + 0x18) = iVar63 + uVar38 * 0x100;
              *(int *)(lVar60 + 0x1c) = *(int *)(lVar60 + 0x1c) + 1;
              *(uint *)(*(long *)(puVar79 + 0x18) + 8) =
                   *(int *)(*(long *)(puVar79 + 0x18) + 8) + uVar38;
              *(undefined1 *)((long)puVar79 + 0x7a) = 0;
              if (1 < (int)uVar38) {
                *(uint *)(lVar60 + 0x1c) = uVar38 + *(int *)(lVar60 + 0x1c) + -1;
              }
            }
            *(byte *)((long)puVar71 + 0xf) =
                 *(byte *)((long)puVar71 + 0xf) & 0xf7 | (0 < (int)uVar38) << 3;
            uVar59 = local_204;
            if (iVar37 != 0) {
              lVar68 = nn::os::GetSystemTick();
              param_3[0x15] = (lVar68 - local_308) + param_3[0x15];
              *(int *)(param_3 + 0x16) = (int)param_3[0x16] + 1;
              uVar59 = local_204;
            }
          }
          else {
            plVar72 = *(long **)(*(long *)(local_1b8 + 0x40) + (ulong)(byte)puVar71[2] * 8 + 0x13b8)
            ;
            if ((int)plVar72[1] == 0) {
              local_158 = pauVar73;
              (**(code **)(*plVar72 + 0x10))
                        (plVar72,local_1b8,local_1b0,&local_158,local_138,&local_190,local_170,
                         puVar71,lVar76);
              uVar59 = local_204;
            }
            else {
              plVar74 = (long *)((long)local_1a8 + 0x28);
              puVar64 = *(uint **)((long)local_1a8 + 0x38);
              uVar102 = *(undefined4 *)((long)local_1a8 + 0x40);
              uVar38 = *(uint *)((long)local_1a8 + 0x44);
              iVar37 = uVar38 + *(int *)(*plVar74 + 8);
              local_158 = pauVar73;
              (**(code **)(*plVar72 + 0x28))
                        (plVar72,local_1b8,local_1b0,&local_158,&local_190,puVar71,plVar51,plVar74,
                         local_120,lVar76,puVar79,param_3 + 0x14,0);
              *(uint **)(puVar71 + 8) = puVar64;
              *(short *)(puVar71 + 10) = (short)uVar102;
              *(short *)((long)puVar71 + 0x2a) = (short)uVar38;
              puVar71[0xb] = -iVar37;
              uVar59 = *(uint *)((long)puVar78 + 0x44);
              uVar61 = (uVar59 + *(int *)(*plVar74 + 8)) - iVar37;
              if (uVar61 != 0) {
                puVar54 = *(uint **)((long)local_1a8 + 0x38);
                if (puVar54 != puVar64) {
                  if ((uVar38 & 0xffff) == (*puVar64 & 0xffff)) {
                    uVar38 = 0;
                    puVar64 = *(uint **)(puVar64 + 2);
                    puVar71[10] = 0;
                    puVar54 = *(uint **)((long)local_1a8 + 0x38);
                    if (puVar64 == puVar54) goto LAB_03066cb8;
                  }
                  else if (puVar64 == puVar54) {
LAB_03066cb8:
                    uVar59 = *(uint *)((long)local_1a8 + 0x44);
                    puVar64 = puVar54;
                    goto LAB_030657e8;
                  }
                  uVar59 = *puVar64;
                }
LAB_030657e8:
                *(short *)((long)puVar71 + 0x2a) = (short)uVar59 - (short)uVar38;
                *(uint **)(puVar71 + 8) = puVar64;
              }
              puVar71[0xb] = uVar61;
              uVar59 = local_204;
            }
          }
joined_r0x03067b40:
          local_204 = uVar59;
          if (local_268 != 0 && bVar36) {
            FUN_032d5b34(local_268,&DAT_0390f40e);
          }
        }
        else {
          if (((char)puVar71[2] == '\x02') && ((puVar71[6] & 0xffffff) != 0x7f7f7f)) {
            lVar53 = local_1c0 + uVar46 * 0xc0;
            uVar41 = *(undefined8 *)(puVar71 + 6);
            bVar80 = (byte)((ulong)uVar41 >> 8);
            lVar56 = local_1c0 + uVar42 * 0xc0;
            auVar86._0_4_ = (CONCAT12(bVar80,(ushort)(byte)uVar41) & 0xffff) - 0x7f;
            auVar86._4_4_ = bVar80 - 0x7f;
            auVar86._8_4_ = (byte)((ulong)uVar41 >> 0x10) - 0x7f;
            auVar86._12_4_ = (byte)((ulong)uVar41 >> 0x18) - 0x7f;
            auVar86 = NEON_scvtf(auVar86,4);
            lVar52 = local_1b0[1];
            fVar90 = auVar86._0_4_ * 0.007874016;
            fVar93 = auVar86._4_4_ * 0.007874016;
            fVar92 = auVar86._8_4_ * 0.007874016;
            fVar94 = auVar86._12_4_ * 0.007874016;
            auVar104._0_4_ = fVar90 * (*(float *)(lVar68 + 0x60) - *(float *)(lVar60 + 0x60));
            auVar104._4_4_ = fVar93 * (*(float *)(lVar68 + 100) - *(float *)(lVar60 + 100));
            auVar104._8_4_ = fVar92 * (*(float *)(lVar68 + 0x68) - *(float *)(lVar60 + 0x68));
            auVar104._12_4_ = fVar94 * (*(float *)(lVar68 + 0x6c) - *(float *)(lVar60 + 0x6c));
            fVar83 = (float)*(undefined8 *)(lVar52 + 0x48);
            auVar103._0_4_ =
                 fVar90 * ((float)*(undefined8 *)(lVar68 + 0x38) -
                          (float)*(undefined8 *)(lVar60 + 0x38));
            auVar103._4_4_ =
                 fVar93 * ((float)((ulong)*(undefined8 *)(lVar68 + 0x38) >> 0x20) -
                          (float)((ulong)*(undefined8 *)(lVar60 + 0x38) >> 0x20));
            auVar103._8_4_ =
                 fVar92 * ((float)((ulong)*(undefined8 *)(lVar68 + 0x30) >> 0x20) -
                          (float)((ulong)*(undefined8 *)(lVar60 + 0x30) >> 0x20));
            auVar103._12_4_ = fVar94 * 0.0;
            auVar86 = NEON_ext(auVar104,auVar104,8,1);
            auVar105 = NEON_ext(auVar103,auVar103,8,1);
            iVar37 = (uint)*(ushort *)(lVar56 + 0x5e) + (uint)*(ushort *)(lVar53 + 0x5e) +
                     (int)((float)*(undefined8 *)(lVar52 + 0x20) * fVar83 *
                          (auVar103._0_4_ + auVar103._4_4_ + auVar105._0_4_));
            uVar38 = (uint)*(ushort *)(lVar56 + 0x92) + (uint)*(ushort *)(lVar53 + 0x92);
            uVar61 = (uint)((float)*(undefined8 *)(lVar52 + 0x10) *
                            (auVar104._0_4_ + auVar104._4_4_ + auVar86._0_4_) * fVar83);
          }
          else {
            lVar52 = local_1c0 + uVar46 * 0xc0;
            lVar53 = local_1c0 + uVar42 * 0xc0;
            uVar61 = (uint)*(ushort *)(lVar52 + 0x90);
            uVar38 = (uint)*(ushort *)(lVar53 + 0x90);
            iVar37 = (uint)*(ushort *)(lVar53 + 0x5c) + (uint)*(ushort *)(lVar52 + 0x5c);
          }
          iVar37 = ((uint)uVar81 - iVar37) - (uVar58 >> 10 & 1);
          if (iVar37 <= (int)(uVar38 + uVar61)) {
            goto LAB_03065450;
          }
          *(short *)(puVar71 + 3) = (short)iVar37;
        }
        *(uint *)((long)local_1a8 + 0x18) =
             *(int *)((long)local_1a8 + 0x18) + (uint)*(byte *)((long)puVar71 + 9) * 0x10;
        *(int *)((long)local_1a8 + 0x1c) = *(int *)((long)local_1a8 + 0x1c) + 1;
      }
LAB_0306581c:
      lVar60 = param_3[0x10e];
      uVar41 = **(undefined8 **)(lVar60 + 0x48);
      lVar68 = *(long *)(lVar60 + 0x60);
      if (lVar68 != 0) {
        if (*(char *)(lVar60 + 0x7a) == '\0') {
          FUN_0301e778(lVar60,*param_3,param_3[1]);
        }
        else {
          *(undefined4 *)(lVar68 + 8) = 0x7777;
          plVar72 = *(long **)(lVar60 + 0x48);
          iVar63 = *(int *)((long)plVar72 + 0x1c);
          puVar78 = (undefined8 *)(lVar60 + 0x50);
          iVar37 = iVar63 + *(int *)(*plVar72 + 8) + *(int *)(lVar60 + 0x5c);
          if (iVar37 != 0) {
            puVar64 = (uint *)*puVar78;
            puVar71 = (uint *)plVar72[2];
            if (puVar64 == puVar71) {
              uVar81 = *(ushort *)(lVar60 + 0x5a);
LAB_03065880:
              sVar62 = (short)iVar63;
            }
            else {
              uVar81 = *(ushort *)(lVar60 + 0x5a);
              if ((uint)uVar81 == (*puVar64 & 0xffff)) {
                puVar64 = *(uint **)(puVar64 + 2);
                *(undefined4 *)(lVar60 + 0x58) = 0;
                uVar81 = 0;
                puVar71 = (uint *)plVar72[2];
                uVar58 = 0;
                if (puVar64 == (uint *)plVar72[2]) goto LAB_03066e10;
              }
              else {
                uVar58 = uVar81;
                if (puVar64 == puVar71) {
LAB_03066e10:
                  uVar81 = uVar58;
                  puVar64 = puVar71;
                  iVar63 = *(int *)((long)plVar72 + 0x1c);
                  goto LAB_03065880;
                }
              }
              sVar62 = (short)*puVar64;
            }
            *(ushort *)(lVar60 + 0x5a) = sVar62 - uVar81;
            *puVar78 = puVar64;
          }
          *(int *)(lVar60 + 0x5c) = iVar37;
          uVar38 = *(uint *)((long)plVar72 + 0x1c);
          lVar68 = *plVar72;
          if (uVar38 == 0) {
            piVar70 = (int *)(lVar68 + 0x18);
            iVar37 = *piVar70;
            if (iVar37 < 2) goto LAB_030658b0;
            puVar67 = (undefined8 *)plVar72[1];
            iVar63 = *(int *)(puVar67 + 0xb);
            lVar52 = *(long *)(*(long *)(lVar68 + 0x10) + (long)(iVar37 + -2) * 8);
            lVar76 = puVar67[1];
            *(undefined8 *)(lVar76 + (long)iVar63 * 8) =
                 *(undefined8 *)(*(long *)(lVar68 + 0x10) + (long)(iVar37 + -1) * 8);
            *(int *)(puVar67 + 0xb) = iVar63 + 1;
            if (*(int *)((long)puVar67 + 0x5c) <= iVar63 + 1) {
              local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,iVar63 + -5);
              (**(code **)(*(long *)*puVar67 + 0x28))
                        ((long *)*puVar67,lVar76 + (long)(iVar63 + -5) * 8,6);
              *(int *)(puVar67 + 0xb) = (int)local_1a8;
            }
            *(undefined8 *)(lVar52 + 8) = 0;
            uVar38 = 0xffffffff;
            uVar59 = local_204;
          }
          else {
LAB_030658b0:
            puVar71 = (uint *)plVar72[2];
            piVar70 = (int *)(lVar68 + 8);
            lVar68 = plVar72[3];
            puVar71[2] = 0;
            puVar71[3] = 0;
            *puVar71 = *puVar71 & 0xffff0000 | uVar38 & 0xffff;
            *puVar71 = *puVar71 & 0xffff | (int)lVar68 << 0x10;
          }
          *piVar70 = *piVar70 + uVar38;
          *plVar72 = 0;
          plVar72[2] = 0;
          FUN_032bf658(*(undefined8 *)(lVar60 + 0x48),uVar41,puVar78);
          plVar72 = *(long **)(lVar60 + 0x48);
          lVar68 = plVar72[3];
          iVar37 = *(int *)((long)plVar72 + 0x1c);
          iVar63 = *(int *)(*plVar72 + 8);
          *(long *)(lVar60 + 0x50) = plVar72[2];
          *(short *)(lVar60 + 0x58) = (short)lVar68;
          *(short *)(lVar60 + 0x5a) = (short)iVar37;
          *(int *)(lVar60 + 0x5c) = -(iVar37 + iVar63);
          *(long *)(lVar60 + 0x60) = 0;
          *(undefined8 *)(lVar60 + 0x68) = 0;
        }
      }
      puVar75 = local_1f8;
      puVar1 = local_200;
      plVar72 = (long *)param_3[0x11];
      uVar38 = *(uint *)((long)plVar72 + 0xbc);
      iVar37 = uVar38 + *(int *)(plVar72[0x14] + 8) + *(int *)((long)param_3 + 0x80c);
      if (iVar37 < 1) {
        uVar38 = *(uint *)((long)plVar72 + 0xec);
        iVar63 = uVar38 + *(int *)(plVar72[0x1a] + 8) + *(int *)((long)param_3 + 0x82c);
        if (0 < iVar63) {
          puVar64 = (uint *)param_3[0x104];
          puVar71 = (uint *)plVar72[0x1c];
          if (puVar64 == puVar71) {
            uVar81 = *(ushort *)((long)param_3 + 0x82a);
          }
          else {
            uVar81 = *(ushort *)((long)param_3 + 0x82a);
            if ((uint)uVar81 == (*puVar64 & 0xffff)) {
              puVar64 = *(uint **)(puVar64 + 2);
              *(undefined4 *)(param_3 + 0x105) = 0;
              uVar81 = 0;
              puVar71 = (uint *)plVar72[0x1c];
              if (puVar64 != (uint *)plVar72[0x1c]) goto LAB_03067094;
            }
            else if (puVar64 != puVar71) {
LAB_03067094:
              uVar38 = *puVar64;
              goto LAB_03066cd8;
            }
            puVar64 = puVar71;
            uVar38 = *(uint *)((long)plVar72 + 0xec);
          }
LAB_03066cd8:
          *(ushort *)((long)param_3 + 0x82a) = (short)uVar38 - uVar81;
          param_3[0x104] = (long)puVar64;
          plVar74 = plVar72 + 0x1f;
          iVar37 = 2;
          *(int *)((long)param_3 + 0x82c) = iVar63;
          puVar48 = (undefined4 *)((long)param_3 + 0x83c);
          goto LAB_03066cf4;
        }
        iVar37 = 0;
      }
      else {
        puVar64 = (uint *)param_3[0x100];
        puVar71 = (uint *)plVar72[0x16];
        if (puVar64 == puVar71) {
          uVar81 = *(ushort *)((long)param_3 + 0x80a);
        }
        else {
          uVar81 = *(ushort *)((long)param_3 + 0x80a);
          if ((uint)uVar81 == (*puVar64 & 0xffff)) {
            puVar64 = *(uint **)(puVar64 + 2);
            *(undefined4 *)(param_3 + 0x101) = 0;
            uVar81 = 0;
            puVar71 = (uint *)plVar72[0x16];
            uVar58 = 0;
            if (puVar64 == (uint *)plVar72[0x16]) goto LAB_030680e0;
          }
          else {
            uVar58 = uVar81;
            if (puVar64 == puVar71) {
LAB_030680e0:
              puVar64 = puVar71;
              uVar38 = *(uint *)((long)plVar72 + 0xbc);
              goto LAB_03067370;
            }
          }
          uVar81 = uVar58;
          uVar38 = *puVar64;
        }
LAB_03067370:
        param_3[0x100] = (long)puVar64;
        *(ushort *)((long)param_3 + 0x80a) = (short)uVar38 - uVar81;
        *(int *)((long)param_3 + 0x80c) = iVar37;
        plVar74 = plVar72 + 0x19;
        iVar37 = 1;
        puVar48 = (undefined4 *)((long)param_3 + 0x81c);
LAB_03066cf4:
        *puVar48 = (int)*plVar74;
      }
      plVar74 = *(long **)(param_3[0x10e] + 0x48);
      uVar38 = *(uint *)((long)plVar74 + 0x1c);
      iVar63 = uVar38 + *(int *)(*plVar74 + 8) + *(int *)((long)param_3 + 0x7fc);
      if (iVar63 != 0) {
        puVar64 = (uint *)*local_1f8;
        puVar71 = (uint *)plVar74[2];
        if (puVar64 == puVar71) {
          uVar81 = *(ushort *)((long)param_3 + 0x7fa);
        }
        else {
          uVar81 = *(ushort *)((long)param_3 + 0x7fa);
          if ((uint)uVar81 == (*puVar64 & 0xffff)) {
            puVar64 = *(uint **)(puVar64 + 2);
            *(undefined4 *)(param_3 + 0xff) = 0;
            uVar81 = 0;
            puVar71 = (uint *)plVar74[2];
            uVar58 = 0;
            if (puVar64 == (uint *)plVar74[2]) goto LAB_03066c6c;
          }
          else {
            uVar58 = uVar81;
            if (puVar64 == puVar71) {
LAB_03066c6c:
              puVar64 = puVar71;
              uVar38 = *(uint *)((long)plVar74 + 0x1c);
              goto LAB_030659b8;
            }
          }
          uVar81 = uVar58;
          uVar38 = *puVar64;
        }
LAB_030659b8:
        *(ushort *)((long)param_3 + 0x7fa) = (short)uVar38 - uVar81;
        param_3[0xfe] = (long)puVar64;
      }
      *(int *)((long)param_3 + 0x7fc) = iVar63;
      uVar38 = *(uint *)((long)plVar72 + 0x1c);
      iVar63 = uVar38 + *(int *)(*plVar72 + 8) + *(int *)((long)param_3 + 0x84c);
      if (iVar63 != 0) {
        puVar64 = (uint *)param_3[0x108];
        puVar71 = (uint *)plVar72[2];
        if (puVar64 == puVar71) {
          uVar81 = *(ushort *)((long)param_3 + 0x84a);
        }
        else {
          uVar81 = *(ushort *)((long)param_3 + 0x84a);
          if ((uint)uVar81 == (*puVar64 & 0xffff)) {
            puVar64 = *(uint **)(puVar64 + 2);
            *(undefined4 *)(param_3 + 0x109) = 0;
            uVar81 = 0;
            puVar71 = (uint *)plVar72[2];
            uVar58 = 0;
            if (puVar64 == (uint *)plVar72[2]) goto LAB_03066c90;
          }
          else {
            uVar58 = uVar81;
            if (puVar64 == puVar71) {
LAB_03066c90:
              puVar64 = puVar71;
              uVar38 = *(uint *)((long)plVar72 + 0x1c);
              goto LAB_030659f8;
            }
          }
          uVar81 = uVar58;
          uVar38 = *puVar64;
        }
LAB_030659f8:
        *(ushort *)((long)param_3 + 0x84a) = (short)uVar38 - uVar81;
        param_3[0x108] = (long)puVar64;
      }
      lVar68 = *param_3;
      *(int *)((long)param_3 + 0x84c) = iVar63;
      iVar63 = *(int *)(lVar68 + 0x73c) + *(int *)(lVar68 + 0x528);
      if (iVar63 != 0) {
        puVar71 = *(uint **)(lVar68 + 0x730);
        if ((puVar71 !=
             *(uint **)(*(long *)(lVar68 + 0x530) + (long)*(int *)(lVar68 + 0x538) * 8 + -8)) &&
           ((uint)*(ushort *)(lVar68 + 0x73a) == (*puVar71 & 0xffff))) {
          puVar71 = *(uint **)(puVar71 + 2);
          *(undefined4 *)(lVar68 + 0x738) = 0;
        }
        *(short *)(lVar68 + 0x73a) = (short)*puVar71 - *(short *)(lVar68 + 0x73a);
        *(uint **)(lVar68 + 0x730) = puVar71;
      }
      *(int *)(lVar68 + 0x73c) = iVar63;
      local_200[1] = *(ulong *)(lVar68 + 0x738);
      uVar46 = *(ulong *)(lVar68 + 0x730);
      local_200[2] = *(ulong *)(lVar68 + 0x740);
      *local_200 = uVar46;
      puVar48 = *(undefined4 **)
                 (*(long *)(lVar68 + 0x530) + (long)*(int *)(lVar68 + 0x538) * 8 + -8);
      uVar102 = *puVar48;
      uVar3 = *puVar48;
      *(undefined4 **)(lVar68 + 0x730) = puVar48;
      *(short *)(lVar68 + 0x738) = (short)((uint)uVar102 >> 0x10);
      *(short *)(lVar68 + 0x73a) = (short)uVar3;
      *(int *)(lVar68 + 0x73c) = -*(int *)(lVar68 + 0x528);
      if (*(int *)((long)param_3 + 0x85c) != 0 || *(int *)((long)param_3 + 0x84c) != 0) {
        iVar63 = *(int *)(param_3[0xfc] + 0x18);
        if (iVar63 < 0xe71) {
          puVar39 = (ulong *)(*(long *)(param_3[0xfc] + 0x10) + (long)iVar63 + 0x20);
        }
        else {
          puVar39 = (ulong *)FUN_032bf82c();
        }
        lVar68 = *(long *)(*(long *)(*param_3 + 8) + 0xf8);
        bVar80 = *(byte *)(lVar68 + ((ulong)*(uint *)(param_3 + 0x10f) & 0xffffff));
        bVar5 = *(byte *)(lVar68 + ((ulong)*(uint *)((long)param_3 + 0x87c) & 0xffffff));
        *(undefined1 *)(puVar39 + 0xc) = *(undefined1 *)(param_3[0xfd] + 0xb);
        puVar39[0xb] = puVar1[1];
        puVar39[10] = *puVar1;
        *(byte *)((long)puVar39 + 0x12) = bVar80;
        *(byte *)((long)puVar39 + 0x13) = bVar5;
        sVar62 = (short)*(undefined4 *)(param_3[0xfd] + 0xc);
        *(short *)((long)puVar39 + 0x14) = sVar62;
        *(bool *)((long)puVar39 + 0x16) = *(char *)(param_3[0x10e] + 5) != '\0';
        uVar61 = (uint)bVar80;
        uVar38 = (uint)bVar5;
        if ((bVar5 & bVar80) == 0xff) {
          uVar44 = (uint)sVar62;
          if (iVar37 == 0) goto LAB_03065b38;
LAB_030678a4:
          if (iVar37 == 1) {
            uVar46 = param_3[0x103];
            puVar39[5] = param_3[0x101];
            puVar39[7] = uVar46;
            uVar46 = param_3[0x100];
            puVar39[6] = param_3[0x102];
            puVar39[4] = uVar46;
            lVar68 = param_3[0x11];
            uVar102 = *(undefined4 *)(lVar68 + 0xb8);
            iVar37 = *(int *)(lVar68 + 0xbc);
            iVar63 = *(int *)(*(long *)(lVar68 + 0xa0) + 8);
            param_3[0x100] = *(long *)(lVar68 + 0xb0);
            *(short *)(param_3 + 0x101) = (short)uVar102;
            *(short *)((long)param_3 + 0x80a) = (short)iVar37;
            *(int *)((long)param_3 + 0x80c) = -(iVar37 + iVar63);
            *(undefined4 *)(lVar68 + 200) = 0;
            lVar68 = *(long *)(*(long *)(*(long *)(*param_3 + 8) + 0x4a8) + 0x10);
            if ((uVar61 == 0xff) || (uVar38 == 0xff)) {
              puVar57 = (undefined1 *)
                        (*(long *)(lVar68 + 0x80) + (ulong)(byte)(bVar80 ^ bVar5 ^ 0xff));
            }
            else {
              puVar57 = (undefined1 *)(*(long *)(lVar68 + 0x30) + (long)(int)uVar44);
            }
LAB_03067a3c:
            puVar75 = local_1f8;
          }
          else {
            uVar46 = param_3[0x107];
            puVar39[5] = param_3[0x105];
            puVar39[7] = uVar46;
            uVar46 = param_3[0x104];
            puVar39[6] = param_3[0x106];
            puVar39[4] = uVar46;
            lVar68 = param_3[0x11];
            uVar102 = *(undefined4 *)(lVar68 + 0xe8);
            iVar37 = *(int *)(lVar68 + 0xec);
            iVar63 = *(int *)(*(long *)(lVar68 + 0xd0) + 8);
            param_3[0x104] = *(long *)(lVar68 + 0xe0);
            *(short *)(param_3 + 0x105) = (short)uVar102;
            *(short *)((long)param_3 + 0x82a) = (short)iVar37;
            *(int *)((long)param_3 + 0x82c) = -(iVar37 + iVar63);
            *(undefined4 *)(lVar68 + 0xf8) = 0;
            puVar57 = (undefined1 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*param_3 + 8) + 0x4a8) + 0x10) + 0x80
                                ) + (ulong)(byte)(bVar80 ^ bVar5 ^ 0xff));
          }
          *puVar57 = 1;
        }
        else {
          uVar44 = (uint)*(ushort *)
                          (DAT_04434b38 +
                           (((ulong)(uVar38 + 1) & 0xff) * 0x21 + (ulong)(byte)(bVar80 + 1)) * 2 +
                          0x18);
          if (iVar37 != 0) goto LAB_030678a4;
LAB_03065b38:
          puVar39[4] = 0;
          *(undefined4 *)((long)puVar39 + 0x2c) = 0;
          puVar39[6] = 0;
          *(undefined4 *)((long)puVar39 + 0x3c) = 0;
          if (*(int *)((long)param_3 + 0x7fc) != 0) {
            lVar68 = *(long *)(*(long *)(*(long *)(*param_3 + 8) + 0x4a8) + 0x10);
            if (*(char *)(param_3[0x10e] + 5) == '\0') {
              puVar57 = (undefined1 *)(*(long *)(lVar68 + 0x30) + (long)(int)uVar44);
            }
            else {
              if (uVar61 != 0xff) {
                uVar38 = uVar61;
              }
              puVar57 = (undefined1 *)(*(long *)(lVar68 + 0x80) + (ulong)uVar38);
            }
            goto LAB_03067a3c;
          }
        }
        puVar39[9] = puVar75[1];
        puVar39[8] = *puVar75;
        if (*(int *)((long)param_3 + 0x84c) == 0) {
          uVar44 = (uint)*(short *)((long)puVar39 + 0x14);
          puVar39[1] = 0;
          *(undefined1 *)(puVar39 + 0xc) = 1;
        }
        else {
          puVar39[1] = param_3[0x108];
          *(short *)(puVar39 + 2) = (short)param_3[0x109];
        }
        piVar70 = (int *)(*(long *)(param_3[0x10] + 0x2ab8) + (long)(int)uVar44 * 4);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar70,0x10);
          if (bVar8) {
            *piVar70 = *piVar70 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        *puVar39 = ((ulong)*(uint *)(param_3 + 0x10f) & 0xffffff) << 0x19 |
                   (long)(int)uVar44 << 0x30 |
                   (ulong)(uint)(*(int *)((long)param_3 + 0x87c) << 2) & 0x3fffffc |
                   (ulong)*(byte *)(param_3[0xfd] + 0xb) & 3;
        lVar68 = param_3[0xfc];
        *(int *)(lVar68 + 0x18) = *(int *)(lVar68 + 0x18) + 0x70;
        *(int *)(lVar68 + 0x1c) = *(int *)(lVar68 + 0x1c) + 1;
      }
      plVar72 = *(long **)(param_3[0x10e] + 0x38);
      lVar68 = plVar72[3];
      iVar37 = *(int *)((long)plVar72 + 0x1c);
      iVar63 = *(int *)(*plVar72 + 8);
      param_3[0xfe] = plVar72[2];
      *(short *)(param_3 + 0xff) = (short)lVar68;
      *(short *)((long)param_3 + 0x7fa) = (short)iVar37;
      *(int *)((long)param_3 + 0x7fc) = -(iVar37 + iVar63);
      lVar68 = param_3[0x10];
      plVar72 = (long *)param_3[0x11];
      lVar60 = plVar72[3];
      iVar37 = *(int *)((long)plVar72 + 0x1c);
      iVar63 = *(int *)(*plVar72 + 8);
      param_3[0x108] = plVar72[2];
      *(short *)(param_3 + 0x109) = (short)lVar60;
      *(short *)((long)param_3 + 0x84a) = (short)iVar37;
      *(int *)((long)param_3 + 0x84c) = -(iVar37 + iVar63);
      uVar38 = *(int *)*param_3 + 1;
      puVar1 = (ulong *)(*(long *)(lVar68 + 0x5c0) +
                        (long)*(int *)(*(long *)(lVar68 + 0x170) +
                                      (-(ulong)(uVar38 >> 0x1f) & 0xffffffc000000000 |
                                      (ulong)uVar38 << 6)) * 0x40);
      do {
        uVar46 = *puVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar8) {
          *puVar1 = uVar46 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((uint)uVar46 < (uint)(uVar46 >> 0x20)) {
        local_f0 = CONCAT44(local_f0._4_4_,(uint)uVar46);
      }
      else {
        iVar37 = FUN_0332bfc4(lVar68 + 0x130,(ulong)uVar38,1,&local_f0);
        if (iVar37 == 0) break;
        uVar46 = local_f0 & 0xffffffff;
      }
      lVar68 = lVar68 + (ulong)*(uint *)(lVar68 + 0x128) * 0x10;
      uVar38 = (uint)uVar46;
      lVar60 = lVar68 + 0x18;
      if (*(uint *)(lVar68 + 0x30) <= uVar38) {
        lVar60 = lVar68 + 0x28;
      }
      plVar72 = (long *)(lVar60 + 0x10);
      do {
        puVar71 = (uint *)(plVar72 + -1);
        plVar72 = plVar72 + -2;
        uVar46 = (ulong)(uVar38 - *puVar71);
      } while (uVar38 < *puVar71);
      plVar74 = (long *)(*plVar72 + uVar46 * 0x10);
      if (plVar74 == (long *)0x0) break;
      lVar68 = *plVar74 + (ulong)*(ushort *)(*plVar72 + uVar46 * 0x10 + 8);
      param_3[0xfd] = lVar68 + 0x20;
      cVar7 = *(char *)(lVar68 + 0x2b);
      if (cVar7 == '\x01') {
        lVar60 = *(long *)(*(long *)(*param_3 + 8) + 0x500);
        *(int *)(param_3 + 0x12) = (int)param_3[0x12] + 1;
LAB_03065d0c:
        lVar60 = lVar60 + 0x20;
        uVar81 = 0xffff;
      }
      else {
        if (cVar7 == '\0') {
          lVar60 = *(long *)(*(long *)(*param_3 + 8) + 0x500) + 0x540;
        }
        else {
          lVar60 = *(long *)(*(long *)(*param_3 + 8) + 0x500);
          if (cVar7 == '\x02') {
            *(int *)((long)param_3 + 0x94) = *(int *)((long)param_3 + 0x94) + 1;
            goto LAB_03065d0c;
          }
          lVar60 = *(long *)(lVar60 + 0x950);
        }
        uVar81 = 0;
        *(int *)(param_3 + 0x13) = (int)param_3[0x13] + 1;
      }
      puVar64 = *(uint **)(lVar68 + 0x20);
      uVar58 = *(ushort *)(lVar68 + 0x28);
      puVar71 = (uint *)param_3[6];
      uVar38 = *(uint *)(param_3 + 7);
      if (puVar71 == puVar64) {
        iVar37 = uVar38 + 1;
      }
      else {
        if (uVar38 != 0) {
          if (uVar38 == (*puVar71 & 0xffff)) {
            lVar68 = param_3[5];
            puVar78 = (undefined8 *)param_3[8];
            *(undefined8 *)(*(long *)(lVar68 + 0x10) + (long)(int)puVar71[1] * 8) = 0;
            *(undefined1 *)(lVar68 + 0xc) = 1;
            iVar37 = *(int *)(puVar78 + 0xb);
            lVar68 = puVar78[1];
            *(uint **)(lVar68 + (long)iVar37 * 8) = puVar71;
            *(int *)(puVar78 + 0xb) = iVar37 + 1;
            if (*(int *)((long)puVar78 + 0x5c) <= iVar37 + 1) {
              (**(code **)(*(long *)*puVar78 + 0x28))
                        ((long *)*puVar78,lVar68 + (long)(iVar37 + -5) * 8,6);
              *(int *)(puVar78 + 0xb) = iVar37 + -5;
            }
          }
          else {
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar71,0x10);
              if (bVar8) {
                *puVar71 = *puVar71 - uVar38;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          *(undefined4 *)(param_3 + 7) = 0;
          *(undefined1 *)(param_3[5] + 0xc) = 1;
        }
        param_3[5] = lVar60;
        param_3[6] = (long)puVar64;
        iVar37 = 1;
      }
      lVar68 = param_3[0xc];
      *(int *)(param_3 + 7) = iVar37;
      param_3[2] = (long)puVar64;
      param_3[3] = (long)puVar64 + (ulong)uVar58 + 0x20;
      param_3[4] = 0x100000000;
      if (lVar68 != lVar60 + 0x100) {
        uVar38 = *(uint *)(param_3 + 0xe);
        if (uVar38 != 0) {
          puVar71 = (uint *)param_3[0xd];
          if (uVar38 == (*puVar71 & 0xffff)) {
            puVar78 = (undefined8 *)param_3[0xf];
            *(undefined8 *)(*(long *)(lVar68 + 0x10) + (long)(int)puVar71[1] * 8) = 0;
            *(undefined1 *)(lVar68 + 0xc) = 1;
            iVar37 = *(int *)(puVar78 + 0xb);
            lVar68 = puVar78[1];
            *(uint **)(lVar68 + (long)iVar37 * 8) = puVar71;
            *(int *)(puVar78 + 0xb) = iVar37 + 1;
            if (*(int *)((long)puVar78 + 0x5c) <= iVar37 + 1) {
              (**(code **)(*(long *)*puVar78 + 0x28))
                        ((long *)*puVar78,lVar68 + (long)(iVar37 + -5) * 8,6);
              *(int *)(puVar78 + 0xb) = iVar37 + -5;
            }
          }
          else {
            do {
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(puVar71,0x10);
              if (bVar8) {
                *puVar71 = *puVar71 - uVar38;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          *(undefined4 *)(param_3 + 0xe) = 0;
          *(undefined1 *)(param_3[0xc] + 0xc) = 1;
        }
        param_3[0xc] = lVar60 + 0x100;
      }
      *(undefined4 *)(param_3 + 0x10f) = *(undefined4 *)((long)puVar64 + (ulong)uVar58 + 0x24);
      pauVar69 = (undefined1 (*) [16])((long)puVar64 + (ulong)uVar58 + 0x20);
      lVar68 = *param_3;
      *(undefined4 *)((long)param_3 + 0x87c) = *(undefined4 *)*pauVar69;
      puVar48 = *(undefined4 **)
                 (*(long *)(lVar68 + 0x530) + (long)*(int *)(lVar68 + 0x538) * 8 + -8);
      uVar102 = *puVar48;
      uVar3 = *puVar48;
      *(undefined4 **)(lVar68 + 0x730) = puVar48;
      *(short *)(lVar68 + 0x738) = (short)((uint)uVar102 >> 0x10);
      *(short *)(lVar68 + 0x73a) = (short)uVar3;
      *(int *)(lVar68 + 0x73c) = -*(int *)(lVar68 + 0x528);
    } while (pauVar69 != (undefined1 (*) [16])0x0);
  }
  puVar47 = puVar79 + 0x18;
  puVar78 = local_110;
  if (*(long *)puVar47 == 0) goto joined_r0x0306602c;
  if (*(char *)((long)puVar79 + 0x7a) == '\0') {
    FUN_0301e778(puVar79,local_1b8,local_1b0);
    puVar78 = local_110;
    goto joined_r0x0306602c;
  }
  puVar71 = puVar79 + 0x14;
  uVar41 = **(undefined8 **)(puVar79 + 0x12);
  *(undefined4 *)(*(long *)puVar47 + 8) = 0x7777;
  plVar45 = *(long **)(puVar79 + 0x12);
  iVar37 = *(int *)((long)plVar45 + 0x1c);
  uVar38 = iVar37 + *(int *)(*plVar45 + 8) + puVar79[0x17];
  if (uVar38 != 0) {
    puVar54 = *(uint **)puVar71;
    puVar64 = (uint *)plVar45[2];
    if (puVar54 == puVar64) {
      uVar81 = *(ushort *)((long)puVar79 + 0x5a);
LAB_03065f7c:
      sVar62 = (short)iVar37;
    }
    else {
      uVar81 = *(ushort *)((long)puVar79 + 0x5a);
      if ((uint)uVar81 == (*puVar54 & 0xffff)) {
        puVar54 = *(uint **)(puVar54 + 2);
        puVar79[0x16] = 0;
        uVar81 = 0;
        puVar64 = (uint *)plVar45[2];
        uVar58 = 0;
        if (puVar54 == (uint *)plVar45[2]) goto LAB_03066e98;
      }
      else {
        uVar58 = uVar81;
        if (puVar54 == puVar64) {
LAB_03066e98:
          uVar81 = uVar58;
          puVar54 = puVar64;
          iVar37 = *(int *)((long)plVar45 + 0x1c);
          goto LAB_03065f7c;
        }
      }
      sVar62 = (short)*puVar54;
    }
    *(ushort *)((long)puVar79 + 0x5a) = sVar62 - uVar81;
    *(uint **)puVar71 = puVar54;
  }
  puVar79[0x17] = uVar38;
  uVar38 = *(uint *)((long)plVar45 + 0x1c);
  lVar68 = *plVar45;
  if (uVar38 == 0) {
    piVar70 = (int *)(lVar68 + 0x18);
    iVar37 = *piVar70;
    if (iVar37 < 2) goto LAB_03065fac;
    puVar78 = (undefined8 *)plVar45[1];
    iVar63 = *(int *)(puVar78 + 0xb);
    lVar76 = *(long *)(*(long *)(lVar68 + 0x10) + (long)(iVar37 + -2) * 8);
    lVar60 = puVar78[1];
    *(undefined8 *)(lVar60 + (long)iVar63 * 8) =
         *(undefined8 *)(*(long *)(lVar68 + 0x10) + (long)(iVar37 + -1) * 8);
    *(int *)(puVar78 + 0xb) = iVar63 + 1;
    if (*(int *)((long)puVar78 + 0x5c) <= iVar63 + 1) {
      (**(code **)(*(long *)*puVar78 + 0x28))((long *)*puVar78,lVar60 + (long)(iVar63 + -5) * 8,6);
      *(int *)(puVar78 + 0xb) = iVar63 + -5;
    }
    *(undefined8 *)(lVar76 + 8) = 0;
    uVar38 = 0xffffffff;
  }
  else {
LAB_03065fac:
    puVar64 = (uint *)plVar45[2];
    piVar70 = (int *)(lVar68 + 8);
    lVar68 = plVar45[3];
    puVar64[2] = 0;
    puVar64[3] = 0;
    *puVar64 = *puVar64 & 0xffff0000 | uVar38 & 0xffff;
    *puVar64 = *puVar64 & 0xffff | (int)lVar68 << 0x10;
  }
  *piVar70 = *piVar70 + uVar38;
  *plVar45 = 0;
  plVar45[2] = 0;
  FUN_032bf658(*(undefined8 *)(puVar79 + 0x12),uVar41,puVar71);
  plVar45 = *(long **)(puVar79 + 0x12);
  lVar68 = plVar45[3];
  iVar37 = *(int *)((long)plVar45 + 0x1c);
  iVar63 = *(int *)(*plVar45 + 8);
  *(long *)(puVar79 + 0x14) = plVar45[2];
  *(short *)(puVar79 + 0x16) = (short)lVar68;
  *(short *)((long)puVar79 + 0x5a) = (short)iVar37;
  puVar79[0x17] = -(iVar37 + iVar63);
  puVar47[0] = 0;
  puVar47[1] = 0;
  puVar79[0x1a] = 0;
  puVar79[0x1b] = 0;
  puVar78 = local_110;
joined_r0x0306602c:
  local_110 = puVar78;
  if ((local_108 != (uint *)0x0) && (local_120[0] != 0)) {
    if (local_100 == (*local_108 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_120[0] + 0x10) + (long)(int)local_108[1] * 8) = 0;
      *(undefined1 *)(local_120[0] + 0xc) = 1;
      iVar37 = *(int *)(puVar78 + 0xb);
      lVar68 = puVar78[1];
      *(uint **)(lVar68 + (long)iVar37 * 8) = local_108;
      *(int *)(puVar78 + 0xb) = iVar37 + 1;
      if (*(int *)((long)puVar78 + 0x5c) <= iVar37 + 1) {
        (**(code **)(*(long *)*puVar78 + 0x28))((long *)*puVar78,lVar68 + (long)(iVar37 + -5) * 8,6)
        ;
        *(int *)(puVar78 + 0xb) = iVar37 + -5;
      }
    }
    else {
      do {
        cVar7 = '\x01';
        bVar36 = (bool)ExclusiveMonitorPass(local_108,0x10);
        if (bVar36) {
          *local_108 = *local_108 - local_100;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  local_108 = (uint *)0x0;
  if ((local_fc != 0) && (*(char *)(local_120[0] + 0xc) == '\0')) {
    FUN_032bff9c(local_120);
  }
  return;
}


