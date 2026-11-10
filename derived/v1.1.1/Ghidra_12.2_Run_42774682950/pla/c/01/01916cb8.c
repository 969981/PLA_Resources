/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01916cb8; name: FUN_01916cb8
 */


void FUN_01916cb8(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,undefined8 *param_8,
                 undefined8 param_9)

{
  code *pcVar1;
  int *piVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *local_190;
  code *local_188;
  code *local_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [96];
  long *local_110;
  ulong *local_108;
  undefined8 uStack_100;
  long *local_f8;
  long *local_f0;
  code *local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70 [2];
  
  if ((*param_1 != 0) && (FUN_009acf14(&local_f0), plVar9 = local_f0, local_f0 != (long *)0x0)) {
    local_f8 = (long *)0x0;
    local_108 = (ulong *)0x0;
    uStack_100 = 0;
    FUN_008c4b3c(&local_108,param_9);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar11 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    plVar13 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x140,0x10);
    if (plVar13 == (long *)0x0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    local_f0 = (long *)((ulong)local_f0 & 0xffffffffffffff00);
    local_e8 = (code *)0x0;
    local_e0 = (code *)0x0;
    FUN_0087fcf0(&local_e8,&local_108);
    local_f0 = (long *)CONCAT71(local_f0._1_7_,1);
    FUN_01cc622c(plVar13,param_4,param_5,param_6,param_3,1,1,param_7 & 1,1,1,&local_f0);
    pcVar10 = local_e8;
    if ((char)local_f0 != '\0') {
      if (local_e8 != (code *)0x0) {
        pcVar1 = local_e8 + 8;
        do {
          iVar11 = *(int *)pcVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar5) {
            *(int *)pcVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(local_e8 + 0x10) = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_70[0] = *(undefined8 *)pcVar10;
          FUN_02a44274(lVar15 + 0xd8,local_70);
        }
      }
      local_f0 = (long *)((ulong)local_f0 & 0xffffffffffffff00);
    }
    plVar13[1] = (long)param_2;
    plVar13[2] = (long)plVar13;
    plVar13[3] = 0x140;
    plVar13[4] = 0x10;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    if (plVar13 != (long *)0x0) {
      lVar12 = plVar13[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar14;
      }
      plVar8 = local_f8;
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      local_f8 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        lVar12 = plVar8[0xb];
        piVar2 = (int *)(lVar12 + 0xc);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))();
        }
      }
    }
    puVar7 = local_108;
    local_f8 = plVar13;
    if (local_108 != (ulong *)0x0) {
      puVar3 = local_108 + 1;
      do {
        iVar11 = (int)*puVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar5) {
          *(int *)puVar3 = iVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 == 0) {
        local_108[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_f0 = (long *)*puVar7;
        FUN_02a44274(lVar12 + 0xd8,&local_f0);
      }
    }
    local_180 = (code *)0x0;
    uStack_178 = 0;
    local_190 = (long *)0x0;
    local_188 = (code *)0x0;
    if ((code *)param_8[2] != (code *)0x0) {
      (*(code *)param_8[2])(param_8 + 4,auStack_170);
      local_190 = (long *)*param_8;
      local_188 = (code *)param_8[1];
      local_180 = (code *)param_8[2];
      uStack_178 = param_8[3];
    }
    lVar12 = plVar9[0xf];
    local_e0 = (code *)0x0;
    local_d8 = 0;
    local_f0 = (long *)0x0;
    local_e8 = (code *)0x0;
    if (local_180 != (code *)0x0) {
      (*local_180)(auStack_170,auStack_d0);
      local_f0 = local_190;
      local_d8 = uStack_178;
      local_e8 = local_188;
      local_e0 = local_180;
    }
    FUN_00bdc73c(&local_110,lVar12,0xc,&local_f8,&local_f0,0);
    pcVar10 = local_e8;
    if (local_e8 == (code *)0x0) {
      local_e8 = (code *)0x0;
    }
    else {
      local_e0 = (code *)0x0;
      local_d8 = 0;
      local_f0 = (long *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar10)(auStack_d0);
    }
    if (local_110 != (long *)0x0) {
      lVar12 = local_110[0xb];
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_110 + 0x20))();
      }
    }
    if (local_188 != (code *)0x0) {
      (*local_188)(auStack_170);
    }
    if (local_f8 != (long *)0x0) {
      lVar12 = local_f8[0xb];
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_f8 + 0x20))();
      }
    }
    lVar12 = plVar9[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  return;
}


