/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da4838; name: FUN_02da4838
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02da4838(long param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_043794a0;
  if (*(long *)(param_1 + 0x128) != 0) {
    lVar10 = *(long *)(param_1 + 0x120);
    lVar2 = lVar10 + *(long *)(param_1 + 0x128) * 0x10;
    do {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_02da7948(&local_78,lVar10);
      if (local_78 != (undefined8 *)0x0) {
        FUN_02da7bc0(&local_80);
        puVar11 = local_78;
        if (local_80 != (long *)0x0) {
          local_68 = param_2;
          if (local_80[0x201f] != 0) {
            puVar11 = (undefined8 *)local_80[0x201e];
            puVar3 = puVar11 + local_80[0x201f];
            do {
              plVar12 = (long *)*puVar11;
              if (plVar12 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              lVar9 = plVar12[0xb];
              if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar9 + 0x10) == 0) {
                uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
                *(undefined8 *)(lVar9 + 0x10) = uVar8;
              }
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              (**(code **)(*plVar12 + 0x68))(plVar12,&local_68);
              lVar9 = plVar12[0xb];
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar7 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))(plVar12);
              }
              puVar11 = puVar11 + 1;
            } while (puVar11 != puVar3);
            puVar11 = local_78;
            if (local_80 == (long *)0x0) goto joined_r0x02da49b4;
          }
          lVar9 = local_80[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          puVar11 = local_78;
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
            puVar11 = local_78;
          }
        }
joined_r0x02da49b4:
        local_78 = puVar11;
        if (puVar11 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar11 + 1);
          do {
            iVar7 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar7 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 + -1 == 0) {
            puVar11[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)puVar6;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_68 = *puVar11;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
          }
        }
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != lVar2);
  }
  FUN_02da90e0(*(undefined8 *)(param_1 + 0x20148),param_2);
  return;
}


