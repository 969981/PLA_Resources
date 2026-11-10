/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd95e0; name: FUN_01cd95e0
 */


void FUN_01cd95e0(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  if (param_1 != param_2) {
    lVar12 = *param_1;
    while( true ) {
      if ((lVar12 != 0) && (uVar10 = FUN_00ad7820(lVar12 + 8), (uVar10 & 1) != 0)) {
        *(int *)(*(long *)*param_3 + 0x6c) = *(int *)(*(long *)*param_3 + 0x6c) + 1;
        (**(code **)(*(long *)(lVar12 + -0x48) + 0x10))(local_70);
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_01cd6ab8(&local_80,local_70);
        puVar8 = local_70[0];
        if (local_70[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_70[0] + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            local_70[0][2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
              FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar12 = *(long *)puVar5;
            *(long *)puVar6 = lVar12;
            local_58 = *puVar8;
            FUN_02a44274(lVar12 + 0xd8,&local_58);
          }
        }
        local_70[0] = (undefined8 *)0x0;
        if (local_80 != (undefined8 *)0x0) {
          local_70[0] = (undefined8 *)*local_80;
        }
        uVar11 = FUN_01cd7bb0(*(long *)*param_3 + 0x80,local_70);
        FUN_00cfa028(uVar11,&local_80);
        puVar8 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_80 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            local_80[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
              FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar4);
            }
            lVar12 = *(long *)puVar5;
            *(long *)puVar6 = lVar12;
            local_70[0] = (undefined8 *)*puVar8;
            FUN_02a44274(lVar12 + 0xd8,local_70);
          }
        }
      }
      param_1 = param_1 + 1;
      if (param_1 == param_2) break;
      lVar12 = *param_1;
    }
  }
  return;
}


