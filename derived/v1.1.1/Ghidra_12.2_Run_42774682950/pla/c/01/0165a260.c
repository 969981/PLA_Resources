/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0165a260; name: FUN_0165a260
 */


void FUN_0165a260(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  FUN_01659f30(local_48);
  puVar4 = local_48[0];
  puVar6 = PTR_DAT_0437c680;
  puVar5 = PTR_DAT_0437c678;
  if (local_48[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_48[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_48[0] + 0xc);
      iVar8 = *(int *)((long)local_48[0] + 0xc);
      do {
        plVar11 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_009311a8();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_0165a490;
          if (plVar11 == (long *)puVar6) break;
          plVar11 = (long *)*plVar11;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = puVar4[3];
            plVar11 = (long *)0x0;
            puVar4 = local_48[0];
            if (lVar10 != 0) {
              plVar11 = (long *)(lVar10 + -0x50);
            }
            goto joined_r0x0165a314;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_0165a490:
    plVar11 = (long *)0x0;
    puVar4 = local_48[0];
joined_r0x0165a314:
    local_48[0] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_38);
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar12 = (long *)plVar11[0x1a];
      if (plVar12 != (long *)0x0) {
        lVar10 = plVar12[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar12 + 0x10))(local_48,plVar12);
      *param_1 = 0;
      param_1[1] = 0;
      FUN_0125d18c(param_1,local_48);
      if (local_48[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48[0] + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          local_48[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_38 = *local_48[0];
          FUN_02a44274(lVar10 + 0xd8,&local_38);
        }
      }
      lVar10 = plVar12[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      lVar10 = plVar11[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))(plVar11);
        return;
      }
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


