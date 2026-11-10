/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bfd414; name: FUN_01bfd414
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bfd414(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_28;
  
  FUN_01bfd73c(&local_28,param_1 + 0x1f8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x30))();
    *(undefined8 *)(param_1 + 0x228) = extraout_var_02;
    *(ulong *)(param_1 + 0x220) = CONCAT44(extraout_var,extraout_s0);
    (**(code **)(*local_28 + 0x38))();
    local_40 = CONCAT44(extraout_var_00,extraout_s0_00);
    uStack_38 = extraout_var_03;
    FUN_0098fad4(&local_40);
    *(undefined4 *)(param_1 + 0x230) = extraout_var_01;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
    }
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar6 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar6;
  plVar5 = *(long **)(lVar6 + 0xd0);
  lVar6 = _DAT_000001a8;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = plVar5[0x35];
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (lVar6 != 0) {
    FUN_01319fb4(*(undefined4 *)(param_1 + 0x230),lVar6,param_1 + 0x220);
  }
  return;
}


