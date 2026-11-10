/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256d4a8; name: FUN_0256d4a8
 */


void FUN_0256d4a8(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_04381eb0;
  puVar4 = PTR_DAT_04381ea8;
  if (((*(int *)(param_2 + 0x68) == 1) && (lVar10 = *(long *)(param_2 + 0x3b8), lVar10 != 0)) &&
     (*(int *)(lVar10 + 0xc) != 0)) {
    piVar1 = (int *)(lVar10 + 0xc);
    iVar6 = *(int *)(lVar10 + 0xc);
    do {
      plVar9 = *(long **)(lVar10 + 0x10);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4,param_3,param_4), iVar7 != 0))
      {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
          uVar8 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar8;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar9 == (long *)0x0) goto LAB_0256d4d8;
        if (plVar9 == (long *)puVar5) break;
        plVar9 = (long *)*plVar9;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = *(long *)(lVar10 + 0x18);
          if (lVar10 != 0) {
            plVar9 = (long *)(lVar10 + -0x50);
            uVar8 = FUN_0256d250(param_2,param_3);
            FUN_018c6814(param_1,plVar9,uVar8,param_4 & 0xffffffff);
            lVar10 = *(long *)(lVar10 + 8);
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
            if (iVar6 + -1 != 0) {
              return;
            }
            *(undefined8 *)(lVar10 + 0x18) = 0;
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar9 + 0x20);
            goto LAB_0256d528;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      param_4 = param_4 & 0xffffffff;
      iVar6 = iVar7;
    } while (iVar7 != 0);
  }
LAB_0256d4d8:
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar4 = PTR_DAT_0437a0d8;
  uVar8 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[1] = uVar8;
  plVar9 = *(long **)(puVar4 + 0x18);
  param_1[2] = *(undefined8 *)(puVar4 + 0x10);
  param_1[3] = plVar9;
  if (plVar9 == (long *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar9 + 0x18);
LAB_0256d528:
                    /* WARNING: Could not recover jumptable at 0x0256d540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar9);
  return;
}


