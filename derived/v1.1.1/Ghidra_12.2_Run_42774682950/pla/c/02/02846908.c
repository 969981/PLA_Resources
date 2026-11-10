/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02846908; name: FUN_02846908
 */


undefined8 FUN_02846908(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  uVar5 = FUN_010bcff0(*(undefined8 *)(param_1 + 0x188));
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else if (*(char *)(param_1 + 400) == '\0') {
    plVar10 = *(long **)(*(long *)(param_1 + 0x188) + 0x68);
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 10;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    local_50 = 0x31043c039627dc5;
    FUN_02c2e7d0(plVar10,&local_50,*(undefined8 *)(param_1 + 0x180));
    if (plVar10 != (long *)0x0) {
      plVar9 = plVar10 + 10;
      do {
        iVar4 = (int)*plVar9 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *(int *)plVar9 = iVar4;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    lVar6 = FUN_02c43784(*(undefined8 *)(param_1 + 0x98),"T_h_skip_00");
    if (lVar6 != 0) {
      uVar11 = *(undefined8 *)(param_1 + 0x98);
      uVar7 = FUN_02c2f268(*(undefined8 *)(param_1 + 0x180));
      FUN_010c3bc0(lVar6,uVar11,uVar7,10,0);
      lVar8 = FUN_002443dc(lVar6,"text_width_pane_name_00");
      if (((lVar8 != 0) && (*(char *)(lVar8 + 10) == '\0')) &&
         (lVar8 = FUN_02c436cc(*(undefined8 *)(param_1 + 0x98),lVar8 + (ulong)*(uint *)(lVar8 + 4)),
         lVar8 != 0)) {
        iVar4 = FUN_010c4a50(*(undefined8 *)(param_1 + 0x180),lVar6,10,0);
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
        *(float *)(lVar6 + 0x50) = (float)iVar4;
        lVar6 = FUN_002443dc(lVar8,"text_width_offset_x");
        fVar12 = 0.0;
        if ((lVar6 != 0) && (*(char *)(lVar6 + 10) == '\x02')) {
          fVar12 = *(float *)(lVar6 + (ulong)*(uint *)(lVar6 + 4));
          fVar12 = fVar12 + fVar12;
        }
        *(float *)(lVar8 + 0x50) = fVar12 + (float)iVar4;
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
      }
    }
    local_50 = 0xd3eaf21d9ddf596f;
    pcStack_48 = "A_alignment_00";
    local_40 = 0xe;
    local_38 = (long *)0x0;
    plVar10 = (long *)FUN_02c43a64(*(undefined8 *)(param_1 + 0x98),&local_50);
    if (((*PTR_DAT_04372b00 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04372b00), puVar3 = PTR_DAT_043729f0, iVar4 != 0)) {
      if (((*PTR_DAT_043729e8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar4 != 0)) {
        *(undefined8 *)puVar3 = 0;
        __cxa_guard_release(PTR_DAT_043729e8);
      }
      *(undefined **)PTR_DAT_04372b08 = puVar3;
      __cxa_guard_release(PTR_DAT_04372b00);
    }
    if (plVar10 != (long *)0x0) {
      for (plVar9 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10); plVar9 != (long *)0x0;
          plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)PTR_DAT_04372b08) goto LAB_02846af0;
      }
      plVar10 = (long *)0x0;
    }
LAB_02846af0:
    FUN_00256608(plVar10);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    uVar7 = 1;
    *(undefined1 *)(param_1 + 400) = 1;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}


