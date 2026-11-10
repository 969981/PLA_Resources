/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0259f730; name: FUN_0259f730
 */


void FUN_0259f730(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0xe8) != 0) {
    plVar2 = (long *)(param_1 + 0x90);
    FUN_025a7294(plVar2,*(undefined8 *)(param_1 + 0xc0));
    lVar6 = *(long *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (((((lVar6 != 0) && (*(undefined8 *)*plVar2 = 0, lVar6 != 1)) &&
         (*(undefined8 *)(*plVar2 + 8) = 0, lVar6 != 2)) &&
        ((*(undefined8 *)(*plVar2 + 0x10) = 0, lVar6 != 3 &&
         (*(undefined8 *)(*plVar2 + 0x18) = 0, lVar6 != 4)))) &&
       ((*(undefined8 *)(*plVar2 + 0x20) = 0, lVar6 != 5 &&
        ((*(undefined8 *)(*plVar2 + 0x28) = 0, lVar6 != 6 &&
         (*(undefined8 *)(*plVar2 + 0x30) = 0, lVar6 != 7)))))) {
      lVar7 = 7;
      do {
        *(undefined8 *)(*plVar2 + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar6 != lVar7);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf8);
  FUN_025a00b4(param_1);
  puVar8 = *(undefined8 **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x138) = 0;
  if (puVar8 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar8 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar8;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  return;
}


