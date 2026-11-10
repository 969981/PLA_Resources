/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025feda8; name: FUN_025feda8
 */


void FUN_025feda8(long param_1,uint *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  float fVar12;
  long *local_68;
  undefined4 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  long *local_40;
  long *local_38;
  
  if ((*(byte *)(param_1 + 0x3b0) & 7) != 0) {
    return;
  }
  puVar10 = param_2 + 1;
  if (*puVar10 != 5) {
    uVar8 = (uint)*(undefined8 *)(param_1 + 0x1f0);
    if ((uVar8 >> 7 & 1) == 0) {
      if ((uVar8 >> 8 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x3a8) = 0;
        *(undefined8 *)(param_1 + 0x3a0) = 0;
        if (*(long *)(param_1 + 0x390) == 0) goto LAB_025ff01c;
        FUN_0095dd00(&local_68);
        if (local_68 != (long *)0x0) {
          uVar8 = *(uint *)(param_1 + 0x388);
          if (8 < uVar8) goto LAB_025ff3f8;
          uVar9 = local_68[0x3e];
          uVar6 = 1L << ((ulong)uVar8 & 0x3f);
          local_68[0x3e] = uVar9 & (uVar6 ^ 0xffffffffffffffff);
          switch(uVar8) {
          case 1:
            *(undefined1 *)(local_68 + 0x4a) = 0;
            local_68[0x49] = 0;
            lVar11 = local_68[0x40];
            break;
          case 2:
            *(undefined1 *)(local_68 + 0x50) = 0;
            local_68[0x4f] = 0;
            lVar11 = local_68[0x40];
            break;
          case 3:
            *(undefined1 *)(local_68 + 0x56) = 0;
            local_68[0x55] = 0;
            *(undefined4 *)((long)local_68 + 0x2b4) = 0x3f800000;
            lVar11 = local_68[0x40];
            break;
          case 4:
            *(undefined1 *)(local_68 + 0x5c) = 0;
            local_68[0x5b] = 0;
            *(undefined4 *)((long)local_68 + 0x2e4) = 0x3f800000;
            lVar11 = local_68[0x40];
            break;
          case 5:
            *(undefined1 *)(local_68 + 0x62) = 0;
            local_68[0x61] = 0;
            *(undefined4 *)((long)local_68 + 0x314) = 0x3f800000;
            lVar11 = local_68[0x40];
            break;
          case 6:
            *(undefined1 *)(local_68 + 0x68) = 0;
            local_68[0x67] = 0;
            *(undefined4 *)((long)local_68 + 0x344) = 0x3f800000;
            lVar11 = local_68[0x40];
            break;
          case 7:
            *(undefined1 *)(local_68 + 0x6e) = 0;
            local_68[0x6d] = 0;
            lVar11 = local_68[0x40];
            break;
          case 8:
            *(undefined1 *)(local_68 + 0x75) = 0;
            local_68[0x74] = 0;
          default:
            lVar11 = local_68[0x40];
          }
          if ((lVar11 == 0) ||
             (FUN_025ff800(lVar11,(ulong)CONCAT14((uVar6 & uVar9) != 0,uVar8)),
             local_68 != (long *)0x0)) {
            lVar11 = local_68[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar4 = *piVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            goto LAB_025ff3e0;
          }
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x370) = 0;
      *(undefined8 *)(param_1 + 0x368) = 0;
      if (*(long *)(param_1 + 0x358) == 0) {
LAB_025ff01c:
        local_68 = (long *)0x0;
      }
      else {
        FUN_0095dd00(&local_68);
        if (local_68 != (long *)0x0) {
          uVar8 = *(uint *)(param_1 + 0x350);
          if (8 < uVar8) {
LAB_025ff3f8:
                    /* WARNING: Subroutine does not return */
            FUN_026006b0();
          }
          uVar9 = local_68[0x3e];
          uVar6 = 1L << ((ulong)uVar8 & 0x3f);
          local_68[0x3e] = uVar9 & (uVar6 ^ 0xffffffffffffffff);
          switch(uVar8) {
          case 1:
            *(undefined1 *)(local_68 + 0x4a) = 0;
            local_68[0x49] = 0;
            lVar11 = local_68[0x40];
            break;
          case 2:
            *(undefined1 *)(local_68 + 0x50) = 0;
            local_68[0x4f] = 0;
            lVar11 = local_68[0x40];
            break;
          case 3:
            *(undefined1 *)(local_68 + 0x56) = 0;
            local_68[0x55] = 0;
            *(undefined4 *)((long)local_68 + 0x2b4) = 0x3f800000;
            lVar11 = local_68[0x40];
            break;
          case 4:
            *(undefined1 *)(local_68 + 0x5c) = 0;
            local_68[0x5b] = 0;
            *(undefined4 *)((long)local_68 + 0x2e4) = 0x3f800000;
            lVar11 = local_68[0x40];
            break;
          case 5:
            *(undefined1 *)(local_68 + 0x62) = 0;
            local_68[0x61] = 0;
            *(undefined4 *)((long)local_68 + 0x314) = 0x3f800000;
            lVar11 = local_68[0x40];
            break;
          case 6:
            *(undefined1 *)(local_68 + 0x68) = 0;
            local_68[0x67] = 0;
            *(undefined4 *)((long)local_68 + 0x344) = 0x3f800000;
            lVar11 = local_68[0x40];
            break;
          case 7:
            *(undefined1 *)(local_68 + 0x6e) = 0;
            local_68[0x6d] = 0;
            lVar11 = local_68[0x40];
            break;
          case 8:
            *(undefined1 *)(local_68 + 0x75) = 0;
            local_68[0x74] = 0;
          default:
            lVar11 = local_68[0x40];
          }
          if ((lVar11 == 0) ||
             (FUN_025ff800(lVar11,(ulong)CONCAT14((uVar6 & uVar9) != 0,uVar8)),
             local_68 != (long *)0x0)) {
            lVar11 = local_68[0xb];
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar4 = *piVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
LAB_025ff3e0:
            if (iVar4 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
        }
      }
    }
  }
  if ((*param_2 & 0xfffffffe) == 2) {
    uVar8 = param_2[2];
    *(uint *)(param_1 + 0x24c) = uVar8;
    *(uint *)(param_1 + 0x248) = uVar8;
    FUN_025fe880(param_1,1,1);
    *(undefined1 *)(param_1 + 0x250) = 1;
  }
  uVar6 = FUN_025ff40c(param_1,puVar10);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((float)param_2[10] < 1.1920929e-07) {
    return;
  }
  fVar12 = (float)FUN_025ff490();
  if (fVar12 < 1.0 - (float)param_2[10]) {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148e38(&local_38);
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar11 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar11;
  if (((lVar11 == 0) || (local_38 == (long *)0x0)) ||
     (iVar4 = FUN_010dbe10(local_38,0xe), iVar4 == 0)) {
    if (*puVar10 == 4) {
      if ((*(byte *)(param_1 + 0x3b0) & 7) == 0) {
        uVar8 = param_2[4];
        *(uint *)(param_1 + 0x27c) = uVar8;
        *(uint *)(param_1 + 0x278) = uVar8;
        uVar7 = 2;
        goto LAB_025fef0c;
      }
    }
    else {
      switch(*puVar10) {
      case 2:
        if ((*(byte *)(param_1 + 0x3b0) & 7) == 0) {
          uVar8 = param_2[4];
          *(uint *)(param_1 + 0x30c) = uVar8;
          *(uint *)(param_1 + 0x308) = uVar8;
          uVar7 = 5;
LAB_025fef0c:
          FUN_025fe880(param_1,uVar7,1);
        }
        break;
      case 3:
        if ((*(byte *)(param_1 + 0x3b0) & 7) == 0) {
          uVar8 = param_2[4];
          *(uint *)(param_1 + 0x2dc) = uVar8;
          *(uint *)(param_1 + 0x2d8) = uVar8;
          uVar7 = 4;
          goto LAB_025fef0c;
        }
        break;
      case 5:
        if ((*(byte *)(param_1 + 0x3b0) & 7) == 0) {
          uVar8 = param_2[4];
          uVar7 = 7;
          *(uint *)(param_1 + 0x374) = param_2[5];
          *(uint *)(param_1 + 0x36c) = uVar8;
          *(uint *)(param_1 + 0x368) = uVar8;
          *(undefined1 *)(param_1 + 0x378) = 0;
          goto LAB_025fef0c;
        }
        break;
      case 6:
        if ((*(byte *)(param_1 + 0x3b0) & 7) == 0) {
          uVar8 = param_2[4];
          *(uint *)(param_1 + 0x33c) = uVar8;
          *(uint *)(param_1 + 0x338) = uVar8;
          uVar7 = 6;
          goto LAB_025fef0c;
        }
        break;
      case 7:
        if ((*(byte *)(param_1 + 0x3b0) & 7) == 0) {
          uVar8 = param_2[4];
          *(uint *)(param_1 + 0x2ac) = uVar8;
          *(uint *)(param_1 + 0x2a8) = uVar8;
          uVar7 = 3;
          goto LAB_025fef0c;
        }
      }
    }
  }
  else {
    uVar5 = FUN_010dbe70(local_38,0xe);
    FUN_0286b878(&local_40,lVar11);
    if (local_40 != (long *)0x0) {
      uVar6 = (ulong)local_68 >> 8;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_68 = (long *)CONCAT71((uint7)uVar6 & 0xffffff,8);
      uStack_60 = uVar5;
      FUN_01468dd0(local_40,&local_68);
      if (local_40 != (long *)0x0) {
        lVar11 = local_40[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_40 + 0x20))();
          goto joined_r0x025fef18;
        }
      }
    }
  }
joined_r0x025fef18:
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


