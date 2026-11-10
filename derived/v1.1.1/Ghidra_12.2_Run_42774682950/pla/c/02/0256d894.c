/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256d894; name: FUN_0256d894
 */


void FUN_0256d894(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  
  puVar5 = PTR_DAT_04381eb0;
  puVar4 = PTR_DAT_04381ea8;
  if (((*(int *)(param_2 + 0x68) == 1) && (lVar9 = *(long *)(param_2 + 0x3b8), lVar9 != 0)) &&
     (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar10 = *(int *)(lVar9 + 0xc);
    do {
      plVar8 = *(long **)(lVar9 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
          uVar7 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar7;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar8 == (long *)0x0) goto LAB_0256d8c4;
        if (plVar8 == (long *)puVar5) break;
        plVar8 = (long *)*plVar8;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 != 0) {
            plVar8 = (long *)(lVar9 + -0x50);
            uVar7 = FUN_0256d250(param_2,param_3);
            FUN_018c663c(param_1,plVar8,uVar7,param_4);
            lVar9 = *(long *)(lVar9 + 8);
            piVar1 = (int *)(lVar9 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0256d9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar8 + 0x20))(plVar8);
              return;
            }
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_0256d8c4:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03996322;
  return;
}


