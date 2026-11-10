/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01813ab8; name: FUN_01813ab8
 */


void FUN_01813ab8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  float *pfVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  undefined1 in_q3 [16];
  float local_54;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_28;
  
  fVar13 = in_q3._4_4_;
  FUN_01813750(&local_28);
  plVar6 = local_28;
  puVar5 = PTR_DAT_043794b8;
  puVar4 = PTR_DAT_043794b0;
  if (local_28 != (long *)0x0) {
    local_50 = 0xcf3a388997c131d3;
    pcStack_48 = "FIELD_HEIGHT";
    local_40 = 0xc;
    local_38 = (long *)0x0;
    lVar11 = *(long *)(param_1 + 0x1a8);
    piVar1 = (int *)(lVar11 + 0xc);
    iVar9 = *(int *)(lVar11 + 0xc);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar11 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar7 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
              uVar8 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar8;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)PTR_DAT_043794c8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar5 = PTR_DAT_043794c8;
          __cxa_guard_release(puVar4);
        }
        for (; plVar12 != (long *)puVar5; plVar12 = (long *)*plVar12) {
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar7;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      iVar9 = iVar7;
    } while (cVar2 != '\0');
    lVar11 = *(long *)(lVar11 + 0x18);
    plVar12 = (long *)0x0;
    if (lVar11 != 0) {
      plVar12 = (long *)(lVar11 + -0x50);
    }
    (**(code **)(*plVar12 + 0x40))(plVar12);
    local_54 = fVar13;
    pfVar10 = (float *)&DAT_039c72dc;
    if (fVar13 <= 10000.0) {
      pfVar10 = &local_54;
    }
    if (fVar13 < 0.0) {
      pfVar10 = (float *)&DAT_039c72d8;
    }
    (**(code **)(*plVar6 + 0xf8))(*pfVar10,plVar6,&local_50,0);
    if (lVar11 != 0) {
      lVar11 = plVar12[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      lVar11 = local_28[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


