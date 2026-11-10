/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013ae29c; name: FUN_013ae29c
 */


/* WARNING: Removing unreachable block (ram,0x013ae714) */

ulong FUN_013ae29c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined5 uStack_48;
  undefined3 local_43;
  undefined5 uStack_40;
  long *local_38;
  undefined8 local_30;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0x17:
    uVar6 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),7);
    if ((uVar6 & 1) != 0) {
      uVar10 = 0x18;
      goto LAB_013ae62c;
    }
    break;
  case 0x18:
    uVar6 = FUN_013c6200(*(undefined8 *)(param_1 + 0xc0),7);
    if ((uVar6 & 1) != 0) {
      uVar10 = 0x19;
      goto LAB_013ae62c;
    }
    break;
  case 0x19:
    local_24[0] = FUN_00d16150();
    local_28[0] = FUN_00d15530();
    local_30 = FUN_02cb8a40();
    if (local_30 == 0) {
      bVar3 = true;
joined_r0x013ae69c:
      if (!bVar3) break;
    }
    else {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
      FUN_01148cdc(&local_38);
      if (local_38 != (long *)0x0) {
        uStack_40 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_43 = 0;
        local_58 = 0;
        uVar6 = FUN_01123fd8(local_38,&local_58,0x1d);
        if (((uVar6 & 1) == 0) || (*(char *)(param_1 + 0x48c) == '\0')) {
LAB_013ae6ac:
          bVar3 = true;
        }
        else {
          local_60 = param_1 + 0x48d;
          FUN_013afe00(&local_a8,*(undefined8 *)(param_1 + 0xa0),(undefined8 *)(param_1 + 0xa0),
                       &local_58,&local_30,&local_60,local_24,local_28);
          uVar7 = local_a8;
          local_a8 = 0;
          lVar9 = *(long *)(param_1 + 0xd8);
          *(undefined8 *)(param_1 + 0xd8) = uVar7;
          if (lVar9 == 0) {
            *(undefined8 *)(param_1 + 0xe8) = uStack_98;
            *(undefined8 *)(param_1 + 0xf0) = local_90;
          }
          else {
            FUN_013b0da8(param_1 + 0xe0);
            *(undefined8 *)(param_1 + 0xe8) = uStack_98;
            *(undefined8 *)(param_1 + 0xf0) = local_90;
            uVar7 = *(undefined8 *)(param_1 + 0xd8);
          }
          *(undefined8 *)(param_1 + 0xe0) = local_a0;
          uVar6 = FUN_027a6cec(uVar7);
          if ((uVar6 & 1) == 0) goto LAB_013ae6ac;
          bVar3 = false;
          *(undefined4 *)(param_1 + 0xac) = 0x1a;
        }
        if (local_38 != (long *)0x0) {
          lVar9 = local_38[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*local_38 + 0x20))();
          }
        }
        goto joined_r0x013ae69c;
      }
    }
    goto LAB_013ae6a0;
  case 0x1a:
    uVar6 = FUN_027a6988(*(undefined8 *)(param_1 + 0xd8));
    if ((uVar6 & 1) == 0) break;
    FUN_027a6c74(&local_58,*(undefined8 *)(param_1 + 0xd8));
    FUN_027a6cb8(&local_30,*(undefined8 *)(param_1 + 0xd8));
    if (((char)local_58 == '\0') || ((char)local_30 == '\0')) goto LAB_013ae6a0;
    if (999 < local_58._4_4_) {
      if (local_58._4_4_ == 1000) {
        FUN_02784b40(&local_a8);
      }
      else if (local_58._4_4_ == 2000) {
        FUN_02784bc0(&local_a8);
      }
      else {
        if (local_58._4_4_ != 5000) goto switchD_013ae4f4_caseD_1;
        if ((char)local_50 == '\0') goto LAB_013ae6a0;
        FUN_02727b8c(&local_a8,(long)&local_50 + 4);
      }
      goto LAB_013ae800;
    }
    uVar10 = 0x1d;
    switch(local_58._4_4_) {
    case 0:
      *(undefined4 *)(param_1 + 0x49f) = local_30._1_4_;
      *(undefined2 *)(param_1 + 0x4a3) = local_30._5_2_;
      if (*(char *)(param_1 + 0x49e) == '\0') {
        *(undefined1 *)(param_1 + 0x49e) = 1;
      }
      uVar10 = 0x1b;
    case 0xb:
      *(undefined4 *)(param_1 + 0xac) = uVar10;
    default:
      goto switchD_013ae4f4_caseD_1;
    case 0xc:
      uVar10 = 1;
      break;
    case 0xd:
      uVar10 = 2;
      break;
    case 0xe:
      uVar10 = 3;
      break;
    case 0xf:
      uVar10 = 4;
      break;
    case 0x10:
      uVar10 = 5;
      break;
    case 0x11:
      uVar10 = 6;
      break;
    case 0x12:
      uVar10 = 7;
      break;
    case 0x16:
      uVar10 = 8;
      break;
    case 0x1f:
      FUN_02784a00(&local_a8);
      goto LAB_013ae800;
    case 0x5b:
      FUN_02784a40(&local_a8);
      goto LAB_013ae800;
    case 0x5c:
      FUN_02784a80(&local_a8);
      goto LAB_013ae800;
    case 0x62:
      FUN_02784ac0(&local_a8);
      goto LAB_013ae800;
    case 99:
      FUN_02784b00(&local_a8);
LAB_013ae800:
      FUN_013b1998(param_1 + 0x4c0,&local_a8);
      FUN_02727c1c(&local_a8);
LAB_013ae6a0:
      uVar6 = 0xe00000000;
      uVar11 = 1;
      goto LAB_013ae638;
    }
    *(undefined4 *)(param_1 + 0xbc) = uVar10;
