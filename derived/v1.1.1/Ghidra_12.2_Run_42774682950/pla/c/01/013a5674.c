/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a5674; name: FUN_013a5674
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_013a5674(long param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 local_150;
  char *local_148;
  undefined8 uStack_140;
  long *local_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *local_118;
  char local_110 [88];
  undefined2 local_b8;
  long *local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  ulong local_9c;
  char local_90 [4];
  undefined4 local_8c;
  undefined4 uStack_88;
  int local_84;
  
  switch(*(undefined1 *)(param_1 + 0xb1)) {
  case 0:
    FUN_013a6dc4(param_1);
    uVar14 = 1;
    break;
  case 1:
    uVar11 = FUN_00d6868c(*(undefined8 *)(param_1 + 0xa8));
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    iVar9 = FUN_00d686a0(*(undefined8 *)(param_1 + 0xa8));
    uVar14 = 2;
    if (iVar9 != 0) {
      uVar14 = 7;
    }
    break;
  case 2:
    if (((*PTR_DAT_0437b4d0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b4d0);
    }
    lVar16 = *(long *)PTR_DAT_0437b4d8;
    *(long *)PTR_DAT_0437b4e0 = lVar16;
    if (((lVar16 != 0) && (*(long *)(param_1 + 0x78) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar17 != (undefined8 *)0x0))
    {
      plVar12 = (long *)(**(code **)*puVar17)(puVar17);
      if (((*PTR_DAT_0437f080 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437f080), iVar9 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar13;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437f088 = PTR_DAT_0437b300;
        __cxa_guard_release(PTR_DAT_0437f080);
      }
      for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        if (plVar12 == (long *)PTR_DAT_0437f088) {
          FUN_013a398c(local_90,puVar17 + -10);
          if (local_90[0] != '\0') {
            FUN_02790540(local_110,lVar16,uStack_88,local_8c);
            if (local_110[0] == '\0') {
              *(undefined1 *)(param_1 + 0xb1) = 7;
              return 0;
            }
            local_130 = local_b4;
            uStack_128 = local_ac;
            local_120 = local_a4;
            local_118 = (long *)local_9c;
            FUN_013a6ff8(param_1,&local_130,local_9c >> 0x10 & 0xff,local_9c >> 0x18 & 0xff);
            *(undefined1 *)(param_1 + 0xb1) = 3;
            return 0;
          }
          goto LAB_013a5c00;
        }
      }
    }
    goto LAB_013a5bf8;
  case 3:
    uVar11 = FUN_00d6868c(*(undefined8 *)(param_1 + 0xa8));
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    uVar14 = 4;
    break;
  case 4:
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01149164(&local_138);
    if (local_138 != (long *)0x0) {
      if (((*PTR_DAT_0437b4d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b4d0);
      }
      lVar16 = *(long *)PTR_DAT_0437b4d8;
      *(long *)PTR_DAT_0437b4e0 = lVar16;
      if (((lVar16 != 0) && (*(long *)(param_1 + 0x78) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar17 != (undefined8 *)0x0
         )) {
        puVar10 = (undefined8 *)(**(code **)*puVar17)(puVar17);
        if (((*PTR_DAT_0437f080 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437f080), iVar9 != 0)) {
          if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar9 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar13;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437b2f8);
          }
          *(undefined **)PTR_DAT_0437f088 = PTR_DAT_0437b300;
          __cxa_guard_release(PTR_DAT_0437f080);
        }
joined_r0x013a5760:
        if (puVar10 != (undefined8 *)0x0) {
          if (puVar10 != (undefined8 *)PTR_DAT_0437f088) goto LAB_013a5c94;
          FUN_013a398c(local_90,puVar17 + -10);
          if (local_90[0] != '\0') {
            FUN_02790540(local_110,lVar16,uStack_88,local_8c);
            if (local_110[0] == '\0') {
              *(undefined1 *)(param_1 + 0xb1) = 7;
              goto joined_r0x013a5c44;
            }
            cVar7 = FUN_0278c730(lVar16,(ulong)local_110 | 4);
            if (cVar7 == '\0') {
              uVar14 = 7;
            }
            else {
              if (*(long *)(param_1 + 0xe0) != 0) {
                iVar9 = FUN_02788e04(lVar16);
                iVar8 = FUN_0278aff0(lVar16);
                puVar17 = *(undefined8 **)(*(long *)(param_1 + 0xe0) + 0x68);
                puVar10 = *(undefined8 **)(*(long *)(param_1 + 0xe0) + 0x70);
                if (puVar17 != puVar10) {
                  do {
                    puVar15 = puVar17 + 1;
                    (**(code **)(*(long *)*puVar17 + 8))((long *)*puVar17,iVar9 != -iVar8);
                    puVar17 = puVar15;
                  } while (puVar10 != puVar15);
                }
              }
              local_150 = 0x69e650db50ec69ee;
              local_148 = "PLAY_UI_COMMON_GET_HEART";
              uStack_140 = 0x18;
              FUN_02a4754c(&local_130,&local_150);
              FUN_028354b0(&local_130);
              if (local_118 != (long *)0x0) {
                (**(code **)(*local_118 + 0x20))();
              }
              plVar12 = local_138;
              iVar9 = FUN_010d90c0(local_138);
              FUN_010d90c8(plVar12,iVar9 + local_84);
              plVar12 = local_138;
              iVar9 = FUN_010d90e0(local_138);
              FUN_010d90e8(plVar12,iVar9 + local_84);
              plVar12 = local_138;
              iVar9 = FUN_010d9100(local_138);
              FUN_010d9108(plVar12,iVar9 + 1);
              FUN_013c9048(*(undefined8 *)(param_1 + 0x90),local_84);
              FUN_013a7278(param_1,local_84);
              uVar14 = 5;
            }
            *(undefined1 *)(param_1 + 0xb1) = uVar14;
            local_130 = local_138;
            cVar6 = local_90[0];
            cVar7 = local_90[0];
            if (local_110[0] != '\0') {
joined_r0x013a5c44:
              local_130 = local_138;
              cVar6 = '\0';
              cVar7 = local_90[0];
            }
            local_90[0] = cVar6;
            local_110[0] = '\0';
            if (cVar7 != '\0') {
              local_90[0] = '\0';
            }
            goto joined_r0x013a5c50;
          }
        }
      }
      *(undefined1 *)(param_1 + 0xb1) = 7;
      local_130 = local_138;
joined_r0x013a5c50:
      if (local_130 == (long *)0x0) {
        return 0;
      }
      lVar16 = local_130[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar9 = *piVar1 + -1;
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
joined_r0x013a5bd4:
      if (iVar9 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_130 + 0x20))();
        return 0;
      }
      return 0;
    }
    goto LAB_013a5c00;
  case 5:
    uVar11 = FUN_00d6868c(*(undefined8 *)(param_1 + 0xa8));
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b0c(&local_130);
    if (local_130 != (long *)0x0) {
      if (((*PTR_DAT_0437b4d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b4d0);
      }
      lVar16 = *(long *)PTR_DAT_0437b4d8;
      *(long *)PTR_DAT_0437b4e0 = lVar16;
      if (((lVar16 != 0) && (*(long *)(param_1 + 0x78) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar17 != (undefined8 *)0x0
         )) {
        plVar12 = (long *)(**(code **)*puVar17)(puVar17);
        if ((*PTR_DAT_0437f080 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(PTR_DAT_0437f080);
          puVar5 = PTR_DAT_0437b300;
          if (iVar9 != 0) {
            if ((*PTR_DAT_0437b2f8 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(PTR_DAT_0437b2f8);
              puVar4 = PTR_DAT_043794d8;
              if (iVar9 != 0) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
                  uVar13 = FUN_0087f8f0();
                  *(undefined8 *)puVar4 = uVar13;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)puVar5 = puVar4;
                __cxa_guard_release(PTR_DAT_0437b2f8);
              }
            }
            *(undefined **)PTR_DAT_0437f088 = puVar5;
            __cxa_guard_release(PTR_DAT_0437f080);
          }
        }
        for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          if (plVar12 == (long *)PTR_DAT_0437f088) {
            FUN_013a398c(local_90,puVar17 + -10);
            if (local_90[0] != '\0') {
              FUN_02790540(local_110,lVar16,uStack_88,local_8c);
              if (local_110[0] == '\0') {
                *(undefined1 *)(param_1 + 0xb1) = 7;
              }
              else {
                uVar11 = FUN_02786edc(local_b8);
                if ((uVar11 & 0xff) == 0) {
                  uVar14 = 7;
                }
                else {
                  uVar2 = (uint)uVar11 >> 0x10;
                  if (uVar2 != 0) {
                    FUN_0111e0d0(local_130,uVar11 >> 0x10 & 0xffff,1);
                  }
                  FUN_013a7514(param_1,uVar2);
                  uVar14 = 6;
                }
                *(undefined1 *)(param_1 + 0xb1) = uVar14;
              }
              if (local_90[0] == '\0') {
                local_110[0] = '\0';
                local_90[0] = '\0';
              }
              else {
                local_110[0] = '\0';
                local_90[0] = '\0';
              }
              goto joined_r0x013a5c78;
            }
            break;
          }
        }
      }
      *(undefined1 *)(param_1 + 0xb1) = 7;
joined_r0x013a5c78:
      if (local_130 == (long *)0x0) {
        return 0;
      }
      lVar16 = local_130[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar9 = *piVar1 + -1;
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      goto joined_r0x013a5bd4;
    }
LAB_013a5c00:
    *(undefined1 *)(param_1 + 0xb1) = 7;
switchD_013a56b0_default:
    return 0;
  case 6:
    uVar11 = FUN_00d6868c(*(undefined8 *)(param_1 + 0xa8));
    if ((uVar11 & 1) == 0) {
      return 0;
    }
LAB_013a5bf8:
    uVar14 = 7;
    break;
  case 7:
    FUN_013c8038(*(undefined8 *)(param_1 + 0x90));
    FUN_013cb8d4(*(undefined8 *)(param_1 + 0x90));
    uVar11 = FUN_013c8028(*(undefined8 *)(param_1 + 0x90));
    if ((uVar11 & 0xff) != 0) {
      FUN_013c8030(*(undefined8 *)(param_1 + 0x90));
      iVar9 = FUN_00d686a0(*(undefined8 *)(param_1 + 0xa8));
      if (iVar9 == 0) {
        iVar8 = (int)(uVar11 >> 0x20);
        iVar9 = 0;
        if (iVar8 != 0) {
          iVar9 = iVar8 + -1;
        }
        FUN_013cb89c(*(undefined8 *)(param_1 + 0x90),iVar9);
      }
    }
    *(undefined1 *)(param_1 + 0xb0) = 3;
    return 1;
  default:
    goto switchD_013a56b0_default;
  }
  *(undefined1 *)(param_1 + 0xb1) = uVar14;
  return 0;
LAB_013a5c94:
  puVar10 = (undefined8 *)*puVar10;
  goto joined_r0x013a5760;
}


