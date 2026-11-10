/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0098145c; name: FUN_0098145c
 */


void FUN_0098145c(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  byte *pbVar9;
  int iVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_04379c98;
  if (*(int *)(param_2 + 0xc) != 0) {
    piVar1 = (int *)(param_2 + 0xc);
    plVar8 = (long *)PTR_DAT_0437a050;
    pbVar9 = PTR_DAT_0437a048;
    iVar10 = *(int *)(param_2 + 0xc);
    while ((plVar11 = *(long **)(param_2 + 0x10), (*pbVar9 & 1) != 0 ||
           (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a048), plVar8 = (long *)PTR_DAT_0437a050,
           pbVar9 = PTR_DAT_0437a048, iVar6 == 0))) {
      while( true ) {
        if (plVar11 == (long *)0x0) goto LAB_00981504;
LAB_009814b4:
        if (plVar11 == plVar8) break;
        plVar11 = (long *)*plVar11;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
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
      iVar10 = iVar6;
      if (iVar6 == 0) goto LAB_00981504;
    }
    if (((*PTR_DAT_04379ca8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar6 != 0)) {
      uVar7 = FUN_009311a8();
      *(undefined8 *)puVar5 = uVar7;
      __cxa_guard_release(PTR_DAT_04379ca8);
    }
    plVar8 = (long *)PTR_DAT_0437a050;
    *(undefined **)PTR_DAT_0437a050 = puVar5;
    pbVar9 = PTR_DAT_0437a048;
    __cxa_guard_release(PTR_DAT_0437a048);
    if (plVar11 != (long *)0x0) goto LAB_009814b4;
  }
LAB_00981504:
  *param_1 = 0;
  return;
}


