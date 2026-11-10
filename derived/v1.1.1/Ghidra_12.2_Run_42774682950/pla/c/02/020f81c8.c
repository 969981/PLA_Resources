/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020f81c8; name: FUN_020f81c8
 */


undefined8 * FUN_020f81c8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_38 = 0;
  local_40 = (undefined8 *)0x0;
  FUN_01a0703c(&local_40,param_1 + 0xad0);
  if (local_40 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)local_40[3];
    puVar5 = local_40;
    if (puVar11 != (undefined8 *)0x0) {
      plVar8 = (long *)(**(code **)*puVar11)(puVar11);
      puVar4 = PTR_DAT_0437a590;
      if (((*PTR_DAT_0437a580 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a580), puVar6 = PTR_DAT_0437a588,
         puVar4 = PTR_DAT_0437a590, iVar7 != 0)) {
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a598), puVar4 = PTR_DAT_043794d8, iVar7 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
            uVar9 = FUN_0087f8f0();
            *(undefined8 *)puVar4 = uVar9;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar6 = puVar4;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        puVar4 = PTR_DAT_0437a590;
        *(undefined **)PTR_DAT_0437a590 = puVar6;
        __cxa_guard_release(PTR_DAT_0437a580);
      }
      for (; puVar5 = local_40, plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)puVar4) {
          puVar11 = puVar11 + -10;
          goto joined_r0x020f8250;
        }
      }
      puVar11 = (undefined8 *)0x0;
    }
joined_r0x020f8250:
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar5[2] = 0;
        local_40 = puVar5;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_28 = *puVar5;
        FUN_02a44274(lVar10 + 0xd8,&local_28);
      }
    }
  }
  return puVar11;
}


