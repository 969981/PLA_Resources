/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02820e24; name: FUN_02820e24
 */


void FUN_02820e24(long *param_1,undefined8 *param_2,ulong param_3)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *local_60;
  undefined1 auStack_58 [8];
  long local_48;
  
  puVar8 = (undefined8 *)(**(code **)param_1[10])(param_1 + 10);
  if (((*PTR_DAT_0437b298 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b298), puVar6 = PTR_DAT_0437b2b0, iVar7 != 0)) {
    if (((*PTR_DAT_0437b2a8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b2a8), puVar5 = PTR_DAT_043794d8, iVar7 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
        uVar9 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar6 = puVar5;
      __cxa_guard_release(PTR_DAT_0437b2a8);
    }
    *(undefined **)PTR_DAT_0437b2a0 = puVar6;
    __cxa_guard_release(PTR_DAT_0437b298);
  }
  if (puVar8 != (undefined8 *)0x0) {
LAB_02820e7c:
    if (puVar8 != (undefined8 *)PTR_DAT_0437b2a0) goto code_r0x02820e84;
    lVar11 = *(long *)*param_2;
    lVar12 = param_1[0xb];
    local_60 = param_1;
    if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar2 = *(ulong *)(lVar11 + 0x28);
      if (*(ulong *)(lVar11 + 0x30) <= uVar2) {
        local_48 = *(long *)(lVar11 + 0x20) + uVar2 * 8;
        FUN_02821284(auStack_58,lVar11,&local_48,&local_60);
        if (local_60 != (long *)0x0) goto LAB_02820f0c;
        goto LAB_02820f28;
      }
      FUN_02820d44(lVar11,*(long *)(lVar11 + 0x20) + uVar2 * 8,&local_60);
      *(long *)(lVar11 + 0x28) = *(long *)(lVar11 + 0x28) + 1;
      if (local_60 == (long *)0x0) goto LAB_02820f28;
LAB_02820f0c:
      lVar12 = local_60[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 != 0) goto LAB_02820f28;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
      plVar10 = (long *)param_1[0x13];
      goto joined_r0x02821178;
    }
    goto LAB_02821208;
  }
LAB_02820f28:
  plVar10 = (long *)param_1[0x13];
joined_r0x02821178:
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02821208;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
      plVar10 = (long *)param_1[0x13];
    }
    else {
      plVar10 = (long *)param_1[0x13];
    }
    if (plVar10 == (long *)0x0) {
      FUN_02820e24(0,param_2,1);
    }
    else {
      lVar12 = plVar10[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02821208;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_02820e24(plVar10,param_2,1);
      lVar12 = plVar10[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
  }
  if (((param_3 & 1) != 0) && (plVar10 = (long *)param_1[0x12], plVar10 != (long *)0x0)) {
    lVar12 = plVar10[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_02821208:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar12 = plVar10[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
      plVar10 = (long *)param_1[0x12];
    }
    else {
      plVar10 = (long *)param_1[0x12];
    }
    if (plVar10 == (long *)0x0) {
      FUN_02820e24(0,param_2,1);
    }
    else {
      lVar12 = plVar10[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02821208;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_02820e24(plVar10,param_2,1);
      lVar12 = plVar10[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
  }
  return;
code_r0x02820e84:
  puVar8 = (undefined8 *)*puVar8;
  if (puVar8 == (undefined8 *)0x0) goto LAB_02820f28;
  goto LAB_02820e7c;
}


