/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c33e84; name: FUN_01c33e84
 */


void FUN_01c33e84(long param_1)

{
  bool bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  long *local_38;
  
  nn::os::LockMutex((MutexType *)&DAT_043d30c8);
  puVar5 = PTR_DAT_04379e40;
  if (*(long *)(param_1 + 600) == -0x1dbcdcd96621fd9f) {
    local_78 = 0xf1dd20dd8221693b;
    pcStack_70 = "LOCATION_LOW";
    local_68 = 0xc;
    uStack_60 = 0;
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    puVar4 = (undefined8 *)PTR_DAT_04379e50;
    puVar3 = (undefined8 *)PTR_DAT_04379e48;
    uVar7 = *(undefined8 *)PTR_DAT_04379e48;
    *(undefined8 *)PTR_DAT_04379e50 = uVar7;
    FUN_029278b4(auStack_58,uVar7,&local_78);
    iVar6 = DAT_043d30c4 + -1;
    bVar1 = DAT_043d30c4 < 1;
    DAT_043d30c4 = iVar6;
    if (iVar6 == 0 || bVar1) {
      DAT_043d30c4 = 0;
      bVar2 = *puVar5;
joined_r0x01c34018:
      if (((bVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379e40);
      }
      uVar7 = *puVar3;
      *puVar4 = uVar7;
      FUN_02928c7c(uVar7,auStack_50,0,0);
    }
  }
  else {
    if (*(long *)(param_1 + 600) != -0x5a71fa4478ed30a3) goto LAB_01c33f6c;
    local_78 = 0x77a8d944f53332d7;
    pcStack_70 = "LOCATION_HIGH";
    local_68 = 0xd;
    uStack_60 = 0;
    if (((*PTR_DAT_04379e40 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379e40), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_0437af18,PTR_DAT_04379e48,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379e40);
    }
    puVar4 = (undefined8 *)PTR_DAT_04379e50;
    puVar3 = (undefined8 *)PTR_DAT_04379e48;
    uVar7 = *(undefined8 *)PTR_DAT_04379e48;
    *(undefined8 *)PTR_DAT_04379e50 = uVar7;
    FUN_029278b4(auStack_58,uVar7,&local_78);
    iVar6 = DAT_043d30c0 + -1;
    bVar1 = DAT_043d30c0 < 1;
    DAT_043d30c0 = iVar6;
    if (iVar6 == 0 || bVar1) {
      DAT_043d30c0 = 0;
      bVar2 = *puVar5;
      goto joined_r0x01c34018;
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
LAB_01c33f6c:
  nn::os::UnlockMutex((MutexType *)&DAT_043d30c8);
  return;
}


