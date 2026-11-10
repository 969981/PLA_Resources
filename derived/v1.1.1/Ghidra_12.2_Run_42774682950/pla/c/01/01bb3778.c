/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bb3778; name: FUN_01bb3778
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01bb3778(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ushort *puVar21;
  long lVar22;
  ulong uVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  undefined8 *puVar28;
  undefined1 *puVar29;
  undefined4 uVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  undefined *puVar35;
  undefined8 *puVar36;
  int *piVar37;
  long lVar38;
  long *plVar39;
  long lVar40;
  undefined4 local_154;
  long local_140;
  undefined8 *local_130;
  long local_128;
  long *local_120;
  undefined1 auStack_118 [8];
  long *local_110;
  long *local_108;
  char *local_100;
  undefined8 local_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined6 local_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  long local_70 [2];
  
  puVar36 = (undefined8 *)PTR_DAT_043796e8;
  puVar10 = PTR_DAT_043796e0;
  puVar9 = PTR_DAT_043794d8;
  puVar35 = PTR_DAT_043794d0;
  lVar33 = *(long *)(param_1 + 0x2e8);
  if ((lVar33 == 0) || (*(int *)(lVar33 + 0xc) == 0)) {
    return;
  }
  piVar1 = (int *)(lVar33 + 0xc);
  iVar12 = *(int *)(lVar33 + 0xc);
LAB_01bb3800:
  piVar37 = *(int **)(lVar33 + 0x10);
  if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
    if (((*puVar35 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar35), iVar15 != 0)) {
      uVar16 = FUN_0087f8f0();
      *(undefined8 *)puVar9 = uVar16;
      __cxa_guard_release(puVar35);
    }
    *puVar36 = puVar9;
    __cxa_guard_release(puVar10);
  }
  while( true ) {
    if (piVar37 == (int *)0x0) {
      return;
    }
    if (piVar37 == (int *)puVar36) break;
    piVar37 = *(int **)piVar37;
  }
  iVar15 = *piVar1;
  if (iVar15 == iVar12) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar12 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') {
      lVar33 = *(long *)(lVar33 + 0x18);
      if (lVar33 == 0) {
        return;
      }
      local_108 = (long *)0x0;
      local_100 = (char *)0x0;
      FUN_008802f0(&local_108,*(long *)(lVar33 + 0x58) + 0x58);
      local_88 = (long *)0x0;
      uStack_80 = 0;
      FUN_00ca524c(&local_88,&local_108);
      plVar18 = local_108;
      if (local_108 != (long *)0x0) {
        plVar32 = local_108 + 1;
        do {
          iVar12 = (int)*plVar32 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar32,0x10);
          if (bVar7) {
            *(int *)plVar32 = iVar12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 == 0) {
          local_108[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_70[0] = *plVar18;
          FUN_02a44274(lVar17 + 0xd8,local_70);
        }
      }
      plVar18 = (long *)(lVar33 + -0x50);
      if (local_88 == (long *)0x0) {
        local_78 = (long *)0x0;
      }
      else {
        FUN_00ca554c(&local_78);
        plVar32 = local_88;
        if (local_88 != (long *)0x0) {
          plVar39 = local_88 + 1;
          do {
            iVar12 = (int)*plVar39 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
            if (bVar7) {
              *(int *)plVar39 = iVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar12 == 0) {
            local_88[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_108 = (long *)*plVar32;
            FUN_02a44274(lVar17 + 0xd8,&local_108);
          }
        }
      }
      if (local_78 == (long *)0x0) goto LAB_01bb456c;
      uVar23 = local_78[0x3d];
      if (uVar23 == 0) {
LAB_01bb3d64:
        uVar13 = FUN_01bc0980();
LAB_01bb3d68:
        puVar10 = PTR_LAB_04379590;
        puVar9 = PTR_DAT_04379498;
        uVar23 = 0;
        do {
          if ((*(ushort *)((long)piVar37 - (long)*piVar37) < 0xb) ||
             (uVar25 = (ulong)((ushort *)((long)piVar37 - (long)*piVar37))[5], uVar25 == 0)) {
            local_140 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar37 + uVar25);
            local_140 = (long)puVar3 + (ulong)*puVar3;
          }
          FUN_0199c708(&local_110,plVar18);
          uVar14 = FUN_025993f4(local_110);
          puVar21 = (ushort *)((long)piVar37 - (long)*piVar37);
          uVar5 = *puVar21;
          if (uVar5 < 7) {
            local_154 = 0;
LAB_01bb3e14:
            uVar30 = 0;
          }
          else {
            if ((ulong)puVar21[3] != 0) {
              local_154 = *(undefined4 *)((long)piVar37 + (ulong)puVar21[3]);
              if (8 < uVar5) goto LAB_01bb3e0c;
              goto LAB_01bb3e14;
            }
            local_154 = 0;
            if (uVar5 < 9) goto LAB_01bb3e14;
LAB_01bb3e0c:
            if ((ulong)puVar21[4] == 0) goto LAB_01bb3e14;
            uVar30 = *(undefined4 *)((long)piVar37 + (ulong)puVar21[4]);
          }
          uVar4 = *(undefined4 *)(puVar36 + 0xf);
          FUN_0199d048(&local_88,plVar18);
          if (local_88 == (long *)0x0) {
            local_120 = (long *)0x0;
          }
          else {
            FUN_01934508(&local_120);
          }
          FUN_0192c870(auStack_118,local_120);
          FUN_01094470(&local_108,local_140,(ulong)puVar35 & 0xffffffff,uVar14,local_154,uVar30,
                       uVar4,uVar4,auStack_118,0,0,local_128,0);
          plVar32 = local_88;
          if (local_120 != (long *)0x0) {
            lVar17 = local_120[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_120 + 0x20))();
              plVar32 = local_88;
            }
          }
          local_88 = plVar32;
          if (plVar32 != (long *)0x0) {
            plVar39 = plVar32 + 1;
            do {
              iVar12 = (int)*plVar39 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar7) {
                *(int *)plVar39 = iVar12;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar12 == 0) {
              plVar32[2] = 0;
              if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                FUN_00100250(puVar10,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar9);
              }
              lVar17 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar17;
              local_70[0] = *plVar32;
              FUN_02a44274(lVar17 + 0xd8,local_70);
            }
          }
          if (local_110 == (long *)0x0) {
LAB_01bb3f18:
          }
          else {
            lVar17 = local_110[0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar12 + -1 != 0) goto LAB_01bb3f18;
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_110 + 0x20))();
          }
          if ((char)local_108 != '\0') {
            *(undefined1 *)(param_1 + 0x3a8) = 1;
            lVar17 = param_1 + 0x350 + uVar23 * 0x70;
            *(char **)(lVar17 + 0x60) = local_100;
            *(undefined8 *)(lVar17 + 0x68) = local_f8;
            *(undefined8 *)(lVar17 + 0x80) = local_e0;
            *(undefined8 *)(lVar17 + 0x88) = uStack_d8;
            *(long **)(lVar17 + 0x70) = local_f0;
            *(undefined8 *)(lVar17 + 0x78) = uStack_e8;
            *(undefined8 *)(lVar17 + 0xa0) = local_c0;
            *(undefined8 *)(lVar17 + 0xa8) = uStack_b8;
            *(undefined8 *)(lVar17 + 0x90) = local_d0;
            *(undefined8 *)(lVar17 + 0x98) = uStack_c8;
            *(ulong *)(lVar17 + 0xc6) = CONCAT62(uStack_98,uStack_9a);
            *(undefined8 *)(lVar17 + 0xb8) = uStack_a8;
            *(ulong *)(lVar17 + 0xc0) = CONCAT26(uStack_9a,local_a0);
            *(undefined8 *)(lVar17 + 0xb0) = local_b0;
            *(undefined8 *)(param_1 + 0x350 + uVar23 * 8 + 0x1b0) = local_90;
            local_108 = (long *)((ulong)local_108 & 0xffffffffffffff00);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar13);
      }
      else {
        uVar25 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
        uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
        uVar19 = *(ulong *)(param_1 + 0x310);
        uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar25 < 2) {
          uVar26 = uVar23 - 1 & uVar19;
        }
        else if (uVar19 < uVar23) {
          uVar26 = uVar19;
        }
        else {
          uVar26 = 0;
          if (uVar23 != 0) {
            uVar26 = uVar19 / uVar23;
          }
          uVar26 = uVar19 - uVar26 * uVar23;
        }
        puVar28 = *(undefined8 **)(local_78[0x3c] + uVar26 * 8);
        if ((puVar28 == (undefined8 *)0x0) ||
           (puVar36 = (undefined8 *)*puVar28, puVar36 == (undefined8 *)0x0)) goto LAB_01bb3d64;
        if (uVar25 < 2) {
          do {
            if (puVar36[1] == uVar19) {
              if (puVar36[2] == uVar19) goto LAB_01bb3ac8;
            }
            else if ((puVar36[1] & uVar23 - 1) != uVar26) break;
            puVar36 = (undefined8 *)*puVar36;
          } while (puVar36 != (undefined8 *)0x0);
          goto LAB_01bb3d64;
        }
        while( true ) {
          uVar25 = puVar36[1];
          if (uVar25 != uVar19) {
            if (uVar23 <= uVar25) {
              uVar8 = 0;
              if (uVar23 != 0) {
                uVar8 = uVar25 / uVar23;
              }
              uVar25 = uVar25 - uVar8 * uVar23;
            }
            if (uVar25 == uVar26) goto LAB_01bb398c;
            goto LAB_01bb3d64;
          }
          if (puVar36[2] == uVar19) break;
LAB_01bb398c:
          puVar36 = (undefined8 *)*puVar36;
          if (puVar36 == (undefined8 *)0x0) goto LAB_01bb3d64;
        }
