/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5c060; name: FUN_01a5c060
 */


ulong FUN_01a5c060(long param_1,ulong *param_2)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *local_a8;
  ulong *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  ulong *apuStack_80 [12];
  ulong local_18;
  
  uVar8 = *(ulong *)(param_1 + 0x7a0);
  if (uVar8 != 0) {
    uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar8 - 1 & uVar7;
    }
    else if (uVar7 < uVar8) {
      uVar11 = uVar7;
    }
    else {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar7 / uVar8;
      }
      uVar11 = uVar7 - uVar11 * uVar8;
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x798) + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar13[1] == uVar7) {
            if (plVar13[2] == uVar7) goto LAB_01a5c174;
          }
          else if ((plVar13[1] & uVar8 - 1) != uVar11) goto LAB_01a5c120;
          plVar13 = (long *)*plVar13;
          uVar10 = 0;
          uVar12 = 0;
        } while (plVar13 != (long *)0x0);
        goto LAB_01a5c280;
      }
      do {
        uVar10 = plVar13[1];
        if (uVar10 == uVar7) {
          if (plVar13[2] == uVar7) goto LAB_01a5c174;
        }
        else {
          if (uVar8 <= uVar10) {
            uVar12 = 0;
            if (uVar8 != 0) {
              uVar12 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar12 * uVar8;
          }
          if (uVar10 != uVar11) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  goto LAB_01a5c120;
LAB_01a5c174:
  FUN_01a4fa84(&local_a0);
  FUN_01a4ff90(&local_a8,&local_a0);
  if (local_a0 != (ulong *)0x0) {
    puVar1 = local_a0 + 1;
    do {
      iVar6 = (int)*puVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *(int *)puVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_a0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_18 = *local_a0;
      FUN_02a44274(lVar9 + 0xd8,&local_18);
    }
  }
  if (local_a8 != (long *)0x0) {
    local_18 = local_18 & 0xffffffffffffff00;
    local_a0 = (ulong *)&LAB_028aea54;
    local_98 = FUN_028aea98;
    local_90 = &LAB_028aea9c;
    apuStack_80[0] = &local_18;
    local_88 = &LAB_028aeaa8;
    FUN_028aafe0(local_a8,local_a8 + 0x23,plVar13 + 3,&local_a0);
    pcVar5 = local_98;
    if (local_98 != (code *)0x0) {
      local_90 = (undefined1 *)0x0;
      local_88 = (undefined1 *)0x0;
      local_a0 = (ulong *)0x0;
      local_98 = (code *)0x0;
      (*pcVar5)(apuStack_80);
    }
    uVar12 = local_18 & 0xff;
    if (local_a8 != (long *)0x0) {
      lVar9 = local_a8[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_a8 + 0x20))();
      }
    }
    uVar12 = uVar12 << 8;
    uVar10 = 1;
    goto LAB_01a5c280;
  }
LAB_01a5c120:
  uVar10 = 0;
  uVar12 = 0;
LAB_01a5c280:
  return uVar12 | uVar10;
}


