/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dbb4f8; name: FUN_02dbb4f8
 */


void FUN_02dbb4f8(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 *local_50;
  undefined8 local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = PTR_DAT_04379498;
  lVar15 = *(long *)(param_2 + 8);
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar5 = PTR_DAT_043794a8;
  plVar16 = (long *)PTR_DAT_043794a0;
  uVar8 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar8;
  FUN_02a44e0c(&local_50,uVar8,lVar15);
  if (local_50 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)local_50[2];
    puVar9 = local_50;
    if (puVar13 == (undefined8 *)0x0) {
LAB_02dbb594:
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar7 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      puVar9 = (undefined8 *)PTR_DAT_04388580;
      pbVar10 = PTR_DAT_04388578;
      if ((*PTR_DAT_04388578 & 1) != 0) goto LAB_02dbb57c;
      iVar7 = __cxa_guard_acquire(PTR_DAT_04388578);
      puVar9 = (undefined8 *)PTR_DAT_04388580;
      pbVar10 = PTR_DAT_04388578;
      if (iVar7 == 0) goto LAB_02dbb57c;
      if (((*PTR_DAT_04379d10 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379d10), iVar7 != 0)) {
        if (((*PTR_DAT_04379d20 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar7 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
            uVar8 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar8;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_04379d20);
        }
        *(undefined **)PTR_DAT_04379d18 = PTR_DAT_04379d28;
        __cxa_guard_release(PTR_DAT_04379d10);
      }
      puVar9 = (undefined8 *)PTR_DAT_04388580;
      *(undefined **)PTR_DAT_04388580 = PTR_DAT_04379d18;
      __cxa_guard_release(PTR_DAT_04388578);
      pbVar10 = PTR_DAT_04388578;
      if (puVar13 != puVar9) {
        do {
          puVar13 = (undefined8 *)*puVar13;
          if (puVar13 == (undefined8 *)0x0) {
            puVar9 = local_50;
            if (local_50 == (undefined8 *)0x0) {
              return;
            }
            goto LAB_02dbb594;
          }
LAB_02dbb57c:
        } while (puVar13 != puVar9);
      }
      if (local_50 == (undefined8 *)0x0) {
        return;
      }
      if (*(int *)((long)local_50 + 0xc) != 0) {
        piVar1 = (int *)((long)local_50 + 0xc);
        iVar7 = *(int *)((long)local_50 + 0xc);
        do {
          while( true ) {
            plVar14 = (long *)local_50[2];
            if (((*pbVar10 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04388578), pbVar10 = PTR_DAT_04388578,
               puVar9 = (undefined8 *)PTR_DAT_04388580, iVar6 != 0)) {
              if (((*PTR_DAT_04379d10 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d10), iVar6 != 0)) {
                if (((*PTR_DAT_04379d20 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(PTR_DAT_04379d20), iVar6 != 0)) {
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
                    uVar8 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar8;
                    __cxa_guard_release(PTR_DAT_043794d0);
                  }
                  *(undefined **)PTR_DAT_04379d28 = PTR_DAT_043794d8;
                  __cxa_guard_release(PTR_DAT_04379d20);
                }
                *(undefined **)PTR_DAT_04379d18 = PTR_DAT_04379d28;
                __cxa_guard_release(PTR_DAT_04379d10);
              }
              puVar9 = (undefined8 *)PTR_DAT_04388580;
              *(undefined **)PTR_DAT_04388580 = PTR_DAT_04379d18;
              pbVar10 = PTR_DAT_04388578;
              __cxa_guard_release(PTR_DAT_04388578);
              plVar16 = (long *)PTR_DAT_043794a0;
            }
            while( true ) {
              if (plVar14 == (long *)0x0) goto LAB_02dbb854;
              if (plVar14 == puVar9) break;
              plVar14 = (long *)*plVar14;
            }
            iVar6 = *piVar1;
            if (iVar6 == iVar7) break;
            ClearExclusiveLocal();
            iVar7 = iVar6;
            if (iVar6 == 0) goto LAB_02dbb854;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = local_50[3];
            if (lVar11 != 0) {
              plVar14 = (long *)*param_1;
              *param_1 = 0;
              if (plVar14 != (long *)0x0) {
                lVar12 = plVar14[0xb];
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
                  (**(code **)(*plVar14 + 0x20))();
                }
              }
              *param_1 = lVar11 + -0x50;
              param_1[1] = lVar15;
            }
            break;
          }
          iVar7 = iVar6;
        } while (iVar6 != 0);
      }
LAB_02dbb854:
      piVar1 = (int *)(local_50 + 1);
      do {
        iVar7 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puVar9 = local_50;
      } while (cVar2 != '\0');
    }
    if (iVar7 == 0) {
      puVar9[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *plVar16;
      *(long *)puVar5 = lVar15;
      local_48 = *puVar9;
      FUN_02a44274(lVar15 + 0xd8,&local_48);
    }
  }
  return;
}


