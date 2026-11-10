/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020fe330; name: FUN_020fe330
 */


undefined8 * FUN_020fe330(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  FUN_01a9b800(local_48);
  if (local_48[0] == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar12 = (undefined8 *)local_48[0][3];
  if (puVar12 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(**(code **)*puVar12)(puVar12);
    puVar4 = (undefined8 *)PTR_DAT_043794b8;
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar6 = PTR_DAT_043794c8,
       puVar4 = (undefined8 *)PTR_DAT_043794b8, iVar8 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar7 = PTR_DAT_043794d8, iVar8 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar6 = puVar7;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      puVar4 = (undefined8 *)PTR_DAT_043794b8;
      *(undefined **)PTR_DAT_043794b8 = puVar6;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
    if (puVar9 != (undefined8 *)0x0) {
      do {
        puVar5 = local_48[0];
        if (puVar9 == puVar4) {
          puVar13 = puVar12 + -10;
          break;
        }
        puVar9 = (undefined8 *)*puVar9;
        puVar13 = (undefined8 *)0x0;
      } while (puVar9 != (undefined8 *)0x0);
      goto joined_r0x020fe48c;
    }
  }
  puVar13 = (undefined8 *)0x0;
  puVar5 = local_48[0];
joined_r0x020fe48c:
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
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
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_38 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_38);
    }
  }
  return puVar13;
}


