/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e44f24; name: FUN_01e44f24
 */


/* WARNING: Removing unreachable block (ram,0x01e45160) */

void FUN_01e44f24(undefined8 param_1,undefined4 param_2,long *param_3,long *param_4)

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
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long *plVar15;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  long *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_70 [2];
  
  puVar7 = PTR_DAT_0437a590;
  puVar6 = PTR_DAT_0437a588;
  puVar5 = PTR_DAT_0437a580;
  puVar4 = PTR_DAT_043794d0;
  lVar12 = *param_3;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar10 = *(int *)(lVar12 + 0xc);
    do {
      plVar15 = *(long **)(lVar12 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar9 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(puVar4);
          }
          *(undefined **)puVar6 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        *(undefined **)puVar7 = puVar6;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) {
          return;
        }
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
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          param_4 = (long *)*param_4;
          if (param_4 != (long *)0x0) {
            (**(code **)(*param_4 + 0x10))();
          }
          local_108 = (undefined8 *)0x0;
          uStack_100 = 0;
          FUN_01a0703c(&local_108,param_3);
          uStack_c8 = 0;
          local_f0 = (code *)0x0;
          local_e8 = (code *)0x0;
          local_c0 = 0;
          local_e0 = (code *)0x0;
          local_d8 = (code *)0x0;
          local_f8 = param_2;
          local_d0 = param_4;
          FUN_01a77e00(&uStack_c8,&local_108);
          local_b8 = local_f8;
          local_f0 = FUN_01e4757c;
          local_e8 = FUN_01e47660;
          local_e0 = FUN_01e4774c;
          local_d8 = FUN_01e477a0;
          pcVar14 = *(code **)(lVar12 + 0x2f8);
          if (pcVar14 != (code *)0x0) {
            *(undefined8 *)(lVar12 + 0x300) = 0;
            *(undefined8 *)(lVar12 + 0x308) = 0;
            *(undefined8 *)(lVar12 + 0x2f0) = 0;
            *(undefined8 *)(lVar12 + 0x2f8) = 0;
            (*pcVar14)(lVar12 + 0x310);
            if (local_e0 == (code *)0x0) goto LAB_01e450dc;
          }
          (*local_e0)(&local_d0,lVar12 + 0x310);
          *(code **)(lVar12 + 0x2f8) = local_e8;
          *(code **)(lVar12 + 0x308) = local_d8;
          *(code **)(lVar12 + 0x300) = local_e0;
          *(undefined8 *)(lVar12 + 0x2f0) = local_f0;
LAB_01e450dc:
          pcVar14 = local_e8;
          if (local_e8 != (code *)0x0) {
            local_e0 = (code *)0x0;
            local_d8 = (code *)0x0;
            local_f0 = (code *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar14)(&local_d0);
          }
          puVar8 = local_108;
          if (local_108 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_108 + 1);
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
              local_108[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_70[0] = *puVar8;
              FUN_02a44274(lVar13 + 0xd8,local_70);
            }
          }
          lVar13 = *(long *)(lVar12 + 8);
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
            (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  return;
}


