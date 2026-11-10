/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025ca610; name: FUN_025ca610
 */


void FUN_025ca610(long param_1,uint *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *local_58;
  undefined8 uStack_50;
  long *local_48;
  long *local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  FUN_0099c748(&local_30,param_1 + 0x220);
  FUN_025caa60(&local_38,param_1);
  if ((local_30 == (long *)0x0) || (local_38 == (long *)0x0)) goto joined_r0x025ca79c;
  if (*(long *)(param_1 + 0x240) == 0) {
    local_40 = (long *)0x0;
  }
  else {
    FUN_00cfac20(&local_40);
    if (local_40 != (long *)0x0) {
      local_58 = (long *)0x0;
      uStack_50 = 0;
      FUN_00cf9db0(&local_58,local_40 + 0xf1);
      if (local_58 == (long *)0x0) {
        local_48 = (long *)0x0;
LAB_025ca8e8:
        if (local_48 != (long *)0x0) goto LAB_025ca9a8;
LAB_025ca8f0:
        bVar6 = false;
      }
      else {
        FUN_00959eac(&local_48);
        plVar1 = local_58;
        if (local_58 == (long *)0x0) goto LAB_025ca8e8;
        plVar3 = local_58 + 1;
        do {
          iVar8 = (int)*plVar3 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != 0) goto LAB_025ca8e8;
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_28 = (long *)*plVar1;
        FUN_02a44274(lVar10 + 0xd8,&local_28);
        if (local_48 == (long *)0x0) goto LAB_025ca8f0;
LAB_025ca9a8:
        if (((*param_2 & 0xfffffffe) == 2) && (uVar9 = FUN_02674b78(), (uVar9 & 1) == 0)) {
          FUN_01bf37b8(param_2[2],local_38);
        }
        if (local_48 != (long *)0x0) {
          lVar10 = local_48[0xb];
          piVar2 = (int *)(lVar10 + 0xc);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 1) {
            *(undefined8 *)(lVar10 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        bVar6 = true;
      }
      if (local_40 != (long *)0x0) {
        lVar10 = local_40[0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_40 + 0x20))();
        }
      }
      if (bVar6) goto joined_r0x025ca79c;
    }
  }
  plVar1 = local_38;
  uVar9 = FUN_01bf34a0(local_38);
  if ((((uVar9 & 1) == 0) &&
      ((((uVar9 = FUN_01bf34a0(plVar1), (uVar9 & 1) == 0 ||
         (uVar9 = FUN_01a5badc(plVar1,plVar1 + 499), (uVar9 & 0xff) == 0)) ||
        ((uVar9 & 0xffffffff00000000) != 0x200000000)) &&
       ((plVar1 = local_38, *param_2 != 0 && (uVar9 = FUN_01bf34a0(local_38), (uVar9 & 1) == 0))))))
     && ((uVar9 = FUN_01bf34a0(plVar1), (uVar9 & 1) == 0 ||
         ((uVar9 = FUN_01a5badc(plVar1,plVar1 + 499), (uVar9 & 0xff) == 0 ||
          ((uVar9 & 0xffffffff00000000) != 0x200000000)))))) {
    FUN_01a87684(local_30);
    (**(code **)(*local_30 + 0x130))();
    (**(code **)(*local_30 + 0x100))(local_30,PTR_DAT_0437a330);
    plVar1 = local_30 + 0x15a;
    FUN_01839c8c(&local_28,plVar1);
    if (local_28 != (long *)0x0) {
      FUN_01839c8c(&local_58,plVar1);
      if (local_58 != (long *)0x0) {
        lVar10 = local_58[0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        iVar8 = *(int *)((long)local_58 + 0x7c);
        do {
          iVar4 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
        if (iVar8 == 2) {
          lVar10 = local_28[0x1a];
          *(undefined8 *)(lVar10 + 0xc0) = 0;
          *(undefined8 *)(lVar10 + 200) = 0;
        }
      }
      if (local_28 != (long *)0x0) {
        lVar10 = local_28[0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
    }
    (**(code **)(*local_30 + 0x1f8))(local_30,0);
    (**(code **)(*local_30 + 0x1c8))(local_30,0);
    if (*param_2 - 2 < 2) {
      FUN_01bf37b8(param_2[2],local_38);
    }
    else if (*param_2 == 1) {
      FUN_01bf3400(local_38);
    }
  }
joined_r0x025ca79c:
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (local_30 != (long *)0x0) {
    lVar10 = local_30[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return;
}


