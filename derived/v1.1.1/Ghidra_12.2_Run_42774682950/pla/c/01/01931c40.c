/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01931c40; name: FUN_01931c40
 */


/* WARNING: Removing unreachable block (ram,0x01932778) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_01931c40(long param_1,long param_2,int *param_3,char *param_4,uint *param_5,ulong *param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  size_t sVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  uint uVar22;
  long lVar23;
  byte *pbVar24;
  ulong *puVar25;
  uint uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  long *plVar34;
  uint *puVar35;
  long *plVar36;
  uint *puVar37;
  ulong uVar38;
  long lVar39;
  char *pcVar40;
  undefined8 uVar41;
  undefined4 uVar42;
  ulong *puVar43;
  undefined4 uVar44;
  int *piVar45;
  ulong *local_1e0;
  uint local_1d4;
  ulong *local_180;
  ulong *local_178;
  ulong *local_170;
  char local_148 [8];
  long *local_140;
  long *local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  char *pcStack_100;
  size_t local_f8;
  long *local_f0;
  undefined1 *local_e8;
  char *pcStack_e0;
  size_t local_d8;
  long *local_d0;
  undefined1 *local_c8;
  char *pcStack_c0;
  size_t local_b8;
  long *local_b0;
  undefined1 *local_a8;
  char *pcStack_a0;
  size_t local_98;
  long *local_90;
  undefined1 *local_88;
  char *pcStack_80;
  size_t local_78;
  long *local_70;
  
  FUN_0192ce14(local_148,param_1 + 8);
  if (local_148[0] == '\0') {
    return 0;
  }
  lVar23 = (long)*param_3;
  uVar6 = *(ushort *)((long)param_3 - lVar23);
  if (uVar6 < 5) {
    puVar28 = (undefined1 *)0x0;
LAB_01931cdc:
    plVar29 = *(long **)(*(long *)PTR_DAT_0437b160 + 0x388);
    local_170 = (ulong *)0x0;
    local_180 = (ulong *)0x0;
    local_178 = (ulong *)0x0;
    puVar35 = param_5 + 1;
    if (*param_5 != 0) {
      local_1e0 = (ulong *)0x0;
      puVar1 = puVar35 + *param_5;
      local_1d4 = 0;
      pbVar24 = PTR_DAT_0437a780;
      plVar32 = (long *)PTR_DAT_0437a788;
      plVar36 = (long *)PTR_DAT_0437a790;
LAB_01931da8:
      piVar45 = (int *)((long)puVar35 + (ulong)*puVar35);
      if (((*(ushort *)((long)piVar45 - (long)*piVar45) < 5) ||
          (uVar27 = (ulong)((ushort *)((long)piVar45 - (long)*piVar45))[2], uVar27 == 0)) ||
         (*(undefined1 **)((long)piVar45 + uVar27) != &DAT_cbf29ce484222645)) {
        if (((*pbVar24 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar24), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_0437a8a0,plVar32,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar24);
        }
        lVar23 = *plVar32;
        *plVar36 = lVar23;
        lVar23 = *(long *)(lVar23 + 0x78);
        if (*(ushort *)((long)piVar45 - (long)*piVar45) < 5) {
          uVar27 = 0;
          uVar20 = *(ulong *)(lVar23 + 0x838);
        }
        else {
          uVar20 = (ulong)((ushort *)((long)piVar45 - (long)*piVar45))[2];
          uVar27 = 0;
          if (uVar20 != 0) {
            uVar27 = *(ulong *)((long)piVar45 + uVar20);
          }
          uVar20 = *(ulong *)(lVar23 + 0x838);
        }
        if (uVar20 != 0) {
          uVar30 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
          uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
          uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar30 < 2) {
            uVar31 = uVar20 - 1 & uVar27;
          }
          else {
            uVar31 = uVar27;
            if (uVar20 <= uVar27) {
              uVar31 = 0;
              if (uVar20 != 0) {
                uVar31 = uVar27 / uVar20;
              }
              uVar31 = uVar27 - uVar31 * uVar20;
            }
          }
          plVar34 = *(long **)(*(long *)(lVar23 + 0x830) + uVar31 * 8);
          if ((plVar34 != (long *)0x0) && (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0)) {
            if (uVar30 < 2) {
              do {
                if (plVar34[1] == uVar27) {
                  if (plVar34[2] == uVar27) goto LAB_01931efc;
                }
                else if ((plVar34[1] & uVar20 - 1) != uVar31) break;
                plVar34 = (long *)*plVar34;
              } while (plVar34 != (long *)0x0);
            }
            else {
              do {
                uVar30 = plVar34[1];
                if (uVar30 == uVar27) {
                  if (plVar34[2] == uVar27) goto LAB_01931efc;
                }
                else {
                  if (uVar20 <= uVar30) {
                    uVar33 = 0;
                    if (uVar20 != 0) {
                      uVar33 = uVar30 / uVar20;
                    }
                    uVar30 = uVar30 - uVar33 * uVar20;
                  }
                  if (uVar30 != uVar31) break;
                }
                plVar34 = (long *)*plVar34;
              } while (plVar34 != (long *)0x0);
            }
          }
        }
        if (((*pbVar24 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar24), iVar14 != 0)) {
          FUN_00100250(PTR_LAB_0437a8a0,plVar32,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar24);
        }
        *plVar36 = *plVar32;
      }
      goto LAB_01931d9c;
    }
    local_1e0 = (ulong *)0x0;
    local_1d4 = 0;
    goto joined_r0x01932ae4;
  }
  uVar27 = (ulong)((ushort *)((long)param_3 - lVar23))[2];
  puVar28 = (undefined1 *)0x0;
  if ((uVar27 == 0) ||
     (puVar28 = *(undefined1 **)((long)param_3 + uVar27), puVar28 != &DAT_cbf29ce484222645))
  goto LAB_01931cdc;
  uVar41 = 0;
  goto joined_r0x01932db0;
LAB_01931efc:
  if (((*pbVar24 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,plVar32,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *plVar36 = *plVar32;
  piVar18 = (int *)plVar34[3];
  uVar27 = (ulong)*(ushort *)((long)piVar18 + (6 - (long)*piVar18));
  puVar2 = (uint *)((long)piVar18 + uVar27);
  uVar20 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar20);
  puVar37 = puVar2 + 1;
  uVar19 = *puVar2;
  if (uVar19 != 0) {
    puVar2 = puVar37 + uVar19;
    lVar23 = (long)piVar18 + uVar20 + uVar27 + 9;
    do {
      uVar27 = (ulong)*puVar37;
      piVar18 = (int *)((long)puVar37 + uVar27);
      local_108 = &DAT_cbf29ce484222645;
      pcStack_100 = "";
      local_f8 = 0;
      local_f0 = (long *)0x0;
      local_e8 = &DAT_cbf29ce484222645;
      pcStack_e0 = "";
      local_d8 = 0;
      local_d0 = (long *)0x0;
      local_c8 = &DAT_cbf29ce484222645;
      pcStack_c0 = "";
      local_b8 = 0;
      local_b0 = (long *)0x0;
      local_a8 = &DAT_cbf29ce484222645;
      pcStack_a0 = "";
      local_98 = 0;
      local_90 = (long *)0x0;
      local_88 = &DAT_cbf29ce484222645;
      pcStack_80 = "";
      local_78 = 0;
      local_70 = (long *)0x0;
      if (*(ushort *)((long)piVar18 - (long)*piVar18) < 5) {
        local_118 = (undefined1 *)0x0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[2];
        local_118 = (undefined1 *)0x0;
        if (uVar20 != 0) {
          puVar21 = *(undefined1 **)((long)piVar18 + uVar20);
          local_118 = (undefined1 *)0x344570c1301a7584;
          if (puVar21 != &DAT_cbf29ce484222645) {
            local_118 = puVar21;
          }
        }
      }
      if (*(ushort *)((long)piVar18 - (long)*piVar18) < 7) {
        local_110 = 0;
      }
      else {
        uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[3];
        local_110 = 0;
        if (uVar20 != 0) {
          local_110 = *(undefined8 *)((long)piVar18 + uVar20);
        }
      }
      if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 9) ||
         (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[4], uVar20 == 0)) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar14 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar21 = *(undefined1 **)PTR_DAT_0437a0d8;
        pcVar40 = *(char **)(PTR_DAT_0437a0d8 + 8);
        sVar16 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
        plVar32 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 0x18))(plVar32);
        }
      }
      else {
        puVar3 = (uint *)((long)piVar18 + uVar20);
        uVar30 = (ulong)*puVar3;
        pcVar40 = (char *)((long)puVar3 + uVar30 + 4);
        sVar16 = strlen(pcVar40);
        bVar5 = *(byte *)((long)puVar3 + uVar30 + 4);
        if (bVar5 == 0) {
          plVar32 = (long *)0x0;
          puVar21 = &DAT_cbf29ce484222645;
        }
        else {
          puVar21 = &DAT_cbf29ce484222645;
          pbVar24 = (byte *)(lVar23 + uVar30 + uVar20 + uVar27);
          do {
            puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar24;
            pbVar24 = pbVar24 + 1;
          } while (bVar5 != 0);
          plVar32 = (long *)0x0;
        }
      }
      plVar36 = local_f0;
      local_f0 = (long *)0x0;
      local_108 = puVar21;
      pcStack_100 = pcVar40;
      local_f8 = sVar16;
      if (plVar36 != (long *)0x0) {
        (**(code **)(*plVar36 + 0x20))();
      }
      local_f0 = plVar32;
      if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 0xb) ||
         (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[5], uVar20 == 0)) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar14 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar21 = *(undefined1 **)PTR_DAT_0437a0d8;
        pcVar40 = *(char **)(PTR_DAT_0437a0d8 + 8);
        sVar16 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
        plVar32 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 0x18))(plVar32);
        }
      }
      else {
        puVar3 = (uint *)((long)piVar18 + uVar20);
        uVar30 = (ulong)*puVar3;
        pcVar40 = (char *)((long)puVar3 + uVar30 + 4);
        sVar16 = strlen(pcVar40);
        bVar5 = *(byte *)((long)puVar3 + uVar30 + 4);
        if (bVar5 == 0) {
          plVar32 = (long *)0x0;
          puVar21 = &DAT_cbf29ce484222645;
        }
        else {
          lVar17 = uVar27 + uVar20 + uVar30;
          puVar21 = &DAT_cbf29ce484222645;
          do {
            puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *(byte *)(lVar23 + lVar17);
            lVar17 = lVar17 + 1;
          } while (bVar5 != 0);
          plVar32 = (long *)0x0;
        }
      }
      plVar36 = local_d0;
      local_d0 = (long *)0x0;
      local_e8 = puVar21;
      pcStack_e0 = pcVar40;
      local_d8 = sVar16;
      if (plVar36 != (long *)0x0) {
        (**(code **)(*plVar36 + 0x20))();
      }
      local_d0 = plVar32;
      if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 0xd) ||
         (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[6], uVar20 == 0)) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar14 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar21 = *(undefined1 **)PTR_DAT_0437a0d8;
        pcVar40 = *(char **)(PTR_DAT_0437a0d8 + 8);
        sVar16 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
        plVar32 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        if (plVar32 != (long *)0x0) {
          (**(code **)(*plVar32 + 0x18))(plVar32);
        }
      }
      else {
        puVar3 = (uint *)((long)piVar18 + uVar20);
        uVar30 = (ulong)*puVar3;
        pcVar40 = (char *)((long)puVar3 + uVar30 + 4);
        sVar16 = strlen(pcVar40);
        bVar5 = *(byte *)((long)puVar3 + uVar30 + 4);
        if (bVar5 == 0) {
          plVar32 = (long *)0x0;
          puVar21 = &DAT_cbf29ce484222645;
        }
        else {
          lVar17 = uVar27 + uVar20 + uVar30;
          puVar21 = &DAT_cbf29ce484222645;
          do {
            puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *(byte *)(lVar23 + lVar17);
            lVar17 = lVar17 + 1;
          } while (bVar5 != 0);
          plVar32 = (long *)0x0;
        }
      }
      plVar36 = local_b0;
      local_b0 = (long *)0x0;
      local_c8 = puVar21;
      pcStack_c0 = pcVar40;
      local_b8 = sVar16;
      if (plVar36 != (long *)0x0) {
        (**(code **)(*plVar36 + 0x20))();
      }
      local_b0 = plVar32;
      if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 0xf) ||
         (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[7], uVar20 == 0)) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar14 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar21 = *(undefined1 **)PTR_DAT_0437a0d8;
        pcVar40 = *(char **)(PTR_DAT_0437a0d8 + 8);
        sVar16 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
        plVar36 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        if (plVar36 != (long *)0x0) {
          (**(code **)(*plVar36 + 0x18))(plVar36);
        }
      }
      else {
        puVar3 = (uint *)((long)piVar18 + uVar20);
        uVar30 = (ulong)*puVar3;
        pcVar40 = (char *)((long)puVar3 + uVar30 + 4);
        sVar16 = strlen(pcVar40);
        bVar5 = *(byte *)((long)puVar3 + uVar30 + 4);
        if (bVar5 == 0) {
          plVar36 = (long *)0x0;
          puVar21 = &DAT_cbf29ce484222645;
        }
        else {
          lVar17 = uVar27 + uVar20 + uVar30;
          puVar21 = &DAT_cbf29ce484222645;
          do {
            puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *(byte *)(lVar23 + lVar17);
            lVar17 = lVar17 + 1;
          } while (bVar5 != 0);
          plVar36 = (long *)0x0;
        }
      }
      plVar32 = local_90;
      local_90 = (long *)0x0;
      local_a8 = puVar21;
      pcStack_a0 = pcVar40;
      local_98 = sVar16;
      if (plVar32 != (long *)0x0) {
        (**(code **)(*plVar32 + 0x20))();
      }
      plVar32 = (long *)PTR_DAT_0437a788;
      local_90 = plVar36;
      if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 0x11) ||
         (uVar20 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[8], uVar20 == 0)) {
        if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
           (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar14 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar21 = *(undefined1 **)PTR_DAT_0437a0d8;
        pcVar40 = *(char **)(PTR_DAT_0437a0d8 + 8);
        sVar16 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
        plVar36 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        if (plVar36 != (long *)0x0) {
          (**(code **)(*plVar36 + 0x18))(plVar36);
        }
      }
      else {
        puVar3 = (uint *)((long)piVar18 + uVar20);
        uVar30 = (ulong)*puVar3;
        pcVar40 = (char *)((long)puVar3 + uVar30 + 4);
        sVar16 = strlen(pcVar40);
        bVar5 = *(byte *)((long)puVar3 + uVar30 + 4);
        if (bVar5 == 0) {
          plVar36 = (long *)0x0;
          puVar21 = &DAT_cbf29ce484222645;
        }
        else {
          lVar17 = uVar27 + uVar20 + uVar30;
          puVar21 = &DAT_cbf29ce484222645;
          do {
            puVar21 = (undefined1 *)(((ulong)puVar21 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *(byte *)(lVar23 + lVar17);
            lVar17 = lVar17 + 1;
          } while (bVar5 != 0);
          plVar36 = (long *)0x0;
        }
      }
      plVar34 = local_70;
      local_70 = (long *)0x0;
      local_88 = puVar21;
      pcStack_80 = pcVar40;
      local_78 = sVar16;
      if (plVar34 != (long *)0x0) {
        (**(code **)(*plVar34 + 0x20))();
      }
      local_70 = plVar36;
      uVar27 = FUN_0165ff30(&local_118);
      plVar36 = (long *)PTR_DAT_0437a790;
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      if (local_d0 != (long *)0x0) {
        (**(code **)(*local_d0 + 0x20))();
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if ((uVar27 & 1) == 0) goto LAB_01931d94;
      puVar37 = puVar37 + 1;
      lVar23 = lVar23 + 4;
    } while (puVar37 != puVar2);
  }
  if (*(ushort *)((long)piVar45 - (long)*piVar45) < 5) {
    local_118 = (undefined1 *)0x0;
  }
  else {
    uVar27 = (ulong)((ushort *)((long)piVar45 - (long)*piVar45))[2];
    local_118 = (undefined1 *)0x0;
    if (uVar27 != 0) {
      local_118 = *(undefined1 **)((long)piVar45 + uVar27);
    }
  }
  if (*(ushort *)((long)piVar45 - (long)*piVar45) < 7) {
    uVar44 = 0;
  }
  else {
    uVar27 = (ulong)((ushort *)((long)piVar45 - (long)*piVar45))[3];
    uVar44 = 0;
    if (uVar27 != 0) {
      uVar44 = *(undefined4 *)((long)piVar45 + uVar27);
    }
  }
  local_110 = CONCAT44((int)((ulong)local_110 >> 0x20),uVar44);
  if ((*(ushort *)((long)piVar45 - (long)*piVar45) < 7) ||
     (uVar27 = (ulong)((ushort *)((long)piVar45 - (long)*piVar45))[3], uVar27 == 0)) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)((long)piVar45 + uVar27);
  }
  if (local_1e0 != local_170) {
    FUN_01935b14(plVar29,local_1e0,&local_118);
    puVar25 = local_178;
    goto LAB_0193299c;
  }
  uVar30 = (long)local_1e0 - (long)local_180 >> 4;
  uVar27 = uVar30 + 1;
  uVar20 = 0xfffffffffffffff;
  if (0xfffffffffffffff < uVar27) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  if (uVar30 < 0x7ffffffffffffff) {
    uVar31 = (long)local_1e0 - (long)local_180 >> 3;
    uVar20 = uVar27;
    if (uVar27 <= uVar31) {
      uVar20 = uVar31;
    }
  }
  if (uVar20 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = (**(code **)(*plVar29 + 0x10))(plVar29,uVar20 << 4,8);
    if (lVar23 == 0) {
      (**(code **)(*plVar29 + 0xb8))(plVar29);
    }
  }
  puVar25 = (ulong *)(lVar23 + uVar30 * 0x10);
  FUN_01935b14(plVar29,puVar25,&local_118);
  puVar43 = puVar25;
  if (local_178 != local_180) {
    do {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), iVar13 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (lVar17 == 0) {
        uVar27 = local_178[-1];
        puVar43[-2] = local_178[-2];
        puVar43[-1] = uVar27;
      }
      else {
        if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar29;
        *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        uVar27 = local_178[-1];
        puVar43[-2] = local_178[-2];
        puVar43[-1] = uVar27;
        *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
      }
      local_178 = local_178 + -2;
      puVar43 = puVar43 + -2;
    } while (local_180 != local_178);
    plVar32 = (long *)PTR_DAT_0437a788;
  }
  if (local_180 != (ulong *)0x0) {
    uVar27 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar27 & 1) != 0) {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar29,local_180,(long)local_170 - (long)local_180,8);
        goto LAB_01932990;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,local_180,(long)local_170 - (long)local_180,8);
  }
LAB_01932990:
  plVar36 = (long *)PTR_DAT_0437a790;
  local_180 = puVar43;
  local_170 = (ulong *)(lVar23 + uVar20 * 0x10);
LAB_0193299c:
  local_178 = puVar25 + 2;
  local_1d4 = iVar14 + local_1d4;
  local_1e0 = local_178;
LAB_01931d94:
  pbVar24 = PTR_DAT_0437a780;
LAB_01931d9c:
  puVar35 = puVar35 + 1;
  if (puVar35 == puVar1) goto LAB_01932ac4;
  goto LAB_01931da8;
LAB_01932ac4:
  lVar23 = (long)*param_3;
  uVar6 = *(ushort *)((long)param_3 - lVar23);
joined_r0x01932ae4:
  if (uVar6 < 0x1b) {
    iVar14 = 0;
LAB_01932b08:
    iVar13 = 0;
    if (local_1d4 != 1) goto LAB_01932b14;
LAB_01932bd8:
    uVar19 = 0;
  }
  else {
    uVar27 = (ulong)*(ushort *)((long)param_3 + (0x1a - lVar23));
    if (uVar27 != 0) {
      iVar14 = *(int *)((long)param_3 + uVar27);
      if (0x1c < uVar6) goto LAB_01932b00;
      goto LAB_01932b08;
    }
    iVar14 = 0;
    if (uVar6 < 0x1d) goto LAB_01932b08;
LAB_01932b00:
    uVar27 = (ulong)*(ushort *)((long)param_3 + (0x1c - lVar23));
    if (uVar27 == 0) goto LAB_01932b08;
    iVar13 = *(int *)((long)param_3 + uVar27);
    if (local_1d4 == 1) goto LAB_01932bd8;
LAB_01932b14:
    if (local_1d4 == 0) {
      uVar27 = *param_6;
      uVar19 = (int)param_6[1] + (int)uVar27;
      uVar20 = param_6[1] ^ uVar27;
      *param_6 = uVar20 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar20 << 0x10;
      param_6[1] = uVar20 >> 0x1b | uVar20 << 0x25;
    }
    else {
      lVar23 = 0x1f;
      if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(local_1d4) & 0x1f) & local_1d4) != 0) {
        lVar23 = 0x20;
      }
      uVar20 = lVar23 - LZCOUNT(local_1d4);
      uVar27 = uVar20 >> 6;
      if ((uVar20 & 0x3f) != 0) {
        uVar27 = uVar27 + 1;
      }
      if (uVar20 < uVar27) {
        uVar22 = 0;
      }
      else {
        uVar30 = 0;
        if (uVar27 != 0) {
          uVar30 = uVar20 / uVar27;
        }
        uVar22 = (uint)(0xffffffffffffffff >> (-uVar30 & 0x3f));
      }
      uVar27 = *param_6;
      uVar20 = param_6[1];
      do {
        uVar30 = uVar27 ^ uVar20;
        iVar15 = (int)uVar20;
        uVar20 = uVar30 >> 0x1b | uVar30 << 0x25;
        uVar19 = (int)uVar27 + iVar15 & uVar22;
        uVar27 = uVar30 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar30 << 0x10;
      } while (local_1d4 <= uVar19);
      *param_6 = uVar27;
      param_6[1] = uVar20;
    }
  }
  puVar10 = PTR_DAT_0437a780;
  if (local_180 == local_1e0) {
    uVar41 = 1;
  }
  else {
    iVar15 = 0;
    puVar25 = local_180;
    do {
      iVar15 = (int)puVar25[1] + iVar15;
      if ((int)uVar19 < iVar15) {
        uVar27 = *puVar25;
        if (((*PTR_DAT_0437a780 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a780);
        }
        puVar12 = PTR_DAT_0437a790;
        puVar11 = PTR_DAT_0437a788;
        lVar23 = *(long *)PTR_DAT_0437a788;
        *(long *)PTR_DAT_0437a790 = lVar23;
        lVar23 = *(long *)(lVar23 + 0x78);
        uVar20 = *(ulong *)(lVar23 + 0x838);
        if (uVar20 == 0) goto LAB_01932d0c;
        uVar30 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
        uVar30 = (uVar30 & 0x3333333333333333) + (uVar30 >> 2 & 0x3333333333333333);
        uVar30 = (uVar30 + (uVar30 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar30 < 2) {
          uVar31 = uVar20 - 1 & uVar27;
        }
        else {
          uVar31 = uVar27;
          if (uVar20 <= uVar27) {
            uVar31 = 0;
            if (uVar20 != 0) {
              uVar31 = uVar27 / uVar20;
            }
            uVar31 = uVar27 - uVar31 * uVar20;
          }
        }
        plVar32 = *(long **)(*(long *)(lVar23 + 0x830) + uVar31 * 8);
        if ((plVar32 == (long *)0x0) || (plVar32 = (long *)*plVar32, plVar32 == (long *)0x0))
        goto LAB_01932d0c;
        if (1 < uVar30) goto LAB_01932cb8;
        goto LAB_01932cf4;
      }
      puVar25 = puVar25 + 2;
    } while (local_1e0 != puVar25);
LAB_01932bb0:
    uVar41 = 1;
    local_1e0 = local_180;
  }
  goto joined_r0x01932be8;
LAB_01932cb8:
  do {
    uVar30 = plVar32[1];
    if (uVar30 == uVar27) {
      if (plVar32[2] == uVar27) goto LAB_01932e88;
    }
    else {
      if (uVar20 <= uVar30) {
        uVar33 = 0;
        if (uVar20 != 0) {
          uVar33 = uVar30 / uVar20;
        }
        uVar30 = uVar30 - uVar33 * uVar20;
      }
      if (uVar30 != uVar31) break;
    }
    plVar32 = (long *)*plVar32;
  } while (plVar32 != (long *)0x0);
  goto LAB_01932d0c;
LAB_01932e88:
  if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_0437a780,puVar28), iVar15 != 0)
     ) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
  piVar45 = (int *)plVar32[3];
  if ((*(ushort *)((long)piVar45 - (long)*piVar45) < 9) ||
     (uVar27 = (ulong)((ushort *)((long)piVar45 - (long)*piVar45))[4], uVar27 == 0)) {
    lVar23 = 0;
  }
  else {
    lVar23 = *(long *)((long)piVar45 + uVar27);
  }
  *(long *)(param_2 + 0x38) = lVar23;
  lVar17 = FUN_018b54c4(local_138,puVar28);
  puVar35 = *(uint **)(*(long *)(lVar17 + 8) + 0x250);
  uVar20 = (ulong)*puVar35;
  piVar18 = (int *)((long)puVar35 + uVar20);
  uVar30 = (ulong)*(ushort *)((long)piVar18 + (4 - (long)*piVar18));
  uVar31 = (ulong)*(uint *)((long)piVar18 + uVar30);
  uVar27 = (ulong)*(uint *)((long)((long)piVar18 + uVar30) + uVar31);
  if (uVar27 == 0) {
LAB_01933000:
    uVar41 = 0;
    local_1e0 = local_180;
  }
  else {
    lVar4 = uVar20 + uVar31 + uVar30;
    lVar17 = 0;
    while( true ) {
      uVar33 = (ulong)*(uint *)((long)puVar35 + lVar17 + lVar4 + 4);
      lVar9 = lVar17 + (uVar33 - (long)*(int *)((long)puVar35 + lVar17 + uVar33 + lVar4 + 4)) +
                       lVar4;
      if (4 < *(ushort *)((long)puVar35 + lVar9 + 4)) break;
      if (lVar23 == 0) goto LAB_01932f74;
LAB_01932f58:
      lVar17 = lVar17 + 4;
      if (uVar27 * 4 == lVar17) goto LAB_01933000;
    }
    uVar38 = (ulong)*(ushort *)((long)puVar35 + lVar9 + 8);
    lVar39 = 0;
    if (uVar38 != 0) {
      lVar39 = *(long *)((long)puVar35 + lVar17 + uVar33 + uVar38 + lVar4 + 4);
    }
    if (lVar23 != lVar39) goto LAB_01932f58;
LAB_01932f74:
    if ((long)puVar35 + lVar17 + uVar33 + uVar30 + uVar20 + uVar31 == -4) goto LAB_01933000;
    uVar27 = (ulong)*(ushort *)((long)puVar35 + lVar9 + 0xe);
    lVar23 = uVar27 + *(uint *)((long)puVar35 + lVar17 + uVar27 + uVar33 + lVar4 + 4);
    lVar23 = lVar23 + (ulong)*(uint *)((long)puVar35 + lVar17 + lVar23 + uVar33 + lVar4 + 8);
    lVar9 = lVar17 + (lVar23 - *(int *)((long)puVar35 + lVar17 + lVar23 + uVar33 + lVar4 + 8)) +
                     uVar33 + lVar4;
    uVar6 = *(ushort *)((long)puVar35 + lVar9 + 8);
    if (uVar6 < 5) {
      uVar44 = 0;
      uVar42 = 0;
    }
    else {
      uVar27 = (ulong)*(ushort *)((long)puVar35 + lVar9 + 0xc);
      if (uVar27 == 0) {
        uVar44 = 0;
      }
      else {
        uVar44 = *(undefined4 *)((long)puVar35 + lVar17 + lVar23 + uVar27 + uVar33 + lVar4 + 8);
      }
      if ((uVar6 < 0xb) || (uVar27 = (ulong)*(ushort *)((long)puVar35 + lVar9 + 0x12), uVar27 == 0))
      {
        uVar42 = 0;
      }
      else {
        uVar42 = *(undefined4 *)((long)puVar35 + lVar17 + lVar23 + uVar27 + uVar33 + lVar4 + 8);
      }
    }
    piVar18 = (int *)FUN_02c53064(uVar44,uVar42);
    if (*(ushort *)((long)piVar18 - (long)*piVar18) < 0x21) {
      uVar19 = 0;
    }
    else {
      uVar27 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0x10];
      uVar19 = 0;
      if (uVar27 != 0) {
        cVar7 = *(char *)((long)piVar18 + uVar27);
        uVar19 = 2;
        if (cVar7 != -1) {
          uVar19 = (uint)(cVar7 == -2);
        }
      }
    }
    *(undefined4 *)(param_2 + 0x14) = uVar44;
    *(short *)(param_2 + 0x18) = (short)uVar42;
    *(uint *)(param_2 + 0x1c) = uVar19;
    *(undefined2 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x24) = 0;
    if (*param_4 != '\0') goto LAB_019330cc;
    uVar27 = *param_6;
    uVar20 = param_6[1];
    do {
      uVar30 = uVar27 ^ uVar20;
      iVar15 = (int)uVar20;
      uVar20 = uVar30 >> 0x1b | uVar30 << 0x25;
      uVar19 = (int)uVar27 + iVar15 & 0x7f;
      uVar27 = uVar30 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar30 << 0x10;
    } while (99 < uVar19);
    *param_6 = uVar27;
    param_6[1] = uVar20;
    if (iVar14 <= (int)uVar19) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_04379558), iVar14 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar23 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar23;
      plVar32 = *(long **)(lVar23 + 0x228);
      if (plVar32 != (long *)0x0) {
        lVar23 = plVar32[0xb];
        if (*(undefined8 **)(lVar23 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar23 + 0x10) == 0) {
          uVar41 = (**(code **)**(undefined8 **)(lVar23 + 0x18))();
          *(undefined8 *)(lVar23 + 0x10) = uVar41;
        }
        piVar45 = (int *)(lVar23 + 0xc);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar45,0x10);
          if (bVar8) {
            *piVar45 = *piVar45 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      uVar27 = ((long *)plVar32[0x37])[1];
      if (uVar27 == 0) {
LAB_019336cc:
        lVar23 = plVar32[0xb];
        piVar45 = (int *)(lVar23 + 0xc);
        do {
          iVar14 = *piVar45;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar45,0x10);
          if (bVar8) {
            *piVar45 = iVar14 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar14 + -1 == 0) {
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*plVar32 + 0x20))(plVar32);
        }
        goto LAB_019336e8;
      }
      uVar20 = uVar27 - (uVar27 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar30 = uVar27 - 1 & 0x3527b8fa94d72e5d;
      }
      else if (uVar27 < 0x3527b8fa94d72e5e) {
        uVar30 = 0;
        if (uVar27 != 0) {
          uVar30 = 0x3527b8fa94d72e5d / uVar27;
        }
        uVar30 = 0x3527b8fa94d72e5d - uVar30 * uVar27;
      }
      else {
        uVar30 = 0x3527b8fa94d72e5d;
      }
      plVar36 = *(long **)(*(long *)plVar32[0x37] + uVar30 * 8);
      if ((plVar36 == (long *)0x0) || (plVar36 = (long *)*plVar36, plVar36 == (long *)0x0))
      goto LAB_019336cc;
      if (uVar20 < 2) {
        do {
          if (plVar36[1] == 0x3527b8fa94d72e5d) {
            if (plVar36[2] == 0x3527b8fa94d72e5d) goto LAB_0193365c;
          }
          else if ((plVar36[1] & uVar27 - 1) != uVar30) break;
          plVar36 = (long *)*plVar36;
        } while (plVar36 != (long *)0x0);
      }
      else {
        do {
          uVar20 = plVar36[1];
          if (uVar20 != 0x3527b8fa94d72e5d) {
            if (uVar27 <= uVar20) {
              uVar31 = 0;
              if (uVar27 != 0) {
                uVar31 = uVar20 / uVar27;
              }
              uVar20 = uVar20 - uVar31 * uVar27;
            }
            if (uVar20 == uVar30) goto LAB_019334e0;
            break;
          }
          if (plVar36[2] == 0x3527b8fa94d72e5d) goto LAB_0193365c;
LAB_019334e0:
          plVar36 = (long *)*plVar36;
        } while (plVar36 != (long *)0x0);
      }
      goto LAB_019336c8;
    }
    if (*param_4 == '\0') {
      do {
        uVar30 = uVar27 ^ uVar20;
        iVar14 = (int)uVar20;
        uVar20 = uVar30 >> 0x1b | uVar30 << 0x25;
        uVar19 = (int)uVar27 + iVar14 & 0x7f;
        uVar27 = uVar30 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar30 << 0x10;
      } while (99 < uVar19);
      *param_6 = uVar27;
      param_6[1] = uVar20;
      if ((int)uVar19 < iVar13) goto LAB_019330cc;
    }
    else {
LAB_019330cc:
      *(undefined1 *)(param_2 + 0x2c) = 1;
    }
    uVar20 = (ulong)*(ushort *)((long)piVar45 + (6 - (long)*piVar45));
    puVar35 = (uint *)((long)piVar45 + uVar20);
    uVar30 = (ulong)*puVar35;
    uVar27 = (ulong)*(uint *)((long)puVar35 + uVar30);
    if (uVar27 == 0) {
LAB_01933248:
      uVar27 = *param_6;
      uVar22 = (int)param_6[1] + (int)uVar27;
      uVar20 = param_6[1] ^ uVar27;
      *param_6 = uVar20 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar20 << 0x10;
      param_6[1] = uVar20 >> 0x1b | uVar20 << 0x25;
    }
    else {
      lVar17 = uVar30 + uVar20;
      lVar23 = 0;
      uVar19 = 0;
      do {
        uVar20 = (ulong)*(uint *)((long)piVar45 + lVar23 + lVar17 + 4);
        lVar4 = lVar23 + (uVar20 - (long)*(int *)((long)piVar45 + lVar23 + uVar20 + lVar17 + 4)) +
                         lVar17;
        if ((*(ushort *)((long)piVar45 + lVar4 + 4) < 0x15) ||
           (uVar30 = (ulong)*(ushort *)((long)piVar45 + lVar4 + 0x18), uVar30 == 0)) {
          iVar14 = 0;
        }
        else {
          iVar14 = *(int *)((long)piVar45 + lVar23 + uVar20 + uVar30 + lVar17 + 4);
        }
        lVar23 = lVar23 + 4;
        uVar19 = iVar14 + uVar19;
      } while (uVar27 * 4 != lVar23);
      if (uVar19 == 1) {
        uVar22 = 0;
      }
      else {
        if (uVar19 == 0) goto LAB_01933248;
        lVar23 = 0x1f;
        if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar19) & 0x1f) & uVar19) != 0) {
          lVar23 = 0x20;
        }
        uVar20 = lVar23 - LZCOUNT(uVar19);
        uVar27 = uVar20 >> 6;
        if ((uVar20 & 0x3f) != 0) {
          uVar27 = uVar27 + 1;
        }
        if (uVar20 < uVar27) {
          uVar26 = 0;
        }
        else {
          uVar30 = 0;
          if (uVar27 != 0) {
            uVar30 = uVar20 / uVar27;
          }
          uVar26 = (uint)(0xffffffffffffffff >> (-uVar30 & 0x3f));
        }
        uVar27 = *param_6;
        uVar20 = param_6[1];
        do {
          uVar30 = uVar27 ^ uVar20;
          iVar14 = (int)uVar20;
          uVar20 = uVar30 >> 0x1b | uVar30 << 0x25;
          uVar22 = (int)uVar27 + iVar14 & uVar26;
          uVar27 = uVar30 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar30 << 0x10;
        } while (uVar19 <= uVar22);
        *param_6 = uVar27;
        param_6[1] = uVar20;
      }
    }
    uVar27 = (ulong)*(ushort *)((long)piVar45 + (6 - (long)*piVar45));
    uVar20 = (ulong)*(uint *)((long)piVar45 + uVar27);
    uVar30 = (ulong)*(uint *)((long)((long)piVar45 + uVar27) + uVar20);
    if (uVar30 == 0) goto LAB_01932bb0;
    lVar17 = uVar20 + uVar27;
    lVar23 = 0;
    iVar14 = 0;
    uVar41 = 1;
    while( true ) {
      uVar31 = (ulong)*(uint *)((long)piVar45 + lVar23 + lVar17 + 4);
      lVar4 = lVar23 + (uVar31 - (long)*(int *)((long)piVar45 + lVar23 + uVar31 + lVar17 + 4)) +
                       lVar17;
      uVar6 = *(ushort *)((long)piVar45 + lVar4 + 4);
      if (uVar6 < 0x15) {
        iVar13 = 0;
      }
      else {
        uVar33 = (ulong)*(ushort *)((long)piVar45 + lVar4 + 0x18);
        iVar13 = 0;
        if (uVar33 != 0) {
          iVar13 = *(int *)((long)piVar45 + lVar23 + uVar31 + uVar33 + lVar17 + 4);
        }
      }
      iVar14 = iVar13 + iVar14;
      if ((int)uVar22 < iVar14) break;
      lVar23 = lVar23 + 4;
      local_1e0 = local_180;
      if (uVar30 * 4 == lVar23) goto joined_r0x01932be8;
    }
    if ((uVar6 < 0x13) || (uVar30 = (ulong)*(ushort *)((long)piVar45 + lVar4 + 0x16), uVar30 == 0))
    {
      uVar41 = 0;
    }
    else {
      uVar41 = *(undefined8 *)((long)piVar45 + lVar23 + uVar30 + uVar31 + uVar27 + uVar20 + 4);
    }
    *(undefined8 *)(param_2 + 0x40) = uVar41;
    uVar41 = 1;
    local_1e0 = local_180;
  }
  goto joined_r0x01932be8;
LAB_0193365c:
  if ((char)plVar36[3] != '\0') {
    if (*(ushort *)((long)param_3 - (long)*param_3) < 0x1f) {
      iVar14 = 0;
    }
    else {
      uVar27 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[0xf];
      iVar14 = 0;
      if (uVar27 != 0) {
        iVar14 = *(int *)((long)param_3 + uVar27);
      }
    }
    uVar27 = *param_6;
    uVar20 = param_6[1];
    do {
      uVar30 = uVar27 ^ uVar20;
      iVar13 = (int)uVar20;
      uVar20 = uVar30 >> 0x1b | uVar30 << 0x25;
      uVar19 = (int)uVar27 + iVar13 & 0x7f;
      uVar27 = uVar30 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar30 << 0x10;
    } while (99 < uVar19);
    *param_6 = uVar27;
    param_6[1] = uVar20;
    if ((int)uVar19 < iVar14) {
      *(undefined8 *)(param_2 + 0x48) = 0xc9da023d7f05d5c6;
    }
  }
LAB_019336c8:
  if (plVar32 != (long *)0x0) goto LAB_019336cc;
LAB_019336e8:
  uVar41 = 1;
  local_1e0 = local_180;
  goto joined_r0x01932be8;
  while (plVar32 = (long *)*plVar32, plVar32 != (long *)0x0) {
LAB_01932cf4:
    if (plVar32[1] == uVar27) {
      if (plVar32[2] == uVar27) goto LAB_01932e88;
    }
    else if ((plVar32[1] & uVar20 - 1) != uVar31) break;
  }
LAB_01932d0c:
  if (((*puVar10 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  uVar41 = 0;
  *(undefined8 *)puVar12 = *(undefined8 *)puVar11;
  local_1e0 = local_180;
joined_r0x01932be8:
  if (local_1e0 != (ulong *)0x0) {
    uVar27 = (**(code **)(*plVar29 + 0xc0))(plVar29);
    if ((uVar27 & 1) != 0) {
      lVar23 = tpidr_el0;
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar29,local_1e0,(long)local_170 - (long)local_1e0,8);
        goto joined_r0x01933024;
      }
    }
    (**(code **)(*plVar29 + 0x18))(plVar29,local_1e0,(long)local_170 - (long)local_1e0,8);
  }
joined_r0x01933024:
  if (local_148[0] != '\0') {
joined_r0x01932db0:
    if (local_120 != (long *)0x0) {
      lVar23 = *(long *)((long)local_120 + 0x58);
      piVar45 = (int *)(lVar23 + 0xc);
      do {
        iVar14 = *piVar45;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar45,0x10);
        if (bVar8) {
          *piVar45 = iVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_120 + 0x20))();
      }
    }
    if (local_128 != (long *)0x0) {
      lVar23 = local_128[0xb];
      piVar45 = (int *)(lVar23 + 0xc);
      do {
        iVar14 = *piVar45;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar45,0x10);
        if (bVar8) {
          *piVar45 = iVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_128 + 0x20))();
      }
    }
    if (local_130 != (long *)0x0) {
      lVar23 = local_130[0xb];
      piVar45 = (int *)(lVar23 + 0xc);
      do {
        iVar14 = *piVar45;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar45,0x10);
        if (bVar8) {
          *piVar45 = iVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_130 + 0x20))();
      }
    }
    if (local_138 != (long *)0x0) {
      lVar23 = local_138[0xb];
      piVar45 = (int *)(lVar23 + 0xc);
      do {
        iVar14 = *piVar45;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar45,0x10);
        if (bVar8) {
          *piVar45 = iVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_138 + 0x20))();
      }
    }
    if (local_140 != (long *)0x0) {
      lVar23 = local_140[0xb];
      piVar45 = (int *)(lVar23 + 0xc);
      do {
        iVar14 = *piVar45;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar45,0x10);
        if (bVar8) {
          *piVar45 = iVar14 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar14 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_140 + 0x20))();
      }
    }
  }
  return uVar41;
}


