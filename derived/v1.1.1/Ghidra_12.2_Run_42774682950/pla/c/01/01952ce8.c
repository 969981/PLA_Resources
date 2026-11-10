/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01952ce8; name: FUN_01952ce8
 */


void FUN_01952ce8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  char local_88 [8];
  undefined4 local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  puVar13 = (undefined8 *)(param_2 + 0xb8);
  while( true ) {
    plVar12 = (long *)*puVar13;
    if (plVar12 != (long *)0x0) {
      lVar11 = plVar12[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar12 + 0x48))(local_88,plVar12);
    if (local_88[0] == '\0') {
      bVar3 = true;
    }
    else {
      param_1[2] = 0;
      *(undefined4 *)param_1 = local_80;
      param_1[1] = 0;
      FUN_00b63974(param_1 + 1,local_78);
      puVar8 = local_78[0];
      if (local_88[0] == '\0') {
        bVar3 = false;
      }
      else {
        if (local_78[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78[0] + 1);
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
            local_78[0][2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar11 = *(long *)puVar6;
            *(long *)puVar7 = lVar11;
            local_68 = *puVar8;
            FUN_02a44274(lVar11 + 0xd8,&local_68);
          }
        }
        bVar3 = false;
        local_88[0] = '\0';
      }
    }
    lVar11 = plVar12[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar12 + 0x20))(plVar12);
    }
    if (!bVar3) break;
    puVar13 = puVar13 + 1;
    if (puVar13 == (undefined8 *)(param_2 + 0x180)) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      return;
    }
  }
  return;
}


