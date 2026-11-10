/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0261a900; name: FUN_0261a900
 */


uint FUN_0261a900(undefined8 param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  FUN_01a50850(local_60);
  puVar5 = local_60[0];
  puVar7 = PTR_DAT_0437a408;
  puVar6 = PTR_DAT_0437a400;
  if (local_60[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_60[0] + 0xc);
      iVar10 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar14 = (long *)puVar5[2];
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar12 = FUN_009cdcc0();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_0261acc8;
          if (plVar14 == (long *)puVar7) break;
          plVar14 = (long *)*plVar14;
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
            lVar13 = puVar5[3];
            plVar14 = (long *)0x0;
            puVar5 = local_60[0];
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x0261a9c8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_0261acc8:
    plVar14 = (long *)0x0;
    puVar5 = local_60[0];
joined_r0x0261a9c8:
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *puVar5;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar11 = (long *)FUN_028dd088(plVar14);
      plVar11 = (long *)(**(code **)(*plVar11 + 0x18))();
      lVar13 = *plVar11;
      plVar11 = (long *)plVar11[3];
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      bVar4 = false;
      if (lVar13 < -0x3875f4ee5179e886) {
        if (((lVar13 == -0x6cbac49a08cfadae) || (lVar13 == -0x6d637e08a0d82965)) ||
           (lVar13 == -0x6cbac59a08cfaf61)) goto LAB_0261aa7c;
      }
      else if (lVar13 < 0x4c79a8fc77abe1ca) {
        if (lVar13 < 0x15c1996152f8af8d) {
          if (lVar13 < 0x1448204959ada12e) {
            if ((lVar13 == -0x38573ef1f59c8a10) || (lVar13 == -0x3875f4ee5179e886))
            goto LAB_0261aa7c;
          }
          else if ((lVar13 == 0x1448204959ada12e) || (lVar13 == 0x158191e927b23128))
          goto LAB_0261aa7c;
        }
        else if (((lVar13 == 0x22ad90ba1163eb79) || (lVar13 == 0x15c1996152f8af8d)) ||
                (lVar13 == 0x1773a31e4c3a6999)) goto LAB_0261aa7c;
      }
      else if (lVar13 < 0x79b6829c9ae7608d) {
        if ((lVar13 == 0x658964dd4205fd4c) || (lVar13 == 0x4c79a8fc77abe1ca)) {
LAB_0261aa7c:
          bVar4 = true;
        }
      }
      else if ((lVar13 == 0x7cff743f6cd37817) || (lVar13 == 0x79b6829c9ae7608d)) goto LAB_0261aa7c;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      lVar13 = plVar14[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (bVar4) {
        uVar8 = 1;
        goto LAB_0261a938;
      }
    }
  }
  uVar8 = FUN_01a51640(param_1);
LAB_0261a938:
  return uVar8 & 1;
}


