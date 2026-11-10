/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d9959c; name: FUN_02d9959c
 */


void FUN_02d9959c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long *local_40;
  undefined8 *local_38;
  undefined8 local_28;
  
  uVar9 = 0;
  switch(*(undefined4 *)(param_1 + 0xb8)) {
  case 2:
    break;
  case 3:
  case 4:
    FUN_02d9a8bc(param_1);
    uVar9 = 1;
    break;
  case 5:
    if (*(long *)(param_1 + 0x1f8) == 0) {
      bVar5 = true;
    }
    else {
      FUN_02d23980(&local_40);
      if (((local_40 == (long *)0x0) || (local_38 == (undefined8 *)0x0)) ||
         (*(int *)((long)local_38 + 0xc) == 0)) {
        bVar5 = false;
        puVar4 = local_38;
      }
      else {
        lVar7 = (**(code **)(*local_40 + 0x10))();
        bVar5 = lVar7 != 0;
        puVar4 = local_38;
      }
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_28 = *puVar4;
          FUN_02a44274(lVar7 + 0xd8,&local_28);
        }
      }
    }
    FUN_02d9976c(&local_40,param_1,bVar5);
    plVar8 = *(long **)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x200) = 0;
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    uVar9 = (uint)(local_40 == (long *)0x0);
    *(long **)(param_1 + 0x200) = local_40;
    if (local_40 == (long *)0x0) {
      FUN_02d9a8bc(param_1);
    }
    break;
  default:
    goto switchD_02d995d8_default;
  }
  *(uint *)(param_1 + 0xb8) = uVar9;
switchD_02d995d8_default:
  return;
}


