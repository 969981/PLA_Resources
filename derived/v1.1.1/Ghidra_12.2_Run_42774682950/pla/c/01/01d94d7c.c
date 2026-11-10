/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d94d7c; name: FUN_01d94d7c
 */


void FUN_01d94d7c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  long *local_90 [6];
  
  puVar4 = PTR_DAT_04379520;
  lVar12 = *(long *)(param_1 + 0x68);
  plVar11 = *(long **)(lVar12 + 8);
  plVar13 = (long *)(param_4 & 0xffffffff);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar5 = PTR_DAT_04379528;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_01d957dc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar11;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x210,0x10);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
    FUN_00b52204(0);
  }
  else {
    FUN_00b52204();
    plVar9[1] = (long)plVar11;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0x210;
    plVar9[4] = 0x10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
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
    plVar11 = plVar9 + 9;
    (**(code **)(*plVar11 + 0xb8))(plVar11,lVar12);
    local_130 = (undefined8 *)0x0;
    pcStack_128 = (char *)0x0;
    FUN_009ad580(&local_130,lVar12 + 0x318);
    (**(code **)(*plVar11 + 0xc0))(plVar11,&local_130);
    puVar6 = local_130;
    if (local_130 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_130 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_90[0] = (long *)*puVar6;
        FUN_02a44274(lVar8 + 0xd8,local_90);
      }
    }
    (**(code **)(plVar9[9] + 200))(plVar11,*(undefined1 *)(lVar12 + 0x33b));
    (**(code **)(plVar9[9] + 0x90))(plVar11);
    local_90[0] = plVar9;
    FUN_02a4dad4(lVar12 + 0xf0,local_90);
    if (local_90[0] != (long *)0x0) {
      lVar12 = local_90[0][0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_90[0] + 0x20))();
      }
    }
    local_130 = (undefined8 *)0x79479c9171128967;
    pcStack_128 = "field";
    local_120 = 5;
    local_118 = (long *)0x0;
    FUN_00b526dc(plVar9[0x3e],param_2,&local_130);
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 0x20))();
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x68) + 8);
    if (((*puVar4 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01d957dc;
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    lVar12 = (**(code **)(*plVar13 + 0x10))(plVar13,0x2b0,0x10);
    if (lVar12 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02a4c0f4(lVar12,0);
    }
  }
  (**(code **)(*plVar13 + 0xb8))(plVar13);
                    /* WARNING: Subroutine does not return */
  FUN_02a4c0f4(0,0);
}


