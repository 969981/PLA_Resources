/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0166b604; name: FUN_0166b604
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0166b604(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  byte *pbVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  uint *puVar18;
  int *piVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long *plVar25;
  byte *pbVar26;
  long *plVar27;
  long *plVar28;
  byte *pbVar29;
  ulong uVar30;
  long *plVar31;
  undefined8 uVar32;
  uint *puVar34;
  uint *puVar33;
  long *plVar35;
  undefined8 uVar36;
  ulong uVar37;
  uint *puVar38;
  char *pcVar39;
  long *plVar40;
  long *plVar41;
  undefined1 *local_170;
  byte *local_168;
  byte *local_160;
  byte *local_158;
  long *local_150;
  ulong local_148;
  byte *pbStack_140;
  ulong local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  ulong local_100;
  byte *local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  byte *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  byte *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70 [2];
  
  puVar23 = (undefined8 *)param_1[3];
  local_170 = (undefined1 *)*param_1;
  if ((undefined1 *)param_1[1] != &DAT_cbf29ce484222645) {
    local_170 = (undefined1 *)param_1[1];
  }
  cVar4 = *(char *)(param_1 + 2);
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar15 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar15;
  plVar28 = *(long **)(lVar15 + 0x100);
  if (plVar28 != (long *)0x0) {
    plVar10 = plVar28 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar10 = (long *)plVar28[0x20];
  if (plVar10 != (long *)0x0) {
    plVar25 = plVar10 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar7) {
        *(int *)plVar25 = (int)*plVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar25 = (long *)plVar10[0xc];
  if (plVar25 != (long *)0x0) {
    plVar41 = plVar25 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *(int *)plVar41 = (int)*plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar41 = plVar10 + 10;
  do {
    iVar9 = (int)*plVar41 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
    if (bVar7) {
      *(int *)plVar41 = iVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar10 + 0x10))();
    plVar10 = (long *)plVar28[0x20];
  }
  else {
    plVar10 = (long *)plVar28[0x20];
  }
  if (plVar10 != (long *)0x0) {
    plVar41 = plVar10 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *(int *)plVar41 = (int)*plVar41 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_70[0] = (long *)plVar10[0xf];
  if (local_70[0] != (long *)0x0) {
    lVar15 = local_70[0][0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar11;
    }
    piVar19 = (int *)(lVar15 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar7) {
        *piVar19 = *piVar19 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar41 = plVar10 + 10;
  do {
    iVar9 = (int)*plVar41 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
    if (bVar7) {
      *(int *)plVar41 = iVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  puVar38 = (uint *)*param_2;
  uVar16 = (ulong)(int)*puVar38;
  uVar20 = (ulong)*(ushort *)((long)puVar38 + (6 - uVar16));
  uVar24 = (ulong)*(uint *)((long)puVar38 + uVar20);
  if (*(int *)((long)((long)puVar38 + uVar20) + uVar24) != 0) {
    uVar30 = 0;
    puVar18 = puVar38 + 4;
    do {
      lVar15 = uVar20 + uVar24 + (ulong)*(uint *)((long)puVar18 + uVar20 + uVar24 + -0xc);
      lVar21 = lVar15 - *(int *)((long)puVar18 + lVar15 + -0xc);
      if (((*(ushort *)((long)puVar18 + lVar21 + -0xc) < 5) ||
          (uVar20 = (ulong)*(ushort *)((long)puVar18 + lVar21 + -8), uVar20 == 0)) ||
         (*(undefined1 **)((long)puVar18 + lVar15 + uVar20 + -0xc) != &DAT_cbf29ce484222645)) {
        local_110 = (long *)&DAT_cbf29ce484222645;
        local_108 = (long *)&DAT_03996322;
        local_100 = 0;
        local_f8 = (byte *)0x0;
        local_f0 = &DAT_cbf29ce484222645;
        puStack_e8 = &DAT_03996322;
        local_e0 = 0;
        local_d8 = (byte *)0x0;
        local_d0 = &DAT_cbf29ce484222645;
        puStack_c8 = &DAT_03996322;
        local_c0 = 0;
        local_b8 = (byte *)0x0;
        local_b0 = &DAT_cbf29ce484222645;
        puStack_a8 = &DAT_03996322;
        local_a0 = 0;
        local_98 = (long *)0x0;
        local_90 = &DAT_cbf29ce484222645;
        puStack_88 = &DAT_03996322;
        local_80 = 0;
        local_78 = (long *)0x0;
        lVar21 = lVar15 - *(int *)((long)puVar18 + lVar15 + -0xc);
        if (*(ushort *)((long)puVar18 + lVar21 + -0xc) < 5) {
          local_120 = (long *)0x0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)puVar18 + lVar21 + -8);
          local_120 = (long *)0x0;
          if (uVar16 != 0) {
            local_120 = *(long **)((long)puVar18 + lVar15 + uVar16 + -0xc);
          }
        }
        lVar21 = lVar15 - *(int *)((long)puVar18 + lVar15 + -0xc);
        if (*(ushort *)((long)puVar18 + lVar21 + -0xc) < 7) {
          local_118 = (long *)0x0;
        }
        else {
          uVar16 = (ulong)*(ushort *)((long)puVar18 + lVar21 + -6);
          local_118 = (long *)0x0;
          if (uVar16 != 0) {
            local_118 = *(long **)((long)puVar18 + lVar15 + uVar16 + -0xc);
          }
        }
        lVar21 = lVar15 - *(int *)((long)puVar18 + lVar15 + -0xc);
        if ((*(ushort *)((long)puVar18 + lVar21 + -0xc) < 9) ||
           (uVar16 = (ulong)*(ushort *)((long)puVar18 + lVar21 + -4), uVar16 == 0)) {
          pcVar39 = &DAT_00000004;
          if (DAT_00000004 == '\0') goto LAB_0166bcc4;
LAB_0166b8f8:
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar11 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar11;
          FUN_02a47cd8(&local_168,uVar11,pcVar39);
          pbVar13 = local_168;
LAB_0166b930:
          if (pbVar13 == (byte *)0x0) goto LAB_0166bce4;
LAB_0166b934:
          plVar10 = *(long **)(pbVar13 + 0x58);
          if (pbVar13 != (byte *)0x0) goto LAB_0166b940;
LAB_0166bcf4:
          plVar41 = *(long **)PTR_PTR_04379d00;
          if (pbVar13 == (byte *)0x0) goto LAB_0166bd04;
LAB_0166b94c:
          uVar16 = *(ulong *)(pbVar13 + 0x68);
          (**(code **)(*(long *)pbVar13 + 0x18))(pbVar13);
        }
        else {
          lVar21 = lVar15 + uVar16;
          pcVar39 = (char *)((long)puVar18 +
                            lVar21 + (ulong)*(uint *)((long)puVar18 + lVar21 + -0xc) + -8);
          if (*pcVar39 != '\0') goto LAB_0166b8f8;
LAB_0166bcc4:
          pbVar13 = (byte *)FUN_00938550();
          if (pbVar13 == (byte *)0x0) goto LAB_0166b930;
          (**(code **)(*(long *)pbVar13 + 0x18))(pbVar13);
          if (pbVar13 != (byte *)0x0) goto LAB_0166b934;
LAB_0166bce4:
          plVar10 = *(long **)PTR_DAT_04379c88;
          if (pbVar13 == (byte *)0x0) goto LAB_0166bcf4;
LAB_0166b940:
          plVar41 = *(long **)(pbVar13 + 0x60);
          if (pbVar13 != (byte *)0x0) goto LAB_0166b94c;
LAB_0166bd04:
          uVar16 = 0;
        }
        pbVar26 = local_f8;
        local_f8 = (byte *)0x0;
        local_110 = plVar10;
        local_108 = plVar41;
        local_100 = uVar16;
        if (pbVar26 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar26 + 0x20))();
        }
        local_f8 = pbVar13;
        if (pbVar13 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar13 + 0x20))(pbVar13);
        }
        lVar21 = lVar15 - *(int *)((long)puVar18 + lVar15 + -0xc);
        if ((*(ushort *)((long)puVar18 + lVar21 + -0xc) < 0xb) ||
           (uVar16 = (ulong)*(ushort *)((long)puVar18 + lVar21 + -2), uVar16 == 0)) {
          pcVar39 = &DAT_00000004;
          if (DAT_00000004 == '\0') goto LAB_0166bd18;
LAB_0166b9d4:
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar11 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar11;
          FUN_02a47cd8(&local_168,uVar11,pcVar39);
          pbVar13 = local_168;
LAB_0166ba0c:
          if (pbVar13 == (byte *)0x0) goto LAB_0166bd38;
LAB_0166ba10:
          uVar16 = *(ulong *)(pbVar13 + 0x58);
          if (pbVar13 != (byte *)0x0) goto LAB_0166ba1c;
LAB_0166bd48:
          uVar11 = *(undefined8 *)PTR_PTR_04379d00;
          if (pbVar13 == (byte *)0x0) goto LAB_0166bd58;
LAB_0166ba28:
          uVar36 = *(undefined8 *)(pbVar13 + 0x68);
          (**(code **)(*(long *)pbVar13 + 0x18))(pbVar13);
        }
        else {
          lVar21 = lVar15 + uVar16;
          pcVar39 = (char *)((long)puVar18 +
                            lVar21 + (ulong)*(uint *)((long)puVar18 + lVar21 + -0xc) + -8);
          if (*pcVar39 != '\0') goto LAB_0166b9d4;
LAB_0166bd18:
          pbVar13 = (byte *)FUN_00938550();
          if (pbVar13 == (byte *)0x0) goto LAB_0166ba0c;
          (**(code **)(*(long *)pbVar13 + 0x18))(pbVar13);
          if (pbVar13 != (byte *)0x0) goto LAB_0166ba10;
LAB_0166bd38:
          uVar16 = *(ulong *)PTR_DAT_04379c88;
          if (pbVar13 == (byte *)0x0) goto LAB_0166bd48;
LAB_0166ba1c:
          uVar11 = *(undefined8 *)(pbVar13 + 0x60);
          if (pbVar13 != (byte *)0x0) goto LAB_0166ba28;
LAB_0166bd58:
          uVar36 = 0;
        }
        pbVar26 = local_d8;
        local_d8 = (byte *)0x0;
        local_f0 = (undefined1 *)uVar16;
        puStack_e8 = (undefined1 *)uVar11;
        local_e0 = uVar36;
        if (pbVar26 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar26 + 0x20))();
        }
        local_d8 = pbVar13;
        if (pbVar13 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar13 + 0x20))(pbVar13);
        }
        lVar21 = lVar15 - *(int *)((long)puVar18 + lVar15 + -0xc);
        if ((*(ushort *)((long)puVar18 + lVar21 + -0xc) < 0xd) ||
           (uVar16 = (ulong)*(ushort *)((long)puVar18 + lVar21), uVar16 == 0)) {
          pcVar39 = &DAT_00000004;
          if (DAT_00000004 == '\0') goto LAB_0166bd6c;
LAB_0166bac0:
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar11 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar11;
          FUN_02a47cd8(&local_168,uVar11,pcVar39);
          pbVar13 = local_168;
LAB_0166baf8:
          if (pbVar13 == (byte *)0x0) goto LAB_0166bd8c;
LAB_0166bafc:
          uVar11 = *(undefined8 *)(pbVar13 + 0x58);
          if (pbVar13 != (byte *)0x0) goto LAB_0166bb08;
LAB_0166bd9c:
          uVar36 = *(undefined8 *)PTR_PTR_04379d00;
          if (pbVar13 == (byte *)0x0) goto LAB_0166bdac;
LAB_0166bb14:
          uVar32 = *(undefined8 *)(pbVar13 + 0x68);
          (**(code **)(*(long *)pbVar13 + 0x18))(pbVar13);
        }
        else {
          lVar15 = lVar15 + uVar16;
          pcVar39 = (char *)((long)puVar18 +
                            lVar15 + (ulong)*(uint *)((long)puVar18 + lVar15 + -0xc) + -8);
          if (*pcVar39 != '\0') goto LAB_0166bac0;
LAB_0166bd6c:
          pbVar13 = (byte *)FUN_00938550();
          if (pbVar13 == (byte *)0x0) goto LAB_0166baf8;
          (**(code **)(*(long *)pbVar13 + 0x18))(pbVar13);
          if (pbVar13 != (byte *)0x0) goto LAB_0166bafc;
LAB_0166bd8c:
          uVar11 = *(undefined8 *)PTR_DAT_04379c88;
          if (pbVar13 == (byte *)0x0) goto LAB_0166bd9c;
LAB_0166bb08:
          uVar36 = *(undefined8 *)(pbVar13 + 0x60);
          if (pbVar13 != (byte *)0x0) goto LAB_0166bb14;
LAB_0166bdac:
          uVar32 = 0;
        }
        pbVar26 = local_b8;
        local_b8 = (byte *)0x0;
        local_d0 = (undefined1 *)uVar11;
        puStack_c8 = (undefined1 *)uVar36;
        local_c0 = uVar32;
        if (pbVar26 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar26 + 0x20))();
        }
        local_b8 = pbVar13;
        if (pbVar13 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar13 + 0x20))(pbVar13);
        }
        uVar16 = FUN_0165ff30(&local_120);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (local_b8 != (byte *)0x0) {
          (**(code **)(*(long *)local_b8 + 0x20))();
        }
        if (local_d8 != (byte *)0x0) {
          (**(code **)(*(long *)local_d8 + 0x20))();
        }
        if (local_f8 != (byte *)0x0) {
          (**(code **)(*(long *)local_f8 + 0x20))();
        }
        if ((uVar16 & 1) == 0) {
          iVar9 = 0;
          goto joined_r0x0166ca8c;
        }
        uVar16 = (ulong)*puVar38;
      }
      uVar20 = (ulong)*(ushort *)((long)puVar38 + (6 - (long)(int)uVar16));
      uVar24 = (ulong)*(uint *)((long)puVar38 + uVar20);
      uVar30 = uVar30 + 1;
      puVar18 = puVar18 + 1;
    } while (uVar30 < *(uint *)((long)((long)puVar38 + uVar20) + uVar24));
  }
  if (cVar4 == '\0') {
    iVar9 = 1;
    goto joined_r0x0166ca8c;
  }
  plVar10 = (long *)plVar28[0x20];
  if (plVar10 != (long *)0x0) {
    plVar41 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
      if (bVar7) {
        *(int *)plVar41 = (int)*plVar41 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar41 = (long *)plVar10[0x11];
  if (plVar41 != (long *)0x0) {
    plVar27 = plVar41 + 10;
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar7) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar27 = plVar10 + 10;
  do {
    iVar9 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar7) {
      *(int *)plVar27 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar10 + 0x10))();
  }
  local_108 = *(long **)(*(long *)PTR_DAT_0437b160 + 0x388);
  local_f0 = (undefined1 *)((ulong)local_f0 & 0xffffffff00000000);
  local_110 = (long *)0x0;
  local_120 = (long *)0x0;
  local_118 = (long *)0x0;
  local_100 = 0x1fffffffffffffff;
  local_f8 = (byte *)0x0;
  if (*(ushort *)((long)puVar38 - (long)(int)*puVar38) < 5) {
    piVar19 = (int *)0x0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)puVar38 - (long)(int)*puVar38))[2];
    piVar19 = (int *)0x0;
    if (uVar16 != 0) {
      puVar18 = (uint *)((long)puVar38 + uVar16);
      piVar19 = (int *)((long)puVar18 + (ulong)*puVar18);
    }
  }
  if ((4 < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
     (uVar16 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2], uVar16 != 0)) {
    lVar15 = *(long *)((long)piVar19 + uVar16);
    if (lVar15 < -0xfd80454da7c130e) {
      if (lVar15 < -0x5b1ffaa205491ea9) {
        if (lVar15 != -0x7d23213ee1b46fd4) {
          if (lVar15 != -0x6a954a84341db53e) goto LAB_0166c1f0;
          local_168 = (byte *)FUN_0166ab58(local_108,&local_170,local_70);
          if (local_168 != (byte *)0x0) {
            pbVar13 = local_168 + 0x50;
            do {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
              if (bVar7) {
                *(int *)pbVar13 = *(int *)pbVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar15 = plVar25[0x13];
          lVar21 = plVar25[0x14] - lVar15;
          uVar16 = 0;
          if (lVar21 != 0) {
            uVar16 = lVar21 * 0x40 - 1;
          }
          uVar20 = plVar25[0x1b] + plVar25[0x1a];
          if (uVar16 == uVar20) {
            FUN_0166fd0c(plVar25 + 0x12);
            uVar20 = plVar25[0x1a] + plVar25[0x1b];
            lVar15 = plVar25[0x13];
            if (plVar25[0x14] == lVar15) goto LAB_0166d104;
LAB_0166bf44:
            lVar15 = *(long *)(lVar15 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
          }
          else {
            if (plVar25[0x14] != lVar15) goto LAB_0166bf44;
LAB_0166d104:
            lVar15 = 0;
          }
          FUN_0166af20(plVar25 + 0x1c,lVar15,&local_168);
          plVar25[0x1b] = plVar25[0x1b] + 1;
          if (local_168 == (byte *)0x0) goto LAB_0166c1f0;
          pbVar13 = local_168 + 0x50;
          do {
            bVar8 = *(int *)pbVar13 + -1 == 0;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
            if (bVar7) {
              *(int *)pbVar13 = *(int *)pbVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_0166ce34;
        }
        local_168 = (byte *)FUN_0166ab58(local_108,&local_170,local_70);
        if (local_168 != (byte *)0x0) {
          pbVar13 = local_168 + 0x50;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
            if (bVar7) {
              *(int *)pbVar13 = *(int *)pbVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar15 = plVar25[0x13];
        lVar21 = plVar25[0x14] - lVar15;
        uVar16 = 0;
        if (lVar21 != 0) {
          uVar16 = lVar21 * 0x40 - 1;
        }
        uVar20 = plVar25[0x1b] + plVar25[0x1a];
        if (uVar16 == uVar20) {
          FUN_0166fd0c(plVar25 + 0x12);
          uVar20 = plVar25[0x1a] + plVar25[0x1b];
          lVar15 = plVar25[0x13];
          if (plVar25[0x14] == lVar15) goto LAB_0166d1a4;
LAB_0166cbe4:
          lVar15 = *(long *)(lVar15 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
        }
        else {
          if (plVar25[0x14] != lVar15) goto LAB_0166cbe4;
LAB_0166d1a4:
          lVar15 = 0;
        }
        FUN_0166af20(plVar25 + 0x1c,lVar15,&local_168);
        plVar25[0x1b] = plVar25[0x1b] + 1;
        if (local_168 == (byte *)0x0) goto LAB_0166c1f0;
        pbVar13 = local_168 + 0x50;
        do {
          bVar8 = *(int *)pbVar13 + -1 == 0;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
          if (bVar7) {
            *(int *)pbVar13 = *(int *)pbVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      else if (lVar15 == -0x5b1ffaa205491ea9) {
        local_168 = (byte *)FUN_0166ab58(local_108,&local_170,local_70);
        if (local_168 != (byte *)0x0) {
          pbVar13 = local_168 + 0x50;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
            if (bVar7) {
              *(int *)pbVar13 = *(int *)pbVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar15 = plVar25[0x13];
        lVar21 = plVar25[0x14] - lVar15;
        uVar16 = 0;
        if (lVar21 != 0) {
          uVar16 = lVar21 * 0x40 - 1;
        }
        uVar20 = plVar25[0x1b] + plVar25[0x1a];
        if (uVar16 == uVar20) {
          FUN_0166fd0c(plVar25 + 0x12);
          uVar20 = plVar25[0x1a] + plVar25[0x1b];
          lVar15 = plVar25[0x13];
          if (plVar25[0x14] == lVar15) goto LAB_0166d1cc;
LAB_0166cc90:
          lVar15 = *(long *)(lVar15 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
        }
        else {
          if (plVar25[0x14] != lVar15) goto LAB_0166cc90;
LAB_0166d1cc:
          lVar15 = 0;
        }
        FUN_0166af20(plVar25 + 0x1c,lVar15,&local_168);
        plVar25[0x1b] = plVar25[0x1b] + 1;
        if (local_168 == (byte *)0x0) goto LAB_0166c1f0;
        pbVar13 = local_168 + 0x50;
        do {
          bVar8 = *(int *)pbVar13 + -1 == 0;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
          if (bVar7) {
            *(int *)pbVar13 = *(int *)pbVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      else {
        if (lVar15 != -0x486bd439f77d5dd8) goto LAB_0166c1f0;
        local_168 = (byte *)FUN_0166ab58(local_108,&local_170,local_70);
        if (local_168 != (byte *)0x0) {
          pbVar13 = local_168 + 0x50;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
            if (bVar7) {
              *(int *)pbVar13 = *(int *)pbVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar15 = plVar25[0x13];
        lVar21 = plVar25[0x14] - lVar15;
        uVar16 = 0;
        if (lVar21 != 0) {
          uVar16 = lVar21 * 0x40 - 1;
        }
        uVar20 = plVar25[0x1b] + plVar25[0x1a];
        if (uVar16 == uVar20) {
          FUN_0166fd0c(plVar25 + 0x12);
          uVar20 = plVar25[0x1a] + plVar25[0x1b];
          lVar15 = plVar25[0x13];
          if (plVar25[0x14] == lVar15) goto LAB_0166d154;
LAB_0166c170:
          lVar15 = *(long *)(lVar15 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
        }
        else {
          if (plVar25[0x14] != lVar15) goto LAB_0166c170;
LAB_0166d154:
          lVar15 = 0;
        }
        FUN_0166af20(plVar25 + 0x1c,lVar15,&local_168);
        plVar25[0x1b] = plVar25[0x1b] + 1;
        if (local_168 == (byte *)0x0) goto LAB_0166c1f0;
        pbVar13 = local_168 + 0x50;
        do {
          bVar8 = *(int *)pbVar13 + -1 == 0;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
          if (bVar7) {
            *(int *)pbVar13 = *(int *)pbVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    else if (lVar15 < 0x78891ea1eb1719b7) {
      if (lVar15 != 0x2e11b56c5a55e9e8) {
        if (lVar15 != -0xfd80454da7c130e) goto LAB_0166c1f0;
        local_168 = (byte *)FUN_0166ab58(local_108,&local_170,local_70);
        if (local_168 != (byte *)0x0) {
          pbVar13 = local_168 + 0x50;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
            if (bVar7) {
              *(int *)pbVar13 = *(int *)pbVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar15 = plVar25[0x13];
        lVar21 = plVar25[0x14] - lVar15;
        uVar16 = 0;
        if (lVar21 != 0) {
          uVar16 = lVar21 * 0x40 - 1;
        }
        uVar20 = plVar25[0x1b] + plVar25[0x1a];
        if (uVar16 == uVar20) {
          FUN_0166fd0c(plVar25 + 0x12);
          uVar20 = plVar25[0x1a] + plVar25[0x1b];
          lVar15 = plVar25[0x13];
          if (plVar25[0x14] == lVar15) goto LAB_0166d21c;
LAB_0166cde8:
          lVar15 = *(long *)(lVar15 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
        }
        else {
          if (plVar25[0x14] != lVar15) goto LAB_0166cde8;
LAB_0166d21c:
          lVar15 = 0;
        }
        FUN_0166af20(plVar25 + 0x1c,lVar15,&local_168);
        plVar25[0x1b] = plVar25[0x1b] + 1;
        if (local_168 != (byte *)0x0) {
          pbVar13 = local_168 + 0x50;
          do {
            bVar8 = *(int *)pbVar13 + -1 == 0;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
            if (bVar7) {
              *(int *)pbVar13 = *(int *)pbVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_0166ce34;
        }
        goto LAB_0166c1f0;
      }
      local_168 = (byte *)FUN_0166ab58(local_108,&local_170,local_70);
      if (local_168 != (byte *)0x0) {
        pbVar13 = local_168 + 0x50;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
          if (bVar7) {
            *(int *)pbVar13 = *(int *)pbVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar15 = plVar25[0x13];
      lVar21 = plVar25[0x14] - lVar15;
      uVar16 = 0;
      if (lVar21 != 0) {
        uVar16 = lVar21 * 0x40 - 1;
      }
      uVar20 = plVar25[0x1b] + plVar25[0x1a];
      if (uVar16 == uVar20) {
        FUN_0166fd0c(plVar25 + 0x12);
        uVar20 = plVar25[0x1a] + plVar25[0x1b];
        lVar15 = plVar25[0x13];
        if (plVar25[0x14] == lVar15) goto LAB_0166d1f4;
LAB_0166cd3c:
        lVar15 = *(long *)(lVar15 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
      }
      else {
        if (plVar25[0x14] != lVar15) goto LAB_0166cd3c;
LAB_0166d1f4:
        lVar15 = 0;
      }
      FUN_0166af20(plVar25 + 0x1c,lVar15,&local_168);
      plVar25[0x1b] = plVar25[0x1b] + 1;
      if (local_168 == (byte *)0x0) goto LAB_0166c1f0;
      pbVar13 = local_168 + 0x50;
      do {
        bVar8 = *(int *)pbVar13 + -1 == 0;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
        if (bVar7) {
          *(int *)pbVar13 = *(int *)pbVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      if (lVar15 != 0x78891ea1eb1719b7) {
        if (lVar15 != 0x7dacdfc0f3964597) goto LAB_0166c1f0;
        local_168 = (byte *)FUN_0166ab58(local_108,&local_170,local_70);
        if (local_168 != (byte *)0x0) {
          pbVar13 = local_168 + 0x50;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
            if (bVar7) {
              *(int *)pbVar13 = *(int *)pbVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar15 = plVar25[0x13];
        lVar21 = plVar25[0x14] - lVar15;
        uVar16 = 0;
        if (lVar21 != 0) {
          uVar16 = lVar21 * 0x40 - 1;
        }
        uVar20 = plVar25[0x1b] + plVar25[0x1a];
        if (uVar16 == uVar20) {
          FUN_0166fd0c(plVar25 + 0x12);
          uVar20 = plVar25[0x1a] + plVar25[0x1b];
          lVar15 = plVar25[0x13];
          if (plVar25[0x14] == lVar15) goto LAB_0166d12c;
LAB_0166c094:
          lVar15 = *(long *)(lVar15 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
        }
        else {
          if (plVar25[0x14] != lVar15) goto LAB_0166c094;
LAB_0166d12c:
          lVar15 = 0;
        }
        FUN_0166af20(plVar25 + 0x1c,lVar15,&local_168);
        plVar25[0x1b] = plVar25[0x1b] + 1;
        if (local_168 != (byte *)0x0) {
          pbVar13 = local_168 + 0x50;
          do {
            bVar8 = *(int *)pbVar13 + -1 == 0;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
            if (bVar7) {
              *(int *)pbVar13 = *(int *)pbVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto LAB_0166ce34;
        }
        goto LAB_0166c1f0;
      }
      local_168 = (byte *)FUN_0166ab58(local_108,&local_170,local_70);
      if (local_168 != (byte *)0x0) {
        pbVar13 = local_168 + 0x50;
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
          if (bVar7) {
            *(int *)pbVar13 = *(int *)pbVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar15 = plVar25[0x13];
      lVar21 = plVar25[0x14] - lVar15;
      uVar16 = 0;
      if (lVar21 != 0) {
        uVar16 = lVar21 * 0x40 - 1;
      }
      uVar20 = plVar25[0x1b] + plVar25[0x1a];
      if (uVar16 == uVar20) {
        FUN_0166fd0c(plVar25 + 0x12);
        uVar20 = plVar25[0x1a] + plVar25[0x1b];
        lVar15 = plVar25[0x13];
        if (plVar25[0x14] == lVar15) goto LAB_0166d17c;
LAB_0166cb38:
        lVar15 = *(long *)(lVar15 + (uVar20 >> 6 & 0x3fffffffffffff8)) + (uVar20 & 0x1ff) * 8;
      }
      else {
        if (plVar25[0x14] != lVar15) goto LAB_0166cb38;
LAB_0166d17c:
        lVar15 = 0;
      }
      FUN_0166af20(plVar25 + 0x1c,lVar15,&local_168);
      plVar25[0x1b] = plVar25[0x1b] + 1;
      if (local_168 == (byte *)0x0) goto LAB_0166c1f0;
      pbVar13 = local_168 + 0x50;
      do {
        bVar8 = *(int *)pbVar13 + -1 == 0;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar13,0x10);
        if (bVar7) {
          *(int *)pbVar13 = *(int *)pbVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
LAB_0166ce34:
    if (bVar8) {
      (**(code **)(*(long *)local_168 + 0x10))();
    }
  }
LAB_0166c1f0:
  uVar16 = (ulong)*(ushort *)((long)puVar38 + (8 - (long)(int)*puVar38));
  uVar20 = (ulong)*(uint *)((long)puVar38 + uVar16);
  if (*(int *)((long)((long)puVar38 + uVar16) + uVar20) != 0) {
    uVar24 = 0;
    lVar15 = (long)puVar38 + 0xd;
    do {
      puVar18 = (uint *)((long)puVar38 + uVar24 * 4 + uVar20 + uVar16 + 4);
      uVar30 = (ulong)*puVar18;
      piVar19 = (int *)((long)puVar18 + uVar30);
      if (*(ushort *)((long)piVar19 - (long)*piVar19) < 5) {
        local_128 = (long *)0x0;
      }
      else {
        uVar22 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2];
        local_128 = (long *)0x0;
        if (uVar22 != 0) {
          local_128 = *(long **)((long)piVar19 + uVar22);
        }
      }
      if ((6 < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
         (uVar22 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[3], uVar22 != 0)) {
        uVar37 = (ulong)*(uint *)((long)piVar19 + uVar22);
        puVar18 = (uint *)((long)((long)piVar19 + uVar22) + uVar37);
        if (puVar18 != (uint *)0x0) {
          local_130 = (long *)FUN_0166ad3c(&local_168,
                                           *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388),
                                           &local_128,&local_170,local_70);
          if (local_130 != (long *)0x0) {
            plVar10 = local_130 + 10;
            do {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *(int *)plVar10 = (int)*plVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uVar2 = *puVar18;
          if (uVar2 != 0) {
            plVar10 = local_130 + 0xf;
            lVar21 = lVar15 + uVar20 + uVar16 + uVar37 + uVar22 + uVar30;
            puVar33 = puVar18 + 1;
            do {
              puVar34 = puVar33 + 1;
              uVar3 = *puVar33;
              pbVar13 = (byte *)((long)puVar34 + (ulong)uVar3);
              local_158 = (byte *)strlen((char *)pbVar13);
              bVar5 = *pbVar13;
              local_168 = &DAT_cbf29ce484222645;
              if (bVar5 != 0) {
                local_168 = &DAT_cbf29ce484222645;
                pbVar26 = (byte *)(lVar21 + (ulong)uVar3);
                do {
                  local_168 = (byte *)(((ulong)local_168 ^ (ulong)bVar5) * 0x100000001b3);
                  bVar5 = *pbVar26;
                  pbVar26 = pbVar26 + 1;
                } while (bVar5 != 0);
              }
              local_150 = (long *)0x0;
              local_160 = pbVar13;
              FUN_01669ebc(plVar10,&local_168);
              if (local_150 != (long *)0x0) {
                (**(code **)(*local_150 + 0x20))();
              }
              lVar21 = lVar21 + 4;
              puVar33 = puVar34;
            } while (puVar34 != puVar18 + 1 + uVar2);
          }
          if (local_118 == local_110) {
            lVar21 = (long)local_118 - (long)local_120 >> 3;
            uVar16 = lVar21 + 1;
            uVar20 = local_100;
            if (0x7ffffffffffffffe < local_100) {
              uVar20 = 0x7fffffffffffffff;
            }
            if (uVar20 < uVar16) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)local_110 - (long)local_120 >> 3) < uVar20 >> 1) {
              uVar30 = (long)local_110 - (long)local_120 >> 2;
              uVar20 = uVar16;
              if (uVar16 <= uVar30) {
                uVar20 = uVar30;
              }
            }
            if (uVar20 == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = (**(code **)(*local_108 + 0x10))(local_108,uVar20 << 3,8);
              if (lVar12 == 0) {
                (**(code **)(*local_108 + 0xb8))();
              }
            }
            plVar27 = (long *)(lVar12 + lVar21 * 8);
            plVar14 = (long *)(lVar12 + uVar20 * 8);
            FUN_0166af20(&local_108,plVar27,&local_130);
            plVar31 = local_118;
            plVar35 = local_120;
            plVar10 = plVar27 + 1;
            if (local_118 == local_120) {
              plVar31 = local_120;
            }
            else {
              plVar27 = plVar27 + -1;
              plVar40 = local_118 + -1;
              FUN_0166af20(&local_108,plVar27,plVar40);
              if (plVar40 != plVar35) {
                do {
                  plVar27 = plVar27 + -1;
                  FUN_0166af20(&local_108,plVar27,plVar31 + -2);
                  plVar31 = plVar31 + -1;
                } while (plVar35 + 1 != plVar31);
              }
              plVar35 = local_118;
              plVar31 = local_120;
            }
            plVar40 = local_110;
            local_120 = plVar27;
            local_118 = plVar10;
            local_110 = plVar14;
            if (plVar35 != plVar31) {
              plVar35 = plVar35 + -1;
              plVar10 = (long *)*plVar35;
              if (plVar10 != (long *)0x0) {
                plVar27 = plVar10 + 10;
                do {
                  iVar9 = (int)*plVar27 + -1;
                  cVar4 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                  if (bVar7) {
                    *(int *)plVar27 = iVar9;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar9 == 0) goto LAB_0166ca38;
              }
LAB_0166c44c:
              if (plVar35 != plVar31) {
                while( true ) {
                  plVar35 = plVar35 + -1;
                  plVar10 = (long *)*plVar35;
                  if (plVar10 == (long *)0x0) break;
                  plVar27 = plVar10 + 10;
                  do {
                    iVar9 = (int)*plVar27 + -1;
                    cVar4 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                    if (bVar7) {
                      *(int *)plVar27 = iVar9;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar9 != 0) break;
LAB_0166ca38:
                  (**(code **)(*plVar10 + 0x10))();
                  if (plVar35 == plVar31) goto LAB_0166c478;
                }
                goto LAB_0166c44c;
              }
            }
LAB_0166c478:
            plVar10 = local_108;
            if (plVar31 != (long *)0x0) {
              uVar16 = (**(code **)(*local_108 + 0xc0))(local_108);
              if ((uVar16 & 1) != 0) {
                lVar21 = tpidr_el0;
                if (*(char *)(lVar21 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar21 + 0x38d488) = 1;
                  *(undefined8 *)(lVar21 + 0x38d478) = 0;
                  *(undefined8 *)(lVar21 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar21 + 0x38d480)) {
                  FUN_02bcc824(plVar10,plVar31,(long)plVar40 - (long)plVar31,8);
                  goto LAB_0166c47c;
                }
              }
              (**(code **)(*plVar10 + 0x18))(plVar10,plVar31,(long)plVar40 - (long)plVar31,8);
            }
          }
          else {
            FUN_0166af20(&local_108,local_118,&local_130);
            local_118 = local_118 + 1;
          }
LAB_0166c47c:
          if (local_130 != (long *)0x0) {
            plVar10 = local_130 + 10;
            do {
              iVar9 = (int)*plVar10 + -1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar7) {
                *(int *)plVar10 = iVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*local_130 + 0x10))();
            }
          }
        }
      }
      uVar16 = (ulong)*(ushort *)((long)puVar38 + (8 - (long)(int)*puVar38));
      uVar20 = (ulong)*(uint *)((long)puVar38 + uVar16);
      uVar24 = uVar24 + 1;
      lVar15 = lVar15 + 4;
    } while (uVar24 < *(uint *)((long)((long)puVar38 + uVar16) + uVar20));
  }
  local_168 = (byte *)0x0;
  local_150 = local_108;
  local_148 = local_100;
  pbStack_140 = local_f8;
  lVar15 = (long)local_118 - (long)local_120;
  local_138 = (ulong)local_f0;
  local_160 = (byte *)0x0;
  local_158 = (byte *)0x0;
  if (lVar15 != 0) {
    uVar16 = local_100;
    if (0x7ffffffffffffffe < local_100) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < (ulong)(lVar15 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pbVar13 = (byte *)(**(code **)(*local_108 + 0x10))(local_108,lVar15,8);
    if (pbVar13 == (byte *)0x0) {
      (**(code **)(*local_150 + 0xb8))();
    }
    plVar27 = local_118;
    plVar10 = local_120;
    local_158 = pbVar13 + (lVar15 >> 3) * 8;
    local_168 = pbVar13;
    local_160 = pbVar13;
    if (local_120 != local_118) {
      FUN_0166a198(&local_150,pbVar13,local_120);
      local_160 = local_160 + 8;
      if (plVar10 + 1 != plVar27) {
        FUN_0166a198(&local_150);
        for (plVar10 = plVar10 + 2; local_160 = local_160 + 8, plVar10 != plVar27;
            plVar10 = plVar10 + 1) {
          FUN_0166a198(&local_150,local_160,plVar10);
        }
      }
    }
  }
  FUN_016681f0(&local_168,local_170);
  pbVar26 = local_160;
  pbVar13 = local_168;
  if (local_168 != (byte *)0x0) {
    if (local_160 != local_168) {
      pbVar29 = local_160 + -8;
      plVar10 = *(long **)pbVar29;
      if (plVar10 != (long *)0x0) {
        plVar27 = plVar10 + 10;
        do {
          iVar9 = (int)*plVar27 + -1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar7) {
            *(int *)plVar27 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      if (pbVar29 != pbVar13) {
        pbVar26 = pbVar26 + -0x10;
        plVar10 = *(long **)pbVar26;
        if (plVar10 != (long *)0x0) {
          plVar27 = plVar10 + 10;
          do {
            iVar9 = (int)*plVar27 + -1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar7) {
              *(int *)plVar27 = iVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 == 0) goto LAB_0166c73c;
        }
LAB_0166c714:
        if (pbVar26 != pbVar13) {
          while( true ) {
            pbVar26 = pbVar26 + -8;
            plVar10 = *(long **)pbVar26;
            if (plVar10 == (long *)0x0) break;
            plVar27 = plVar10 + 10;
            do {
              iVar9 = (int)*plVar27 + -1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar7) {
                *(int *)plVar27 = iVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 != 0) break;
LAB_0166c73c:
            (**(code **)(*plVar10 + 0x10))();
            if (pbVar26 == pbVar13) goto LAB_0166c754;
          }
          goto LAB_0166c714;
        }
      }
    }
LAB_0166c754:
    plVar10 = local_150;
    pbVar26 = local_168;
    local_160 = pbVar13;
    lVar15 = (long)local_158 - (long)local_168;
    uVar16 = (**(code **)(*local_150 + 0xc0))(local_150);
    if ((uVar16 & 1) != 0) {
      lVar21 = tpidr_el0;
      if (*(char *)(lVar21 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar21 + 0x38d488) = 1;
        *(undefined8 *)(lVar21 + 0x38d478) = 0;
        *(undefined8 *)(lVar21 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar21 + 0x38d480)) {
        FUN_02bcc824(plVar10,pbVar26,lVar15,8);
        goto LAB_0166c7d4;
      }
    }
    (**(code **)(*plVar10 + 0x18))(plVar10,pbVar26,lVar15,8);
  }
LAB_0166c7d4:
  FUN_01f05b24(&local_128);
  plVar10 = local_120;
  plVar27 = local_118;
  if (local_128 != (long *)0x0) {
    if (((char)local_128[0x11] == '\0') && (plVar25[0x1b] != 0)) {
      lVar15 = 0;
      do {
        lVar21 = *(long *)(*(long *)(plVar25[0x13] +
                                    ((ulong)(plVar25[0x1a] + lVar15) >> 6 & 0x3fffffffffffff8)) +
                          (plVar25[0x1a] + lVar15 & 0x1ffU) * 8);
        if (*(long *)(lVar21 + 0x58) == 0x1608695374913ba9) {
          lVar21 = FUN_01673270(lVar21,1);
          if ((lVar21 == -0x9bb5026105d751b) ||
             (lVar15 = FUN_01673270(*(undefined8 *)
                                     (*(long *)(plVar25[0x13] +
                                               ((ulong)(plVar25[0x1a] + lVar15) >> 6 &
                                               0x3fffffffffffff8)) +
                                     (plVar25[0x1a] + lVar15 & 0x1ffU) * 8),1),
             lVar15 == 0xbe0efda8cfefbc5)) {
            FUN_01f06a34(local_128);
          }
          break;
        }
        lVar15 = lVar15 + 1;
      } while (plVar25[0x1b] != lVar15);
    }
    plVar10 = local_120;
    plVar27 = local_118;
    if (local_128 != (long *)0x0) {
      lVar15 = local_128[0xb];
      piVar19 = (int *)(lVar15 + 0xc);
      do {
        iVar9 = *piVar19;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar7) {
          *piVar19 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_128 + 0x20))();
        plVar10 = local_120;
        plVar27 = local_118;
      }
    }
  }
  local_120 = plVar10;
  local_118 = plVar27;
  if (plVar10 != (long *)0x0) {
    if (plVar27 != plVar10) {
      plVar14 = (long *)plVar27[-1];
      if (plVar14 != (long *)0x0) {
        plVar35 = plVar14 + 10;
        do {
          iVar9 = (int)*plVar35 + -1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar35,0x10);
          if (bVar7) {
            *(int *)plVar35 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      if (plVar27 + -1 != plVar10) {
        plVar27 = plVar27 + -2;
        plVar14 = (long *)*plVar27;
        if (plVar14 != (long *)0x0) {
          plVar35 = plVar14 + 10;
          do {
            iVar9 = (int)*plVar35 + -1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar35,0x10);
            if (bVar7) {
              *(int *)plVar35 = iVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 == 0) goto LAB_0166c86c;
        }
LAB_0166c844:
        if (plVar27 != plVar10) {
          while( true ) {
            plVar27 = plVar27 + -1;
            plVar14 = (long *)*plVar27;
            if (plVar14 == (long *)0x0) break;
            plVar35 = plVar14 + 10;
            do {
              iVar9 = (int)*plVar35 + -1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar35,0x10);
              if (bVar7) {
                *(int *)plVar35 = iVar9;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 != 0) break;
LAB_0166c86c:
            (**(code **)(*plVar14 + 0x10))();
            if (plVar27 == plVar10) goto LAB_0166c884;
          }
          goto LAB_0166c844;
        }
      }
    }
LAB_0166c884:
    plVar14 = local_108;
    plVar27 = local_120;
    lVar15 = (long)local_110 - (long)local_120;
    local_118 = plVar10;
    uVar16 = (**(code **)(*local_108 + 0xc0))(local_108);
    if ((uVar16 & 1) != 0) {
      lVar21 = tpidr_el0;
      if (*(char *)(lVar21 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar21 + 0x38d488) = 1;
        *(undefined8 *)(lVar21 + 0x38d478) = 0;
        *(undefined8 *)(lVar21 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar21 + 0x38d480)) {
        FUN_02bcc824(plVar14,plVar27,lVar15,8);
        goto joined_r0x0166c904;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,plVar27,lVar15,8);
  }
joined_r0x0166c904:
  if (plVar41 != (long *)0x0) {
    plVar10 = plVar41 + 10;
    do {
      lVar15 = *plVar10;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(int *)plVar10 = (int)lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar15 == 1) {
      (**(code **)(*plVar41 + 0x10))(plVar41);
    }
  }
  iVar9 = 1;
joined_r0x0166ca8c:
  if (local_70[0] != (long *)0x0) {
    lVar15 = local_70[0][0xb];
    piVar19 = (int *)(lVar15 + 0xc);
    do {
      iVar1 = *piVar19;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar7) {
        *piVar19 = iVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar1 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
    }
  }
  if (plVar25 != (long *)0x0) {
    plVar10 = plVar25 + 10;
    do {
      iVar1 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(int *)plVar10 = iVar1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
    }
  }
  if (plVar28 != (long *)0x0) {
    plVar10 = plVar28 + 10;
    do {
      iVar1 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *(int *)plVar10 = iVar1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar1 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
  }
  if ((iVar9 != 0) && (pcVar17 = (code *)*puVar23, pcVar17 != (code *)0x0)) {
    (*pcVar17)(puVar23 + 4,param_2);
  }
  return iVar9;
}


