/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d42438; name: FUN_00d42438
 */


void FUN_00d42438(long param_1,uint param_2,ulong param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar17 = *(long *)(param_1 + 0x440);
  if ((param_2 & 1) == 0) {
    if ((lVar17 != 0) && (*(char *)(lVar17 + 0x62) == '\0')) {
      *(undefined1 *)(lVar17 + 0x60) = 0;
      FUN_02831b48(*(undefined8 *)(lVar17 + 0x58),0);
    }
  }
  else if ((lVar17 != 0) && (*(char *)(lVar17 + 0x62) == '\0')) {
    *(undefined1 *)(lVar17 + 0x60) = 1;
    if (*(char *)(lVar17 + 0x61) != '\0') {
      FUN_0283351c(*(undefined8 *)(lVar17 + 0x58),0);
    }
    FUN_02831808(*(undefined8 *)(lVar17 + 0x58),0);
  }
  if ((param_3 & 1) != 0) {
    plVar12 = (long *)(**(code **)(**(long **)(param_1 + 0x580) + 0x10))();
    puVar10 = PTR_DAT_0437b330;
    puVar9 = PTR_DAT_0437b328;
    puVar8 = PTR_DAT_043794d0;
    puVar7 = PTR_DAT_043794a8;
    puVar6 = PTR_DAT_043794a0;
    puVar5 = PTR_DAT_04379498;
    lVar17 = *plVar12;
    lVar2 = plVar12[1];
    if (lVar17 != lVar2) {
      do {
        local_78 = (undefined8 *)0x0;
        uStack_70 = 0;
        FUN_00d45370(&local_78,lVar17);
        if ((local_78 == (undefined8 *)0x0) ||
           (puVar18 = (undefined8 *)local_78[3], puVar18 == (undefined8 *)0x0)) {
          puVar14 = (undefined8 *)0x0;
        }
        else {
          puVar13 = (undefined8 *)(**(code **)*puVar18)(puVar18);
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
              uVar15 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar15;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)puVar10 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar9);
          }
          puVar14 = (undefined8 *)0x0;
          if (puVar13 != (undefined8 *)0x0) {
            do {
              if (puVar13 == (undefined8 *)puVar10) {
                puVar14 = puVar18 + -10;
                goto LAB_00d4258c;
              }
              puVar13 = (undefined8 *)*puVar13;
            } while (puVar13 != (undefined8 *)0x0);
            puVar14 = (undefined8 *)0x0;
          }
        }
LAB_00d4258c:
        FUN_00d42438(puVar14,param_2 & 1,1);
        puVar18 = local_78;
        if (local_78 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_78 + 1);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            local_78[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar16 = *(long *)puVar6;
            *(long *)puVar7 = lVar16;
            local_68 = *puVar18;
            FUN_02a44274(lVar16 + 0xd8,&local_68);
          }
        }
        lVar17 = lVar17 + 0x10;
      } while (lVar17 != lVar2);
    }
  }
  return;
}


