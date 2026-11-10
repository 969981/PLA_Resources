/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c662c4; name: FUN_01c662c4
 */


void FUN_01c662c4(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_48;
  
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  lVar10 = *(long *)(param_1 + 0x10);
  do {
    if (lVar10 == param_2) {
      return;
    }
    while( true ) {
      *(long *)(param_1 + 0x10) = lVar10 + -0x10;
      puVar9 = *(undefined8 **)(lVar10 + -0x10);
      lVar10 = lVar10 + -0x10;
      if (puVar9 == (undefined8 *)0x0) break;
      piVar1 = (int *)(puVar9 + 1);
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
        puVar9[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar10 = *(long *)puVar5;
        *(long *)puVar6 = lVar10;
        local_48 = *puVar9;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
      lVar10 = *(long *)(param_1 + 0x10);
      if (lVar10 == param_2) {
        return;
      }
    }
  } while( true );
}


