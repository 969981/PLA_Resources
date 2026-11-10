/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fa0424; name: FUN_01fa0424
 */


undefined1 *
FUN_01fa0424(uint param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 *param_9,
            long *param_10)

{
  int *piVar1;
  ulong *puVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  long *local_1d0;
  long *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  long *local_1a8;
  long local_1a0;
  undefined8 uStack_198;
  ulong *local_190;
  code *local_188;
  code *local_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [96];
  undefined1 local_110;
  undefined7 uStack_10f;
  long *local_108;
  undefined1 local_fc [4];
  long *local_f8;
  ulong *local_f0;
  code *pcStack_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [112];
  
  FUN_01f9abc4(&local_f0);
  if (local_f0 == (ulong *)0x0) {
    local_f8 = (long *)0x0;
  }
  else {
    FUN_017e9e98(&local_f8);
    if (local_f0 != (ulong *)0x0) {
      puVar2 = local_f0 + 1;
      do {
        iVar8 = (int)*puVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *(int *)puVar2 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_1c8 = (long *)*local_f0;
        FUN_02a44274(lVar11 + 0xd8,&local_1c8);
      }
    }
  }
  puVar12 = &DAT_cbf29ce484222645;
  if (local_f8 != (long *)0x0) {
    uVar9 = FUN_017d1b40(local_f8,5);
    if (local_f8 != (long *)0x0) {
      lVar11 = local_f8[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_f8 + 0x20))();
      }
    }
    local_108 = (long *)CONCAT71(local_108._1_7_,1);
    local_f0 = (ulong *)CONCAT44(param_1,param_1);
    pcStack_e8 = (code *)(ulong)param_1;
    local_1c8 = (long *)((ulong)local_1c8 & 0xffffffffffffff00);
    local_110 = 0;
    local_fc[0] = 0;
    FUN_01fa7d7c(&local_f8,uVar9,param_4,param_6,&local_f0,param_3,param_7,param_8,&local_1c8,
                 &local_108,&local_110,local_fc);
    FUN_01f9addc(&local_f0);
    if (local_f0 == (ulong *)0x0) {
      local_108 = (long *)0x0;
      plVar6 = local_108;
    }
    else {
      FUN_009acf14(&local_108);
      puVar2 = local_f0;
      plVar6 = local_108;
      if (local_f0 != (ulong *)0x0) {
        puVar3 = local_f0 + 1;
        do {
          iVar8 = (int)*puVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar5) {
            *(int *)puVar3 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          local_f0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_1c8 = (long *)*puVar2;
          FUN_02a44274(lVar11 + 0xd8,&local_1c8);
          plVar6 = local_108;
        }
      }
    }
    local_108 = plVar6;
    if (plVar6 != (long *)0x0) {
      local_1c8 = (long *)*param_10;
      if (local_1c8 != (long *)0x0) {
        lVar11 = local_1c8[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_01fa0928;
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_1c0 = *param_9;
      local_1b8 = param_9[1];
      local_1b0 = param_9[2];
      local_1a8 = (long *)param_9[3];
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x18))();
      }
      local_190 = (ulong *)0x0;
      local_188 = (code *)0x0;
      local_180 = (code *)0x0;
      uStack_178 = 0;
      local_1a0 = param_2;
      uStack_198 = param_5;
      FUN_01faf270(&local_190,&local_1c8);
      lVar11 = plVar6[0xf];
      local_e0 = (code *)0x0;
      local_d8 = 0;
      local_f0 = (ulong *)0x0;
      pcStack_e8 = (code *)0x0;
      if (local_180 != (code *)0x0) {
        (*local_180)(auStack_170,auStack_d0);
        local_f0 = local_190;
        local_d8 = uStack_178;
        pcStack_e8 = local_188;
        local_e0 = local_180;
      }
      FUN_00bdc73c(&local_110,lVar11,0xc,&local_f8,&local_f0,0);
      pcVar7 = pcStack_e8;
      if (pcStack_e8 == (code *)0x0) {
        pcStack_e8 = (code *)0x0;
        pcVar7 = local_188;
      }
      else {
        local_e0 = (code *)0x0;
        local_d8 = 0;
        local_f0 = (ulong *)0x0;
        pcStack_e8 = (code *)0x0;
        (*pcVar7)(auStack_d0);
        pcVar7 = local_188;
      }
      local_188 = (code *)0x0;
      if (pcVar7 != (code *)0x0) {
        local_180 = (code *)0x0;
        uStack_178 = 0;
        local_190 = (ulong *)0x0;
        local_188 = (code *)0x0;
        (*pcVar7)(auStack_170);
      }
      if (local_1a8 != (long *)0x0) {
        (**(code **)(*local_1a8 + 0x20))();
      }
      if (local_1c8 != (long *)0x0) {
        lVar11 = local_1c8[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_1c8 + 0x20))();
        }
      }
      uVar9 = *(undefined8 *)(param_2 + 0x68);
      local_1d0 = (long *)CONCAT71(uStack_10f,local_110);
      if (local_1d0 != (long *)0x0) {
        lVar11 = local_1d0[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_01fa0928:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      FUN_01cbc9e0(uVar9,&local_1d0,1);
      if (local_1d0 != (long *)0x0) {
        lVar11 = local_1d0[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_1d0 + 0x20))();
        }
      }
      puVar12 = (undefined1 *)*param_8;
      plVar6 = (long *)CONCAT71(uStack_10f,local_110);
      if (plVar6 != (long *)0x0) {
        lVar11 = plVar6[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))();
        }
      }
      if (local_108 != (long *)0x0) {
        lVar11 = local_108[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_108 + 0x20))();
        }
      }
    }
    if (local_f8 != (long *)0x0) {
      lVar11 = local_f8[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_f8 + 0x20))();
      }
    }
  }
  return puVar12;
}