LAB_013ae580:
    uVar6 = 0x100000000;
    uVar11 = 1;
    goto LAB_013ae638;
  case 0x1b:
    FUN_01397650();
    if (*(long *)(param_1 + 0x4b8) != 0) goto switchD_013ae2d4_default;
    FUN_013aff48(&local_a8,*(undefined8 *)(param_1 + 0xa0));
    plVar8 = *(long **)(param_1 + 0x4b8);
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0x4b8) = local_a8;
    FUN_0275d420(local_a8,*(undefined8 *)(param_1 + 0xa0),3);
    uVar10 = 0x1c;
    goto LAB_013ae62c;
  case 0x1c:
    if (*(long *)(param_1 + 0x4b8) == 0) goto switchD_013ae2d4_default;
    uVar6 = FUN_0275d460();
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(param_1 + 0x4b8);
      *(undefined8 *)(param_1 + 0x4b8) = 0;
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[0xb];
        piVar1 = (int *)(lVar9 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 1) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
        }
      }
      uVar6 = 0x700000000;
      uVar11 = 1;
      goto LAB_013ae638;
    }
    break;
  case 0x1d:
    FUN_013973d0();
    if (*(long *)(param_1 + 0x4b8) != 0) goto switchD_013ae2d4_default;
    FUN_013aff48(&local_a8,*(undefined8 *)(param_1 + 0xa0));
    plVar8 = *(long **)(param_1 + 0x4b8);
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0x4b8) = local_a8;
    FUN_0275d420(local_a8,*(undefined8 *)(param_1 + 0xa0),3);
    uVar10 = 0x1e;
LAB_013ae62c:
    *(undefined4 *)(param_1 + 0xac) = uVar10;
    break;
  case 0x1e:
    if (*(long *)(param_1 + 0x4b8) == 0) goto switchD_013ae2d4_default;
    uVar6 = FUN_0275d460();
    if ((uVar6 & 1) == 0) break;
    plVar8 = *(long **)(param_1 + 0x4b8);
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    if (plVar8 == (long *)0x0) {
LAB_013ae570:
      uVar6 = FUN_013974d0();
    }
    else {
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 != 0) goto LAB_013ae570;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
      uVar6 = FUN_013974d0();
    }
    if ((uVar6 & 1) == 0) {
      uVar10 = 0x1f;
      goto LAB_013ae62c;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0x10;
    goto LAB_013ae580;
  case 0x1f:
    uVar6 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),0x11);
    if ((uVar6 & 1) != 0) {
      uVar10 = 0x20;
      goto LAB_013ae62c;
    }
    break;
  case 0x20:
    uVar6 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),1);
    if ((uVar6 & 1) != 0) {
      uVar10 = 0x21;
      goto LAB_013ae62c;
    }
    break;
  case 0x21:
    uVar6 = FUN_013c60b0(*(undefined8 *)(param_1 + 0xc0),6);
    if ((uVar6 & 1) != 0) {
      uVar10 = 0x22;
      goto LAB_013ae62c;
    }
    break;
  case 0x22:
    uVar6 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),4);
    if ((uVar6 & 1) != 0) {
      uVar6 = 0x500000000;
      uVar11 = 1;
      goto LAB_013ae638;
    }
    uVar6 = FUN_013c6220(*(undefined8 *)(param_1 + 0xc0),5);
    if ((uVar6 & 1) != 0) {
      uVar6 = 0;
      uVar11 = 1;
      goto LAB_013ae638;
    }
    break;
  default:
switchD_013ae2d4_default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
LAB_013ae630:
  uVar11 = 0;
  uVar6 = 0xe00000000;
LAB_013ae638:
  return uVar6 | uVar11;
switchD_013ae4f4_caseD_1:
  goto LAB_013ae630;
}


