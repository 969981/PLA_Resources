/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0261b928; name: FUN_0261b928
 */


void FUN_0261b928(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *local_30;
  undefined8 local_28;
  
  FUN_01a5bd74(param_1,param_1 + 0x175,0);
  FUN_01a4f4d4(param_1,param_1 + 0x47,0);
  if (param_1[0x17e] == 0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_009cf990(&local_30);
    if (local_30 != (long *)0x0) {
      uVar5 = FUN_01bf4e20(local_30,*(undefined4 *)((long)param_1 + 0xc2c));
      if ((uVar5 & 1) != 0) {
        FUN_01bf1e4c(local_30);
      }
      puVar7 = (undefined8 *)param_1[0x17e];
      param_1[0x17e] = 0;
      if (puVar7 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar7 + 1);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          puVar7[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar6 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar6;
          local_28 = *puVar7;
          FUN_02a44274(lVar6 + 0xd8,&local_28);
        }
      }
      param_1[0x17f] = 0;
      if (local_30 != (long *)0x0) {
        lVar6 = local_30[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*local_30 + 0x20))();
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x2d8))(param_1);
  FUN_026192c8(param_1);
  *(undefined4 *)(param_1 + 0x185) = 0;
  FUN_01a5bd74(param_1,&DAT_03a7dad8,0);
  return;
}


