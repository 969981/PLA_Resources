/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dbd07c; name: FUN_01dbd07c
 */


void FUN_01dbd07c(long param_1,long *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_100 [24];
  long *local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0 [3];
  long *local_88;
  long *local_80 [8];
  uint local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*param_2 != 0) {
    FUN_0191cb34(local_80);
    if (local_80[0] != (long *)0x0) {
      FUN_019229a4(local_80,local_80[0],param_3);
      if (5 < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_01dc05b0();
      }
      *(long *)(param_1 + 0x28) = 1L << ((long)(int)local_40 & 0x3fU);
      *(undefined4 *)(param_1 + 0x24) = local_34;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = local_38;
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      FUN_0191c300(&local_b0,param_2);
      FUN_01dbcd30(local_a0,param_3,&local_b0);
      puVar5 = local_b0;
      if (local_b0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_b0 + 1);
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
          local_b0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_e0 = (long *)*puVar5;
          FUN_02a44274(lVar8 + 0xd8,&local_e0);
        }
      }
      FUN_019225b0(auStack_100,local_80[0],local_a0[0]);
      FUN_00da1fa0(&local_e0,auStack_100);
      plVar7 = *(long **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      plVar7 = local_e0;
      local_e0 = (long *)0x0;
      *(long **)(param_1 + 0x30) = plVar7;
      *(undefined8 *)(param_1 + 0x38) = local_d8;
      *(undefined8 *)(param_1 + 0x40) = local_d0;
      plVar7 = *(long **)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = local_c8;
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      uVar4 = local_c0;
      local_c0 = 0;
      *(undefined8 *)(param_1 + 0x50) = uVar4;
      *(undefined4 *)(param_1 + 0x58) = local_b8;
      if (local_e0 != (long *)0x0) {
        (**(code **)(*local_e0 + 0x20))();
      }
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      lVar8 = local_80[0][0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_80[0] + 0x20))(local_80[0]);
      }
    }
  }
  return;
}


