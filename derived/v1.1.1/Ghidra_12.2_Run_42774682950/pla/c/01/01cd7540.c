/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd7540; name: FUN_01cd7540
 */


/* WARNING: Removing unreachable block (ram,0x01cd7630) */
/* WARNING: Removing unreachable block (ram,0x01cd7654) */
/* WARNING: Removing unreachable block (ram,0x01cd7660) */
/* WARNING: Removing unreachable block (ram,0x01cd7640) */
/* WARNING: Removing unreachable block (ram,0x01cd7670) */

void FUN_01cd7540(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)*param_1;
  plVar6 = (long *)*param_2;
  plVar1 = (long *)param_2[1];
  if ((plVar6 != plVar1) && (uVar2 = FUN_01cd76a8(&local_38,*plVar6), (uVar2 & 1) == 0)) {
    do {
      if (plVar1 + -1 == plVar6) {
        plVar5 = plVar1;
        goto LAB_01cd75c4;
      }
      plVar5 = plVar6 + 1;
      plVar6 = plVar6 + 1;
      uVar2 = FUN_01cd76a8(&local_38,*plVar5);
    } while ((uVar2 & 1) == 0);
  }
  plVar5 = plVar6;
  if (plVar6 != plVar1) {
    while( true ) {
      plVar6 = plVar6 + 1;
      if (plVar6 == plVar1) break;
      uVar2 = FUN_01cd76a8(&local_38,*plVar6);
      if ((uVar2 & 1) == 0) {
        plVar3 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x18))();
        }
        lVar4 = *plVar6;
        *plVar6 = 0;
        *plVar5 = lVar4;
        plVar5 = plVar5 + 1;
      }
    }
  }
LAB_01cd75c4:
  plVar6 = (long *)param_2[1];
  if (plVar6 != plVar5) {
    while (plVar6 != plVar5) {
      plVar6 = plVar6 + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
      }
    }
    param_2[1] = plVar5;
  }
  return;
}


