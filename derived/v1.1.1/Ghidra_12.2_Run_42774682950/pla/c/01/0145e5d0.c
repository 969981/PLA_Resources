/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145e5d0; name: FUN_0145e5d0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0145e5d0(long param_1)

{
  int *piVar1;
  char *__s;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  ushort *puVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  float fVar24;
  undefined8 local_a0;
  long local_98;
  undefined8 *local_90;
  char *pcStack_88;
  size_t local_80;
  long *local_78;
  long local_68;
  
  if (*(char *)(param_1 + 0x243) != '\0') {
    return;
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar13 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar13;
  plVar21 = *(long **)(lVar13 + 0xc0);
  if (plVar21 != (long *)0x0) {
    lVar13 = plVar21[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      local_68 = plVar21[0x18];
      local_98 = local_68 + plVar21[0x19] * 8;
      FUN_0145efa0(&local_90,&local_68,&local_98);
      if (local_90 != (undefined8 *)(plVar21[0x18] + plVar21[0x19] * 8)) {
        plVar22 = (long *)*local_90;
        puVar12 = (undefined8 *)(**(code **)plVar22[10])(plVar22 + 10);
        if (((*PTR_DAT_0437c678 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437c678), iVar9 != 0)) {
          uVar11 = FUN_009311a8();
          *(undefined8 *)PTR_DAT_0437c680 = uVar11;
          __cxa_guard_release(PTR_DAT_0437c678);
        }
        if (puVar12 != (undefined8 *)0x0) {
LAB_0145e6d0:
          if (puVar12 != (undefined8 *)PTR_DAT_0437c680) goto LAB_0145e768;
          lVar13 = plVar22[0xb];
          if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0145ef74;
          if (*(long *)(lVar13 + 0x10) == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
            *(undefined8 *)(lVar13 + 0x10) = uVar11;
          }
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            plVar19 = plVar22;
          } while (cVar5 != '\0');
LAB_0145e714:
          if (plVar19 == (long *)0x0) goto LAB_0145e718;
          lVar13 = plVar19[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
          }
          lVar13 = plVar21[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar9 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar21 + 0x20))(plVar21);
          }
          goto LAB_0145e824;
        }
      }
LAB_0145e718:
      lVar13 = plVar21[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0145e764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar21 + 0x20))(plVar21);
        return;
      }
      return;
    }
