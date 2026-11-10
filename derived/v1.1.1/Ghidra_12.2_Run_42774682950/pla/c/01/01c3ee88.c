/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3ee88; name: FUN_01c3ee88
 */


void FUN_01c3ee88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_48;
  
  local_70 = *param_4;
  local_68 = param_4[1];
  local_60 = param_4[2];
  local_58 = (long *)param_4[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_00d08588(&local_80,param_7);
  FUN_01bcb6bc(param_1,param_2,param_3,&local_70,param_5,param_6,&local_80);
  puVar4 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_48 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_48);
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  *param_1 = &PTR_LAB_0424b150;
  param_1[0x4c] = 0;
  param_1[0x3e] = &PTR_LAB_0424b378;
  param_1[9] = &PTR_LAB_0424b270;
  param_1[10] = &PTR_LAB_0424b350;
  param_1[0x4d] = 0;
  FUN_019c1160(param_1 + 0x4c,param_8);
  return;
}


