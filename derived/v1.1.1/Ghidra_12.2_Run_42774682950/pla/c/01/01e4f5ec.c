/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e4f5ec; name: FUN_01e4f5ec
 */


undefined8 FUN_01e4f5ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar13 = *(long *)(param_1 + 0x218);
  lVar14 = *(long *)(param_1 + 0x220);
  while( true ) {
    if (lVar13 == lVar14) {
      return 1;
    }
    local_70 = (long *)0x0;
    uStack_68 = 0;
    FUN_0095aa3c(&local_70,lVar13);
    local_60 = *(undefined8 *)(lVar13 + 0x10);
    FUN_01e4f49c(&local_58,&local_70);
    if ((local_58 == (long *)0x0) || (uVar11 = (**(code **)(*local_58 + 0x50))(), (uVar11 & 1) != 0)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
    plVar9 = local_70;
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 1;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 == 0) {
        local_70[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar12 = *(long *)puVar6;
        *(long *)puVar7 = lVar12;
        local_58 = (long *)*plVar9;
        FUN_02a44274(lVar12 + 0xd8,&local_58);
      }
    }
    if (bVar4) break;
    lVar13 = lVar13 + 0x18;
  }
  return 0;
}


