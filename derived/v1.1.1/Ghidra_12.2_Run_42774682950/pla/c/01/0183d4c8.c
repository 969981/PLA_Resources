/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0183d4c8; name: FUN_0183d4c8
 */


void FUN_0183d4c8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 in_q3 [16];
  ulong uVar12;
  long *local_38;
  
  uVar12 = in_q3._8_8_;
  uVar11 = in_q3._0_8_;
  if ((*(long *)(param_1 + 0x1a8) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x1a8) + 0x18), puVar9 != (undefined8 *)0x0)) {
    plVar7 = (long *)(**(code **)*puVar9)(puVar9);
    puVar4 = PTR_DAT_043794b8;
    if (((*PTR_DAT_043794b0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar5 = PTR_DAT_043794c8,
       puVar4 = PTR_DAT_043794b8, iVar6 != 0)) {
      if (((*PTR_DAT_043794c0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar4 = PTR_DAT_043794d8, iVar6 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
          uVar8 = FUN_0087f8f0();
          *(undefined8 *)puVar4 = uVar8;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = puVar4;
        __cxa_guard_release(PTR_DAT_043794c0);
      }
      puVar4 = PTR_DAT_043794b8;
      *(undefined **)PTR_DAT_043794b8 = puVar5;
      __cxa_guard_release(PTR_DAT_043794b0);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar4) {
        *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_1 + 0x344);
        (**(code **)(puVar9[-10] + 0x40))(puVar9 + -10);
        local_38 = *(long **)(param_1 + 0x208);
        *(ulong *)(param_1 + 0x348) = uVar12;
        *(undefined8 *)(param_1 + 0x340) = uVar11;
        plVar7 = (long *)local_38[0x13];
        if (plVar7 != (long *)0x0) {
          lVar10 = local_38[0xb];
          if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar10 + 0x10) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
            *(undefined8 *)(lVar10 + 0x10) = uVar8;
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
          (**(code **)(*plVar7 + 0x30))
                    (uVar11,(int)uVar12,uVar11,uVar12 & 0xffffffff,plVar7,&local_38);
          if (local_38 != (long *)0x0) {
            lVar10 = local_38[0xb];
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
              (**(code **)(*local_38 + 0x20))();
            }
          }
        }
        *(undefined1 *)(param_1 + 0x45c) = 1;
        return;
      }
    }
  }
  return;
}


