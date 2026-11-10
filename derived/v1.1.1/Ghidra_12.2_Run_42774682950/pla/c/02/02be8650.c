/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be8650; name: FUN_02be8650
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02be8650(undefined8 *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  lVar14 = *(long *)(param_2 + 0x1f8) - *(long *)(param_2 + 0x1f0);
  if ((lVar14 == 0) || ((ulong)(lVar14 >> 4) <= (param_3 & 0xffffffff))) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00bd0e30(&local_70,*(long *)(param_2 + 0x1f0) + (param_3 & 0xffffffff) * 0x10);
    puVar4 = local_70;
    puVar8 = PTR_DAT_0437a598;
    puVar7 = PTR_DAT_0437a588;
    puVar6 = PTR_DAT_043794d8;
    puVar5 = PTR_DAT_043794d0;
    if ((local_70 != (undefined8 *)0x0) && (*(int *)((long)local_70 + 0xc) != 0)) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar10 = *(int *)((long)local_70 + 0xc);
      do {
        plVar15 = (long *)puVar4[2];
        if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar7 = puVar6;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_02be86a4;
          if (plVar15 == (long *)puVar7) break;
          plVar15 = (long *)*plVar15;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_02be8724;
          lVar14 = puVar4[3];
          if (lVar14 != 0) {
            uVar11 = FUN_00bd1318(lVar14);
            lVar13 = *(long *)(lVar14 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*(long *)(lVar14 + -0x50) + 0x20))((long *)(lVar14 + -0x50));
            }
            goto joined_r0x02be88a4;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_02be8724:
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_02be86a4:
    uVar11 = FUN_00bd1318(0x50);
joined_r0x02be88a4:
    if ((uVar11 & 1) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      puVar4 = local_70;
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00bd0e30(param_1,&local_70);
      puVar4 = local_70;
    }
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        puVar4[2] = 0;
        local_70 = puVar4;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_58 = *puVar4;
        FUN_02a44274(lVar14 + 0xd8,&local_58);
      }
    }
  }
  return;
}


