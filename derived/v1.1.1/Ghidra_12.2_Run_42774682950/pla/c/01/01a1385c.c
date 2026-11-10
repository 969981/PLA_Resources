/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1385c; name: FUN_01a1385c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1385c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_01b6ef10();
  *param_1 = &PTR_FUN_04237538;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  param_1[9] = &PTR_LAB_04237680;
  param_1[10] = &PTR_LAB_04237760;
  param_1[0x41] = &PTR_LAB_04237828;
  param_1[0x3e] = &PTR_LAB_04237788;
  param_1[0xe4] = &DAT_cbf29ce484222645;
  param_1[0xe8] = &DAT_cbf29ce484222645;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = &DAT_03996322;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe9] = &DAT_03996322;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  FUN_01b75734(&local_50,param_1,0x3468de6d520871a7);
  param_1[0xe4] = local_50;
  param_1[0xe5] = local_48;
  plVar6 = (long *)param_1[0xe7];
  param_1[0xe7] = 0;
  param_1[0xe6] = local_40;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  param_1[0xe7] = local_38;
  plVar6 = (long *)param_1[0xb8];
  if (plVar6 == (long *)0x0) {
    uVar7 = _DAT_00000054;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = *(undefined2 *)((long)plVar6 + 0x54);
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (((*PTR_DAT_043795f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043795f8);
  }
  uVar8 = 0x771306be279fcd97;
  *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
  FUN_02c4fb44(&local_50,uVar7);
  if ((*(char *)(local_50 + 0x20) == '\x01') &&
     (uVar4 = *(byte *)(local_50 + 0x21) - 0x1c, uVar4 < 8)) {
    uVar8 = *(undefined8 *)(&DAT_03a7c878 + (long)(char)uVar4 * 8);
  }
  FUN_01b75734(&local_50,param_1,uVar8);
  param_1[0xe8] = local_50;
  param_1[0xe9] = local_48;
  plVar6 = (long *)param_1[0xeb];
  param_1[0xeb] = 0;
  param_1[0xea] = local_40;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  param_1[0xeb] = local_38;
  return;
}


