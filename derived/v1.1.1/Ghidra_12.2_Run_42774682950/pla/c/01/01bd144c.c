/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bd144c; name: FUN_01bd144c
 */


undefined8 FUN_01bd144c(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  if (param_2 == 0) {
    param_1 = param_1 + 0x220;
  }
  else {
    if (param_2 != 1) goto LAB_01bd1478;
    param_1 = param_1 + 0x230;
  }
  FUN_00aeb228(&local_58,param_1);
LAB_01bd1478:
  puVar7 = local_58;
  puVar6 = PTR_DAT_0437a6e0;
  puVar5 = PTR_DAT_0437a6d8;
  if ((local_58 != (undefined8 *)0x0) && (*(int *)((long)local_58 + 0xc) != 0)) {
    piVar1 = (int *)((long)local_58 + 0xc);
    iVar8 = *(int *)((long)local_58 + 0xc);
    do {
      plVar13 = (long *)puVar7[2];
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        uVar12 = FUN_00ad3750();
        *(undefined8 *)puVar6 = uVar12;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01bd1480;
        if (plVar13 == (long *)puVar6) break;
        plVar13 = (long *)*plVar13;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_01bd1570;
        lVar11 = puVar7[3];
        if (lVar11 != 0) {
          plVar13 = (long *)(lVar11 + -0x50);
          lVar10 = FUN_02c90d14(plVar13);
          if (((lVar10 == 0) || (*(int *)(lVar10 + 0x17c) < 1)) || (*(char *)(lVar10 + 0xc) == '\0')
             ) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
            if (bVar3) goto LAB_01bd15fc;
            break;
          }
          if (!bVar3) break;
LAB_01bd15fc:
          uVar12 = 1;
          if (local_58 == (undefined8 *)0x0) {
            return 1;
          }
          goto LAB_01bd148c;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01bd1570:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01bd1480:
  uVar12 = 0;
  if (local_58 != (undefined8 *)0x0) {
LAB_01bd148c:
    puVar7 = local_58;
    piVar1 = (int *)(local_58 + 1);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *puVar7;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  return uVar12;
}


