/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015176b4; name: FUN_015176b4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_015176b4(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  
  puVar6 = PTR_DAT_0437f8c8;
  puVar5 = PTR_DAT_0437f8c0;
  puVar4 = PTR_DAT_0437f8b8;
  if (*(long *)(param_2 + 0x238) != 0) {
    plVar11 = *(long **)(param_2 + 0x230);
    do {
      plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 0x50))();
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        FUN_0151a8b8();
        *(undefined **)puVar6 = puVar4;
        __cxa_guard_release(puVar5);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)puVar6) {
          lVar10 = *plVar11;
          plVar11 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x50))
                                      ((undefined8 *)(lVar10 + 0x50));
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437f8c0), iVar7 != 0)) {
            FUN_0151a8b8();
            *(undefined **)puVar6 = puVar4;
            __cxa_guard_release(PTR_DAT_0437f8c0);
          }
          for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
            if (plVar11 == (long *)puVar6) {
              *param_1 = lVar10;
              lVar10 = *(long *)(lVar10 + 0x58);
              if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl("","","",0);
              }
              if (*(long *)(lVar10 + 0x10) == 0) {
                uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
                *(undefined8 *)(lVar10 + 0x10) = uVar9;
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
              return;
            }
          }
          goto LAB_0151773c;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != (long *)(*(long *)(param_2 + 0x230) + *(long *)(param_2 + 0x238) * 8));
  }
LAB_0151773c:
  *param_1 = 0;
  return;
}


