/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009ac698; name: FUN_009ac698
 */


void FUN_009ac698(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  int iVar9;
  undefined *puVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_0437a1e8;
  if (*(int *)(param_2 + 0xc) != 0) {
    piVar1 = (int *)(param_2 + 0xc);
    pbVar8 = PTR_DAT_0437a1e0;
    puVar10 = PTR_DAT_0437a1f0;
    iVar9 = *(int *)(param_2 + 0xc);
    do {
      plVar11 = *(long **)(param_2 + 0x10);
      if (((*pbVar8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a1e0), pbVar8 = PTR_DAT_0437a1e0,
         puVar10 = PTR_DAT_0437a1f0, iVar6 != 0)) {
        if (((*PTR_DAT_0437a1f8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a1f8), iVar6 != 0)) {
          if (((*PTR_DAT_04379fd8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379fd8), iVar6 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar6 != 0)) {
              if (((*PTR_DAT_043794d0 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
                uVar7 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar7;
                __cxa_guard_release(PTR_DAT_043794d0);
              }
              *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)PTR_DAT_04379fe0 = PTR_DAT_043795e0;
            __cxa_guard_release(PTR_DAT_04379fd8);
          }
          *(undefined **)puVar5 = PTR_DAT_04379fe0;
          __cxa_guard_release(PTR_DAT_0437a1f8);
        }
        puVar10 = PTR_DAT_0437a1f0;
        *(undefined **)PTR_DAT_0437a1f0 = puVar5;
        pbVar8 = PTR_DAT_0437a1e0;
        __cxa_guard_release(PTR_DAT_0437a1e0);
      }
      while( true ) {
        if (plVar11 == (long *)0x0) goto LAB_009ac7d0;
        if (plVar11 == (long *)puVar10) break;
        plVar11 = (long *)*plVar11;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar2 = 0;
          if (*(long *)(param_2 + 0x18) != 0) {
            lVar2 = *(long *)(param_2 + 0x18) + -0x50;
          }
          *param_1 = lVar2;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar6;
    } while (iVar6 != 0);
  }
LAB_009ac7d0:
  *param_1 = 0;
  return;
}


