/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027be890; name: FUN_027be890
 */


undefined8 FUN_027be890(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  plVar6 = *(long **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
      plVar6 = *(long **)(param_1 + 0x70);
      goto joined_r0x027be91c;
    }
  }
  plVar6 = *(long **)(param_1 + 0x70);
joined_r0x027be91c:
  if ((plVar6 == (long *)0x0) || (uVar7 = (**(code **)(*plVar6 + 0x48))(), (uVar7 & 1) == 0)) {
    FUN_02728988(local_38);
    if (local_38[0] != (undefined8 *)0x0) {
      plVar6 = (long *)FUN_0120ccf0();
      puVar4 = local_38[0];
      if (local_38[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_38[0] + 1);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          local_38[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
      }
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x78))(local_38,plVar6);
        plVar6 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = 0;
        if (plVar6 != (long *)0x0) {
          lVar8 = plVar6[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))();
          }
        }
        *(undefined8 **)(param_1 + 0x70) = local_38[0];
      }
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x50))();
  }
  return 1;
}


