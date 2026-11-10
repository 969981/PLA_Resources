/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d8febc; name: FUN_01d8febc
 */


void FUN_01d8febc(long *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_0437a0e8;
  puVar4 = PTR_DAT_043794d0;
  lVar13 = *(long *)(param_2 + 0x80);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    plVar11 = (long *)PTR_DAT_0437a0f0;
    iVar8 = *(int *)(lVar13 + 0xc);
    do {
      plVar10 = *(long **)(lVar13 + 0x10);
      if (((*puVar5 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(puVar5), plVar11 = (long *)PTR_DAT_0437a0f0, iVar7 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar12 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar12;
          __cxa_guard_release(puVar4);
        }
        plVar11 = (long *)PTR_DAT_0437a0f0;
        *(undefined **)PTR_DAT_0437a0f0 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar5);
        if (plVar10 != (long *)0x0) goto LAB_01d8ff28;
        break;
      }
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_01d90188;
LAB_01d8ff28:
        if (plVar10 == plVar11) break;
        plVar10 = (long *)*plVar10;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            local_80 = *param_3;
            plVar11 = (long *)(lVar13 + -0x50);
            uVar12 = *(undefined8 *)(param_2 + 8);
            local_78 = param_3[1];
            local_70 = param_3[2];
            local_68 = (long *)param_3[3];
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x18))();
            }
            FUN_01845684(&local_60,plVar11,uVar12,&local_80);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
            local_58 = *(undefined8 **)(lVar13 + 0x40);
            uStack_50 = *(undefined8 *)(lVar13 + 0x48);
            uVar12 = FUN_00bd8988(local_60,*(undefined8 *)(local_60 + 8),&local_58);
            (**(code **)(**(long **)(param_2 + 0x68) + 0x18))(&local_58);
            local_90 = (undefined8 *)0x0;
            uStack_88 = 0;
            FUN_0087f944(&local_90,&local_58);
            puVar6 = local_58;
            if (local_58 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_58 + 1);
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
                local_58[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar9 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar9;
                local_48 = *puVar6;
                FUN_02a44274(lVar9 + 0xd8,&local_48);
              }
            }
            FUN_00d804f8(uVar12,&local_90,1);
            puVar6 = local_90;
            if (local_90 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_90 + 1);
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
                local_90[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar9 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar9;
                local_58 = (undefined8 *)*puVar6;
                FUN_02a44274(lVar9 + 0xd8,&local_58);
              }
            }
            *param_1 = local_60;
            lVar13 = *(long *)(lVar13 + 8);
            piVar1 = (int *)(lVar13 + 0xc);
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
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*plVar11 + 0x20))(plVar11);
            }
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar7;
    } while (iVar7 != 0);
  }
LAB_01d90188:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


