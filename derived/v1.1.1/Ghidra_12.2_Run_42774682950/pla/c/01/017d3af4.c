/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d3af4; name: FUN_017d3af4
 */


long * FUN_017d3af4(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  lVar13 = *(long *)(param_2 + 8);
  FUN_00987510(local_58,lVar13);
  puVar6 = local_58[0];
  puVar5 = PTR_DAT_0437a090;
  puVar4 = PTR_DAT_0437a088;
  if ((local_58[0] != (undefined8 *)0x0) && (*(int *)((long)local_58[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_58[0] + 0xc);
    iVar7 = *(int *)((long)local_58[0] + 0xc);
    do {
      plVar9 = (long *)puVar6[2];
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        uVar10 = FUN_00987804();
        *(undefined8 *)puVar5 = uVar10;
        __cxa_guard_release(puVar4);
      }
      while( true ) {
        if (plVar9 == (long *)0x0) goto LAB_017d3b2c;
        if (plVar9 == (long *)puVar5) break;
        plVar9 = (long *)*plVar9;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = puVar6[3];
          if (lVar11 != 0) {
            plVar9 = (long *)*param_1;
            *param_1 = 0;
            if (plVar9 != (long *)0x0) {
              lVar12 = plVar9[0xb];
              piVar1 = (int *)(lVar12 + 0xc);
              do {
                iVar7 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(lVar12 + 0x18) = 0;
                (**(code **)(*plVar9 + 0x20))();
              }
            }
            *param_1 = lVar11 + -0x50;
            goto LAB_017d3b5c;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar7 = iVar8;
    } while (iVar8 != 0);
  }
LAB_017d3b2c:
  plVar9 = (long *)*param_1;
  *param_1 = 0;
  if (plVar9 != (long *)0x0) {
    lVar13 = plVar9[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 1) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  lVar13 = 0;
LAB_017d3b5c:
  param_1[1] = lVar13;
  if (local_58[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58[0] + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_48 = *local_58[0];
      FUN_02a44274(lVar13 + 0xd8,&local_48);
    }
  }
  return param_1;
}


