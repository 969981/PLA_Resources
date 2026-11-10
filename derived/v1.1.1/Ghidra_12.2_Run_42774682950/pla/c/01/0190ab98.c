/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0190ab98; name: FUN_0190ab98
 */


void FUN_0190ab98(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  void *__s;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *local_1b8;
  long *local_1b0 [2];
  undefined8 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_70 [2];
  long *local_58;
  
  uVar8 = FUN_0190b86c(param_2);
  if ((uVar8 & 1) == 0) {
    return;
  }
  lVar10 = *param_2;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 0xc) == 0)) {
LAB_0190abd4:
    plVar9 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar7 = *(int *)(lVar10 + 0xc);
    do {
      plVar12 = *(long **)(lVar10 + 0x10);
      plVar11 = (long *)FUN_01913b5c();
      if (plVar12 == (long *)0x0) goto LAB_0190abd4;
      while (plVar12 != plVar11) {
        plVar12 = (long *)*plVar12;
        plVar9 = (long *)0x0;
        if (plVar12 == (long *)0x0) goto LAB_0190abd8;
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar9 = (long *)0x0;
          if (*(long *)(lVar10 + 0x18) != 0) {
            plVar9 = (long *)(*(long *)(lVar10 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar9 = (long *)0x0;
      iVar7 = iVar2;
    } while (iVar2 != 0);
  }
LAB_0190abd8:
  if (param_2[2] == 0) {
    local_1b0[0] = (long *)0x0;
    goto joined_r0x0190b2a4;
  }
  FUN_009b3e90(local_1b0,param_2[2]);
  if (local_1b0[0] == (long *)0x0) goto joined_r0x0190b2a4;
  local_1a0 = (undefined8 *)0x0;
  uStack_198 = 0;
  FUN_009ab200(&local_1a0,local_1b0[0] + 0x68);
  if (local_1a0 == (undefined8 *)0x0) {
    local_1b8 = (long *)0x0;
LAB_0190acc4:
    local_58 = (long *)0x0;
  }
  else {
    FUN_00b911c4(&local_58);
    local_1b8 = local_58;
    puVar6 = local_1a0;
    local_58 = (long *)0x0;
    if (local_1a0 == (undefined8 *)0x0) goto LAB_0190acc4;
    piVar1 = (int *)(local_1a0 + 1);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 != 0) goto LAB_0190acc4;
    local_1a0[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar10 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar10;
    local_70[0] = *puVar6;
    FUN_02a44274(lVar10 + 0xd8,local_70);
  }
  if (local_1b0[0] != (long *)0x0) {
    lVar10 = local_1b0[0][0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_1b0[0] + 0x20))();
    }
  }
  if (local_1b8 != (long *)0x0) {
    if (plVar9 != (long *)0x0) {
      plVar11 = *(long **)(param_1 + 8);
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar5 = PTR_DAT_04379528;
        if (iVar7 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      __s = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x2c0,0x10);
      if (__s == (void *)0x0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
        memset((void *)0x0,0,0x2c0);
                    /* WARNING: Subroutine does not return */
        FUN_008a93d8(0);
      }
      memset(__s,0,0x2c0);
                    /* WARNING: Subroutine does not return */
      FUN_008a93d8(__s);
    }
    if (local_1b8 == (long *)0x0) {
      return;
    }
    lVar10 = local_1b8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_1b8 + 0x20))(local_1b8);
      return;
    }
    return;
  }
joined_r0x0190b2a4:
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  return;
}