LAB_01bb3ac8:
        *(undefined8 *)(param_1 + 0x3b0) = 0;
        *(undefined1 *)(param_1 + 0x3b8) = 0;
        *(undefined8 *)(param_1 + 0x3c0) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x3c8) = 0x3ffffffff;
        *(undefined8 *)(param_1 + 0x3d0) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x3d8) = 0x38a;
        *(undefined8 *)(param_1 + 0x3dc) = 0xff000100000000;
        *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
        local_130 = puVar36 + 3;
        local_128 = param_1 + 0x350;
        *(undefined2 *)(param_1 + 1000) = 0x1ff;
        *(undefined8 *)(param_1 + 0x3ea) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x3f2) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x3f6) = 0;
        *(undefined8 *)(param_1 + 0x3fe) = 0;
        *(undefined8 *)(param_1 + 0x406) = 0;
        *(undefined4 *)(param_1 + 0x410) = 0xffff;
        *(undefined1 *)(param_1 + 0x414) = 0;
        *(undefined8 *)(param_1 + 0x416) = 0xffff01000100;
        *(undefined8 *)(param_1 + 0x500) = 0;
        *(undefined8 *)(param_1 + 0x420) = 0;
        *(undefined1 *)(param_1 + 0x428) = 0;
        *(undefined8 *)(param_1 + 0x430) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x438) = 0x3ffffffff;
        *(undefined8 *)(param_1 + 0x440) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x448) = 0x38a;
        *(undefined8 *)(param_1 + 0x44c) = 0xff000100000000;
        *(undefined4 *)(param_1 + 0x454) = 0xffffffff;
        *(undefined2 *)(param_1 + 0x458) = 0x1ff;
        *(undefined8 *)(param_1 + 0x45a) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x462) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x466) = 0;
        *(undefined8 *)(param_1 + 0x46e) = 0;
        *(undefined8 *)(param_1 + 0x476) = 0;
        *(undefined4 *)(param_1 + 0x480) = 0xffff;
        *(undefined1 *)(param_1 + 0x484) = 0;
        *(undefined8 *)(param_1 + 0x486) = 0xffff01000100;
        *(undefined8 *)(param_1 + 0x508) = 0;
        *(undefined8 *)(param_1 + 0x490) = 0;
        *(undefined1 *)(param_1 + 0x498) = 0;
        *(undefined8 *)(param_1 + 0x4a0) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x4a8) = 0x3ffffffff;
        *(undefined8 *)(param_1 + 0x4b0) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0x4b8) = 0x38a;
        *(undefined8 *)(param_1 + 0x4bc) = 0xff000100000000;
        *(undefined4 *)(param_1 + 0x4c4) = 0xffffffff;
        *(undefined2 *)(param_1 + 0x4c8) = 0x1ff;
        *(undefined4 *)(param_1 + 0x4d2) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x4ca) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x4e6) = 0;
        *(undefined8 *)(param_1 + 0x4de) = 0;
        *(undefined8 *)(param_1 + 0x4d6) = 0;
        *(undefined4 *)(param_1 + 0x4f0) = 0xffff;
        *(undefined1 *)(param_1 + 0x4f4) = 0;
        *(undefined8 *)(param_1 + 0x4f6) = 0xffff01000100;
        *(undefined8 *)(param_1 + 0x510) = 0;
        *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_1 + 0x370);
        bVar11 = FUN_01e10270();
        *(byte *)(param_1 + 0x368) = bVar11 & 1;
        if ((((bVar11 & 1) == 0) && (*(char *)(param_1 + 0x2e1) == '\0')) &&
           (puVar20 = (undefined1 *)puVar36[0xe], puVar20 != &DAT_cbf29ce484222645)) {
          puVar24 = (undefined1 *)local_78[0x30];
          if (puVar24 == (undefined1 *)0x0) goto LAB_01bb3d64;
          uVar23 = (long)puVar24 - ((ulong)puVar24 >> 1 & 0x5555555555555555);
          uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
          uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar23 < 2) {
            puVar27 = (undefined1 *)((ulong)(puVar24 + -1) & (ulong)puVar20);
          }
          else if (puVar20 < puVar24) {
            puVar27 = puVar20;
          }
          else {
            uVar25 = 0;
            if (puVar24 != (undefined1 *)0x0) {
              uVar25 = (ulong)puVar20 / (ulong)puVar24;
            }
            puVar27 = puVar20 + -(uVar25 * (long)puVar24);
          }
          plVar32 = *(long **)(local_78[0x2f] + (long)puVar27 * 8);
          if ((plVar32 == (long *)0x0) || (plVar32 = (long *)*plVar32, plVar32 == (long *)0x0))
          goto LAB_01bb3d64;
          if (uVar23 < 2) {
            do {
              if ((undefined1 *)plVar32[1] == puVar20) {
                if ((undefined1 *)plVar32[2] == puVar20) goto LAB_01bb3cc8;
              }
              else if ((undefined1 *)((ulong)plVar32[1] & (ulong)(puVar24 + -1)) != puVar27) break;
              plVar32 = (long *)*plVar32;
            } while (plVar32 != (long *)0x0);
            goto LAB_01bb3d64;
          }
          while( true ) {
            puVar29 = (undefined1 *)plVar32[1];
            if (puVar29 != puVar20) {
              if (puVar24 <= puVar29) {
                uVar23 = 0;
                if (puVar24 != (undefined1 *)0x0) {
                  uVar23 = (ulong)puVar29 / (ulong)puVar24;
                }
                puVar29 = puVar29 + -(uVar23 * (long)puVar24);
              }
              if (puVar29 == puVar27) goto LAB_01bb3d5c;
              goto LAB_01bb3d64;
            }
            if ((undefined1 *)plVar32[2] == puVar20) break;
LAB_01bb3d5c:
            plVar32 = (long *)*plVar32;
            if (plVar32 == (long *)0x0) goto LAB_01bb3d64;
          }
