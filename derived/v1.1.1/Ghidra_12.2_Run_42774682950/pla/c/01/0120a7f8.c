/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120a7f8; name: FUN_0120a7f8
 */


void FUN_0120a7f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [3];
  char local_98 [8];
  long *local_90;
  undefined8 local_48;
  
  iVar9 = *(int *)(param_1 + 0xb4);
  if (iVar9 - 3U < 5) {
    iVar9 = FUN_027d9354(*(undefined8 *)(param_1 + 0x270));
    if (iVar9 != 1) {
      iVar9 = *(int *)(param_1 + 0xb4);
      goto LAB_0120a89c;
    }
    uVar12 = FUN_027bc6a4(param_1 + 0xc0);
    if ((uVar12 & 1) == 0) {
      FUN_027bcfc0(param_1 + 0xc0);
    }
    *(undefined4 *)(param_1 + 0xb4) = 8;
switchD_0120a8bc_caseD_8:
    uVar12 = FUN_027bc6a4(param_1 + 0xc0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    FUN_01227f04(*(undefined8 *)(param_1 + 0xa0),1,0);
LAB_0120a878:
    *(undefined4 *)(param_1 + 0xb4) = 1;
    return;
  }
LAB_0120a89c:
  puVar7 = PTR_DAT_0437e7c8;
  puVar6 = PTR_DAT_0437e7c0;
  alStack_b0[0] = param_1;
  switch(iVar9) {
  case 0:
    uVar10 = FUN_00d5294c(*(undefined8 *)(param_1 + 0x90));
    uVar11 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x90),uVar10);
    uVar15 = *(undefined8 *)(param_1 + 0xa0);
    uVar18 = FUN_012207f8(*(undefined8 *)(param_1 + 0x90),uVar10,uVar11);
    FUN_01227afc(uVar15,uVar18,0);
    FUN_01227f04(*(undefined8 *)(param_1 + 0xa0),0,1);
    iVar9 = FUN_027d9354(*(undefined8 *)(param_1 + 0x270));
    if (iVar9 == 2) {
      FUN_0120ba60(param_1);
    }
    else {
      FUN_01227f04(*(undefined8 *)(param_1 + 0xa0),1,0);
    }
    FUN_00d42690(*(undefined8 *)(param_1 + 0xa0),1,1);
    FUN_01227a84(*(undefined8 *)(param_1 + 0xa0));
    goto LAB_0120a878;
  case 1:
    uVar12 = FUN_01227ab8(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar12 & 1) != 0) {
      iVar9 = FUN_027d9354(*(undefined8 *)(param_1 + 0x270));
      if (iVar9 != 2) {
        local_d0 = (long *)0xcb074b1a63eb72ba;
        FUN_027bcc14(param_1 + 0xc0,&local_d0);
        FUN_01228184(*(undefined8 *)(param_1 + 0xa0),1);
      }
      *(undefined4 *)(param_1 + 0xb4) = 2;
    }
    break;
  case 2:
    uVar12 = FUN_0122820c(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar12 & 1) == 0) {
      iVar9 = FUN_027d9354(*(undefined8 *)(param_1 + 0x270));
      if (iVar9 != 2) {
        return;
      }
      FUN_0120ba60(param_1);
      local_d0 = (long *)&LAB_0120c3d8;
      local_c8 = FUN_0120c97c;
      local_c0 = &LAB_0120c980;
      local_b8 = &LAB_0120c98c;
      FUN_0120bbd0(param_1,&local_d0);
      pcVar8 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        local_b8 = (undefined1 *)0x0;
        local_d0 = (long *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar8)(alStack_b0);
      }
      *(undefined4 *)(param_1 + 0xb4) = 3;
      return;
    }
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar17 == (undefined8 *)0x0))
    {
LAB_0120b080:
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar13 = (undefined8 *)(**(code **)*puVar17)(puVar17);
      if (((*PTR_DAT_0437e7c0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437e7c0), iVar9 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar18 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar18;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437e7c8 = PTR_DAT_0437b300;
        __cxa_guard_release(PTR_DAT_0437e7c0);
      }
      if (puVar13 == (undefined8 *)0x0) goto LAB_0120b080;
      do {
        if (puVar13 == (undefined8 *)PTR_DAT_0437e7c8) {
          puVar14 = puVar17 + -10;
          break;
        }
        puVar13 = (undefined8 *)*puVar13;
        puVar14 = (undefined8 *)0x0;
      } while (puVar13 != (undefined8 *)0x0);
    }
    FUN_011fb2b0(puVar14);
    FUN_027bcfc0(param_1 + 0xc0);
    FUN_01227aa0(*(undefined8 *)(param_1 + 0xa0));
    FUN_01228184(*(undefined8 *)(param_1 + 0xa0),0);
    *(undefined4 *)(param_1 + 0xb4) = 5;
    break;
  case 3:
  case 4:
    break;
  case 5:
    uVar12 = FUN_01227ab8(*(undefined8 *)(param_1 + 0xa0));
    goto joined_r0x0120ac94;
  case 6:
    FUN_01228184(*(undefined8 *)(param_1 + 0xa0),1);
    *(undefined4 *)(param_1 + 0xb4) = 7;
  case 7:
    iVar9 = FUN_027d9354(*(undefined8 *)(param_1 + 0x270));
    if (iVar9 == 4) {
      uVar12 = FUN_027d9a90(*(undefined8 *)(param_1 + 0x270));
      if ((uVar12 & 1) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0xb4) = 9;
      return;
    }
    uVar12 = FUN_0122820c(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar12 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar17 == (undefined8 *)0x0))
    {
LAB_0120b02c:
      uVar12 = FUN_011fb2b0(0);
    }
    else {
      puVar13 = (undefined8 *)(**(code **)*puVar17)(puVar17);
      if (((*PTR_DAT_0437e7c0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437e7c0), iVar9 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar18 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar18;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437e7c8 = PTR_DAT_0437b300;
        __cxa_guard_release(PTR_DAT_0437e7c0);
      }
      if (puVar13 == (undefined8 *)0x0) goto LAB_0120b02c;
      do {
        if (puVar13 == (undefined8 *)PTR_DAT_0437e7c8) {
          puVar14 = puVar17 + -10;
          break;
        }
        puVar13 = (undefined8 *)*puVar13;
        puVar14 = (undefined8 *)0x0;
      } while (puVar13 != (undefined8 *)0x0);
      uVar12 = FUN_011fb2b0(puVar14);
    }
    if ((uVar12 & 1) != 0) {
      FUN_01228184(*(undefined8 *)(param_1 + 0xa0),0);
      FUN_01227aa0(*(undefined8 *)(param_1 + 0xa0));
      local_d0 = (long *)&LAB_0120c998;
      local_c8 = FUN_0120c9a0;
      local_c0 = &LAB_0120c9a4;
      local_b8 = &LAB_0120c9b0;
      local_48 = 0xcb07431a63eb6522;
      FUN_027bc964(param_1 + 0xc0,&local_48,&local_d0);
      pcVar8 = local_c8;
      *(undefined8 *)(param_1 + 0xb0) = 1;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        local_b8 = (undefined1 *)0x0;
        local_d0 = (long *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar8)(alStack_b0);
      }
    }
    break;
  case 8:
    goto switchD_0120a8bc_caseD_8;
  case 9:
    iVar9 = FUN_027d9354(*(undefined8 *)(param_1 + 0x270));
    if (iVar9 == 5) {
      lVar16 = *(long *)(param_1 + 0x290);
      *(undefined4 *)(param_1 + 0xb4) = 10;
      *(undefined8 *)(param_1 + 0x290) = 0;
      if (lVar16 != 0) {
        FUN_0120c12c(param_1 + 0x298);
        return;
      }
    }
    break;
  case 10:
    uVar12 = FUN_0120bc6c(param_1);
    if ((uVar12 & 1) == 0) {
      FUN_01228184(*(undefined8 *)(param_1 + 0xa0),0);
      FUN_027bcfc0(param_1 + 0xc0);
      FUN_00d4cc80(*(undefined8 *)(param_1 + 0x90));
      FUN_01227aa0(*(undefined8 *)(param_1 + 0xa0));
      FUN_00d6a73c(*(undefined8 *)(param_1 + 0xa8));
      *(undefined4 *)(param_1 + 0xb4) = 0xb;
    }
    break;
  case 0xb:
    uVar12 = FUN_00d4cc88(*(undefined8 *)(param_1 + 0x90));
    if ((uVar12 & 1) == 0) {
      return;
    }
    uVar12 = FUN_01227ab8(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar12 & 1) == 0) {
      return;
    }
    uVar12 = FUN_0120d8b0(*(undefined8 *)(param_1 + 0x98));
    if ((uVar12 & 1) == 0) {
      return;
    }
    uVar12 = FUN_00d6a788(*(undefined8 *)(param_1 + 0xa8));
    if ((uVar12 & 1) == 0) {
      return;
    }
    uVar12 = FUN_027bc6a4(param_1 + 0xc0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar17 == (undefined8 *)0x0))
    {
LAB_0120b0dc:
      puVar14 = (undefined8 *)0x0;
    }
    else {
      puVar13 = (undefined8 *)(**(code **)*puVar17)(puVar17);
      if (((*PTR_DAT_0437e7c0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437e7c0), iVar9 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar18 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar18;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)PTR_DAT_0437e7c8 = PTR_DAT_0437b300;
        __cxa_guard_release(PTR_DAT_0437e7c0);
      }
      if (puVar13 == (undefined8 *)0x0) goto LAB_0120b0dc;
      do {
        if (puVar13 == (undefined8 *)PTR_DAT_0437e7c8) {
          puVar14 = puVar17 + -10;
          break;
        }
        puVar13 = (undefined8 *)*puVar13;
        puVar14 = (undefined8 *)0x0;
      } while (puVar13 != (undefined8 *)0x0);
    }
    FUN_027d9eb0(&local_d0,*(undefined8 *)(param_1 + 0x270));
    FUN_011fb2c4(puVar14,&local_d0);
    FUN_011fb414(puVar14,local_98);
    FUN_011fb164(puVar14,1);
    FUN_011fb178(puVar14);
    FUN_01226408(*(undefined8 *)(param_1 + 0x90),0);
    FUN_01226400(*(undefined8 *)(param_1 + 0x90));
    FUN_027d8fd0(*(undefined8 *)(param_1 + 0x270));
    *(undefined4 *)(param_1 + 0xb4) = 0xc;
    if (local_98[0] != '\0') {
      if (local_90 != (long *)0x0) {
        plVar1 = local_90 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      local_98[0] = '\0';
    }
    if (local_c8 != (code *)0x0) {
      plVar1 = (long *)((long)local_c8 + 0x50);
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*(long *)local_c8 + 0x10))();
      }
    }
    if (local_d0 != (long *)0x0) {
      plVar1 = local_d0 + 10;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar9;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
    break;
  case 0xc:
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (puVar17 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18), puVar17 == (undefined8 *)0x0))
    {
LAB_0120af80:
      uVar12 = FUN_011fb170(0);
    }
    else {
      puVar13 = (undefined8 *)(**(code **)*puVar17)(puVar17);
      if (((*puVar6 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437e7c0), puVar5 = PTR_DAT_0437b300, iVar9 != 0)) {
        if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b2f8), puVar4 = PTR_DAT_043794d8, iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar18 = FUN_0087f8f0();
            *(undefined8 *)puVar4 = uVar18;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar5 = puVar4;
          __cxa_guard_release(PTR_DAT_0437b2f8);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(PTR_DAT_0437e7c0);
      }
      if (puVar13 == (undefined8 *)0x0) goto LAB_0120af80;
      do {
        if (puVar13 == (undefined8 *)puVar7) {
          puVar14 = puVar17 + -10;
          break;
        }
        puVar13 = (undefined8 *)*puVar13;
        puVar14 = (undefined8 *)0x0;
      } while (puVar13 != (undefined8 *)0x0);
      uVar12 = FUN_011fb170(puVar14);
    }
    if ((uVar12 & 1) != 0) {
      return;
    }
    FUN_0121cd4c(*(undefined8 *)(param_1 + 0x90));
    FUN_00d51cc8(*(undefined8 *)(param_1 + 0x90),0xffffffff,0xffffffff);
    FUN_00d4cc78(*(undefined8 *)(param_1 + 0x90));
    uVar18 = *(undefined8 *)(param_1 + 0x90);
    puVar17 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x78) != 0) {
      puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x18);
      if (puVar13 != (undefined8 *)0x0) {
        puVar14 = (undefined8 *)(**(code **)*puVar13)(puVar13);
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_0437e7c0), iVar9 != 0)) {
          if (((*PTR_DAT_0437b2f8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_0437b2f8), iVar9 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar15;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_0437b300 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437b2f8);
          }
          *(undefined **)puVar7 = PTR_DAT_0437b300;
          __cxa_guard_release(PTR_DAT_0437e7c0);
        }
        if (puVar14 != (undefined8 *)0x0) {
          do {
            if (puVar14 == (undefined8 *)puVar7) {
              puVar17 = puVar13 + -10;
              break;
            }
            puVar14 = (undefined8 *)*puVar14;
            puVar17 = (undefined8 *)0x0;
          } while (puVar14 != (undefined8 *)0x0);
          goto LAB_0120ab90;
        }
      }
      puVar17 = (undefined8 *)0x0;
    }
LAB_0120ab90:
    uVar15 = FUN_011fb234(puVar17);
    FUN_01226408(uVar18,uVar15);
    FUN_00d6a4ec(*(undefined8 *)(param_1 + 0xa8));
    *(undefined4 *)(param_1 + 0xb4) = 0xd;
    break;
  case 0xd:
    uVar12 = FUN_00d4cc88(*(undefined8 *)(param_1 + 0x90));
    if ((uVar12 & 1) == 0) {
      return;
    }
    uVar12 = FUN_00d6a610(*(undefined8 *)(param_1 + 0xa8));
joined_r0x0120ac94:
    if ((uVar12 & 1) != 0) {
      FUN_0120b9f0(param_1);
      return;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


