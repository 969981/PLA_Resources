/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0166da5c; name: FUN_0166da5c
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0166da5c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  byte *pbVar10;
  long *plVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  code *pcVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  byte *pbVar27;
  uint *puVar28;
  uint *puVar30;
  uint *puVar29;
  long lVar31;
  long *plVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long *plVar35;
  long *plVar36;
  char *pcVar37;
  long *plVar38;
  long *plVar39;
  ulong uVar40;
  ulong uVar41;
  undefined1 *local_190;
  byte *local_188;
  byte *local_180;
  byte *local_178;
  long *local_170;
  ulong local_168;
  byte *pbStack_160;
  ulong local_158;
  long *local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  ulong local_130;
  byte *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined8 local_110;
  byte *local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined8 local_f0;
  byte *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined1 *local_78;
  undefined1 auStack_70 [16];
  
  puVar25 = (undefined8 *)param_1[3];
  local_190 = (undefined1 *)*param_1;
  if ((undefined1 *)param_1[1] != &DAT_cbf29ce484222645) {
    local_190 = (undefined1 *)param_1[1];
  }
  cVar6 = *(char *)(param_1 + 2);
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar18 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar18;
  plVar35 = *(long **)(lVar18 + 0x100);
  if (plVar35 != (long *)0x0) {
    plVar32 = plVar35 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar9) {
        *(int *)plVar32 = (int)*plVar32 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar32 = (long *)plVar35[0x20];
  if (plVar32 != (long *)0x0) {
    plVar39 = plVar32 + 10;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar9) {
        *(int *)plVar39 = (int)*plVar39 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  local_a0 = (long *)plVar32[0xf];
  if (local_a0 != (long *)0x0) {
    lVar18 = local_a0[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0166f038;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  plVar39 = plVar32 + 10;
  do {
    iVar12 = (int)*plVar39 + -1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar39,0x10);
    if (bVar9) {
      *(int *)plVar39 = iVar12;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar32 + 0x10))(plVar32);
  }
  puVar28 = (uint *)*param_2;
  uVar19 = (ulong)(int)*puVar28;
  uVar22 = (ulong)*(ushort *)((long)puVar28 + (6 - uVar19));
  uVar26 = (ulong)*(uint *)((long)puVar28 + uVar22);
  if (*(int *)((long)((long)puVar28 + uVar22) + uVar26) != 0) {
    uVar40 = 0;
    puVar20 = puVar28 + 4;
    do {
      lVar18 = uVar22 + uVar26 + (ulong)*(uint *)((long)puVar20 + uVar22 + uVar26 + -0xc);
      lVar23 = lVar18 - *(int *)((long)puVar20 + lVar18 + -0xc);
      if (((*(ushort *)((long)puVar20 + lVar23 + -0xc) < 5) ||
          (uVar22 = (ulong)*(ushort *)((long)puVar20 + lVar23 + -8), uVar22 == 0)) ||
         (*(undefined1 **)((long)puVar20 + lVar18 + uVar22 + -0xc) != &DAT_cbf29ce484222645)) {
        local_140 = (long *)&DAT_cbf29ce484222645;
        local_138 = (long *)&DAT_03996322;
        local_130 = 0;
        local_128 = (byte *)0x0;
        local_120 = &DAT_cbf29ce484222645;
        puStack_118 = &DAT_03996322;
        local_110 = 0;
        local_108 = (byte *)0x0;
        local_100 = &DAT_cbf29ce484222645;
        puStack_f8 = &DAT_03996322;
        local_f0 = 0;
        local_e8 = (byte *)0x0;
        local_e0 = &DAT_cbf29ce484222645;
        puStack_d8 = &DAT_03996322;
        local_d0 = 0;
        local_c8 = (long *)0x0;
        local_c0 = &DAT_cbf29ce484222645;
        puStack_b8 = &DAT_03996322;
        local_b0 = 0;
        local_a8 = (long *)0x0;
        lVar23 = lVar18 - *(int *)((long)puVar20 + lVar18 + -0xc);
        if (*(ushort *)((long)puVar20 + lVar23 + -0xc) < 5) {
          local_150 = (long *)0x0;
        }
        else {
          uVar19 = (ulong)*(ushort *)((long)puVar20 + lVar23 + -8);
          local_150 = (long *)0x0;
          if (uVar19 != 0) {
            local_150 = *(long **)((long)puVar20 + lVar18 + uVar19 + -0xc);
          }
        }
        lVar23 = lVar18 - *(int *)((long)puVar20 + lVar18 + -0xc);
        if (*(ushort *)((long)puVar20 + lVar23 + -0xc) < 7) {
          local_148 = (long *)0x0;
        }
        else {
          uVar19 = (ulong)*(ushort *)((long)puVar20 + lVar23 + -6);
          local_148 = (long *)0x0;
          if (uVar19 != 0) {
            local_148 = *(long **)((long)puVar20 + lVar18 + uVar19 + -0xc);
          }
        }
        lVar23 = lVar18 - *(int *)((long)puVar20 + lVar18 + -0xc);
        if ((*(ushort *)((long)puVar20 + lVar23 + -0xc) < 9) ||
           (uVar19 = (ulong)*(ushort *)((long)puVar20 + lVar23 + -4), uVar19 == 0)) {
          pcVar37 = &DAT_00000004;
          if (DAT_00000004 != '\0') goto LAB_0166dd50;
LAB_0166e024:
          pbVar15 = (byte *)FUN_00938550();
          if (pbVar15 == (byte *)0x0) goto LAB_0166dd88;
          (**(code **)(*(long *)pbVar15 + 0x18))(pbVar15);
          if (pbVar15 != (byte *)0x0) goto LAB_0166dd8c;
LAB_0166e044:
          plVar32 = *(long **)PTR_DAT_04379c88;
          if (pbVar15 != (byte *)0x0) goto LAB_0166dd98;
LAB_0166e054:
          plVar39 = *(long **)PTR_PTR_04379d00;
          if (pbVar15 != (byte *)0x0) goto LAB_0166dda4;
LAB_0166e064:
          uVar19 = 0;
        }
        else {
          lVar23 = lVar18 + uVar19;
          pcVar37 = (char *)((long)puVar20 +
                            lVar23 + (ulong)*(uint *)((long)puVar20 + lVar23 + -0xc) + -8);
          if (*pcVar37 == '\0') goto LAB_0166e024;
LAB_0166dd50:
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar13 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar13;
          FUN_02a47cd8(&local_188,uVar13,pcVar37);
          pbVar15 = local_188;
LAB_0166dd88:
          if (pbVar15 == (byte *)0x0) goto LAB_0166e044;
LAB_0166dd8c:
          plVar32 = *(long **)(pbVar15 + 0x58);
          if (pbVar15 == (byte *)0x0) goto LAB_0166e054;
LAB_0166dd98:
          plVar39 = *(long **)(pbVar15 + 0x60);
          if (pbVar15 == (byte *)0x0) goto LAB_0166e064;
LAB_0166dda4:
          uVar19 = *(ulong *)(pbVar15 + 0x68);
          (**(code **)(*(long *)pbVar15 + 0x18))(pbVar15);
        }
        pbVar27 = local_128;
        local_128 = (byte *)0x0;
        local_140 = plVar32;
        local_138 = plVar39;
        local_130 = uVar19;
        if (pbVar27 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar27 + 0x20))();
        }
        local_128 = pbVar15;
        if (pbVar15 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar15 + 0x20))(pbVar15);
        }
        lVar23 = lVar18 - *(int *)((long)puVar20 + lVar18 + -0xc);
        if ((*(ushort *)((long)puVar20 + lVar23 + -0xc) < 0xb) ||
           (uVar19 = (ulong)*(ushort *)((long)puVar20 + lVar23 + -2), uVar19 == 0)) {
          pcVar37 = &DAT_00000004;
          if (DAT_00000004 != '\0') goto LAB_0166de2c;
LAB_0166e078:
          pbVar15 = (byte *)FUN_00938550();
          if (pbVar15 == (byte *)0x0) goto LAB_0166de64;
          (**(code **)(*(long *)pbVar15 + 0x18))(pbVar15);
          if (pbVar15 != (byte *)0x0) goto LAB_0166de68;
LAB_0166e098:
          uVar19 = *(ulong *)PTR_DAT_04379c88;
          if (pbVar15 != (byte *)0x0) goto LAB_0166de74;
LAB_0166e0a8:
          uVar13 = *(undefined8 *)PTR_PTR_04379d00;
          if (pbVar15 != (byte *)0x0) goto LAB_0166de80;
LAB_0166e0b8:
          uVar33 = 0;
        }
        else {
          lVar23 = lVar18 + uVar19;
          pcVar37 = (char *)((long)puVar20 +
                            lVar23 + (ulong)*(uint *)((long)puVar20 + lVar23 + -0xc) + -8);
          if (*pcVar37 == '\0') goto LAB_0166e078;
LAB_0166de2c:
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar13 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar13;
          FUN_02a47cd8(&local_188,uVar13,pcVar37);
          pbVar15 = local_188;
LAB_0166de64:
          if (pbVar15 == (byte *)0x0) goto LAB_0166e098;
LAB_0166de68:
          uVar19 = *(ulong *)(pbVar15 + 0x58);
          if (pbVar15 == (byte *)0x0) goto LAB_0166e0a8;
LAB_0166de74:
          uVar13 = *(undefined8 *)(pbVar15 + 0x60);
          if (pbVar15 == (byte *)0x0) goto LAB_0166e0b8;
LAB_0166de80:
          uVar33 = *(undefined8 *)(pbVar15 + 0x68);
          (**(code **)(*(long *)pbVar15 + 0x18))(pbVar15);
        }
        pbVar27 = local_108;
        local_108 = (byte *)0x0;
        local_120 = (undefined1 *)uVar19;
        puStack_118 = (undefined1 *)uVar13;
        local_110 = uVar33;
        if (pbVar27 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar27 + 0x20))();
        }
        local_108 = pbVar15;
        if (pbVar15 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar15 + 0x20))(pbVar15);
        }
        lVar23 = lVar18 - *(int *)((long)puVar20 + lVar18 + -0xc);
        if ((*(ushort *)((long)puVar20 + lVar23 + -0xc) < 0xd) ||
           (uVar19 = (ulong)*(ushort *)((long)puVar20 + lVar23), uVar19 == 0)) {
          pcVar37 = &DAT_00000004;
          if (DAT_00000004 != '\0') goto LAB_0166df08;
LAB_0166e0cc:
          pbVar15 = (byte *)FUN_00938550();
          if (pbVar15 == (byte *)0x0) goto LAB_0166df40;
          (**(code **)(*(long *)pbVar15 + 0x18))(pbVar15);
          if (pbVar15 != (byte *)0x0) goto LAB_0166df44;
LAB_0166e0ec:
          uVar13 = *(undefined8 *)PTR_DAT_04379c88;
          if (pbVar15 != (byte *)0x0) goto LAB_0166df50;
LAB_0166e0fc:
          uVar33 = *(undefined8 *)PTR_PTR_04379d00;
          if (pbVar15 != (byte *)0x0) goto LAB_0166df5c;
LAB_0166e10c:
          uVar34 = 0;
        }
        else {
          lVar18 = lVar18 + uVar19;
          pcVar37 = (char *)((long)puVar20 +
                            lVar18 + (ulong)*(uint *)((long)puVar20 + lVar18 + -0xc) + -8);
          if (*pcVar37 == '\0') goto LAB_0166e0cc;
LAB_0166df08:
          if (((*PTR_DAT_04379cd0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379cd0);
          }
          uVar13 = *(undefined8 *)PTR_DAT_04379cd8;
          *(undefined8 *)PTR_DAT_04379ce0 = uVar13;
          FUN_02a47cd8(&local_188,uVar13,pcVar37);
          pbVar15 = local_188;
LAB_0166df40:
          if (pbVar15 == (byte *)0x0) goto LAB_0166e0ec;
LAB_0166df44:
          uVar13 = *(undefined8 *)(pbVar15 + 0x58);
          if (pbVar15 == (byte *)0x0) goto LAB_0166e0fc;
LAB_0166df50:
          uVar33 = *(undefined8 *)(pbVar15 + 0x60);
          if (pbVar15 == (byte *)0x0) goto LAB_0166e10c;
LAB_0166df5c:
          uVar34 = *(undefined8 *)(pbVar15 + 0x68);
          (**(code **)(*(long *)pbVar15 + 0x18))(pbVar15);
        }
        pbVar27 = local_e8;
        local_e8 = (byte *)0x0;
        local_100 = (undefined1 *)uVar13;
        puStack_f8 = (undefined1 *)uVar33;
        local_f0 = uVar34;
        if (pbVar27 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar27 + 0x20))();
        }
        local_e8 = pbVar15;
        if (pbVar15 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar15 + 0x20))(pbVar15);
        }
        uVar19 = FUN_0165ff30(&local_150);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        if (local_c8 != (long *)0x0) {
          (**(code **)(*local_c8 + 0x20))();
        }
        if (local_e8 != (byte *)0x0) {
          (**(code **)(*(long *)local_e8 + 0x20))();
        }
        if (local_108 != (byte *)0x0) {
          (**(code **)(*(long *)local_108 + 0x20))();
        }
        if (local_128 != (byte *)0x0) {
          (**(code **)(*(long *)local_128 + 0x20))();
        }
        if ((uVar19 & 1) == 0) {
          iVar12 = 0;
          goto joined_r0x0166e674;
        }
        uVar19 = (ulong)*puVar28;
      }
      uVar22 = (ulong)*(ushort *)((long)puVar28 + (6 - (long)(int)uVar19));
      uVar26 = (ulong)*(uint *)((long)puVar28 + uVar22);
      uVar40 = uVar40 + 1;
      puVar20 = puVar20 + 1;
    } while (uVar40 < *(uint *)((long)((long)puVar28 + uVar22) + uVar26));
  }
  if (cVar6 == '\0') {
    iVar12 = 1;
    goto joined_r0x0166e674;
  }
  local_138 = *(long **)(*(long *)PTR_DAT_0437b160 + 0x388);
  local_140 = (long *)0x0;
  local_150 = (long *)0x0;
  local_148 = (long *)0x0;
  local_130 = 0x1fffffffffffffff;
  local_128 = (byte *)0x0;
  local_120 = (undefined1 *)((ulong)local_120 & 0xffffffff00000000);
  uVar19 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)(int)*puVar28));
  uVar22 = (ulong)*(uint *)((long)puVar28 + uVar19);
  lVar18 = tpidr_el0;
  if (*(int *)((long)((long)puVar28 + uVar19) + uVar22) != 0) {
    uVar26 = 0;
    lVar23 = (long)puVar28 + 0xd;
    do {
      puVar20 = (uint *)((long)puVar28 + uVar26 * 4 + uVar22 + uVar19 + 4);
      uVar40 = (ulong)*puVar20;
      piVar1 = (int *)((long)puVar20 + uVar40);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
        local_78 = (undefined1 *)0x0;
      }
      else {
        uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        local_78 = (undefined1 *)0x0;
        if (uVar24 != 0) {
          local_78 = *(undefined1 **)((long)piVar1 + uVar24);
        }
      }
      if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
         (uVar24 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar24 != 0)) {
        uVar41 = (ulong)*(uint *)((long)piVar1 + uVar24);
        puVar20 = (uint *)((long)((long)piVar1 + uVar24) + uVar41);
        if (puVar20 != (uint *)0x0) {
          local_80 = (long *)FUN_0166ad3c(&local_188,
                                          *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388),
                                          &local_78,&local_190,&local_a0);
          if (local_80 == (long *)0x0) {
            uVar4 = *puVar20;
            plVar32 = (long *)0x0;
          }
          else {
            plVar32 = local_80 + 10;
            do {
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
              if (bVar9) {
                *(int *)plVar32 = (int)*plVar32 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            uVar4 = *puVar20;
            plVar32 = local_80;
          }
          if (uVar4 != 0) {
            lVar31 = lVar23 + uVar22 + uVar19 + uVar41 + uVar24 + uVar40;
            puVar29 = puVar20 + 1;
            do {
              puVar30 = puVar29 + 1;
              uVar5 = *puVar29;
              pbVar15 = (byte *)((long)puVar30 + (ulong)uVar5);
              local_178 = (byte *)strlen((char *)pbVar15);
              bVar7 = *pbVar15;
              local_188 = &DAT_cbf29ce484222645;
              if (bVar7 != 0) {
                local_188 = &DAT_cbf29ce484222645;
                pbVar27 = (byte *)(lVar31 + (ulong)uVar5);
                do {
                  local_188 = (byte *)(((ulong)local_188 ^ (ulong)bVar7) * 0x100000001b3);
                  bVar7 = *pbVar27;
                  pbVar27 = pbVar27 + 1;
                } while (bVar7 != 0);
              }
              local_170 = (long *)0x0;
              local_180 = pbVar15;
              FUN_00e8ca50(plVar32,&local_188);
              if (local_170 != (long *)0x0) {
                (**(code **)(*local_170 + 0x20))();
              }
              lVar31 = lVar31 + 4;
              puVar29 = puVar30;
            } while (puVar30 != puVar20 + 1 + uVar4);
          }
          if (local_148 == local_140) {
            lVar31 = (long)local_148 - (long)local_150 >> 3;
            uVar19 = lVar31 + 1;
            uVar22 = local_130;
            if (0x7ffffffffffffffe < local_130) {
              uVar22 = 0x7fffffffffffffff;
            }
            if (uVar22 < uVar19) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar40 = (long)local_140 - (long)local_150 >> 2;
            if (uVar19 <= uVar40) {
              uVar19 = uVar40;
            }
            if ((ulong)((long)local_140 - (long)local_150 >> 3) < uVar22 >> 1) {
              uVar22 = uVar19;
            }
            if (uVar22 == 0) {
              lVar14 = 0;
            }
            else {
              lVar14 = (**(code **)(*local_138 + 0x10))(local_138,uVar22 << 3,8);
              if (lVar14 == 0) {
                (**(code **)(*local_138 + 0xb8))();
              }
            }
            plVar32 = (long *)(lVar14 + lVar31 * 8);
            FUN_0166af20(&local_138,plVar32,&local_80);
            plVar2 = local_150;
            plVar38 = plVar32;
            plVar16 = local_150;
            plVar39 = local_150;
            plVar36 = local_148;
            plVar17 = local_140;
            while( true ) {
              local_150 = plVar38;
              local_140 = (long *)(lVar14 + uVar22 * 8);
              plVar11 = plVar32 + 1;
              plVar38 = local_138;
              if (plVar36 == plVar2) break;
              plVar38 = local_150 + -1;
              plVar36 = plVar36 + -1;
              local_150 = plVar16;
              local_140 = plVar17;
              FUN_0166af20(&local_138,plVar38,plVar36);
              plVar16 = local_150;
              plVar39 = local_148;
              plVar17 = local_140;
            }
            while( true ) {
              local_148 = plVar11;
              local_138 = plVar38;
              if (plVar39 == plVar16) break;
              plVar39 = plVar39 + -1;
              plVar32 = (long *)*plVar39;
              plVar11 = local_148;
              if (plVar32 != (long *)0x0) {
                plVar36 = plVar32 + 10;
                do {
                  iVar12 = (int)*plVar36 + -1;
                  cVar6 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar36,0x10);
                  if (bVar9) {
                    *(int *)plVar36 = iVar12;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (iVar12 == 0) {
                  (**(code **)(*plVar32 + 0x10))();
                  plVar11 = local_148;
                  plVar38 = local_138;
                }
              }
            }
            if (plVar16 != (long *)0x0) {
              uVar19 = (**(code **)(*plVar38 + 0xc0))(plVar38);
              if ((uVar19 & 1) != 0) {
                if (*(char *)(lVar18 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar18 + 0x38d488) = 1;
                  *(undefined8 *)(lVar18 + 0x38d478) = 0;
                  *(undefined8 *)(lVar18 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar18 + 0x38d480)) {
                  FUN_02bcc824(plVar38,plVar16,(long)plVar17 - (long)plVar16,8);
                  goto joined_r0x0166e548;
                }
              }
              (**(code **)(*plVar38 + 0x18))(plVar38,plVar16,(long)plVar17 - (long)plVar16,8);
            }
          }
          else {
            FUN_0166af20(&local_138,local_148,&local_80);
            local_148 = local_148 + 1;
          }
joined_r0x0166e548:
          if (local_80 != (long *)0x0) {
            plVar32 = local_80 + 10;
            do {
              iVar12 = (int)*plVar32 + -1;
              cVar6 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
              if (bVar9) {
                *(int *)plVar32 = iVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar12 == 0) {
              (**(code **)(*local_80 + 0x10))();
            }
          }
        }
      }
      uVar19 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)(int)*puVar28));
      uVar22 = (ulong)*(uint *)((long)puVar28 + uVar19);
      uVar26 = uVar26 + 1;
      lVar23 = lVar23 + 4;
    } while (uVar26 < *(uint *)((long)((long)puVar28 + uVar19) + uVar22));
  }
  lVar23 = (long)local_148 - (long)local_150;
  local_188 = (byte *)0x0;
  local_180 = (byte *)0x0;
  local_178 = (byte *)0x0;
  local_170 = local_138;
  local_168 = local_130;
  pbStack_160 = local_128;
  local_158 = (ulong)local_120;
  if (lVar23 != 0) {
    uVar19 = local_130;
    if (0x7ffffffffffffffe < local_130) {
      uVar19 = 0x7fffffffffffffff;
    }
    if (uVar19 < (ulong)(lVar23 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pbVar15 = (byte *)(**(code **)(*local_138 + 0x10))(local_138,lVar23,8);
    if (pbVar15 == (byte *)0x0) {
      (**(code **)(*local_170 + 0xb8))();
    }
    plVar32 = local_148;
    local_178 = pbVar15 + (lVar23 >> 3) * 8;
    local_188 = pbVar15;
    local_180 = pbVar15;
    if (local_150 != local_148) {
      plVar39 = local_150;
      do {
        FUN_0166a198(&local_170,local_180,plVar39);
        plVar39 = plVar39 + 1;
        local_180 = local_180 + 8;
      } while (plVar32 != plVar39);
    }
  }
  local_78 = local_190;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar23 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar23;
  plVar32 = *(long **)(lVar23 + 0x100);
  if (plVar32 != (long *)0x0) {
    plVar39 = plVar32 + 10;
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar39,0x10);
      if (bVar9) {
        *(int *)plVar39 = (int)*plVar39 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar39 = (long *)plVar32[0x20];
  if (plVar39 != (long *)0x0) {
    plVar16 = plVar39 + 10;
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar16 = plVar32 + 10;
  do {
    iVar12 = (int)*plVar16 + -1;
    cVar6 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar9) {
      *(int *)plVar16 = iVar12;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar32 + 0x10))();
    plVar32 = (long *)plVar39[0x1a];
  }
  else {
    plVar32 = (long *)plVar39[0x1a];
  }
  if (plVar32 != (long *)0x0) {
    plVar16 = plVar32 + 10;
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_80 = (long *)plVar39[0xf];
  if (local_80 != (long *)0x0) {
    lVar23 = local_80[0xb];
    if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) {
LAB_0166f038:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar23 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
      *(undefined8 *)(lVar23 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  pbVar15 = local_180;
  if (local_188 != local_180) {
    pbVar27 = local_188;
    do {
      local_88 = *(long **)pbVar27;
      if (local_88 != (long *)0x0) {
        plVar16 = local_88 + 10;
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      lVar23 = plVar32[0xc];
      lVar31 = plVar32[0xd] - lVar23;
      uVar19 = 0;
      if (lVar31 != 0) {
        uVar19 = lVar31 * 0x40 - 1;
      }
      uVar22 = plVar32[0x14] + plVar32[0x13];
      if (uVar19 == uVar22) {
        FUN_0166fd0c(plVar32 + 0xb);
        uVar22 = plVar32[0x13] + plVar32[0x14];
        lVar23 = plVar32[0xc];
        if (plVar32[0xd] != lVar23) goto LAB_0166e878;
LAB_0166e8f0:
        lVar23 = 0;
      }
      else {
        if (plVar32[0xd] == lVar23) goto LAB_0166e8f0;
LAB_0166e878:
        lVar23 = *(long *)(lVar23 + (uVar22 >> 6 & 0x3fffffffffffff8)) + (uVar22 & 0x1ff) * 8;
      }
      FUN_0166af20(plVar32 + 0x15,lVar23,&local_88);
      plVar32[0x14] = plVar32[0x14] + 1;
      if (local_88 != (long *)0x0) {
        plVar16 = local_88 + 10;
        do {
          iVar12 = (int)*plVar16 + -1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = iVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      pbVar27 = pbVar27 + 8;
    } while (pbVar27 != pbVar15);
  }
  local_88 = (long *)FUN_0166a974(&local_90,*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388),
                                  &DAT_03a7c490,&local_78,&local_80);
  if (local_88 != (long *)0x0) {
    plVar16 = local_88 + 10;
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar23 = plVar32[0xc];
  lVar31 = plVar32[0xd] - lVar23;
  uVar19 = 0;
  if (lVar31 != 0) {
    uVar19 = lVar31 * 0x40 - 1;
  }
  uVar22 = plVar32[0x14] + plVar32[0x13];
  if (uVar19 == uVar22) {
    FUN_0166fd0c(plVar32 + 0xb);
    uVar22 = plVar32[0x13] + plVar32[0x14];
    lVar23 = plVar32[0xc];
    if (plVar32[0xd] != lVar23) goto LAB_0166e96c;
LAB_0166eebc:
    lVar23 = 0;
  }
  else {
    if (plVar32[0xd] == lVar23) goto LAB_0166eebc;
LAB_0166e96c:
    lVar23 = *(long *)(lVar23 + (uVar22 >> 6 & 0x3fffffffffffff8)) + (uVar22 & 0x1ff) * 8;
  }
  FUN_0166af20(plVar32 + 0x15,lVar23,&local_88);
  pbVar15 = local_180;
  plVar32[0x14] = plVar32[0x14] + 1;
  if (local_188 != local_180) {
    pbVar27 = local_188;
    do {
      local_90 = *(long **)pbVar27;
      if (local_90 == (long *)0x0) {
        plVar16 = (long *)0x0;
      }
      else {
        plVar16 = local_90 + 10;
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = (int)*plVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plVar16 = local_90;
      }
      if (plVar16[0xb] == 0x1f9c392cefbb1b58) {
        local_98 = (long *)FUN_0166a464(auStack_70,
                                        *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x388),
                                        &DAT_03a7c498,&local_90);
        if (local_98 != (long *)0x0) {
          plVar16 = local_98 + 10;
          do {
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar9) {
              *(int *)plVar16 = (int)*plVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        lVar23 = plVar32[0xc];
        lVar31 = plVar32[0xd] - lVar23;
        uVar19 = 0;
        if (lVar31 != 0) {
          uVar19 = lVar31 * 0x40 - 1;
        }
        uVar22 = plVar32[0x14] + plVar32[0x13];
        if (uVar19 == uVar22) {
          FUN_0166fd0c(plVar32 + 0xb);
          uVar22 = plVar32[0x13] + plVar32[0x14];
          lVar23 = plVar32[0xc];
          if (plVar32[0xd] != lVar23) goto LAB_0166ea68;
LAB_0166eb10:
          lVar23 = 0;
        }
        else {
          if (plVar32[0xd] == lVar23) goto LAB_0166eb10;
LAB_0166ea68:
          lVar23 = *(long *)(lVar23 + (uVar22 >> 6 & 0x3fffffffffffff8)) + (uVar22 & 0x1ff) * 8;
        }
        FUN_0166af20(plVar32 + 0x15,lVar23,&local_98);
        plVar32[0x14] = plVar32[0x14] + 1;
        if (local_98 != (long *)0x0) {
          plVar16 = local_98 + 10;
          do {
            iVar12 = (int)*plVar16 + -1;
            cVar6 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar9) {
              *(int *)plVar16 = iVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*local_98 + 0x10))();
          }
        }
        plVar16 = local_90;
      }
      if (plVar16 != (long *)0x0) {
        plVar36 = plVar16 + 10;
        do {
          iVar12 = (int)*plVar36 + -1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar36,0x10);
          if (bVar9) {
            *(int *)plVar36 = iVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      pbVar27 = pbVar27 + 8;
    } while (pbVar27 != pbVar15);
  }
  if (local_88 != (long *)0x0) {
    plVar16 = local_88 + 10;
    do {
      iVar12 = (int)*plVar16 + -1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *(int *)plVar16 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (local_80 != (long *)0x0) {
    lVar23 = *(long *)((long)local_80 + 0x58);
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (plVar32 != (long *)0x0) {
    plVar16 = plVar32 + 10;
    do {
      iVar12 = (int)*plVar16 + -1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar9) {
        *(int *)plVar16 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar32 + 0x10))(plVar32);
    }
  }
  pbVar27 = local_188;
  pbVar15 = local_180;
  if (plVar39 != (long *)0x0) {
    plVar32 = plVar39 + 10;
    do {
      iVar12 = (int)*plVar32 + -1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar9) {
        *(int *)plVar32 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar39 + 0x10))(plVar39);
      pbVar27 = local_188;
      pbVar15 = local_180;
    }
  }
  pbVar10 = pbVar27;
  local_180 = pbVar15;
  plVar32 = local_170;
  local_188 = pbVar27;
  plVar39 = local_150;
  if (pbVar27 != (byte *)0x0) {
    while( true ) {
      local_188 = pbVar10;
      local_170 = plVar32;
      if (pbVar15 == pbVar27) break;
      pbVar15 = pbVar15 + -8;
      plVar39 = *(long **)pbVar15;
      if (plVar39 != (long *)0x0) {
        plVar16 = plVar39 + 10;
        do {
          iVar12 = (int)*plVar16 + -1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *(int *)plVar16 = iVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar39 + 0x10))();
          pbVar10 = local_188;
          plVar32 = local_170;
        }
      }
    }
    lVar23 = (long)local_178 - (long)pbVar10;
    local_180 = pbVar27;
    uVar19 = (**(code **)(*plVar32 + 0xc0))(plVar32);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar32,pbVar10,lVar23,8);
        plVar39 = local_150;
        goto joined_r0x0166ec7c;
      }
    }
    (**(code **)(*plVar32 + 0x18))(plVar32,pbVar10,lVar23,8);
    plVar39 = local_150;
  }
joined_r0x0166ec7c:
  local_150 = plVar39;
  if (plVar39 != (long *)0x0) {
    plVar32 = plVar39;
    plVar16 = local_148;
    plVar36 = local_138;
    while( true ) {
      local_150 = plVar32;
      local_138 = plVar36;
      if (plVar16 == plVar39) break;
      plVar16 = plVar16 + -1;
      plVar17 = (long *)*plVar16;
      if (plVar17 != (long *)0x0) {
        plVar2 = plVar17 + 10;
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar9) {
            *(int *)plVar2 = iVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar17 + 0x10))();
          plVar32 = local_150;
          plVar36 = local_138;
        }
      }
    }
    lVar23 = (long)local_140 - (long)plVar32;
    local_148 = plVar39;
    uVar19 = (**(code **)(*plVar36 + 0xc0))(plVar36);
    if ((uVar19 & 1) != 0) {
      if (*(char *)(lVar18 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar18 + 0x38d488) = 1;
        *(undefined8 *)(lVar18 + 0x38d478) = 0;
        *(undefined8 *)(lVar18 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar18 + 0x38d480)) {
        FUN_02bcc824(plVar36,plVar32,lVar23,8);
        goto LAB_0166ed50;
      }
    }
    (**(code **)(*plVar36 + 0x18))(plVar36,plVar32,lVar23,8);
  }
LAB_0166ed50:
  iVar12 = 1;
joined_r0x0166e674:
  if (local_a0 != (long *)0x0) {
    lVar18 = local_a0[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar9) {
        *piVar1 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (plVar35 != (long *)0x0) {
    plVar32 = plVar35 + 10;
    do {
      iVar3 = (int)*plVar32 + -1;
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar9) {
        *(int *)plVar32 = iVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar35 + 0x10))(plVar35);
    }
  }
  if ((iVar12 != 0) && (pcVar21 = (code *)*puVar25, pcVar21 != (code *)0x0)) {
    (*pcVar21)(puVar25 + 4,param_2);
  }
  return iVar12;
}


