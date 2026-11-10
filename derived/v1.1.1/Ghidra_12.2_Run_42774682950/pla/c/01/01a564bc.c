/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a564bc; name: FUN_01a564bc
 */


void FUN_01a564bc(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 *local_50 [2];
  undefined8 local_38;
  
  plVar13 = (long *)(param_2 + 0x8b8);
  if ((*(long *)(param_2 + 0x8b8) == 0) || (*(int *)(*(long *)(param_2 + 0x8b8) + 0xc) == 0)) {
    FUN_01a55fe8(local_50);
    FUN_01a69060(plVar13,local_50);
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_38 = *local_50[0];
        FUN_02a44274(lVar11 + 0xd8,&local_38);
        lVar11 = *plVar13;
        pbVar5 = PTR_DAT_043794d0;
        puVar6 = (undefined8 *)PTR_DAT_043794d8;
        pbVar7 = PTR_DAT_0437a6a0;
        puVar12 = PTR_DAT_0437a6a8;
        goto joined_r0x01a5658c;
      }
    }
  }
  lVar11 = *plVar13;
  pbVar5 = PTR_DAT_043794d0;
  puVar6 = (undefined8 *)PTR_DAT_043794d8;
  pbVar7 = PTR_DAT_0437a6a0;
  puVar12 = PTR_DAT_0437a6a8;
joined_r0x01a5658c:
  PTR_DAT_043794d0 = pbVar5;
  PTR_DAT_043794d8 = (undefined *)puVar6;
  PTR_DAT_0437a6a0 = pbVar7;
  PTR_DAT_0437a6a8 = puVar12;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar8 = *(int *)(lVar11 + 0xc);
    do {
      plVar13 = *(long **)(lVar11 + 0x10);
      if (((*pbVar7 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(pbVar7), puVar12 = PTR_DAT_0437a6a8, iVar9 != 0)) {
        if (((*pbVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar5), iVar9 != 0)) {
          uVar10 = FUN_0087f8f0();
          *puVar6 = uVar10;
          __cxa_guard_release(pbVar5);
        }
        puVar12 = PTR_DAT_0437a6a8;
        *(undefined8 **)PTR_DAT_0437a6a8 = puVar6;
        __cxa_guard_release(pbVar7);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01a564f8;
        if (plVar13 == (long *)puVar12) break;
        plVar13 = (long *)*plVar13;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
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
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01a564f8:
  *param_1 = 0;
  return;
}


