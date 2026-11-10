/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa2320; name: FUN_02aa2320
 */


/* WARNING: Removing unreachable block (ram,0x02aa24f0) */
/* WARNING: Removing unreachable block (ram,0x02aa2514) */
/* WARNING: Removing unreachable block (ram,0x02aa2520) */
/* WARNING: Removing unreachable block (ram,0x02aa2500) */
/* WARNING: Removing unreachable block (ram,0x02aa2530) */

void FUN_02aa2320(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  puVar3 = PTR_DAT_04388098;
  puVar2 = PTR_DAT_04388090;
  plVar10 = *(long **)*param_1;
  plVar8 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if (plVar8 != plVar1) {
    lVar9 = *plVar8;
    do {
      if (lVar9 != 0) {
        plVar5 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          uVar7 = FUN_009b19b4();
          *(undefined8 *)puVar3 = uVar7;
          __cxa_guard_release(puVar2);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)puVar3) {
            if (*(long *)(lVar9 + 0x1a8) == *(long *)(*plVar10 + 0x1f0)) goto LAB_02aa2404;
            break;
          }
        }
      }
      plVar8 = plVar8 + 1;
      if (plVar8 == plVar1) goto LAB_02aa23fc;
      lVar9 = *plVar8;
    } while( true );
  }
LAB_02aa2404:
  puVar3 = PTR_DAT_04388098;
  puVar2 = PTR_DAT_04388090;
  plVar5 = plVar8;
  if (plVar8 != plVar1) {
joined_r0x02aa2414:
    plVar8 = plVar8 + 1;
    if (plVar8 != plVar1) {
      lVar9 = *plVar8;
      if (lVar9 != 0) {
        plVar6 = (long *)(*(code *)**(undefined8 **)(lVar9 + 8))((undefined8 *)(lVar9 + 8));
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
          uVar7 = FUN_009b19b4();
          *(undefined8 *)puVar3 = uVar7;
          __cxa_guard_release(puVar2);
        }
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)puVar3) {
            if (*(long *)(lVar9 + 0x1a8) == *(long *)(*plVar10 + 0x1f0)) goto joined_r0x02aa2414;
            break;
          }
        }
      }
      plVar6 = (long *)*plVar5;
      *plVar5 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      lVar9 = *plVar8;
      *plVar8 = 0;
      *plVar5 = lVar9;
      plVar5 = plVar5 + 1;
      goto joined_r0x02aa2414;
    }
  }
LAB_02aa24dc:
  plVar8 = (long *)param_2[1];
  if (plVar8 != plVar5) {
    while (plVar8 != plVar5) {
      plVar8 = plVar8 + -1;
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x18))();
      }
    }
    param_2[1] = plVar5;
  }
  return;
LAB_02aa23fc:
  plVar5 = plVar1;
  goto LAB_02aa24dc;
}


