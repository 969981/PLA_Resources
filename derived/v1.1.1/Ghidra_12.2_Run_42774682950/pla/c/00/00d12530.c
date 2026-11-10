/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d12530; name: FUN_00d12530
 */


void FUN_00d12530(uint *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_d0;
  undefined *local_c8;
  char *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long *local_78;
  undefined1 auStack_68 [8];
  
  uVar5 = DAT_043ab4e0;
  local_98 = 400;
  plVar6 = (long *)FUN_00a246f0(&local_c8,DAT_043ab4e0,&local_98);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((*param_1 & 1) != 0) {
    iVar10 = 1;
    puVar1 = PTR_DAT_0437a508 + 0x10;
    do {
      local_b0 = (long *)0x0;
      local_c0 = "common/monsname.dat";
      local_b8 = 0x13;
      local_c8 = (undefined *)0xcbdc15e3ceed118e;
      FUN_010c4b50(&local_98,&local_c8,iVar10);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      local_c0 = (char *)0x0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      local_b0 = (long *)0x0;
      local_c8 = puVar1;
      FUN_00938764(&local_c8,0,&local_98,0,uVar5,0);
      local_d0 = *(undefined8 *)((long)local_c0 + 0x250);
      plVar7 = (long *)FUN_00d12804(auStack_68,uVar5,&local_d0);
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      iVar11 = 0;
      do {
        FUN_02c2e33c(plVar7,iVar11,plVar6);
        uVar8 = FUN_02c2f268(plVar6);
        uVar9 = FUN_00d12780(uVar8,*param_2);
        if ((uVar9 & 1) != 0) {
          *param_1 = *param_1 & 0xfffffffe;
          break;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x38a);
      FUN_00937d80(&local_c8);
      if (plVar7 != (long *)0x0) {
        plVar2 = plVar7 + 10;
        do {
          iVar11 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      FUN_00936104(&local_c8);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if ((long *)CONCAT44(uStack_94,local_98) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT44(uStack_94,local_98) + 0x20))();
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 10);
  }
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      iVar10 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return;
}


