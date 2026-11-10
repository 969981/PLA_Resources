/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc5e70; name: FUN_02cc5e70
 */


void FUN_02cc5e70(undefined8 *param_1,long param_2)

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
  code *pcVar10;
  long lVar11;
  undefined8 local_48;
  
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  if (param_2 != 0) {
    puVar9 = (undefined8 *)param_1[0x10];
    while( true ) {
      if (puVar9 != (undefined8 *)0x0) {
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
          lVar11 = *(long *)puVar5;
          *(long *)puVar6 = lVar11;
          local_48 = *puVar9;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      pcVar10 = (code *)param_1[1];
      param_2 = param_2 + -1;
      if (pcVar10 != (code *)0x0) {
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        (*pcVar10)(param_1 + 4);
      }
      if (param_2 == 0) break;
      puVar9 = (undefined8 *)param_1[0x22];
      param_1 = param_1 + 0x12;
    }
  }
  return;
}


