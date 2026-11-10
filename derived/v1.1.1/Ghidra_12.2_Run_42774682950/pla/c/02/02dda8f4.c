/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dda8f4; name: FUN_02dda8f4
 */


/* WARNING: Removing unreachable block (ram,0x02ddcb7c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02dda8f4(long param_1,int *param_2)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  long lVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined1 uVar10;
  ushort uVar11;
  char cVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  short sVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  size_t sVar23;
  long lVar24;
  ushort *puVar25;
  ulong uVar26;
  undefined8 *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined1 *puVar30;
  undefined8 *puVar31;
  ulong uVar32;
  byte *pbVar33;
  long lVar34;
  byte *pbVar35;
  bool bVar36;
  ulong uVar37;
  long *plVar38;
  undefined8 uVar39;
  long lVar40;
  ulong uVar41;
  long *plVar42;
  long *plVar43;
  undefined8 *puVar44;
  undefined8 *puVar45;
  long *plVar46;
  uint *puVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  long *plVar51;
  uint *puVar52;
  long lVar53;
  int iVar54;
  long *plVar55;
  long lVar56;
  long *plVar57;
  undefined8 *puVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  undefined4 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar62 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uVar73;
  float fVar82;
  float fVar85;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar72;
  uint uVar83;
  uint uVar86;
  uint uVar88;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  int iVar84;
  int iVar87;
  int iVar89;
  undefined1 auVar81 [16];
  float fVar90;
  float fVar91;
  uint uVar92;
  float fVar93;
  undefined8 uVar94;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar101;
  undefined8 uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar108;
  undefined1 auVar109 [16];
  float fVar110;
  float fVar111;
  float fVar115;
  undefined8 uVar112;
  float fVar116;
  undefined1 auVar113 [16];
  float fVar117;
  undefined1 auVar114 [16];
  float fVar118;
  float fVar119;
  undefined8 uVar120;
  float fVar125;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar124;
  float fVar126;
  undefined1 auVar123 [16];
  float fVar127;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  ulong local_118;
  uint *local_f8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  size_t local_b8;
  long *local_b0;
  
  lVar24 = *(long *)(*(long *)(param_1 + 0x80) + 0x58);
  lVar20 = lVar24 + 0x1a8;
  if (*(char *)(lVar24 + 0x304) != '\0') {
    lVar20 = lVar24 + 0x1f0;
  }
  FUN_00956dac(&local_c8,lVar20);
  if (local_c8 == (long *)0x0) {
    plVar43 = (long *)0x0;
  }
  else {
    lVar20 = FUN_00a3e9dc(local_c8 + 0x1e,&local_d0);
    if (local_c8 != (long *)0x0) {
      lVar24 = local_c8[0xb];
      piVar1 = (int *)(lVar24 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar12 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar17) {
          *piVar1 = iVar19 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*local_c8 + 0x20))();
      }
    }
    plVar43 = (long *)0x0;
    if ((lVar20 != 0) && (plVar43 = *(long **)(lVar20 + 0x1f0), plVar43 != (long *)0x0)) {
      plVar21 = plVar43 + 10;
      do {
        cVar12 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar17) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
    }
  }
  if (((*PTR_DAT_0437a570 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar19 != 0)) {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
  }
  plVar21 = (long *)PTR_DAT_0437a578;
  if (plVar43[0x19] != 0) {
    plVar21 = (long *)(plVar43[0x19] + 0x88);
  }
  lVar20 = *plVar21;
  if (lVar20 != 0) {
    piVar1 = (int *)(lVar20 + 0x50);
    do {
      cVar12 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar17) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  plVar21 = *(long **)(param_1 + 0x148);
  *(long *)(param_1 + 0x148) = lVar20;
  if (plVar21 != (long *)0x0) {
    plVar51 = plVar21 + 10;
    do {
      iVar19 = (int)*plVar51 + -1;
      cVar12 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar51,0x10);
      if (bVar17) {
        *(int *)plVar51 = iVar19;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar19 == 0) {
      (**(code **)(*plVar21 + 0x10))();
    }
  }
  plVar21 = plVar43 + 10;
  do {
    iVar19 = (int)*plVar21 + -1;
    cVar12 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar17) {
      *(int *)plVar21 = iVar19;
      cVar12 = ExclusiveMonitorsStatus();
    }
  } while (cVar12 != '\0');
  if (iVar19 == 0) {
    (**(code **)(*plVar43 + 0x10))(plVar43);
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  puVar25 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar25 < 7) {
    return;
  }
  if (puVar25[3] == 0) {
    return;
  }
  if ((ulong)puVar25[2] == 0) {
    uVar59 = 0;
  }
  else {
    uVar59 = *(undefined4 *)((long)param_2 + (ulong)puVar25[2]);
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar59;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
     (uVar26 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar26 == 0)) {
    uVar59 = 0;
  }
  else {
    uVar59 = *(undefined4 *)((long)param_2 + uVar26);
  }
  FUN_02ddd4a0(param_1,uVar59);
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
     (uVar26 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar26 == 0)) {
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  else {
    cVar12 = *(char *)((long)param_2 + uVar26);
    *(bool *)(param_1 + 0xe0) = cVar12 != '\0';
    if (cVar12 != '\0') {
      if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xf) ||
         (uVar26 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[7], uVar26 == 0)) {
        lVar20 = 0;
      }
      else {
        puVar47 = (uint *)((long)param_2 + uVar26);
        lVar20 = (long)puVar47 + (ulong)*puVar47;
      }
      pcVar2 = (char *)(lVar20 + 4);
      local_b8 = strlen(pcVar2);
      bVar9 = *(byte *)(lVar20 + 4);
      local_c8 = (long *)&DAT_cbf29ce484222645;
      if (bVar9 != 0) {
        local_c8 = (long *)&DAT_cbf29ce484222645;
        pbVar35 = (byte *)(lVar20 + 5);
        do {
          local_c8 = (long *)(((ulong)local_c8 ^ (ulong)bVar9) * 0x100000001b3);
          bVar9 = *pbVar35;
          pbVar35 = pbVar35 + 1;
        } while (bVar9 != 0);
      }
      local_b0 = (long *)0x0;
      *(size_t *)(param_1 + 0xf8) = local_b8;
      plVar43 = *(long **)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(long **)(param_1 + 0xe8) = local_c8;
      *(char **)(param_1 + 0xf0) = pcVar2;
      local_c0 = pcVar2;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x20))();
      }
      lVar20 = *(long *)(param_1 + 0x148);
      if (lVar20 == 0) {
        iVar19 = -1;
      }
      else {
        puVar45 = *(undefined8 **)(lVar20 + 0x60);
        iVar19 = -1;
        for (puVar31 = *(undefined8 **)(lVar20 + 0x58); puVar31 != puVar45; puVar31 = puVar31 + 2) {
          sVar18 = FUN_02b6f370(*puVar31,&local_c8);
          if (-1 < sVar18) {
            iVar19 = (int)(short)(*(short *)((long)puVar31 + 10) + sVar18);
            if (iVar19 < 0) {
              iVar19 = -1;
            }
            break;
          }
        }
      }
      *(int *)(param_1 + 0x108) = iVar19;
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      uVar59 = 0;
      if ((0xc < *(ushort *)((long)param_2 - (long)*param_2)) &&
         (uVar26 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[6], uVar26 != 0)) {
        uVar59 = *(undefined4 *)((long)param_2 + uVar26);
      }
      *(undefined4 *)(param_1 + 0xe4) = uVar59;
    }
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar26 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar26 == 0)) {
    puVar47 = (uint *)0x0;
  }
  else {
    puVar47 = (uint *)((long)param_2 + uVar26);
    puVar47 = (uint *)((long)puVar47 + (ulong)*puVar47);
  }
  local_118 = (ulong)*puVar47;
  lVar22 = *(long *)(param_1 + 0x110);
  lVar20 = *(long *)(param_1 + 0x118);
  lVar34 = lVar20 - lVar22 >> 4;
  lVar24 = lVar34 * -0xed7303b5cc0ed73 - local_118;
  if (local_118 <= (ulong)(lVar34 * -0xed7303b5cc0ed73)) {
    if (lVar24 != 0) {
      lVar22 = lVar22 + local_118 * 0x450;
      while (lVar22 != lVar20) {
        lVar24 = lVar20 + -0x450;
        FUN_02de3354(lVar20 + -0x3e0);
        plVar43 = (long *)(lVar20 + -0x438);
        lVar20 = lVar24;
        if ((long *)*plVar43 != (long *)0x0) {
          (**(code **)(*(long *)*plVar43 + 0x20))();
        }
      }
      *(long *)(param_1 + 0x118) = lVar22;
    }
    goto LAB_02ddb448;
  }
  puVar31 = (undefined8 *)(param_1 + 0x128);
  if (local_118 + lVar34 * 0xed7303b5cc0ed73 <=
      (ulong)((*(long *)(param_1 + 0x120) - lVar20 >> 4) * -0xed7303b5cc0ed73)) {
    do {
      FUN_02de35a4(puVar31,lVar20);
      lVar20 = *(long *)(param_1 + 0x118) + 0x450;
      bVar17 = lVar24 != -1;
      lVar24 = lVar24 + 1;
      *(long *)(param_1 + 0x118) = lVar20;
    } while (bVar17);
    goto LAB_02ddb448;
  }
  uVar26 = *(ulong *)(param_1 + 0x130);
  if (0x7ffffffffffffffe < uVar26) {
    uVar26 = 0x7fffffffffffffff;
  }
  if (uVar26 < local_118) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar20 = *(long *)(param_1 + 0x120) - lVar22 >> 4;
  if ((ulong)(lVar20 * -0xed7303b5cc0ed73) < uVar26 >> 1) {
    uVar26 = lVar20 * -0x1dae6076b981dae6;
    if (local_118 <= uVar26) goto LAB_02ddacb4;
LAB_02ddacbc:
    lVar20 = (**(code **)(*(long *)*puVar31 + 0x10))((long *)*puVar31,local_118 * 0x450,0x10);
    if (lVar20 == 0) {
      (**(code **)(*(long *)*puVar31 + 0xb8))();
    }
  }
  else {
LAB_02ddacb4:
    local_118 = uVar26;
    if (uVar26 != 0) goto LAB_02ddacbc;
    local_118 = 0;
    lVar20 = 0;
  }
  puVar48 = (undefined8 *)(lVar20 + lVar34 * 0x10);
  puVar45 = puVar48;
  do {
    FUN_02de35a4(puVar31,puVar45);
    puVar45 = puVar45 + 0x8a;
    bVar17 = lVar24 != -1;
    lVar24 = lVar24 + 1;
  } while (bVar17);
  puVar50 = *(undefined8 **)(param_1 + 0x110);
  if (*(undefined8 **)(param_1 + 0x118) == puVar50) {
    puVar44 = puVar50;
  }
  else {
    puVar44 = *(undefined8 **)(param_1 + 0x118);
    puVar49 = puVar48;
    do {
      uVar39 = *puVar31;
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar19 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar15 = PTR_DAT_04379528;
        if (iVar19 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar15,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar24 != 0) {
        if (0xf < *(ulong *)(lVar24 + 0x80)) {
LAB_02ddd48c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar39;
        *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
      }
      puVar48 = puVar49 + -0x8a;
      puVar27 = puVar44 + -0x8a;
      *puVar48 = *puVar27;
      puVar49[-0x89] = puVar44[-0x89];
      puVar49[-0x88] = puVar44[-0x88];
      plVar43 = (long *)puVar44[-0x87];
      puVar49[-0x87] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      uVar39 = puVar44[-0x7f];
      uVar10 = *(undefined1 *)(puVar44 + -0x7e);
      puVar49[-0x81] = puVar44[-0x81];
      puVar49[-0x7f] = uVar39;
      uVar39 = puVar44[-0x83];
      puVar49[-0x85] = puVar44[-0x85];
      puVar49[-0x83] = uVar39;
      puVar49[-0x86] = puVar44[-0x86];
      uVar39 = puVar44[-0x84];
      puVar49[-0x82] = puVar44[-0x82];
      puVar49[-0x84] = uVar39;
      uVar39 = puVar44[-0x80];
      *(undefined1 *)(puVar49 + -0x7e) = uVar10;
      puVar49[-0x80] = uVar39;
      puVar49[-0x7c] = puVar44[-0x7c];
      puVar49[-0x7b] = puVar44[-0x7b];
      puVar49[-0x7a] = puVar44[-0x7a];
      plVar43 = (long *)puVar44[-0x79];
      puVar49[-0x79] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      puVar49[-0x78] = puVar44[-0x78];
      puVar49[-0x77] = puVar44[-0x77];
      puVar49[-0x76] = puVar44[-0x76];
      plVar43 = (long *)puVar44[-0x75];
      puVar49[-0x75] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      local_c8 = (long *)puVar44[-0x71];
      local_c0 = (char *)puVar44[-0x70];
      local_b8 = puVar44[-0x6f];
      local_b0 = (long *)puVar44[-0x6e];
      plVar43 = puVar49 + -0x73;
      puVar58 = puVar49 + -0x71;
      puVar49[-0x72] = 0;
      *plVar43 = 0;
      puVar49[-0x74] = 0;
      puVar49[-0x6e] = local_b0;
      puVar49[-0x6f] = local_b8;
      puVar49[-0x70] = local_c0;
      *puVar58 = local_c8;
      lVar22 = puVar44[-0x73] - puVar44[-0x74];
      if (lVar22 != 0) {
        uVar26 = puVar49[-0x70];
        if (0x7ffffffffffffffe < uVar26) {
          uVar26 = 0x7fffffffffffffff;
        }
        if (uVar26 < (ulong)(lVar22 >> 3)) goto LAB_02ddd494;
        plVar21 = (long *)(**(code **)(*(long *)*puVar58 + 0x10))((long *)*puVar58,lVar22,8);
        if (plVar21 == (long *)0x0) {
          (**(code **)(*(long *)*puVar58 + 0xb8))();
        }
        *plVar43 = (long)plVar21;
        puVar49[-0x74] = plVar21;
        puVar49[-0x72] = plVar21 + (lVar22 >> 3);
        plVar55 = (long *)puVar44[-0x73];
        for (plVar51 = (long *)puVar44[-0x74]; plVar51 != plVar55; plVar51 = plVar51 + 1) {
          uVar39 = *puVar58;
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar19 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar15 = PTR_DAT_04379528;
            if (iVar19 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar15,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar22 != 0) {
            if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_02ddd48c;
            *(undefined8 *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = uVar39;
            *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
          }
          lVar34 = *plVar51;
          *plVar21 = lVar34;
          if (lVar34 != 0) {
            piVar1 = (int *)(lVar34 + 0x50);
            do {
              cVar12 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar17) {
                *piVar1 = *piVar1 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
          }
          if (lVar22 != 0) {
            *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
          }
          plVar21 = (long *)(*plVar43 + 8);
          *plVar43 = (long)plVar21;
        }
      }
      memcpy(puVar49 + -0x6c,puVar44 + -0x6c,0xb0);
      plVar43 = (long *)puVar44[-0x56];
      puVar49[-0x56] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      plVar43 = (long *)puVar44[-0x55];
      puVar49[-0x55] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      plVar43 = (long *)puVar44[-0x54];
      puVar49[-0x54] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      plVar43 = (long *)puVar44[-0x53];
      puVar49[-0x53] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      plVar43 = (long *)puVar44[-0x52];
      puVar49[-0x52] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      plVar43 = (long *)puVar44[-0x51];
      puVar49[-0x51] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      plVar43 = (long *)puVar44[-0x50];
      puVar49[-0x50] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      plVar43 = (long *)puVar44[-0x4f];
      puVar49[-0x4f] = plVar43;
      if (plVar43 != (long *)0x0) {
        (**(code **)(*plVar43 + 0x18))();
      }
      uVar59 = *(undefined4 *)(puVar44 + -0x4e);
      *(undefined1 *)((long)puVar49 + -0x26c) = *(undefined1 *)((long)puVar44 + -0x26c);
      *(undefined4 *)(puVar49 + -0x4e) = uVar59;
      memcpy(puVar49 + -0x4c,puVar44 + -0x4c,0x260);
      if (lVar24 != 0) {
        *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
      }
      puVar44 = puVar27;
      puVar49 = puVar48;
    } while (puVar27 != puVar50);
    puVar50 = *(undefined8 **)(param_1 + 0x110);
    puVar44 = *(undefined8 **)(param_1 + 0x118);
  }
  *(undefined8 **)(param_1 + 0x110) = puVar48;
  *(undefined8 **)(param_1 + 0x118) = puVar45;
  lVar24 = *(long *)(param_1 + 0x120);
  *(ulong *)(param_1 + 0x120) = lVar20 + local_118 * 0x450;
  while (puVar44 != puVar50) {
    puVar45 = puVar44 + -0x8a;
    FUN_02de3354(puVar44 + -0x7c);
    plVar43 = puVar44 + -0x87;
    puVar44 = puVar45;
    if ((long *)*plVar43 != (long *)0x0) {
      (**(code **)(*(long *)*plVar43 + 0x20))();
    }
  }
  if (puVar50 != (undefined8 *)0x0) {
    plVar43 = (long *)*puVar31;
    lVar24 = lVar24 - (long)puVar50;
    uVar26 = (**(code **)(*plVar43 + 0xc0))(plVar43);
    if ((uVar26 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar43,puVar50,lVar24,0x10);
        goto LAB_02ddb448;
      }
    }
    (**(code **)(*plVar43 + 0x18))(plVar43,puVar50,lVar24,0x10);
  }
LAB_02ddb448:
  puVar52 = puVar47 + 1;
  if (*puVar47 != 0) {
    puVar3 = puVar52 + *puVar47;
    iVar19 = 0;
    uVar26 = 0xffffffffffffffff;
    fVar60 = *(float *)PTR_FloatPi_04372cf0;
    fVar119 = *(float *)PTR_Float1Divided2Pi_04372d20;
    fVar67 = *(float *)PTR_FloatPiDivided2_04372d38;
    fVar68 = -fVar67;
    fVar110 = -fVar60;
    fVar90 = -*(float *)PTR_SinCoefficients_04372d28;
    fVar101 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
    fVar107 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
    fVar118 = -*(float *)PTR_CosCoefficients_04372d40;
    fVar127 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
    fVar91 = *(float *)PTR_FloatDegree180_04372ce0;
    fVar69 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
    fVar93 = *(float *)PTR_Float2Pi_04372d30;
    local_f8 = puVar47 + 2;
    fVar108 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
    lVar20 = (long)puVar47 + 9;
    fVar124 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
    fVar125 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
    fVar126 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
    do {
      puVar30 = &DAT_cbf29ce484222645;
      uVar28 = (ulong)*puVar52;
      piVar1 = (int *)((long)puVar52 + uVar28);
      lVar24 = *(long *)(param_1 + 0x110);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar29 == 0)) {
        lVar22 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar1 + uVar29);
        lVar22 = (long)puVar4 + (ulong)*puVar4;
      }
      pcVar2 = (char *)(lVar22 + 4);
      uVar26 = uVar26 + 1;
      local_b8 = strlen(pcVar2);
      bVar9 = *(byte *)(lVar22 + 4);
      if (bVar9 != 0) {
        pbVar35 = (byte *)(lVar22 + 5);
        do {
          puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar9) * 0x100000001b3);
          bVar9 = *pbVar35;
          pbVar35 = pbVar35 + 1;
        } while (bVar9 != 0);
      }
      local_b0 = (long *)0x0;
      local_c8 = (long *)puVar30;
      local_c0 = pcVar2;
      if ((long)uVar26 <
          (long)((int)((ulong)(*(long *)(param_1 + 0x118) - lVar24) >> 4) * -0x5cc0ed73)) {
        puVar31 = (undefined8 *)(lVar24 + uVar26 * 0x450);
        *puVar31 = puVar30;
        puVar31[1] = pcVar2;
        puVar31[2] = local_b8;
        local_b0 = (long *)0x0;
        plVar43 = (long *)puVar31[3];
        puVar31[3] = 0;
        if (plVar43 != (long *)0x0) {
          (**(code **)(*plVar43 + 0x20))();
        }
        lVar22 = *(long *)(param_1 + 0x148);
        if (lVar22 == 0) {
          iVar54 = -1;
        }
        else {
          puVar31 = *(undefined8 **)(lVar22 + 0x58);
          puVar45 = *(undefined8 **)(lVar22 + 0x60);
          if (puVar31 == puVar45) {
            iVar54 = -1;
          }
          else {
            do {
              sVar18 = FUN_02b6f370(*puVar31,&local_c8);
              if (-1 < sVar18) {
                iVar54 = (int)(short)(*(short *)((long)puVar31 + 10) + sVar18);
                if (iVar54 < 0) {
                  iVar54 = -1;
                }
                goto LAB_02ddb744;
              }
              puVar31 = puVar31 + 2;
            } while (puVar45 != puVar31);
            iVar54 = -1;
          }
        }
LAB_02ddb744:
        *(int *)(*(long *)(param_1 + 0x110) + uVar26 * 0x450 + 0x380) = iVar54;
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      uVar11 = *(ushort *)((long)piVar1 + (6 - (long)*piVar1));
      puVar5 = (undefined4 *)((long)piVar1 + (ulong)uVar11);
      uVar59 = *puVar5;
      puVar8 = (undefined4 *)0x0;
      if (uVar11 != 0) {
        puVar8 = puVar5;
      }
      uVar63 = puVar8[1];
      lVar22 = lVar24 + uVar26 * 0x450;
      *(undefined4 *)(lVar22 + 0x28) = puVar5[2];
      *(undefined4 *)(lVar22 + 0x2c) = 0;
      *(ulong *)(lVar22 + 0x20) = CONCAT44(uVar63,uVar59);
      uVar11 = *(ushort *)((long)piVar1 + (8 - (long)*piVar1));
      puVar5 = (undefined4 *)((long)piVar1 + (ulong)uVar11);
      uVar59 = *puVar5;
      puVar8 = (undefined4 *)0x0;
      if (uVar11 != 0) {
        puVar8 = puVar5;
      }
      uVar63 = puVar8[1];
      *(undefined4 *)(lVar22 + 0x38) = puVar5[2];
      *(undefined4 *)(lVar22 + 0x3c) = 0;
      *(ulong *)(lVar22 + 0x30) = CONCAT44(uVar63,uVar59);
      uVar59 = 0;
      if (0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
        uVar59 = 0;
        if (uVar29 != 0) {
          uVar59 = *(undefined4 *)((long)piVar1 + uVar29);
        }
      }
      *(undefined4 *)(lVar24 + uVar26 * 0x450 + 0x40) = uVar59;
      uVar59 = 0;
      if (0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
        uVar59 = 0;
        if (uVar29 != 0) {
          uVar59 = *(undefined4 *)((long)piVar1 + uVar29);
        }
      }
      *(undefined4 *)(lVar24 + uVar26 * 0x450 + 0x44) = uVar59;
      uVar59 = 0;
      if (0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8];
        uVar59 = 0;
        if (uVar29 != 0) {
          uVar59 = *(undefined4 *)((long)piVar1 + uVar29);
        }
      }
      *(undefined4 *)(lVar24 + uVar26 * 0x450 + 0x48) = uVar59;
      uVar59 = 0;
      if (0x12 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9];
        uVar59 = 0;
        if (uVar29 != 0) {
          uVar59 = *(undefined4 *)((long)piVar1 + uVar29);
        }
      }
      *(undefined4 *)(lVar24 + uVar26 * 0x450 + 0x4c) = uVar59;
      fVar70 = 0.0;
      if (0x14 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10];
        fVar70 = 0.0;
        if (uVar29 != 0) {
          fVar70 = *(float *)((long)piVar1 + uVar29);
        }
      }
      local_c8._0_4_ = fVar70;
      if ((long)uVar26 <
          (long)((int)((ulong)(*(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110)) >> 4) *
                -0x5cc0ed73)) {
        puVar31 = &local_d0;
        if (0.0 <= fVar70) {
          puVar31 = &local_c8;
        }
        local_d0._0_4_ = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x110) + uVar26 * 0x450 + 0x50) = *(undefined4 *)puVar31
        ;
        lVar22 = *(long *)(param_1 + 0x110);
        fVar61 = 0.0;
        if (*(float *)(lVar22 + uVar26 * 0x450 + 0x50) != 0.0) {
          fVar61 = sinf((fVar60 / fVar91) * fVar70);
          lVar22 = *(long *)(param_1 + 0x110);
        }
        *(float *)(lVar22 + uVar26 * 0x450 + 0x3e0) = fVar61;
      }
      fVar70 = 0.0;
      if (0x16 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb];
        fVar70 = 0.0;
        if (uVar29 != 0) {
          fVar70 = *(float *)((long)piVar1 + uVar29);
        }
      }
      local_c8 = (long *)CONCAT44(local_c8._4_4_,fVar70);
      if ((long)uVar26 <
          (long)((int)((ulong)(*(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110)) >> 4) *
                -0x5cc0ed73)) {
        puVar31 = &local_d0;
        if (0.0 <= fVar70) {
          puVar31 = &local_c8;
        }
        local_d0._0_4_ = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x110) + uVar26 * 0x450 + 0x54) = *(undefined4 *)puVar31
        ;
        lVar22 = *(long *)(param_1 + 0x110);
        fVar61 = 0.0;
        if (*(float *)(lVar22 + uVar26 * 0x450 + 0x54) != 0.0) {
          fVar61 = sinf((fVar60 / fVar91) * fVar70);
          lVar22 = *(long *)(param_1 + 0x110);
        }
        *(float *)(lVar22 + uVar26 * 0x450 + 0x3e4) = fVar61;
      }
      lVar22 = (long)*piVar1;
      uVar11 = *(ushort *)((long)piVar1 - lVar22);
      uVar59 = 0;
      if (0x18 < uVar11) {
        uVar29 = (ulong)((ushort *)((long)piVar1 - lVar22))[0xc];
        uVar59 = 0;
        if (uVar29 != 0) {
          uVar59 = *(undefined4 *)((long)piVar1 + uVar29);
        }
      }
      if ((long)uVar26 <
          (long)((int)((ulong)(*(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110)) >> 4) *
                -0x5cc0ed73)) {
        *(undefined4 *)(*(long *)(param_1 + 0x110) + uVar26 * 0x450 + 0x58) = uVar59;
        lVar22 = (long)*piVar1;
        if (0x1a < *(ushort *)((long)piVar1 - lVar22)) goto LAB_02ddbacc;
LAB_02ddbab8:
        uVar59 = 0;
      }
      else {
        if (uVar11 < 0x1b) goto LAB_02ddbab8;
LAB_02ddbacc:
        uVar29 = (ulong)*(ushort *)((long)piVar1 + (0x1a - lVar22));
        uVar59 = 0;
        if (uVar29 != 0) {
          uVar59 = *(undefined4 *)((long)piVar1 + uVar29);
        }
      }
      *(undefined4 *)(lVar24 + uVar26 * 0x450 + 0x5c) = uVar59;
      lVar22 = *(long *)(param_1 + 0x110);
      lVar34 = (long)(int)uVar26;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1d) ||
         (uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xe], uVar29 == 0)) {
        *(undefined1 *)(lVar22 + lVar34 * 0x450 + 0x60) = 0;
      }
      else {
        cVar12 = *(char *)((long)piVar1 + uVar29);
        *(bool *)(lVar22 + lVar34 * 0x450 + 0x60) = cVar12 != '\0';
        if (cVar12 != '\0') {
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1f) ||
             (uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xf], uVar29 == 0)) {
LAB_02ddbb64:
            if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
               (iVar54 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar54 != 0)) {
              FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a0d0);
            }
            puVar30 = *(undefined1 **)PTR_DAT_0437a0d8;
            pbVar35 = *(byte **)(PTR_DAT_0437a0d8 + 8);
            sVar23 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
            plVar43 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
            if (plVar43 != (long *)0x0) {
              (**(code **)(*plVar43 + 0x18))(plVar43);
            }
          }
          else {
            uVar41 = (ulong)*(uint *)((long)piVar1 + uVar29);
            lVar40 = (long)((long)piVar1 + uVar29) + uVar41;
            pbVar35 = (byte *)(lVar40 + 4);
            if (lVar40 == 0) goto LAB_02ddbb64;
            sVar23 = strlen((char *)pbVar35);
            bVar9 = *pbVar35;
            if (bVar9 == 0) {
              puVar30 = &DAT_cbf29ce484222645;
            }
            else {
              puVar30 = &DAT_cbf29ce484222645;
              pbVar33 = (byte *)(lVar20 + uVar41 + uVar29 + uVar28);
              do {
                puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar9) * 0x100000001b3);
                bVar9 = *pbVar33;
                pbVar33 = pbVar33 + 1;
              } while (bVar9 != 0);
            }
            plVar43 = (long *)0x0;
          }
          lVar40 = lVar22 + lVar34 * 0x450;
          plVar21 = *(long **)(lVar40 + 0x88);
          *(undefined1 **)(lVar40 + 0x70) = puVar30;
          *(byte **)(lVar40 + 0x78) = pbVar35;
          *(size_t *)(lVar40 + 0x80) = sVar23;
          *(undefined8 *)(lVar40 + 0x88) = 0;
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x20))();
          }
          *(long **)(lVar40 + 0x88) = plVar43;
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x21) ||
             (uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x10], uVar29 == 0)) {
LAB_02ddbbe8:
            if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
               (iVar54 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar54 != 0)) {
              FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_0437a0d0);
            }
            puVar30 = *(undefined1 **)PTR_DAT_0437a0d8;
            pbVar35 = *(byte **)(PTR_DAT_0437a0d8 + 8);
            sVar23 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
            plVar43 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
            if (plVar43 != (long *)0x0) {
              (**(code **)(*plVar43 + 0x18))(plVar43);
            }
          }
          else {
            uVar41 = (ulong)*(uint *)((long)piVar1 + uVar29);
            lVar40 = (long)((long)piVar1 + uVar29) + uVar41;
            pbVar35 = (byte *)(lVar40 + 4);
            if (lVar40 == 0) goto LAB_02ddbbe8;
            sVar23 = strlen((char *)pbVar35);
            bVar9 = *pbVar35;
            if (bVar9 == 0) {
              puVar30 = &DAT_cbf29ce484222645;
            }
            else {
              lVar40 = uVar28 + uVar29 + uVar41;
              puVar30 = &DAT_cbf29ce484222645;
              do {
                puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar9) * 0x100000001b3);
                bVar9 = *(byte *)(lVar20 + lVar40);
                lVar40 = lVar40 + 1;
              } while (bVar9 != 0);
            }
            plVar43 = (long *)0x0;
          }
          lVar40 = lVar22 + lVar34 * 0x450;
          plVar21 = *(long **)(lVar40 + 0xa8);
          *(undefined1 **)(lVar40 + 0x90) = puVar30;
          *(byte **)(lVar40 + 0x98) = pbVar35;
          *(size_t *)(lVar40 + 0xa0) = sVar23;
          *(undefined8 *)(lVar40 + 0xa8) = 0;
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x20))();
          }
          *(long **)(lVar40 + 0xa8) = plVar43;
          lVar40 = lVar22 + lVar34 * 0x450;
          auVar14 = *(undefined1 (*) [12])
                     ((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x22 - (long)*piVar1)));
          *(ulong *)(lVar40 + 0xf8) = (ulong)auVar14._8_4_;
          *(long *)(lVar40 + 0xf0) = auVar14._0_8_;
          if ((((0x26 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x13], uVar29 != 0)) &&
              (puVar4 = (uint *)((long)piVar1 + uVar29),
              piVar6 = (int *)((long)puVar4 + (ulong)*puVar4), piVar6 != (int *)0x0)) &&
             (*piVar6 == 9)) {
            lVar40 = lVar22 + lVar34 * 0x450;
            *(undefined8 *)(lVar40 + 0x110) = *(undefined8 *)(piVar6 + 1);
            *(undefined8 *)(lVar40 + 0x120) = *(undefined8 *)(piVar6 + 4);
            *(undefined8 *)(lVar40 + 0x130) = *(undefined8 *)(piVar6 + 7);
            *(undefined8 *)(lVar40 + 0x140) = *(undefined8 *)(piVar6 + 10);
            *(undefined8 *)(lVar40 + 0x150) = *(undefined8 *)(piVar6 + 0xd);
            *(undefined8 *)(lVar40 + 0x160) = *(undefined8 *)(piVar6 + 0x10);
            *(undefined8 *)(lVar40 + 0x170) = *(undefined8 *)(piVar6 + 0x13);
            *(undefined8 *)(lVar40 + 0x180) = *(undefined8 *)(piVar6 + 0x16);
            *(undefined8 *)(lVar40 + 400) = *(undefined8 *)(piVar6 + 0x19);
            *(undefined4 *)(lVar40 + 0x1e0) = 0;
            puVar15 = PTR_DAT_0437a7c0;
            if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
               (iVar54 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar54 != 0)) {
              local_c8 = (long *)FUN_00938550();
              puVar16 = PTR_DAT_0437a7d0;
              FUN_00b0fde8(PTR_DAT_0437a7d0,&local_c8);
              FUN_00100250(PTR_LAB_0437a8d8,puVar16,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar15);
            }
            puVar16 = PTR_DAT_0437a7d0;
            plVar43 = *(long **)PTR_DAT_0437a7d0;
            if (plVar43 != (long *)0x0) {
              (**(code **)(*plVar43 + 0x18))(plVar43);
            }
            plVar21 = *(long **)(lVar40 + 0x1a0);
            *(long **)(lVar40 + 0x1a0) = plVar43;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x20))();
            }
            if (((*puVar15 & 1) == 0) && (iVar54 = __cxa_guard_acquire(puVar15), iVar54 != 0)) {
              local_c8 = (long *)FUN_00938550();
              FUN_00b0fde8(puVar16,&local_c8);
              FUN_00100250(PTR_LAB_0437a8d8,puVar16,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar15);
            }
            plVar21 = *(long **)puVar16;
            plVar43 = (long *)(lVar22 + lVar34 * 0x450 + 0x1a8);
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
            plVar51 = (long *)*plVar43;
            *plVar43 = (long)plVar21;
            if (plVar51 != (long *)0x0) {
              (**(code **)(*plVar51 + 0x20))();
            }
            if (((*puVar15 & 1) == 0) && (iVar54 = __cxa_guard_acquire(puVar15), iVar54 != 0)) {
              local_c8 = (long *)FUN_00938550();
              FUN_00b0fde8(puVar16,&local_c8);
              FUN_00100250(PTR_LAB_0437a8d8,puVar16,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar15);
            }
            plVar21 = *(long **)puVar16;
            plVar43 = (long *)(lVar22 + lVar34 * 0x450 + 0x1b0);
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
            plVar51 = (long *)*plVar43;
            *plVar43 = (long)plVar21;
            if (plVar51 != (long *)0x0) {
              (**(code **)(*plVar51 + 0x20))();
            }
            if (((*puVar15 & 1) == 0) && (iVar54 = __cxa_guard_acquire(puVar15), iVar54 != 0)) {
              local_c8 = (long *)FUN_00938550();
              FUN_00b0fde8(puVar16,&local_c8);
              FUN_00100250(PTR_LAB_0437a8d8,puVar16,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar15);
            }
            plVar21 = *(long **)puVar16;
            plVar43 = (long *)(lVar22 + lVar34 * 0x450 + 0x1b8);
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
            plVar51 = (long *)*plVar43;
            *plVar43 = (long)plVar21;
            if (plVar51 != (long *)0x0) {
              (**(code **)(*plVar51 + 0x20))();
            }
            if (((*puVar15 & 1) == 0) && (iVar54 = __cxa_guard_acquire(puVar15), iVar54 != 0)) {
              local_c8 = (long *)FUN_00938550();
              FUN_00b0fde8(puVar16,&local_c8);
              FUN_00100250(PTR_LAB_0437a8d8,puVar16,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar15);
            }
            plVar21 = *(long **)puVar16;
            plVar43 = (long *)(lVar22 + lVar34 * 0x450 + 0x1c0);
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
            plVar51 = (long *)*plVar43;
            *plVar43 = (long)plVar21;
            if (plVar51 != (long *)0x0) {
              (**(code **)(*plVar51 + 0x20))();
            }
            if (((*puVar15 & 1) == 0) && (iVar54 = __cxa_guard_acquire(puVar15), iVar54 != 0)) {
              local_c8 = (long *)FUN_00938550();
              FUN_00b0fde8(puVar16,&local_c8);
              FUN_00100250(PTR_LAB_0437a8d8,puVar16,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar15);
            }
            plVar21 = *(long **)puVar16;
            plVar43 = (long *)(lVar22 + lVar34 * 0x450 + 0x1c8);
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
            plVar51 = (long *)*plVar43;
            *plVar43 = (long)plVar21;
            if (plVar51 != (long *)0x0) {
              (**(code **)(*plVar51 + 0x20))();
            }
            if (((*puVar15 & 1) == 0) && (iVar54 = __cxa_guard_acquire(puVar15), iVar54 != 0)) {
              local_c8 = (long *)FUN_00938550();
              FUN_00b0fde8(puVar16,&local_c8);
              FUN_00100250(PTR_LAB_0437a8d8,puVar16,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar15);
            }
            plVar21 = *(long **)puVar16;
            plVar43 = (long *)(lVar22 + lVar34 * 0x450 + 0x1d0);
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
            plVar51 = (long *)*plVar43;
            *plVar43 = (long)plVar21;
            if (plVar51 != (long *)0x0) {
              (**(code **)(*plVar51 + 0x20))();
            }
            if (((*puVar15 & 1) == 0) && (iVar54 = __cxa_guard_acquire(puVar15), iVar54 != 0)) {
              local_c8 = (long *)FUN_00938550();
              FUN_00b0fde8(puVar16,&local_c8);
              FUN_00100250(PTR_LAB_0437a8d8,puVar16,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar15);
            }
            plVar21 = *(long **)puVar16;
            plVar43 = (long *)(lVar22 + lVar34 * 0x450 + 0x1d8);
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
            plVar51 = (long *)*plVar43;
            *plVar43 = (long)plVar21;
            if (plVar51 != (long *)0x0) {
              (**(code **)(*plVar51 + 0x20))();
            }
            if ((0x2e < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
               (uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x17], uVar29 != 0)) {
              uVar41 = (ulong)*(uint *)((long)piVar1 + uVar29);
              piVar6 = (int *)((long)((long)piVar1 + uVar29) + uVar41);
              if ((piVar6 != (int *)0x0) && (0 < *piVar6)) {
                plVar43 = (long *)(lVar22 + (long)iVar19 * 0x450 + 0x1a0);
                lVar7 = uVar28 + uVar41 + uVar29;
                lVar53 = 0;
                lVar56 = 0;
                do {
                  uVar29 = (ulong)*(uint *)((long)puVar47 + lVar53 + lVar7 + 8);
                  if (*(char *)((long)puVar47 + lVar53 + uVar29 + lVar7 + 0xc) == '\0') {
                    plVar21 = (long *)FUN_00938550();
                    if (plVar21 != (long *)0x0) {
                      (**(code **)(*plVar21 + 0x18))(plVar21);
                    }
                  }
                  else {
                    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
                       (iVar54 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar54 != 0)) {
                      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379cd0);
                    }
                    uVar39 = *(undefined8 *)PTR_DAT_04379cd8;
                    *(undefined8 *)PTR_DAT_04379ce0 = uVar39;
                    FUN_02a47cd8(&local_c8,uVar39,(long)puVar47 + lVar53 + uVar29 + lVar7 + 0xc);
                    plVar21 = local_c8;
                  }
                  plVar51 = (long *)*plVar43;
                  *plVar43 = 0;
                  if (plVar51 != (long *)0x0) {
                    (**(code **)(*plVar51 + 0x20))();
                  }
                  *plVar43 = (long)plVar21;
                  *(int *)(lVar40 + 0x1e0) = *(int *)(lVar40 + 0x1e0) + 1;
                  if (lVar53 == 0x1c) break;
                  lVar56 = lVar56 + 1;
                  lVar53 = lVar53 + 4;
                  plVar43 = plVar43 + 1;
                } while (lVar56 < *piVar6);
              }
            }
            lVar56 = *(long *)(*(long *)(param_1 + 0x80) + 0x58);
            lVar40 = lVar56 + 0x1a8;
            if (*(char *)(lVar56 + 0x304) != '\0') {
              lVar40 = lVar56 + 0x1f0;
            }
            FUN_00956dac(&local_c8,lVar40);
            if (local_c8 == (long *)0x0) {
              plVar43 = (long *)0x0;
            }
            else {
              lVar40 = FUN_00a3e9dc(local_c8 + 0x1e,&local_d0);
              if (local_c8 != (long *)0x0) {
                lVar56 = local_c8[0xb];
                piVar6 = (int *)(lVar56 + 0xc);
                do {
                  iVar54 = *piVar6;
                  cVar12 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                  if (bVar17) {
                    *piVar6 = iVar54 + -1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if (iVar54 + -1 == 0) {
                  *(undefined8 *)(lVar56 + 0x18) = 0;
                  (**(code **)(*local_c8 + 0x20))();
                }
              }
              if (lVar40 == 0) {
                plVar43 = (long *)0x0;
              }
              else {
                plVar43 = *(long **)(lVar40 + 0x1f0);
                if (plVar43 != (long *)0x0) {
                  plVar21 = plVar43 + 10;
                  do {
                    cVar12 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                    if (bVar17) {
                      *(int *)plVar21 = (int)*plVar21 + 1;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                }
              }
            }
            lVar40 = lVar22 + lVar34 * 0x450;
            plVar55 = (long *)(lVar40 + 0xb8);
            plVar21 = (long *)*plVar55;
            iVar54 = (int)(plVar43[0xc] - plVar43[0xb] >> 3) * -0x49249249;
            plVar51 = (long *)(lVar40 + 0xb0);
            lVar40 = *plVar51;
            uVar29 = (ulong)iVar54;
            uVar41 = (long)plVar21 - lVar40 >> 3;
            if (uVar41 < uVar29) {
              lVar56 = lVar22 + lVar34 * 0x450;
              plVar38 = (long *)(lVar56 + 0xc0);
              puVar31 = (undefined8 *)(lVar56 + 200);
              if ((ulong)(*plVar38 - (long)plVar21 >> 3) < uVar29 - uVar41) {
                uVar37 = *(ulong *)(lVar22 + lVar34 * 0x450 + 0xd0);
                if (0x7ffffffffffffffe < uVar37) {
                  uVar37 = 0x7fffffffffffffff;
                }
                if (uVar37 < uVar29) {
LAB_02ddd494:
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar40 = *plVar38 - lVar40;
                uVar32 = lVar40 >> 2;
                if (uVar29 <= uVar32) {
                  uVar29 = uVar32;
                }
                if ((ulong)(lVar40 >> 3) < uVar37 >> 1) {
                  uVar37 = uVar29;
                }
                if (uVar37 == 0) {
                  lVar22 = 0;
                }
                else {
                  lVar22 = (**(code **)(*(long *)*puVar31 + 0x10))((long *)*puVar31,uVar37 << 3,8);
                  if (lVar22 == 0) {
                    (**(code **)(*(long *)*puVar31 + 0xb8))();
                  }
                }
                plVar42 = (long *)(lVar22 + uVar41 * 8);
                lVar40 = uVar41 - (long)iVar54;
                plVar21 = plVar42;
                do {
                  FUN_02de3a30(puVar31,plVar21);
                  plVar21 = plVar21 + 1;
                  bVar17 = lVar40 != -1;
                  lVar40 = lVar40 + 1;
                } while (bVar17);
                plVar46 = (long *)*plVar51;
                plVar57 = (long *)*plVar55;
                if (plVar57 == plVar46) {
                  plVar57 = plVar46;
                }
                else {
                  do {
                    uVar39 = *puVar31;
                    if (((*PTR_DAT_04379520 & 1) == 0) &&
                       (iVar54 = __cxa_guard_acquire(PTR_DAT_04379520), iVar54 != 0)) {
                      FUN_008a62a4(PTR_DAT_04379528);
                      FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379520);
                    }
                    lVar40 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
                    if (lVar40 != 0) {
                      if (0xf < *(ulong *)(lVar40 + 0x80)) goto LAB_02ddd48c;
                      *(undefined8 *)(lVar40 + *(ulong *)(lVar40 + 0x80) * 8) = uVar39;
                      *(long *)(lVar40 + 0x80) = *(long *)(lVar40 + 0x80) + 1;
                    }
                    plVar57 = plVar57 + -1;
                    lVar56 = *plVar57;
                    plVar42 = plVar42 + -1;
                    *plVar42 = lVar56;
                    if (lVar56 != 0) {
                      piVar6 = (int *)(lVar56 + 0x50);
                      do {
                        cVar12 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(piVar6,0x10);
                        if (bVar17) {
                          *piVar6 = *piVar6 + 1;
                          cVar12 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar12 != '\0');
                    }
                    if (lVar40 != 0) {
                      *(long *)(lVar40 + 0x80) = *(long *)(lVar40 + 0x80) + -1;
                    }
                  } while (plVar57 != plVar46);
                  plVar46 = (long *)*plVar55;
                  plVar57 = (long *)*plVar51;
                }
                *plVar51 = (long)plVar42;
                *plVar55 = (long)plVar21;
                lVar40 = *plVar38;
                *plVar38 = lVar22 + uVar37 * 8;
                while (plVar46 != plVar57) {
                  plVar46 = plVar46 + -1;
                  plVar21 = (long *)*plVar46;
                  if (plVar21 != (long *)0x0) {
                    plVar51 = plVar21 + 10;
                    do {
                      iVar54 = (int)*plVar51 + -1;
                      cVar12 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                      if (bVar17) {
                        *(int *)plVar51 = iVar54;
                        cVar12 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar12 != '\0');
                    if (iVar54 == 0) {
                      (**(code **)(*plVar21 + 0x10))();
                    }
                  }
                }
                if (plVar57 != (long *)0x0) {
                  plVar21 = (long *)*puVar31;
                  uVar29 = (**(code **)(*plVar21 + 0xc0))(plVar21);
                  if ((uVar29 & 1) != 0) {
                    lVar22 = tpidr_el0;
                    if (*(char *)(lVar22 + 0x38d488) == '\0') {
                      *(undefined1 *)(lVar22 + 0x38d488) = 1;
                      *(undefined8 *)(lVar22 + 0x38d478) = 0;
                      *(undefined8 *)(lVar22 + 0x38d480) = 0;
                      __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
                    }
                    if (0 < *(int *)(lVar22 + 0x38d480)) {
                      FUN_02bcc824(plVar21,plVar57,lVar40 - (long)plVar57,8);
                      goto LAB_02ddc4f8;
                    }
                  }
                  (**(code **)(*plVar21 + 0x18))(plVar21,plVar57,lVar40 - (long)plVar57,8);
                }
              }
              else {
                lVar22 = uVar41 - (long)iVar54;
                do {
                  FUN_02de3a30(puVar31,plVar21);
                  plVar21 = (long *)(*plVar55 + 8);
                  bVar17 = lVar22 != -1;
                  lVar22 = lVar22 + 1;
                  *plVar55 = (long)plVar21;
                } while (bVar17);
              }
            }
            else if (uVar29 < uVar41) {
              plVar51 = (long *)(lVar40 + uVar29 * 8);
              while (plVar51 != plVar21) {
                plVar21 = plVar21 + -1;
                plVar38 = (long *)*plVar21;
                if (plVar38 != (long *)0x0) {
                  plVar42 = plVar38 + 10;
                  do {
                    iVar54 = (int)*plVar42 + -1;
                    cVar12 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(plVar42,0x10);
                    if (bVar17) {
                      *(int *)plVar42 = iVar54;
                      cVar12 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar12 != '\0');
                  if (iVar54 == 0) {
                    (**(code **)(*plVar38 + 0x10))();
                  }
                }
              }
              *plVar55 = (long)plVar51;
            }
LAB_02ddc4f8:
            *(undefined1 *)(*(long *)(param_1 + 0x110) + lVar34 * 0x450 + 0x1e4) = 0;
            local_c8 = plVar43;
            if (plVar43 == (long *)0x0) {
              FUN_02ddd874(param_1,*(undefined4 *)((long)plVar43 + 0x174),&local_c8,
                           uVar26 & 0xffffffff);
            }
            else {
              plVar21 = plVar43 + 10;
              do {
                cVar12 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar17) {
                  *(int *)plVar21 = (int)*plVar21 + 1;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              FUN_02ddd874(param_1,*(undefined4 *)((long)plVar43 + 0x174),&local_c8,
                           uVar26 & 0xffffffff);
              if (plVar43 != (long *)0x0) {
                plVar51 = plVar43 + 10;
                do {
                  iVar54 = (int)*plVar51 + -1;
                  cVar12 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar51,0x10);
                  if (bVar17) {
                    *(int *)plVar51 = iVar54;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                if (iVar54 == 0) {
                  (**(code **)(*plVar43 + 0x10))(plVar43);
                }
              }
              do {
                iVar54 = (int)*plVar21 + -1;
                cVar12 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                if (bVar17) {
                  *(int *)plVar21 = iVar54;
                  cVar12 = ExclusiveMonitorsStatus();
                }
              } while (cVar12 != '\0');
              if (iVar54 == 0) {
                (**(code **)(*plVar43 + 0x10))();
              }
            }
          }
        }
      }
      lVar22 = *(long *)(param_1 + 0x110);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x25) {
        bVar17 = false;
      }
      else {
        uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x12];
        bVar17 = false;
        if (uVar29 != 0) {
          bVar17 = *(char *)((long)piVar1 + uVar29) != '\0';
        }
      }
      *(bool *)(lVar22 + lVar34 * 0x450 + 0x1f0) = bVar17;
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x29) ||
         (uVar29 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x14], uVar29 == 0)) {
        bVar36 = false;
      }
      else {
        bVar36 = false;
        if (*(char *)((long)piVar1 + uVar29) != '\0') {
          bVar36 = bVar17;
        }
      }
      lVar40 = lVar22 + lVar34 * 0x450;
      *(bool *)(lVar40 + 0x290) = bVar36;
      if (bVar17) {
        puVar25 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar11 = *puVar25;
        if (0x1c < uVar11) {
          if ((ulong)puVar25[0xe] == 0) {
            if (0x26 < uVar11) goto LAB_02ddc68c;
          }
          else if ((0x26 < uVar11) && (*(char *)((long)piVar1 + (ulong)puVar25[0xe]) == '\0')) {
LAB_02ddc68c:
            uVar29 = (ulong)puVar25[0x13];
            if (uVar29 != 0) {
              uVar41 = (ulong)*(uint *)((long)piVar1 + uVar29);
              piVar6 = (int *)((long)((long)piVar1 + uVar29) + uVar41);
              if ((piVar6 != (int *)0x0) && (*piVar6 == 9)) {
                lVar56 = 0;
                puVar31 = (undefined8 *)((long)local_f8 + uVar41 + uVar29 + uVar28);
                do {
                  auVar113 = NEON_fmov(0xbf800000,4);
                  fVar70 = (float)*puVar31;
                  fVar71 = fVar119 * fVar70;
                  fVar61 = (float)((ulong)*puVar31 >> 0x20);
                  fVar82 = fVar119 * fVar61;
                  fVar85 = fVar119 * *(float *)(puVar31 + 1);
                  auVar74._0_4_ =
                       (int)(fVar71 + (float)(-(uint)(0.0 <= fVar71) & 0x80000000 ^ 0xbf000000));
                  auVar74._4_4_ =
                       (int)(fVar82 + (float)(-(uint)(0.0 <= fVar82) & 0x80000000 ^ 0xbf000000));
                  auVar74._8_4_ =
                       (int)(fVar85 + (float)(-(uint)(0.0 <= fVar85) & 0x80000000 ^ 0xbf000000));
                  auVar74._12_4_ =
                       (int)(fVar119 * 0.0 +
                            (float)(-(uint)(0.0 <= fVar119 * 0.0) & 0x80000000 ^ 0xbf000000));
                  auVar75 = NEON_scvtf(auVar74,4);
                  fVar70 = fVar70 - auVar75._0_4_ * fVar93;
                  fVar61 = fVar61 - auVar75._4_4_ * fVar93;
                  fVar85 = *(float *)(puVar31 + 1) - auVar75._8_4_ * fVar93;
                  fVar65 = 0.0 - auVar75._12_4_ * fVar93;
                  uVar72 = -(uint)(fVar67 < fVar70);
                  uVar83 = -(uint)(fVar67 < fVar61);
                  uVar86 = -(uint)(fVar67 < fVar85);
                  uVar88 = -(uint)(fVar67 < fVar65);
                  fVar70 = (float)((uint)fVar70 ^ ((uint)fVar70 ^ (uint)(fVar60 - fVar70)) & uVar72)
                  ;
                  fVar61 = (float)((uint)fVar61 ^ ((uint)fVar61 ^ (uint)(fVar60 - fVar61)) & uVar83)
                  ;
                  fVar85 = (float)((uint)fVar85 ^ ((uint)fVar85 ^ (uint)(fVar60 - fVar85)) & uVar86)
                  ;
                  fVar65 = (float)((uint)fVar65 ^ ((uint)fVar65 ^ (uint)(fVar60 - fVar65)) & uVar88)
                  ;
                  auVar75 = NEON_fmov(0x3f800000,4);
                  uVar92 = -(uint)(fVar70 < fVar68);
                  uVar98 = -(uint)(fVar61 < fVar68);
                  uVar99 = -(uint)(fVar85 < fVar68);
                  uVar100 = -(uint)(fVar65 < fVar68);
                  auVar76[0] = (byte)uVar92 | (byte)uVar72;
                  auVar76[1] = (byte)(uVar92 >> 8) | (byte)(uVar72 >> 8);
                  auVar76[2] = (byte)(uVar92 >> 0x10) | (byte)(uVar72 >> 0x10);
                  auVar76[3] = (byte)(uVar92 >> 0x18) | (byte)(uVar72 >> 0x18);
                  auVar76[4] = (byte)uVar98 | (byte)uVar83;
                  auVar76[5] = (byte)(uVar98 >> 8) | (byte)(uVar83 >> 8);
                  auVar76[6] = (byte)(uVar98 >> 0x10) | (byte)(uVar83 >> 0x10);
                  auVar76[7] = (byte)(uVar98 >> 0x18) | (byte)(uVar83 >> 0x18);
                  auVar76[8] = (byte)uVar99 | (byte)uVar86;
                  auVar76[9] = (byte)(uVar99 >> 8) | (byte)(uVar86 >> 8);
                  auVar76[10] = (byte)(uVar99 >> 0x10) | (byte)(uVar86 >> 0x10);
                  auVar76[0xb] = (byte)(uVar99 >> 0x18) | (byte)(uVar86 >> 0x18);
                  auVar76[0xc] = (byte)uVar100 | (byte)uVar88;
                  auVar76[0xd] = (byte)(uVar100 >> 8) | (byte)(uVar88 >> 8);
                  auVar76[0xe] = (byte)(uVar100 >> 0x10) | (byte)(uVar88 >> 0x10);
                  auVar76[0xf] = (byte)(uVar100 >> 0x18) | (byte)(uVar88 >> 0x18);
                  fVar64 = auVar75._8_4_;
                  fVar66 = auVar75._12_4_;
                  fVar71 = auVar75._0_4_;
                  fVar82 = auVar75._4_4_;
                  fVar70 = (float)((uint)fVar70 ^ ((uint)fVar70 ^ (uint)(fVar110 - fVar70)) & uVar92
                                  );
                  fVar61 = (float)((uint)fVar61 ^ ((uint)fVar61 ^ (uint)(fVar110 - fVar61)) & uVar98
                                  );
                  fVar85 = (float)((uint)fVar85 ^ ((uint)fVar85 ^ (uint)(fVar110 - fVar85)) & uVar99
                                  );
                  fVar65 = (float)((uint)fVar65 ^
                                  ((uint)fVar65 ^ (uint)(fVar110 - fVar65)) & uVar100);
                  auVar75 = auVar75 ^ (auVar75 ^ auVar113) & auVar76;
                  fVar111 = fVar70 * fVar70;
                  fVar115 = fVar61 * fVar61;
                  fVar116 = fVar85 * fVar85;
                  fVar117 = fVar65 * fVar65;
                  auVar95._0_4_ =
                       fVar70 * (fVar71 + fVar111 * (fVar107 +
                                                    fVar111 * (fVar124 +
                                                              fVar111 * (fVar101 +
                                                                        fVar111 * (fVar108 +
                                                                                  fVar111 * fVar90))
                                                              )));
                  auVar95._4_4_ =
                       fVar61 * (fVar82 + fVar115 * (fVar107 +
                                                    fVar115 * (fVar124 +
                                                              fVar115 * (fVar101 +
                                                                        fVar115 * (fVar108 +
                                                                                  fVar115 * fVar90))
                                                              )));
                  auVar95._8_4_ =
                       fVar85 * (fVar64 + fVar116 * (fVar107 +
                                                    fVar116 * (fVar124 +
                                                              fVar116 * (fVar101 +
                                                                        fVar116 * (fVar108 +
                                                                                  fVar116 * fVar90))
                                                              )));
                  auVar95._12_4_ =
                       fVar65 * (fVar66 + fVar117 * (fVar107 +
                                                    fVar117 * (fVar124 +
                                                              fVar117 * (fVar101 +
                                                                        fVar117 * (fVar108 +
                                                                                  fVar117 * fVar90))
                                                              )));
                  auVar77._0_4_ =
                       auVar75._0_4_ *
                       (fVar71 + fVar111 * (fVar69 + fVar111 * (fVar126 +
                                                               fVar111 * (fVar127 +
                                                                         fVar111 * (fVar125 +
                                                                                   fVar111 * fVar118
                                                                                   )))));
                  auVar77._4_4_ =
                       auVar75._4_4_ *
                       (fVar82 + fVar115 * (fVar69 + fVar115 * (fVar126 +
                                                               fVar115 * (fVar127 +
                                                                         fVar115 * (fVar125 +
                                                                                   fVar115 * fVar118
                                                                                   )))));
                  auVar77._8_4_ =
                       auVar75._8_4_ *
                       (fVar64 + fVar116 * (fVar69 + fVar116 * (fVar126 +
                                                               fVar116 * (fVar127 +
                                                                         fVar116 * (fVar125 +
                                                                                   fVar116 * fVar118
                                                                                   )))));
                  auVar77._12_4_ =
                       auVar75._12_4_ *
                       (fVar66 + fVar117 * (fVar69 + fVar117 * (fVar126 +
                                                               fVar117 * (fVar127 +
                                                                         fVar117 * (fVar125 +
                                                                                   fVar117 * fVar118
                                                                                   )))));
                  auVar75 = NEON_ext(auVar95,auVar95,8,1);
                  auVar113 = NEON_ext(auVar77,auVar77,8,1);
                  fVar70 = auVar113._0_4_;
                  fVar61 = auVar75._0_4_;
                  fVar65 = auVar77._4_4_ * (float)DAT_0388a618;
                  fVar111 = fVar61 * auVar77._0_4_ * (float)_DAT_03889200 +
                            fVar70 * auVar95._4_4_ * auVar95._0_4_;
                  fVar115 = fVar70 * auVar77._0_4_ * (float)((ulong)_DAT_03889200 >> 0x20) +
                            fVar61 * auVar95._4_4_ * auVar95._0_4_;
                  fVar116 = auVar77._0_4_ * 0.0 * (float)_UNK_03889208 + fVar65 * auVar95._0_4_;
                  fVar117 = fVar70 * auVar77._4_4_;
                  fVar85 = fVar70 * auVar95._0_4_ * (float)((ulong)_DAT_03889d50 >> 0x20) +
                           fVar61 * auVar95._4_4_ * auVar77._0_4_;
                  fVar65 = auVar95._0_4_ * 0.0 * (float)_UNK_03889d58 + fVar65 * auVar77._0_4_;
                  uVar39 = NEON_ext(CONCAT44(fVar61 * auVar77._4_4_,fVar117),
                                    CONCAT44(fVar85,fVar61 * auVar95._0_4_ * (float)_DAT_03889d50 +
                                                    fVar70 * auVar95._4_4_ * auVar77._0_4_),4,1);
                  auVar121._0_4_ = (float)uVar39 + fVar111;
                  fVar70 = (float)((ulong)uVar39 >> 0x20);
                  auVar121._4_4_ = fVar70 + -auVar95._4_4_;
                  auVar121._8_4_ = fVar116 + fVar85;
                  auVar121._12_4_ = 0;
                  auVar128._0_4_ = (float)uVar39 - fVar111;
                  auVar128._4_4_ = fVar70 - -auVar95._4_4_;
                  auVar128._8_4_ = fVar116 - fVar85;
                  auVar128._12_4_ = 0;
                  fVar71 = (float)_DAT_03889820 * fVar117 + (float)_DAT_0388a450 * fVar115 +
                           (float)_DAT_03889eb0 * fVar65 + fVar71;
                  fVar82 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar117 +
                           (float)((ulong)_DAT_0388a450 >> 0x20) * fVar115 +
                           (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar65 + fVar82;
                  fVar64 = (float)_UNK_03889828 * fVar117 + (float)_UNK_0388a458 * fVar115 +
                           (float)_UNK_03889eb8 * fVar65 + fVar64;
                  fVar66 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar117 +
                           (float)((ulong)_UNK_0388a458 >> 0x20) * fVar115 +
                           (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar65 + fVar66;
                  uVar73 = a64_TBL(ZEXT816(0),auVar121,auVar128,DAT_0388a888);
                  uVar59 = (undefined4)((ulong)uVar73 >> 0x20);
                  uVar94 = a64_TBL(ZEXT816(0),auVar121,auVar128,DAT_0388a710);
                  uVar102 = a64_TBL(ZEXT816(0),auVar121,auVar128,DAT_0388a758);
                  auVar109._0_8_ = a64_TBL(ZEXT816(0),auVar121,auVar128,DAT_0388a880);
                  uVar112 = a64_TBL(ZEXT816(0),auVar121,auVar128,DAT_0388a640);
                  uVar39 = a64_TBL(ZEXT816(0),auVar121,auVar128,DAT_0388a700);
                  uVar120 = a64_TBL(ZEXT816(0),auVar121,auVar128,DAT_0388a590);
                  auVar129._4_4_ = fVar82;
                  auVar129._0_4_ = fVar82;
                  auVar129._8_4_ = fVar82;
                  auVar129._12_4_ = fVar82;
                  auVar130._0_4_ = -(uint)(fVar71 <= fVar82);
                  auVar130._4_4_ = -(uint)(fVar71 <= fVar82);
                  auVar130._8_4_ = -(uint)(fVar71 <= fVar82);
                  auVar130._12_4_ = -(uint)(fVar71 <= fVar82);
                  auVar103._4_4_ = fVar64;
                  auVar103._0_4_ = fVar64;
                  auVar103._8_4_ = fVar64;
                  auVar103._12_4_ = fVar64;
                  auVar113._4_4_ = fVar71;
                  auVar113._0_4_ = fVar71;
                  auVar113._8_4_ = fVar71;
                  auVar113._12_4_ = fVar71;
                  auVar96._4_4_ = fVar71;
                  auVar96._0_4_ = fVar71;
                  auVar96._8_4_ = fVar71;
                  auVar96._12_4_ = fVar71;
                  auVar96 = auVar96 ^ (auVar113 ^ auVar129) & auVar130;
                  auVar114._0_8_ =
                       CONCAT44(-(uint)(auVar96._4_4_ <= fVar64),-(uint)(auVar96._0_4_ <= fVar64));
                  auVar114._8_4_ = -(uint)(auVar96._8_4_ <= fVar64);
                  auVar114._12_4_ = -(uint)(auVar96._12_4_ <= fVar64);
                  auVar122._8_8_ = auVar114._8_8_;
                  auVar122._0_8_ = auVar114._0_8_;
                  auVar78._0_4_ = (undefined4)uVar73;
                  auVar78._4_4_ = fVar82;
                  auVar78._8_8_ = uVar102;
                  auVar109._12_4_ = (undefined4)((ulong)uVar112 >> 0x20);
                  auVar109._8_4_ = fVar64;
                  auVar96 = auVar96 ^ (auVar96 ^ auVar103) & auVar122;
                  auVar13._4_4_ = uVar59;
                  auVar13._0_4_ = fVar71;
                  auVar13._8_8_ = uVar94;
                  auVar131._4_4_ = uVar59;
                  auVar131._0_4_ = fVar71;
                  auVar131._8_8_ = uVar94;
                  auVar131 = auVar131 ^ (auVar13 ^ auVar78) & auVar130;
                  auVar62._0_4_ = -(uint)(auVar96._0_4_ <= fVar66);
                  auVar62._4_4_ = -(uint)(auVar96._4_4_ <= fVar66);
                  auVar62._8_4_ = -(uint)(auVar96._8_4_ <= fVar66);
                  auVar62._12_4_ = -(uint)(auVar96._12_4_ <= fVar66);
                  auVar131 = auVar131 ^ (auVar131 ^ auVar109) & auVar114;
                  auVar75._8_4_ = (int)uVar120;
                  auVar75._0_8_ = uVar39;
                  auVar75._12_4_ = fVar66;
                  auVar131 = auVar131 ^ (auVar131 ^ auVar75) & auVar62;
                  fVar71 = auVar131._0_4_;
                  auVar79._0_4_ = fVar71 * fVar71;
                  fVar82 = auVar131._4_4_;
                  auVar79._4_4_ = fVar82 * fVar82;
                  fVar85 = auVar131._8_4_;
                  auVar79._8_4_ = fVar85 * fVar85;
                  fVar64 = auVar131._12_4_;
                  auVar79._12_4_ = fVar64 * fVar64;
                  auVar75 = NEON_ext(auVar79,auVar79,8,1);
                  fVar61 = auVar75._0_4_ + auVar79._0_4_;
                  fVar65 = auVar75._4_4_ + auVar79._4_4_;
                  fVar70 = fVar61 + fVar65;
                  fVar61 = fVar61 + fVar65;
                  auVar80._8_8_ = CONCAT44(fVar61,fVar70);
                  auVar80._0_8_ = CONCAT44(fVar61,fVar70);
                  auVar75 = NEON_frsqrte(auVar80,4);
                  auVar104._0_4_ = auVar75._0_4_ * fVar70;
                  auVar104._4_4_ = auVar75._4_4_ * fVar61;
                  auVar104._8_4_ = auVar75._8_4_ * fVar70;
                  auVar104._12_4_ = auVar75._12_4_ * fVar61;
                  auVar113 = NEON_frsqrts(auVar75,auVar104,4);
                  auVar97._0_4_ = auVar75._0_4_ * auVar113._0_4_;
                  auVar97._4_4_ = auVar75._4_4_ * auVar113._4_4_;
                  auVar97._8_4_ = auVar75._8_4_ * auVar113._8_4_;
                  auVar97._12_4_ = auVar75._12_4_ * auVar113._12_4_;
                  auVar105._0_4_ = fVar70 * auVar97._0_4_;
                  auVar105._4_4_ = fVar61 * auVar97._4_4_;
                  auVar105._8_4_ = fVar70 * auVar97._8_4_;
                  auVar105._12_4_ = fVar61 * auVar97._12_4_;
                  iVar54 = -(uint)(fVar70 == 0.0);
                  iVar84 = -(uint)(fVar61 == 0.0);
                  iVar87 = -(uint)(fVar70 == 0.0);
                  iVar89 = -(uint)(fVar61 == 0.0);
                  auVar75 = NEON_frsqrts(auVar97,auVar105,4);
                  fVar71 = auVar97._0_4_ * auVar75._0_4_ * fVar71;
                  fVar82 = auVar97._4_4_ * auVar75._4_4_ * fVar82;
                  fVar85 = auVar97._8_4_ * auVar75._8_4_ * fVar85;
                  fVar64 = auVar97._12_4_ * auVar75._12_4_ * fVar64;
                  pbVar35 = (byte *)(lVar22 + (long)iVar19 * 0x450 + 0x200 + lVar56);
                  pbVar35[8] = SUB41(fVar85,0) & ~(byte)iVar87;
                  pbVar35[9] = (byte)((uint)fVar85 >> 8) & ~(byte)((uint)iVar87 >> 8);
                  pbVar35[10] = (byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar87 >> 0x10);
                  pbVar35[0xb] = (byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18);
                  pbVar35[0xc] = SUB41(fVar64,0) & ~(byte)iVar89;
                  pbVar35[0xd] = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar89 >> 8);
                  pbVar35[0xe] = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10);
                  pbVar35[0xf] = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18);
                  *pbVar35 = SUB41(fVar71,0) & ~(byte)iVar54;
                  pbVar35[1] = (byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar54 >> 8);
                  pbVar35[2] = (byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
                  pbVar35[3] = (byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
                  pbVar35[4] = SUB41(fVar82,0) & ~(byte)iVar84;
                  pbVar35[5] = (byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar84 >> 8);
                  pbVar35[6] = (byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
                  pbVar35[7] = (byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
                  lVar56 = lVar56 + 0x10;
                  puVar31 = (undefined8 *)((long)puVar31 + 0xc);
                } while (lVar56 != 0x90);
                if (*(char *)(lVar40 + 0x290) != '\0') {
                  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2b) {
                    lVar40 = 0;
                  }
                  else {
                    uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x15];
                    lVar40 = 0;
                    if (uVar28 != 0) {
                      puVar4 = (uint *)((long)piVar1 + uVar28);
                      lVar40 = (long)puVar4 + (ulong)*puVar4;
                    }
                  }
                  uVar39 = *(undefined8 *)(lVar40 + 4);
                  lVar22 = lVar22 + lVar34 * 0x450;
                  *(undefined4 *)(lVar22 + 0x2a8) = *(undefined4 *)(lVar40 + 0xc);
                  *(undefined4 *)(lVar22 + 0x2ac) = 0;
                  *(undefined8 *)(lVar22 + 0x2a0) = uVar39;
                  uVar39 = *(undefined8 *)(lVar40 + 0x10);
                  *(undefined4 *)(lVar22 + 0x2b8) = *(undefined4 *)(lVar40 + 0x18);
                  *(undefined4 *)(lVar22 + 700) = 0;
                  *(undefined8 *)(lVar22 + 0x2b0) = uVar39;
                  uVar39 = *(undefined8 *)(lVar40 + 0x1c);
                  *(undefined4 *)(lVar22 + 0x2c8) = *(undefined4 *)(lVar40 + 0x24);
                  *(undefined4 *)(lVar22 + 0x2cc) = 0;
                  *(undefined8 *)(lVar22 + 0x2c0) = uVar39;
                  uVar39 = *(undefined8 *)(lVar40 + 0x28);
                  *(undefined4 *)(lVar22 + 0x2d8) = *(undefined4 *)(lVar40 + 0x30);
                  *(undefined4 *)(lVar22 + 0x2dc) = 0;
                  *(undefined8 *)(lVar22 + 0x2d0) = uVar39;
                  uVar39 = *(undefined8 *)(lVar40 + 0x34);
                  *(undefined4 *)(lVar22 + 0x2e8) = *(undefined4 *)(lVar40 + 0x3c);
                  *(undefined4 *)(lVar22 + 0x2ec) = 0;
                  *(undefined8 *)(lVar22 + 0x2e0) = uVar39;
                  uVar39 = *(undefined8 *)(lVar40 + 0x40);
                  *(undefined4 *)(lVar22 + 0x2f8) = *(undefined4 *)(lVar40 + 0x48);
                  *(undefined4 *)(lVar22 + 0x2fc) = 0;
                  *(undefined8 *)(lVar22 + 0x2f0) = uVar39;
                  uVar39 = *(undefined8 *)(lVar40 + 0x4c);
                  *(undefined4 *)(lVar22 + 0x308) = *(undefined4 *)(lVar40 + 0x54);
                  *(undefined4 *)(lVar22 + 0x30c) = 0;
                  *(undefined8 *)(lVar22 + 0x300) = uVar39;
                  uVar39 = *(undefined8 *)(lVar40 + 0x58);
                  *(undefined4 *)(lVar22 + 0x318) = *(undefined4 *)(lVar40 + 0x60);
                  *(undefined4 *)(lVar22 + 0x31c) = 0;
                  *(undefined8 *)(lVar22 + 0x310) = uVar39;
                  auVar81._4_12_ = SUB1612(ZEXT816(0),4);
                  auVar81._0_4_ = *(undefined4 *)(lVar40 + 0x6c);
                  uVar39 = *(undefined8 *)(lVar40 + 100);
                  *(long *)(lVar22 + 0x328) = auVar81._0_8_;
                  *(undefined8 *)(lVar22 + 800) = uVar39;
                }
              }
            }
          }
        }
      }
      uVar59 = 0;
      if (0x2c < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x16];
        uVar59 = 0;
        if (uVar28 != 0) {
          uVar59 = *(undefined4 *)((long)piVar1 + uVar28);
        }
      }
      *(undefined4 *)(lVar24 + uVar26 * 0x450 + 0x414) = uVar59;
      uVar59 = 0;
      if (0x30 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar28 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x18];
        uVar59 = 0;
        if (uVar28 != 0) {
          uVar59 = *(undefined4 *)((long)piVar1 + uVar28);
        }
      }
      *(undefined4 *)(lVar24 + uVar26 * 0x450 + 0x344) = uVar59;
      local_f8 = local_f8 + 1;
      lVar20 = lVar20 + 4;
      iVar19 = iVar19 + 1;
      puVar47 = puVar47 + 1;
      puVar52 = puVar52 + 1;
    } while (puVar52 != puVar3);
  }
  lVar20 = *(long *)(param_1 + 0x110);
  if (0 < (int)((ulong)(*(long *)(param_1 + 0x118) - lVar20) >> 4) * -0x5cc0ed73) {
    lVar22 = 0;
    lVar24 = 0x414;
    do {
      fVar119 = 0.0;
      if (*(int *)(param_1 + 0x94) == 1) {
        lVar34 = lVar20 + lVar24;
        fVar119 = 0.0;
        if (*(char *)(lVar34 + -0x184) != '\0') {
          fVar93 = *(float *)(lVar20 + lVar24);
          fVar119 = 0.0;
          if (0.0 < fVar93) {
            fVar108 = (*(float *)(lVar34 + -0x3d4) + *(float *)(lVar34 + -0x3d0)) / fVar93;
            auVar75 = *(undefined1 (*) [16])(lVar34 + -0x104);
            fVar93 = (*(float *)(lVar34 + -0x3cc) + *(float *)(lVar34 + -0x3c8)) / fVar93;
            fVar119 = 0.0;
            if (0.0 < fVar108) {
              fVar119 = *(float *)(lVar34 + -0x144) - *(float *)(lVar34 + -0x124);
              fVar124 = *(float *)(lVar34 + -0x140) - *(float *)(lVar34 + -0x120);
              fVar125 = *(float *)(lVar34 + -0x13c) - *(float *)(lVar34 + -0x11c);
              fVar126 = *(float *)(lVar34 + -0x138) - *(float *)(lVar34 + -0x118);
              auVar123._0_4_ = fVar119 * fVar119;
              auVar123._4_4_ = fVar124 * fVar124;
              auVar123._8_4_ = fVar125 * fVar125;
              auVar123._12_4_ = fVar126 * fVar126;
              auVar113 = NEON_ext(auVar123,auVar123,8,1);
              fVar119 = SQRT(auVar113._0_4_ + auVar123._0_4_ + auVar113._4_4_ + auVar123._4_4_) /
                        fVar108;
            }
            fVar108 = 0.0;
            if (0.0 < fVar93) {
              fVar108 = *(float *)(lVar34 + -0x164) - auVar75._0_4_;
              fVar124 = *(float *)(lVar34 + -0x160) - auVar75._4_4_;
              fVar125 = *(float *)(lVar34 + -0x15c) - auVar75._8_4_;
              fVar126 = *(float *)(lVar34 + -0x158) - auVar75._12_4_;
              auVar106._0_4_ = fVar108 * fVar108;
              auVar106._4_4_ = fVar124 * fVar124;
              auVar106._8_4_ = fVar125 * fVar125;
              auVar106._12_4_ = fVar126 * fVar126;
              auVar75 = NEON_ext(auVar106,auVar106,8,1);
              fVar108 = SQRT(auVar75._0_4_ + auVar106._0_4_ + auVar75._4_4_ + auVar106._4_4_) /
                        fVar93;
            }
            fVar119 = (fVar119 + fVar108) * 0.5;
          }
        }
      }
      lVar20 = lVar20 + lVar24;
      lVar24 = lVar24 + 0x450;
      *(float *)(lVar20 + -4) = fVar119;
      lVar20 = *(long *)(param_1 + 0x110);
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)((ulong)(*(long *)(param_1 + 0x118) - lVar20) >> 4) * -0x5cc0ed73);
  }
  return;
}


