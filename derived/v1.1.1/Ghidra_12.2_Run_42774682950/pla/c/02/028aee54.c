/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028aee54; name: FUN_028aee54
 */


void FUN_028aee54(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  byte *pbVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *param_2;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    puVar7 = PTR_DAT_0437a6a8;
    pbVar8 = PTR_DAT_0437a6a0;
    iVar9 = *(int *)(lVar11 + 0xc);
    do {
      plVar10 = *(long **)(lVar11 + 0x10);
      if (((*pbVar8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a6a0), pbVar8 = PTR_DAT_0437a6a0,
         puVar7 = PTR_DAT_0437a6a8, iVar5 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar5 != 0)) {
          uVar6 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar6;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        puVar7 = PTR_DAT_0437a6a8;
        *(undefined **)PTR_DAT_0437a6a8 = PTR_DAT_043794d8;
        pbVar8 = PTR_DAT_0437a6a0;
        __cxa_guard_release(PTR_DAT_0437a6a0);
      }
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_028aefc0;
        if (plVar10 == (long *)puVar7) break;
        plVar10 = (long *)*plVar10;
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar2 = 0;
          if (*(long *)(lVar11 + 0x18) != 0) {
            lVar2 = *(long *)(lVar11 + 0x18) + -8;
          }
          *param_1 = lVar2;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_028aefc0:
  *param_1 = 0;
  return;
}


