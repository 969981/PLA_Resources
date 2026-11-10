/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c46390; name: FUN_01c46390
 */


/* WARNING: Removing unreachable block (ram,0x01c46964) */

void FUN_01c46390(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  code *pcVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  long *local_140;
  long *local_138;
  undefined8 uStack_130;
  undefined1 local_124 [4];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  long *local_110;
  ulong uStack_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  long local_70 [2];
  
  if (*(long *)(param_2 + 0x1f0) == 0) {
    local_f8 = (long *)0x0;
LAB_01c463c0:
    bVar6 = false;
  }
  else {
    FUN_009acf14(&local_f8);
    if ((local_f8 == (long *)0x0) || (*(long *)(param_2 + 0x200) == 0)) goto LAB_01c463c0;
    FUN_00bd915c(&local_f0);
    plVar10 = local_f0;
    if (local_f0 == (long *)0x0) goto LAB_01c463c0;
    if (local_f0[0x1d2] == 0) {
      local_110 = (long *)0x0;
LAB_01c46468:
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
LAB_01c4646c:
      bVar6 = false;
    }
    else {
      FUN_018e3920(&local_110);
      if (local_110 == (long *)0x0) goto LAB_01c46468;
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      FUN_00b182e0(&local_f0,local_110 + 0x9a);
      if (local_110 != (long *)0x0) {
        lVar13 = local_110[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_110 + 0x20))();
        }
      }
      plVar15 = local_f0;
      if (local_f0 == (long *)0x0) goto LAB_01c4646c;
      if (*(int *)((long)local_f0 + 0xc) != 0) {
        piVar1 = (int *)((long)local_f0 + 0xc);
        iVar12 = *(int *)((long)local_f0 + 0xc);
        do {
          plVar16 = (long *)plVar15[2];
          lVar13 = FUN_00ab5048();
          while( true ) {
            if (plVar16 == (long *)0x0) goto LAB_01c4656c;
            if (plVar16 == (long *)lVar13) break;
            plVar16 = (long *)*plVar16;
          }
          iVar3 = *piVar1;
          if (iVar3 == iVar12) {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar13 = plVar15[3];
              plVar15 = (long *)0x0;
              if (lVar13 != 0) {
                plVar15 = (long *)(lVar13 + -0x50);
              }
              goto LAB_01c46584;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar3;
        } while (iVar3 != 0);
      }
LAB_01c4656c:
      plVar15 = (long *)0x0;
LAB_01c46584:
      plVar16 = local_f0;
      puVar9 = PTR_DAT_043794a8;
      puVar8 = PTR_DAT_043794a0;
      puVar7 = PTR_DAT_04379498;
      if (local_f0 != (long *)0x0) {
        plVar2 = local_f0 + 1;
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_f0[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_110 = (long *)*plVar16;
          FUN_02a44274(lVar13 + 0xd8,&local_110);
        }
      }
      if (plVar15 == (long *)0x0) goto LAB_01c4646c;
      uVar17 = FUN_00d8326c(plVar15,param_4);
      local_110 = (long *)CONCAT44(uVar17,uVar17);
      local_100 = (long *)0x0;
      uStack_108 = (ulong)uVar17;
      uVar14 = *(undefined8 *)(param_2 + 8);
      local_114[0] = 1;
      local_118[0] = 1;
      local_124[0] = 1;
      local_11c[0] = 0;
      local_120[0] = 0;
      FUN_009c69bc(&local_140,param_2);
      (**(code **)(*local_140 + 0x10))(&local_f0);
      local_138 = (long *)0x0;
      uStack_130 = 0;
      FUN_0087f944(&local_138,&local_f0);
      plVar16 = local_f0;
      if (local_f0 != (long *)0x0) {
        plVar2 = local_f0 + 1;
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_f0[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_70[0] = *plVar16;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      FUN_008c4b3c(&local_f0,&local_138);
      plVar16 = (long *)FUN_01c43c0c(local_70,uVar14,PTR_DAT_0437a330,PTR_DAT_0437a330,&local_110,
                                     param_3,local_114,local_118,local_11c,local_120,local_124,
                                     &local_f0);
      if (plVar16 != (long *)0x0) {
        lVar13 = plVar16[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar14;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar2 = local_100;
      local_100 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        lVar13 = plVar2[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar2 + 0x20))();
        }
      }
      plVar2 = local_f0;
      local_100 = plVar16;
      if (local_f0 != (long *)0x0) {
        plVar16 = local_f0 + 1;
        do {
          iVar12 = (int)*plVar16 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar6) {
            *(int *)plVar16 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_f0[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_70[0] = *plVar2;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      plVar16 = local_138;
      if (local_138 != (long *)0x0) {
        plVar2 = local_138 + 1;
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 == 0) {
          local_138[2] = 0;
          if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_70[0] = *plVar16;
          FUN_02a44274(lVar13 + 0xd8,local_70);
        }
      }
      if (local_140 != (long *)0x0) {
        lVar13 = local_140[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_140 + 0x20))();
        }
      }
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      FUN_00bdc73c(param_1,local_f8[0xf],0xc,&local_100,&local_f0,0);
      pcVar11 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = (long *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar11)(auStack_d0);
      }
      if (local_100 != (long *)0x0) {
        lVar13 = local_100[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*local_100 + 0x20))();
        }
      }
      lVar13 = plVar15[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 == 1) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      bVar6 = true;
    }
    lVar13 = plVar10[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
      if (!bVar6) goto LAB_01c463c0;
    }
    else if (!bVar6) goto LAB_01c463c0;
    bVar6 = true;
  }
  if (local_f8 != (long *)0x0) {
    lVar13 = local_f8[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_f8 + 0x20))();
      if (bVar6) {
        return;
      }
      goto LAB_01c463ec;
    }
  }
  if (bVar6) {
    return;
  }
LAB_01c463ec:
  *param_1 = 0;
  return;
}


