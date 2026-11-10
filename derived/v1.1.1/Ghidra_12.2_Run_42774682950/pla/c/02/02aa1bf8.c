/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa1bf8; name: FUN_02aa1bf8
 */


/* WARNING: Removing unreachable block (ram,0x02aa1dd0) */
/* WARNING: Removing unreachable block (ram,0x02aa1df4) */
/* WARNING: Removing unreachable block (ram,0x02aa1e00) */
/* WARNING: Removing unreachable block (ram,0x02aa1de0) */
/* WARNING: Removing unreachable block (ram,0x02aa1e10) */

void FUN_02aa1bf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  puVar2 = PTR_DAT_0437a140;
  puVar1 = PTR_DAT_0437a138;
  plVar11 = *(long **)*param_1;
  plVar10 = (long *)*param_2;
  plVar8 = (long *)param_2[1];
  if (plVar10 != plVar8) {
    lVar9 = *plVar10;
    do {
      if (lVar9 != 0) {
        plVar4 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar7 = FUN_009b19b4();
          *(undefined8 *)puVar2 = uVar7;
          __cxa_guard_release(puVar1);
        }
        for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
          if (plVar4 == (long *)puVar2) {
            if (*(long *)(lVar9 + 0x1a8) == *(long *)(*plVar11 + 0x1f0)) goto LAB_02aa1cd4;
            break;
          }
        }
      }
      plVar10 = plVar10 + 1;
      if (plVar10 == plVar8) goto LAB_02aa1db8;
      lVar9 = *plVar10;
    } while( true );
  }
LAB_02aa1cd4:
  puVar2 = PTR_DAT_0437a140;
  puVar1 = PTR_DAT_0437a138;
  if ((plVar10 != plVar8) && (plVar4 = plVar10 + 1, plVar4 != plVar8)) {
    lVar9 = *plVar4;
    plVar6 = plVar10;
    if (lVar9 != 0) goto LAB_02aa1d24;
LAB_02aa1d68:
    do {
      plVar6 = (long *)*plVar10;
      *plVar10 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      lVar9 = *plVar4;
      *plVar4 = 0;
      plVar6 = plVar10 + 1;
      *plVar10 = lVar9;
      while( true ) {
        plVar4 = plVar4 + 1;
        plVar10 = plVar6;
        if (plVar4 == plVar8) goto LAB_02aa1dbc;
        lVar9 = *plVar4;
        if (lVar9 == 0) break;
LAB_02aa1d24:
        plVar5 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar7 = FUN_009b19b4();
          *(undefined8 *)puVar2 = uVar7;
          __cxa_guard_release(puVar1);
        }
        while( true ) {
          plVar10 = plVar6;
          if (plVar5 == (long *)0x0) goto LAB_02aa1d68;
          if (plVar5 == (long *)puVar2) break;
          plVar5 = (long *)*plVar5;
        }
        if (*(long *)(lVar9 + 0x1a8) != *(long *)(*plVar11 + 0x1f0)) break;
      }
    } while( true );
  }
LAB_02aa1dbc:
  plVar8 = (long *)param_2[1];
  if (plVar8 != plVar10) {
    while (plVar8 != plVar10) {
      plVar8 = plVar8 + -1;
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x18))();
      }
    }
    param_2[1] = plVar10;
  }
  return;
LAB_02aa1db8:
  plVar10 = plVar8;
  goto LAB_02aa1dbc;
}