LAB_01bb3cc8:
          piVar37 = (int *)plVar32[3];
          FUN_0199d058(&local_108,plVar18);
          plVar32 = local_108;
          puVar10 = PTR_DAT_04379d80;
          if (local_108 == (long *)0x0) {
LAB_01bb3ce0:
            puVar35 = (undefined *)0x0;
          }
          else {
            if (*(int *)((long)local_108 + 0xc) == 0) {
LAB_01bb4704:
              plVar32 = (long *)0x0;
              plVar39 = local_108;
            }
            else {
              piVar1 = (int *)((long)local_108 + 0xc);
              iVar12 = *(int *)((long)local_108 + 0xc);
              while( true ) {
                plVar39 = (long *)plVar32[2];
                if (((*puVar10 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar10), iVar15 != 0)) {
                  if (((*puVar35 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar35), iVar15 != 0))
                  {
                    uVar16 = FUN_0087f8f0();
                    *(undefined8 *)puVar9 = uVar16;
                    __cxa_guard_release(puVar35);
                  }
                  *(undefined **)PTR_DAT_04379d88 = puVar9;
                  __cxa_guard_release(puVar10);
                  if (plVar39 != (long *)0x0) goto LAB_01bb45d4;
                  goto LAB_01bb4704;
                }
                while( true ) {
                  if (plVar39 == (long *)0x0) goto LAB_01bb4704;
LAB_01bb45d4:
                  if (plVar39 == (long *)PTR_DAT_04379d88) break;
                  plVar39 = (long *)*plVar39;
                }
                iVar15 = *piVar1;
                if (iVar15 == iVar12) break;
                ClearExclusiveLocal();
LAB_01bb45bc:
                iVar12 = iVar15;
                if (iVar15 == 0) goto LAB_01bb4704;
              }
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar12 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_01bb45bc;
              lVar17 = plVar32[3];
              plVar32 = (long *)0x0;
              plVar39 = local_108;
              if (lVar17 != 0) {
                plVar32 = (long *)(lVar17 + -0x50);
              }
            }
            local_108 = plVar39;
            if (plVar39 != (long *)0x0) {
              plVar2 = plVar39 + 1;
              do {
                iVar12 = (int)*plVar2 + -1;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *(int *)plVar2 = iVar12;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar12 == 0) {
                plVar39[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar17 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar17;
                local_88 = (long *)*plVar39;
                FUN_02a44274(lVar17 + 0xd8,&local_88);
              }
            }
            if (plVar32 == (long *)0x0) goto LAB_01bb3ce0;
            uVar23 = FUN_025acbdc(plVar32);
            lVar17 = plVar32[0xb];
            puVar35 = (undefined *)(uVar23 & 0xffffffff);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = iVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar32 + 0x20))(plVar32);
            }
          }
          uVar13 = FUN_01e1013c(local_130,local_128);
          if ((int)uVar13 < 1) goto LAB_01bb3cf4;
          goto LAB_01bb3d68;
        }
      }
