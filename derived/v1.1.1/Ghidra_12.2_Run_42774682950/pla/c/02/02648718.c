/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02648718; name: FUN_02648718
 */


void FUN_02648718(long param_1)

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
  long *local_78;
  undefined1 auStack_70 [8];
  undefined8 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  local_68 = (undefined8 *)0x0;
  pcStack_60 = (char *)0x0;
  FUN_00af7e30(&local_68,param_1 + 0x8a8);
  puVar4 = local_68;
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  if (local_68 != (undefined8 *)0x0) {
    if (*(int *)((long)local_68 + 0xc) != 0) {
      piVar1 = (int *)((long)local_68 + 0xc);
      iVar8 = *(int *)((long)local_68 + 0xc);
      do {
        plVar11 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_00aa0310();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_02648aec;
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
            puVar4 = local_68;
            if (lVar10 != 0) {
              plVar11 = (long *)(lVar10 + -0x50);
            }
            goto joined_r0x026487d4;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_02648aec:
    plVar11 = (long *)0x0;
    puVar4 = local_68;
joined_r0x026487d4:
    local_68 = puVar4;
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
        local_48 = (long *)*puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    if (plVar11 != (long *)0x0) {
      FUN_00a9ecd4(&local_68,plVar11);
      FUN_009983e4(&local_78,&local_68);
      puVar4 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_68 + 1);
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
          local_68[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_48 = (long *)*puVar4;
          FUN_02a44274(lVar10 + 0xd8,&local_48);
        }
      }
      if (local_78 != (long *)0x0) {
        local_68 = (undefined8 *)&DAT_afc4d6c05abef19e;
        pcStack_60 = "default";
        local_58 = 7;
        local_50 = (long *)0x0;
        lVar10 = FUN_0289e9f4(local_78,&local_68);
        if (lVar10 == 0) {
          local_48 = (long *)0x0;
        }
        else {
          FUN_00aeb818(&local_48,lVar10,auStack_70);
        }
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        local_68 = (undefined8 *)0xf6b1d8e6f3aef22;
        pcStack_60 = "Particle/ClimbLeftParticle";
        local_58 = 0x1a;
        local_50 = (long *)0x0;
        FUN_028ba0ec(local_48,&local_68);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        local_68 = (undefined8 *)0xe99a951b9d42bb77;
        pcStack_60 = "Particle/ClimbRightParticle";
        local_58 = 0x1b;
        local_50 = (long *)0x0;
        FUN_028ba0ec(local_48,&local_68);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        local_68 = (undefined8 *)0xad3594da16ebed05;
        pcStack_60 = "Particle/ClimbSideJumpLeftParticle";
        local_58 = 0x22;
        local_50 = (long *)0x0;
        FUN_028ba0ec(local_48,&local_68);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        local_68 = (undefined8 *)0xf9db79f7e58ac886;
        pcStack_60 = "Particle/ClimbSideJumpRightParticle";
        local_58 = 0x23;
        local_50 = (long *)0x0;
        FUN_028ba0ec(local_48,&local_68);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        if (local_48 != (long *)0x0) {
          lVar10 = local_48[0xb];
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
            (**(code **)(*local_48 + 0x20))();
          }
        }
        if (local_78 != (long *)0x0) {
          lVar10 = local_78[0xb];
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
            (**(code **)(*local_78 + 0x20))();
          }
        }
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
      }
    }
  }
  return;
}


