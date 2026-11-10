/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b770a4; name: FUN_01b770a4
 */


/* WARNING: Removing unreachable block (ram,0x01b773c4) */
/* WARNING: Removing unreachable block (ram,0x01b773e0) */

undefined8 FUN_01b770a4(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  ulong local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  undefined8 local_58;
  
  if (((**(char **)(param_2 + 8) != '\0') && (*(long *)(param_1 + 0x2a0) != 0)) &&
     (FUN_009acf14(&local_e8), local_e8 != (long *)0x0)) {
    local_f0 = (long *)0x0;
    plVar11 = *(long **)(param_2 + 0x20);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    plVar8 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x140,0x10);
    if (plVar8 == (long *)0x0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    local_e0 = local_e0 & 0xffffffffffffff00;
    FUN_01cc622c(plVar8,param_2 + 0x30,param_2 + 0x40,param_2 + 0x50,param_2,
                 *(undefined1 *)(param_2 + 0x60),*(undefined1 *)(param_2 + 0x61),
                 *(undefined1 *)(param_2 + 0x62),*(undefined1 *)(param_2 + 99),
                 *(undefined1 *)(param_2 + 100),&local_e0);
    if ((char)local_e0 != '\0') {
      if (local_d8 != (code *)0x0) {
        piVar1 = (int *)((long)local_d8 + 8);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)((long)local_d8 + 0x10) = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_58 = *(undefined8 *)local_d8;
          FUN_02a44274(lVar10 + 0xd8,&local_58);
        }
      }
      local_e0 = local_e0 & 0xffffffffffffff00;
    }
    plVar8[1] = (long)plVar11;
    plVar8[2] = (long)plVar8;
    plVar8[3] = 0x140;
    plVar8[4] = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar9;
      }
      plVar11 = local_f0;
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_f0 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        lVar7 = plVar11[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar11 + 0x20))();
        }
      }
    }
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    local_f0 = plVar8;
    FUN_00bdc73c(&local_f8,local_e8[0xf],0xc,&local_f0,&local_e0,0);
    pcVar5 = local_d8;
    if (local_d8 == (code *)0x0) {
      local_d8 = (code *)0x0;
    }
    else {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar5)(auStack_c0);
    }
    if (local_f8 != (long *)0x0) {
      lVar7 = local_f8[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_f8 + 0x20))();
      }
    }
    if (local_f0 != (long *)0x0) {
      lVar7 = local_f0[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))();
      }
    }
    if (local_e8 != (long *)0x0) {
      lVar7 = local_e8[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_e8 + 0x20))();
      }
    }
  }
  return 0;
}


