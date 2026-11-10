/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02da4574; name: FUN_02da4574
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_02da4574(long param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  
  puVar7 = PTR_DAT_043794a0;
  if (*(long *)(param_1 + 0x128) != 0) {
    lVar13 = *(long *)(param_1 + 0x120);
    lVar2 = lVar13 + *(long *)(param_1 + 0x128) * 0x10;
    do {
      local_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_02da7948(&local_78,lVar13);
      if (local_78 != (long *)0x0) {
        FUN_02da7bc0(&local_80);
        plVar15 = local_78;
        if (local_80 != (long *)0x0) {
          local_68 = param_2;
          if (local_80[0x201f] != 0) {
            puVar14 = (undefined8 *)local_80[0x201e];
            puVar3 = puVar14 + local_80[0x201f];
            do {
              plVar15 = (long *)*puVar14;
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              lVar12 = plVar15[0xb];
              if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar12 + 0x10) == 0) {
                uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
                *(undefined8 *)(lVar12 + 0x10) = uVar9;
              }
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = *piVar1 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              (**(code **)(*plVar15 + 0x60))(plVar15,&local_68);
              lVar12 = plVar15[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar8 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar8 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar8 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar15 + 0x20))(plVar15);
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar3);
            plVar15 = local_78;
            if (local_80 == (long *)0x0) goto joined_r0x02da46f0;
          }
          lVar12 = local_80[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          plVar15 = local_78;
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
            plVar15 = local_78;
          }
        }
joined_r0x02da46f0:
        if (plVar15 != (long *)0x0) {
          plVar10 = plVar15 + 1;
          do {
            iVar8 = (int)*plVar10 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = iVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == 0) {
            plVar15[2] = 0;
            local_78 = plVar15;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *(long *)puVar7;
            *(long *)PTR_DAT_043794a8 = lVar12;
            local_68 = (long *)*plVar15;
            FUN_02a44274(lVar12 + 0xd8,&local_68);
          }
        }
      }
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != lVar2);
  }
  lVar13 = *(long *)(param_1 + 0x20148);
  if ((((*(long *)(lVar13 + 0x78) != 0) && (*(int *)(*(long *)(lVar13 + 0x78) + 0xc) != 0)) &&
      (plVar15 = *(long **)(lVar13 + 0x88), plVar15 != (long *)0x0)) &&
     (local_78 = param_2, plVar10 = (long *)(**(code **)(*plVar15 + 0x20))(plVar15),
     plVar10 != param_2)) {
    uVar11 = (**(code **)(*plVar15 + 0x38))(plVar15,&local_78);
    uVar4 = (uint)uVar11 & 0xff;
    if (uVar4 != 0xfd) {
      if (1 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_02daa440();
      }
      *(ulong *)(lVar13 + 0x98) = *(ulong *)(lVar13 + 0x98) | 1L << (uVar11 & 0x3f);
      *(undefined1 *)(lVar13 + 0x90) = 1;
    }
  }
  return;
}


