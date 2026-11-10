/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014637e4; name: FUN_014637e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014637e4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *local_58;
  
  lVar8 = *(long *)(param_2 + 0x4c8);
  plVar9 = *(long **)(lVar8 + 8);
  uVar10 = *(undefined8 *)(lVar8 + 0xa8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x5b0,0x10);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
  }
  FUN_00d408b8(plVar7,lVar8,param_3,uVar10);
  *plVar7 = (long)&PTR_FUN_04210250;
  plVar7[1] = (long)plVar9;
  plVar7[9] = (long)&PTR_LAB_042102f0;
  plVar7[10] = (long)&PTR_LAB_04210338;
  *(undefined2 *)((long)plVar7 + 0x5ab) = 0;
  *(undefined1 *)((long)plVar7 + 0x5ad) = 0;
  plVar7[4] = 0x10;
  plVar7[2] = (long)plVar7;
  plVar7[3] = 0x5b0;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  *param_1 = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) goto LAB_01463ae0;
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar7[0x31] = (long)plVar7;
  plVar7[0x32] = plVar7[1];
  local_58 = plVar7;
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) goto LAB_01463ae0;
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(ulong *)(lVar8 + 0x78) < *(ulong *)(lVar8 + 0x80)) {
    FUN_01161aec(lVar8 + 0x88,*(ulong *)(lVar8 + 0x78),&local_58);
    *(long *)(lVar8 + 0x78) = *(long *)(lVar8 + 0x78) + 8;
  }
  else {
    FUN_0146c26c(lVar8 + 0x70,&local_58);
  }
  if (local_58 != (long *)0x0) {
    lVar6 = local_58[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  *(undefined1 *)(lVar8 + 0xc0) = 0;
  plVar9 = *(long **)(lVar8 + 0x68);
  if (plVar9 == (long *)0x0) {
    FUN_00d42be0(_DAT_00000580,*param_1);
  }
  else {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_01463ae0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_00d42be0(plVar9[0xb0],*param_1);
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  *(undefined8 *)(*param_1 + 0x168) = param_4;
  return;
}


