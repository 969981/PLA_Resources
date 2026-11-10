/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ab2c4; name: FUN_028ab2c4
 */


undefined * FUN_028ab2c4(long param_1,long *param_2)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined *puVar13;
  long lVar14;
  
  puVar8 = PTR_DAT_0437a6a8;
  puVar7 = PTR_DAT_0437a6a0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  puVar13 = *(undefined **)(param_1 + 0x70);
  puVar2 = *(undefined **)(param_1 + 0x78);
  do {
    if (puVar13 == puVar2) {
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), puVar13 = PTR_DAT_0437a0d8, iVar10 != 0))
      {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      else {
        puVar13 = PTR_DAT_0437a0d8;
      }
      return puVar13;
    }
    lVar14 = *(long *)(puVar13 + 0x20);
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
      piVar1 = (int *)(lVar14 + 0xc);
      iVar10 = *(int *)(lVar14 + 0xc);
      do {
        plVar12 = *(long **)(lVar14 + 0x10);
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar11;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_028ab318;
          if (plVar12 == (long *)puVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            if (*(long *)(lVar14 + 0x18) != 0) {
              plVar12 = (long *)(*(long *)(lVar14 + 0x18) + -8);
              (**(code **)(*plVar12 + 0x18))(plVar12);
              if (plVar12 == param_2) {
                return puVar13;
              }
              goto LAB_028ab31c;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_028ab318:
    if (param_2 == (long *)0x0) {
      return puVar13;
    }
LAB_028ab31c:
    puVar13 = puVar13 + 0x30;
  } while( true );
}


