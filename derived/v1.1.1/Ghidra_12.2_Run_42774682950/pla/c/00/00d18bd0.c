/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d18bd0; name: FUN_00d18bd0
 */


void FUN_00d18bd0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *local_70 [2];
  long *local_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  long *local_28;
  
  local_38 = (long *)0x0;
  local_30 = 0;
  local_58 = &DAT_cbf29ce484222645;
  puStack_50 = &DAT_cbf29ce484222645;
  local_2e = 1;
  local_48 = &DAT_03996322;
  uStack_40 = 0;
  FUN_00d18d1c(&local_28,&DAT_041ea290);
  local_60 = local_28;
  FUN_016b1ac0(local_70,&local_60);
  if (local_70[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70[0] + 1);
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
      local_70[0][2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar4 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_28 = (long *)*local_70[0];
      FUN_02a44274(lVar5 + 0xd8,&local_28);
    }
  }
  *(undefined1 *)(param_1 + 0xf0) = 1;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  return;
}


