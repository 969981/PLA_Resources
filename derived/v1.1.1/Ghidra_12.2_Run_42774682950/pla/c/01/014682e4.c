/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014682e4; name: FUN_014682e4
 */


void FUN_014682e4(undefined8 *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  if ((*(int *)(*(long *)(param_2 + 0x50) + (param_3 & 0xff) * 0x120 + 0x100) != 0) &&
     (plVar9 = *(long **)(*(long *)(param_2 + 0x50) + (param_3 & 0xff) * 0x120 + 0x108),
     plVar9 != (long *)0x0)) {
    lVar10 = plVar9[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      (**(code **)(*plVar9 + 0x10))(local_50,plVar9);
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      FUN_009636f0(&local_60,local_50);
      puVar11 = local_50[0];
      if (local_50[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_50[0] + 1);
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
          local_50[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_38 = *puVar11;
          FUN_02a44274(lVar10 + 0xd8,&local_38);
        }
      }
      if ((local_60 != (undefined8 *)0x0) &&
         (puVar11 = (undefined8 *)local_60[3], puVar11 != (undefined8 *)0x0)) {
        plVar8 = (long *)(**(code **)*puVar11)(puVar11);
        puVar4 = PTR_DAT_0437f588;
        if (((*PTR_DAT_0437f580 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_0437f580), puVar5 = PTR_DAT_04379c98,
           puVar4 = PTR_DAT_0437f588, iVar6 != 0)) {
          if (((*PTR_DAT_04379ca8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar6 != 0)) {
            uVar7 = FUN_009311a8();
            *(undefined8 *)puVar5 = uVar7;
            __cxa_guard_release(PTR_DAT_04379ca8);
          }
          puVar4 = PTR_DAT_0437f588;
          *(undefined **)PTR_DAT_0437f588 = puVar5;
          __cxa_guard_release(PTR_DAT_0437f580);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar4) {
            *param_1 = puVar11 + -10;
            lVar10 = puVar11[1];
            if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar7;
              }
              puVar11 = local_60;
              piVar1 = (int *)(lVar10 + 0xc);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (local_60 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_60 + 1);
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
                  local_60[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar10 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar10;
                  local_50[0] = (undefined8 *)*puVar11;
                  FUN_02a44274(lVar10 + 0xd8,local_50);
                }
              }
              lVar10 = plVar9[0xb];
              piVar1 = (int *)(lVar10 + 0xc);
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
                *(undefined8 *)(lVar10 + 0x18) = 0;
                (**(code **)(*plVar9 + 0x20))(plVar9);
              }
              return;
            }
            goto LAB_01468594;
          }
        }
      }
      *param_1 = 0;
    }
  }
LAB_01468594:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