LAB_01bb3cf4:
      iVar12 = FUN_01e101b0(local_130,local_128);
      if (iVar12 != 0) {
        *(int *)(param_1 + 0x36c) = iVar12;
        lVar17 = tpidr_el0;
        if (*(char *)(param_1 + 0x368) == '\0') {
          cVar6 = *(char *)(param_1 + 0x3a8);
        }
        else {
          iVar12 = FUN_01e1039c(local_130);
          local_108 = (long *)CONCAT44(local_108._4_4_,iVar12);
          if (iVar12 != 0) {
            lVar34 = *(long *)(param_1 + 0x378);
            puVar36 = (undefined8 *)(param_1 + 0x388);
            if (lVar34 == *(long *)(param_1 + 0x380)) {
              uVar23 = *(ulong *)(param_1 + 0x390);
              lVar34 = lVar34 - *(long *)(param_1 + 0x370) >> 2;
              if (0x7ffffffffffffffe < uVar23) {
                uVar23 = 0x7fffffffffffffff;
              }
              uVar25 = lVar34 + 1;
              if (uVar23 < uVar25) goto LAB_01bb4984;
              lVar22 = *(long *)(param_1 + 0x380) - *(long *)(param_1 + 0x370);
              if ((ulong)(lVar22 >> 2) < uVar23 >> 1) {
                uVar19 = lVar22 >> 1;
                uVar23 = uVar25;
                if (uVar25 <= uVar19) {
                  uVar23 = uVar19;
                }
              }
              if (uVar23 == 0) {
                lVar22 = 0;
              }
              else {
                lVar22 = (**(code **)(*(long *)*puVar36 + 0x10))((long *)*puVar36,uVar23 << 2,4);
                if (lVar22 == 0) {
                  (**(code **)(*(long *)*puVar36 + 0xb8))();
                }
              }
              lVar40 = lVar22 + lVar34 * 4;
              FUN_018c2c08(puVar36,lVar40,&local_108);
              lVar38 = *(long *)(param_1 + 0x370);
              lVar34 = lVar40 + 4;
              lVar31 = *(long *)(param_1 + 0x378);
              if (lVar31 != lVar38) {
                do {
                  lVar40 = lVar40 + -4;
                  lVar31 = lVar31 + -4;
                  FUN_018c2ce0(puVar36,lVar40,lVar31);
                } while (lVar38 != lVar31);
                lVar38 = *(long *)(param_1 + 0x370);
              }
              lVar31 = *(long *)(param_1 + 0x380);
              *(long *)(param_1 + 0x370) = lVar40;
              *(long *)(param_1 + 0x378) = lVar34;
              *(ulong *)(param_1 + 0x380) = lVar22 + uVar23 * 4;
              if (lVar38 != 0) {
                plVar32 = (long *)*puVar36;
                lVar31 = lVar31 - lVar38;
                uVar23 = (**(code **)(*plVar32 + 0xc0))(plVar32);
                if ((uVar23 & 1) != 0) {
                  if (*(char *)(lVar17 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar17 + 0x38d488) = 1;
                    *(undefined8 *)(lVar17 + 0x38d478) = 0;
                    *(undefined8 *)(lVar17 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar17 + 0x38d480)) {
                    FUN_02bcc824(plVar32,lVar38,lVar31,4);
                    goto LAB_01bb4128;
                  }
                }
                (**(code **)(*plVar32 + 0x18))(plVar32,lVar38,lVar31,4);
              }
            }
            else {
              FUN_018c2c08(puVar36,lVar34,&local_108);
              *(long *)(param_1 + 0x378) = *(long *)(param_1 + 0x378) + 4;
            }
          }
LAB_01bb4128:
          iVar12 = *(int *)((long)local_130 + 4) + -1;
          cVar6 = *(char *)(param_1 + 0x3a8);
        }
        if (cVar6 != '\0') {
          local_108 = (long *)0x2b51194eee77886d;
          local_100 = "poke_boost_item_drop_num";
          local_f8 = 0x18;
          local_f0 = (long *)0x0;
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar34 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar34;
          uVar23 = *(ulong *)(lVar34 + 0x60);
          if (uVar23 != 0) {
            uVar25 = uVar23 - (uVar23 >> 1 & 0x5555555555555555);
            uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
            uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar25 < 2) {
              uVar19 = uVar23 - 1 & 0xc6a9fa08d7874415;
            }
            else if (uVar23 < 0xc6a9fa08d7874416) {
              uVar19 = 0;
              if (uVar23 != 0) {
                uVar19 = 0xc6a9fa08d7874415 / uVar23;
              }
              uVar19 = 0xc6a9fa08d7874415 - uVar19 * uVar23;
            }
            else {
              uVar19 = 0xc6a9fa08d7874415;
            }
            plVar32 = *(long **)(*(long *)(lVar34 + 0x58) + uVar19 * 8);
            if ((plVar32 == (long *)0x0) || (plVar32 = (long *)*plVar32, plVar32 == (long *)0x0))
            goto LAB_01bb429c;
            if (1 < uVar25) {
              do {
                uVar25 = plVar32[1];
                if (uVar25 == 0xc6a9fa08d7874415) {
                  if (plVar32[2] == -0x395605f72878bbeb) goto LAB_01bb421c;
                }
                else {
                  if (uVar23 <= uVar25) {
                    uVar26 = 0;
                    if (uVar23 != 0) {
                      uVar26 = uVar25 / uVar23;
                    }
                    uVar25 = uVar25 - uVar26 * uVar23;
                  }
                  if (uVar25 != uVar19) break;
                }
                plVar32 = (long *)*plVar32;
              } while (plVar32 != (long *)0x0);
              goto LAB_01bb429c;
            }
LAB_01bb4418:
            if (plVar32[1] != 0xc6a9fa08d7874415) goto LAB_01bb44c8;
            if (plVar32[2] != -0x395605f72878bbeb) goto LAB_01bb44d4;
LAB_01bb421c:
            plVar32 = (long *)plVar32[3];
            if (plVar32 == (long *)0x0) goto LAB_01bb429c;
            plVar39 = plVar32 + 10;
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar7) {
                *(int *)plVar39 = (int)*plVar39 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            iVar12 = FUN_00d78f50(plVar32,&local_108);
            do {
              iVar15 = (int)*plVar39 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar39,0x10);
              if (bVar7) {
                *(int *)plVar39 = iVar15;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar15 == 0) {
              (**(code **)(*plVar32 + 0x10))(plVar32);
            }
            goto joined_r0x01bb42d0;
          }
LAB_01bb429c:
          iVar12 = 0;
joined_r0x01bb42d0:
          if (local_f0 != (long *)0x0) {
            (**(code **)(*local_f0 + 0x20))();
          }
        }
        if (0 < iVar12) {
          iVar15 = 0;
          puVar36 = (undefined8 *)(param_1 + 0x388);
          do {
            uVar14 = FUN_01e1030c(local_130,local_128);
            local_108 = (long *)CONCAT44(local_108._4_4_,uVar14);
            uVar23 = *(ulong *)(param_1 + 0x378);
            if (uVar23 < *(ulong *)(param_1 + 0x380)) {
              FUN_018c2ce0(puVar36,uVar23,&local_108);
              *(long *)(param_1 + 0x378) = *(long *)(param_1 + 0x378) + 4;
            }
            else {
              uVar25 = *(ulong *)(param_1 + 0x390);
              lVar34 = (long)(uVar23 - *(long *)(param_1 + 0x370)) >> 2;
              uVar23 = lVar34 + 1;
              if (0x7ffffffffffffffe < uVar25) {
                uVar25 = 0x7fffffffffffffff;
              }
              if (uVar25 < uVar23) {
LAB_01bb4984:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar22 = *(ulong *)(param_1 + 0x380) - *(long *)(param_1 + 0x370);
              uVar19 = lVar22 >> 1;
              if (uVar23 <= uVar19) {
                uVar23 = uVar19;
              }
              if ((ulong)(lVar22 >> 2) < uVar25 >> 1) {
                uVar25 = uVar23;
              }
              if (uVar25 == 0) {
                lVar22 = 0;
              }
              else {
                lVar22 = (**(code **)(*(long *)*puVar36 + 0x10))((long *)*puVar36,uVar25 << 2,4);
                if (lVar22 == 0) {
                  (**(code **)(*(long *)*puVar36 + 0xb8))();
                }
              }
              lVar40 = lVar22 + lVar34 * 4;
              FUN_018c2ce0(puVar36,lVar40,&local_108);
              lVar38 = *(long *)(param_1 + 0x370);
              lVar34 = lVar40 + 4;
              lVar31 = *(long *)(param_1 + 0x378);
              if (lVar31 != lVar38) {
                do {
                  lVar40 = lVar40 + -4;
                  lVar31 = lVar31 + -4;
                  FUN_018c2ce0(puVar36,lVar40,lVar31);
                } while (lVar38 != lVar31);
                lVar38 = *(long *)(param_1 + 0x370);
              }
              lVar31 = *(long *)(param_1 + 0x380);
              *(long *)(param_1 + 0x370) = lVar40;
              *(long *)(param_1 + 0x378) = lVar34;
              *(ulong *)(param_1 + 0x380) = lVar22 + uVar25 * 4;
              if (lVar38 != 0) {
                plVar32 = (long *)*puVar36;
                lVar31 = lVar31 - lVar38;
                uVar23 = (**(code **)(*plVar32 + 0xc0))(plVar32);
                if ((uVar23 & 1) != 0) {
                  if (*(char *)(lVar17 + 0x38d488) == '\0') {
                    *(undefined1 *)(lVar17 + 0x38d488) = 1;
                    *(undefined8 *)(lVar17 + 0x38d478) = 0;
                    *(undefined8 *)(lVar17 + 0x38d480) = 0;
                    __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
                  }
                  if (0 < *(int *)(lVar17 + 0x38d480)) {
                    FUN_02bcc824(plVar32,lVar38,lVar31,4);
                    goto LAB_01bb476c;
                  }
                }
                (**(code **)(*plVar32 + 0x18))(plVar32,lVar38,lVar31,4);
              }
            }
LAB_01bb476c:
            iVar15 = iVar15 + 1;
          } while (iVar15 != iVar12);
        }
      }
      if (local_78 != (long *)0x0) {
        lVar17 = local_78[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar12 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
LAB_01bb456c:
      lVar33 = *(long *)(lVar33 + 8);
      piVar1 = (int *)(lVar33 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar33 + 0x18) = 0;
        (**(code **)(*plVar18 + 0x20))();
        return;
      }
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar12 = iVar15;
  if (iVar15 == 0) {
    return;
  }
  goto LAB_01bb3800;
LAB_01bb44c8:
  if ((plVar32[1] & uVar23 - 1) != uVar19) goto LAB_01bb429c;
LAB_01bb44d4:
  plVar32 = (long *)*plVar32;
  iVar12 = 0;
  if (plVar32 == (long *)0x0) goto joined_r0x01bb42d0;
  goto LAB_01bb4418;
}


