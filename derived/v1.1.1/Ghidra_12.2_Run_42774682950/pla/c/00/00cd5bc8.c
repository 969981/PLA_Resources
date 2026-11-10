/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd5bc8; name: FUN_00cd5bc8
 */


undefined8 FUN_00cd5bc8(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar10 = FUN_02c6d8ec(*(undefined8 *)(*param_2 + 0x98));
  puVar7 = PTR_DAT_0437af00;
  puVar6 = PTR_DAT_0437aef8;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if ((((uVar10 & 1) == 0) && (lVar12 = *param_1, lVar12 != 0)) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    do {
      puVar15 = *(undefined8 **)(lVar12 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar11;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      if (puVar15 == (undefined8 *)0x0) {
        return 0;
      }
      while (puVar15 != (undefined8 *)puVar7) {
        puVar15 = (undefined8 *)*puVar15;
        if (puVar15 == (undefined8 *)0x0) {
          return 0;
        }
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return 0;
          }
          plVar14 = (long *)(lVar12 + -0x50);
          local_78 = (undefined8 *)0x0;
          uStack_70 = 0;
          FUN_00b640d4(&local_78,param_3);
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          FUN_00b63974(&local_88,param_4);
          FUN_0185d7e4(plVar14,&local_78,&local_88);
          puVar15 = local_88;
          if (local_88 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_88 + 1);
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
              local_88[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_68 = *puVar15;
              FUN_02a44274(lVar13 + 0xd8,&local_68);
            }
          }
          puVar15 = local_78;
          if (local_78 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_78 + 1);
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
              local_78[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_68 = *puVar15;
              FUN_02a44274(lVar13 + 0xd8,&local_68);
            }
          }
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 1) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
          return 1;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
  return 0;
}


