/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbdc14; name: FUN_01bbdc14
 */


void FUN_01bbdc14(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  long *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  lVar10 = *(long *)(param_2 + 0x580);
  lVar11 = *(long *)(param_2 + 0x588);
  if (lVar10 != lVar11) {
    do {
      local_98 = (undefined8 *)0x0;
      uStack_90 = 0;
      FUN_00b63bec(&local_98,lVar10);
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_00b63974(&local_88,lVar10 + 0x10);
      if (local_98 == (undefined8 *)0x0) {
        local_a0 = (long *)0x0;
LAB_01bbdc9c:
        bVar12 = true;
        puVar4 = local_88;
      }
      else {
        FUN_00b911c4(&local_a0);
        if (local_a0 == (long *)0x0) goto LAB_01bbdc9c;
        (**(code **)(*local_a0 + 0x10))(local_78);
        *param_1 = 0;
        param_1[1] = 0;
        FUN_00946790(param_1,local_78);
        puVar4 = local_78[0];
        if (local_78[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78[0] + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            local_78[0][2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar9 = *(long *)puVar6;
            *(long *)puVar7 = lVar9;
            local_68 = *puVar4;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
          }
        }
        if (local_a0 != (long *)0x0) {
          lVar9 = local_a0[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar12) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 == 1) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*local_a0 + 0x20))();
          }
        }
        bVar12 = false;
        puVar4 = local_88;
      }
      local_88 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
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
          puVar4[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar9 = *(long *)puVar6;
          *(long *)puVar7 = lVar9;
          local_78[0] = (undefined8 *)*puVar4;
          FUN_02a44274(lVar9 + 0xd8,local_78);
        }
      }
      puVar4 = local_98;
      if (local_98 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_98 + 1);
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
          local_98[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar9 = *(long *)puVar6;
          *(long *)puVar7 = lVar9;
          local_78[0] = (undefined8 *)*puVar4;
          FUN_02a44274(lVar9 + 0xd8,local_78);
        }
      }
      if (!bVar12) {
        return;
      }
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != lVar11);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


