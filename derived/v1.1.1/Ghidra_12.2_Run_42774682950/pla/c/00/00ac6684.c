/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ac6684; name: FUN_00ac6684
 */


void FUN_00ac6684(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  byte *pbVar9;
  long *plVar10;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    piVar1 = (int *)(param_2 + 0xc);
    plVar7 = (long *)PTR_DAT_0437a1c8;
    pbVar9 = PTR_DAT_0437a1c0;
    iVar8 = *(int *)(param_2 + 0xc);
    while ((plVar10 = *(long **)(param_2 + 0x10), (*pbVar9 & 1) != 0 ||
           (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a1c0), plVar7 = (long *)PTR_DAT_0437a1c8,
           pbVar9 = PTR_DAT_0437a1c0, iVar5 == 0))) {
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_00ac66cc;
LAB_00ac66bc:
        if (plVar10 == plVar7) break;
        plVar10 = (long *)*plVar10;
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
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
      iVar8 = iVar5;
      if (iVar5 == 0) goto LAB_00ac66cc;
    }
    uVar6 = FUN_009ac380();
    *(undefined8 *)PTR_DAT_0437a1c8 = uVar6;
    __cxa_guard_release(PTR_DAT_0437a1c0);
    plVar7 = (long *)PTR_DAT_0437a1c8;
    pbVar9 = PTR_DAT_0437a1c0;
    if (plVar10 != (long *)0x0) goto LAB_00ac66bc;
  }
LAB_00ac66cc:
  *param_1 = 0;
  return;
}


