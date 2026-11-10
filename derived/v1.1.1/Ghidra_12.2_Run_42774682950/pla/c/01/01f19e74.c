/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f19e74; name: FUN_01f19e74
 */


void FUN_01f19e74(long param_1)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  
  if (*(char *)(param_1 + 0x5e651) != '\0') {
    pcVar2 = (char *)(param_1 + 0xd6790);
    if (*(int *)(param_1 + 0xd6794) != 6) {
      if ((((*(char *)(param_1 + 0xfa880) == '\0') && (*(char *)(param_1 + 0xf4858) == '\0')) &&
          (*(char *)(param_1 + 0xee830) == '\0')) &&
         (((*(char *)(param_1 + 0xe8808) == '\0' && (*(char *)(param_1 + 0xe27e0) == '\0')) &&
          (*(char *)(param_1 + 0xdc7b8) == '\0')))) {
        *(long *)(param_1 + 0xd6798) = param_1 + 0x826b8;
        cVar3 = *pcVar2;
      }
      else {
        *(long *)(param_1 + 0xd6798) = param_1 + 0x826b8;
        cVar3 = *pcVar2;
      }
      if (cVar3 != '\0') {
        *(undefined1 *)(param_1 + 0xdc7b0) = 1;
      }
      *(undefined4 *)(param_1 + 0xd6794) = 6;
      *(undefined8 *)(param_1 + 0xd67a0) = 0x3f80000000000000;
      *pcVar2 = '\x01';
    }
    if (((*(char *)(param_1 + 0x285b8) != '\0') && (lVar9 = *(long *)(param_1 + 0xb8), lVar9 != 0))
       && (*(int *)(lVar9 + 0xc) != 0)) {
      piVar1 = (int *)(lVar9 + 0xc);
      iVar11 = *(int *)(lVar9 + 0xc);
      do {
        plVar10 = *(long **)(lVar9 + 0x10);
        if (((*PTR_DAT_043796f0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_043796f0), iVar5 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
            uVar7 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar7;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043796f8 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043796f0);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) {
            return;
          }
          if (plVar10 == (long *)PTR_DAT_043796f8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar9 = *(long *)(lVar9 + 0x18);
            if (lVar9 == 0) {
              return;
            }
            plVar10 = (long *)(lVar9 + -0x50);
            uVar6 = FUN_01f26cf4(plVar10,&DAT_03a7d1c0);
            if ((uVar6 & 1) == 0) {
              if (*(int *)(param_1 + 0xdc7bc) == 0x12) {
                uVar8 = 1;
              }
              else {
                if ((((*(char *)(param_1 + 0xfa880) == '\0') &&
                     (*(char *)(param_1 + 0xf4858) == '\0')) &&
                    (*(char *)(param_1 + 0xee830) == '\0')) &&
                   ((*(char *)(param_1 + 0xe8808) == '\0' && (*(char *)(param_1 + 0xe27e0) == '\0'))
                   )) {
                  *(long *)(param_1 + 0xdc7c0) = param_1 + 0xca718;
                  cVar3 = *(char *)(param_1 + 0xdc7b8);
                }
                else {
                  *(long *)(param_1 + 0xdc7c0) = param_1 + 0xca718;
                  cVar3 = *(char *)(param_1 + 0xdc7b8);
                }
                if (cVar3 != '\0') {
                  *(undefined1 *)(param_1 + 0xe27d8) = 1;
                }
                *(undefined4 *)(param_1 + 0xdc7bc) = 0x12;
                *(undefined8 *)(param_1 + 0xdc7c8) = 0x3f80000000000000;
                uVar8 = 1;
                *(undefined1 *)(param_1 + 0xdc7b8) = 1;
              }
            }
            else {
              uVar8 = 0;
            }
            *(undefined1 *)(param_1 + 0x285c0) = uVar8;
            lVar9 = *(long *)(lVar9 + 8);
            piVar1 = (int *)(lVar9 + 0xc);
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
              *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01f1a0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar10 + 0x20))(plVar10);
              return;
            }
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar5;
      } while (iVar5 != 0);
    }
  }
  return;
}


