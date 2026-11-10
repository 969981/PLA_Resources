/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02243de0; name: FUN_02243de0
 */


undefined8 FUN_02243de0(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_18;
  
  lVar5 = FUN_001511d0(param_1,1);
  lVar5 = *(long *)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
  pcVar6 = *(code **)(lVar5 + 0xf8);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x100) = 0;
    *(undefined8 *)(lVar5 + 0x108) = 0;
    *(undefined8 *)(lVar5 + 0xf0) = 0;
    *(undefined8 *)(lVar5 + 0xf8) = 0;
    (*pcVar6)(lVar5 + 0x110);
  }
  pcVar6 = *(code **)(lVar5 + 0x78);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x80) = 0;
    *(undefined8 *)(lVar5 + 0x88) = 0;
    *(undefined8 *)(lVar5 + 0x70) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    (*pcVar6)(lVar5 + 0x90);
  }
  if (*(long **)(lVar5 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x40) + 0x20))();
  }
  puVar7 = *(undefined8 **)(lVar5 + 0x30);
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
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar4 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(lVar5 + 0x20);
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
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_18 = *puVar7;
      FUN_02a44274(lVar5 + 0xd8,&local_18);
    }
  }
  return 0;
}


