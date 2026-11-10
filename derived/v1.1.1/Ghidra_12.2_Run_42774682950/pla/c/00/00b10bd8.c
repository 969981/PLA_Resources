/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b10bd8; name: FUN_00b10bd8
 */


void FUN_00b10bd8(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  byte *pbVar11;
  
  puVar5 = PTR_DAT_04379d18;
  if (*(int *)(param_2 + 0xc) != 0) {
    piVar1 = (int *)(param_2 + 0xc);
    plVar9 = (long *)PTR_DAT_0437a800;
    pbVar11 = PTR_DAT_0437a7f8;
    iVar8 = *(int *)(param_2 + 0xc);
    while ((plVar10 = *(long **)(param_2 + 0x10), (*pbVar11 & 1) != 0 ||
           (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a7f8), plVar9 = (long *)PTR_DAT_0437a800,
           pbVar11 = PTR_DAT_0437a7f8, iVar6 == 0))) {
      while( true ) {
        if (plVar10 == (long *)0x0) goto LAB_00b10c80;
LAB_00b10c30:
        if (plVar10 == plVar9) break;
        plVar10 = (long *)*plVar10;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar8) {
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
      iVar8 = iVar6;
      if (iVar6 == 0) goto LAB_00b10c80;
    }
    if (((*PTR_DAT_04379d10 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d10), iVar6 != 0)) {
      if (((*PTR_DAT_04379d20 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar6 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
          uVar7 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar7;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_04379d20);
      }
      *(undefined **)puVar5 = PTR_DAT_04379d28;
      __cxa_guard_release(PTR_DAT_04379d10);
    }
    plVar9 = (long *)PTR_DAT_0437a800;
    *(undefined **)PTR_DAT_0437a800 = puVar5;
    pbVar11 = PTR_DAT_0437a7f8;
    __cxa_guard_release(PTR_DAT_0437a7f8);
    if (plVar10 != (long *)0x0) goto LAB_00b10c30;
  }
LAB_00b10c80:
  *param_1 = 0;
  return;
}