LAB_0145ef74:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
LAB_0145e824:
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar13 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar13;
  plVar21 = *(long **)(lVar13 + 0x228);
  if (plVar21 != (long *)0x0) {
    lVar13 = plVar21[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0145ef74;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar14 = *(uint **)(*(long *)(param_1 + 0x218) + 0x250);
  piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
  puVar14 = puVar2 + 1;
  uVar15 = (ulong)*puVar2;
  if (uVar15 != 0) {
    puVar2 = puVar14 + uVar15;
    plVar22 = (long *)(param_1 + 0x18);
    local_a0 = 0;
LAB_0145e904:
    piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
       (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar15 == 0)) {
      lVar13 = 0;
    }
    else {
      puVar3 = (uint *)((long)piVar1 + uVar15);
      lVar13 = (long)puVar3 + (ulong)*puVar3;
    }
    __s = (char *)(lVar13 + 4);
    local_80 = strlen(__s);
    bVar4 = *(byte *)(lVar13 + 4);
    local_90 = (undefined8 *)&DAT_cbf29ce484222645;
    if (bVar4 != 0) {
      local_90 = (undefined8 *)&DAT_cbf29ce484222645;
      pbVar17 = (byte *)(lVar13 + 5);
      do {
        local_90 = (undefined8 *)(((ulong)local_90 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (bVar4 != 0);
    }
    local_78 = (long *)0x0;
    puVar12 = (undefined8 *)((long *)plVar21[0x37])[1];
    pcStack_88 = __s;
    if (puVar12 != (undefined8 *)0x0) {
      uVar15 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        puVar18 = (undefined8 *)((ulong)((long)puVar12 + -1) & (ulong)local_90);
      }
      else {
        puVar18 = local_90;
        if (puVar12 <= local_90) {
          uVar8 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            uVar8 = (ulong)local_90 / (ulong)puVar12;
          }
          puVar18 = (undefined8 *)((long)local_90 - uVar8 * (long)puVar12);
        }
      }
      plVar19 = *(long **)(*(long *)plVar21[0x37] + (long)puVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if ((undefined8 *)plVar19[1] == local_90) {
              if ((undefined8 *)plVar19[2] == local_90) goto LAB_0145ea20;
            }
            else if ((undefined8 *)((ulong)plVar19[1] & (ulong)((long)puVar12 + -1)) != puVar18)
            break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            puVar20 = (undefined8 *)plVar19[1];
            if (puVar20 == local_90) {
              if ((undefined8 *)plVar19[2] == local_90) goto LAB_0145ea20;
            }
            else {
              if (puVar12 <= puVar20) {
                uVar15 = 0;
                if (puVar12 != (undefined8 *)0x0) {
                  uVar15 = (ulong)puVar20 / (ulong)puVar12;
                }
                puVar20 = (undefined8 *)((long)puVar20 - uVar15 * (long)puVar12);
              }
              if (puVar20 != puVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_0145ea28;
  }
LAB_0145ea70:
  bVar6 = false;
joined_r0x0145ece0:
  if (plVar21 != (long *)0x0) {
    lVar13 = plVar21[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
      cVar5 = *(char *)(param_1 + 0x242);
      goto joined_r0x0145ed80;
    }
  }
  cVar5 = *(char *)(param_1 + 0x242);
joined_r0x0145ed80:
  if (!bVar6) {
    if (cVar5 != '\0') {
      *(undefined1 *)(param_1 + 0x242) = 0;
      FUN_0145c7f0(param_1);
      *(ulong *)(param_1 + 0x250) = *(ulong *)(param_1 + 0x250) & 0xfffffffffffffffd;
    }
    return;
  }
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0x242) = 1;
    *(ulong *)(param_1 + 0x250) = *(ulong *)(param_1 + 0x250) & 0xfffffffffffffffc | 2;
    FUN_0145d6f0(param_1);
    return;
  }
  return;
LAB_0145e768:
  puVar12 = (undefined8 *)*puVar12;
  plVar19 = (long *)0x0;
  if (puVar12 == (undefined8 *)0x0) goto LAB_0145e714;
  goto LAB_0145e6d0;
LAB_0145ea20:
  if ((char)plVar19[3] != '\0') {
    if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xd) {
      local_68 = 0;
    }
    else {
      uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6];
      local_68 = 0;
      if (uVar15 != 0) {
        local_68 = *(long *)((long)piVar1 + uVar15);
      }
    }
    puVar16 = (ushort *)((long)piVar1 - (long)*piVar1);
    if (*puVar16 < 7) {
      iVar9 = 0;
      fVar24 = 0.0;
    }
    else {
      iVar9 = 0;
      if ((ulong)puVar16[3] != 0) {
        iVar9 = *(int *)((long)piVar1 + (ulong)puVar16[3]);
      }
      fVar24 = (float)iVar9;
      if (*puVar16 < 9) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0;
        if ((ulong)puVar16[4] != 0) {
          iVar9 = *(int *)((long)piVar1 + (ulong)puVar16[4]);
        }
      }
    }
    FUN_0145dc7c(fVar24,(float)iVar9,param_1,local_a0 & 0xffffffff,&local_68,0);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
       (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar15 == 0)) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)((long)piVar1 + uVar15);
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar13 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar13;
    plVar19 = *(long **)(lVar13 + 0x228);
    if (plVar19 != (long *)0x0) {
      lVar13 = plVar19[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_0145ef74;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (((((*(char *)(param_1 + 0x28) == '\0') || (plVar23 = plVar22, *plVar22 != local_68)) &&
         ((*(char *)(param_1 + 0x40) == '\0' ||
          (plVar23 = (long *)(param_1 + 0x30), *(long *)(param_1 + 0x30) != local_68)))) &&
        ((*(char *)(param_1 + 0x58) == '\0' ||
         (plVar23 = (long *)(param_1 + 0x48), *(long *)(param_1 + 0x48) != local_68)))) &&
       ((*(char *)(param_1 + 0x70) == '\0' ||
        (plVar23 = (long *)(param_1 + 0x60), *(long *)(param_1 + 0x60) != local_68)))) {
      plVar23 = plVar22;
    }
    if (-1 < iVar9) {
      if ((char)plVar23[2] == '\0') {
        *(undefined1 *)(plVar23 + 2) = 1;
        *plVar23 = local_68;
        *(int *)(plVar23 + 1) = iVar9;
        *(int *)((long)plVar23 + 0xc) = iVar9;
      }
      else {
        iVar9 = (int)plVar23[1];
      }
      if (0 < iVar9) {
        if (*(int *)((long)plVar23 + 0xc) < 1) {
          FUN_010f4ffc(plVar19,&local_90);
          *plVar23 = (long)&DAT_cbf29ce484222645;
          *(undefined1 *)(plVar23 + 2) = 0;
          plVar23[1] = 0;
        }
        else {
          *(int *)((long)plVar23 + 0xc) = *(int *)((long)plVar23 + 0xc) + -1;
        }
      }
    }
    if (plVar19 != (long *)0x0) {
      lVar13 = plVar19[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_a0 = CONCAT44(1,(uint)local_a0 + 1);
  }
LAB_0145ea28:
  puVar14 = puVar14 + 1;
  if (puVar14 == puVar2) goto LAB_0145ea68;
  goto LAB_0145e904;
LAB_0145ea68:
  if ((local_a0 & 0x100000000) == 0) goto LAB_0145ea70;
  if ((uint)local_a0 < 4) {
    local_90 = (undefined8 *)&DAT_cbf29ce484222645;
    FUN_0145dc7c(0x437f0000,0x437f0000,param_1,local_a0 & 0xffffffff,&local_90,1);
    if ((uint)local_a0 + 1 != 4) {
      local_90 = (undefined8 *)&DAT_cbf29ce484222645;
      FUN_0145dc7c(0x437f0000,0x437f0000,param_1,(uint)local_a0 + 1,&local_90,1);
      for (iVar9 = (uint)local_a0 + 2; iVar9 != 4; iVar9 = iVar9 + 1) {
        local_90 = (undefined8 *)&DAT_cbf29ce484222645;
        FUN_0145dc7c(0x437f0000,0x437f0000,param_1,iVar9,&local_90,1);
      }
    }
  }
  local_90 = (undefined8 *)0xaa9746b0d29093b6;
  pcStack_88 = "pane_A_alignment_00";
  local_80 = 0x13;
  local_78 = (long *)0x0;
  uVar11 = FUN_00d648b4(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148),&local_90);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  FUN_00256608(uVar11);
  bVar6 = true;
  goto joined_r0x0145ece0;
}


