/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad76b8; name: FUN_00ad76b8
 */


/* WARNING: Removing unreachable block (ram,0x00ad77b0) */
/* WARNING: Removing unreachable block (ram,0x00ad77bc) */
/* WARNING: Removing unreachable block (ram,0x00ad77c8) */
/* WARNING: Removing unreachable block (ram,0x00ad77d4) */
/* WARNING: Removing unreachable block (ram,0x00ad77e8) */
/* WARNING: Removing unreachable block (ram,0x00ad77f4) */

void FUN_00ad76b8(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *local_38;
  
  plVar5 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar5 == plVar1) {
LAB_00ad76dc:
    if ((plVar5 == plVar1) || (local_38 = plVar5 + 1, local_38 == plVar1)) {
      plVar3 = plVar5;
    }
    else {
      do {
        if ((*local_38 == 0) ||
           (uVar2 = FUN_00ad7820(*local_38 + 8), plVar3 = plVar5, (uVar2 & 1) == 0)) {
          plVar3 = (long *)*plVar5;
          *plVar5 = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x18))();
          }
          lVar4 = *local_38;
          *local_38 = 0;
          plVar3 = plVar5 + 1;
          *plVar5 = lVar4;
        }
        local_38 = local_38 + 1;
        plVar5 = plVar3;
      } while (plVar1 != local_38);
    }
  }
  else {
    do {
      if ((*plVar5 != 0) && (uVar2 = FUN_00ad7820(*plVar5 + 8), (uVar2 & 1) != 0))
      goto LAB_00ad76dc;
      plVar5 = plVar5 + 1;
      plVar3 = plVar1;
    } while (plVar1 != plVar5);
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 != plVar3) {
    while (plVar5 != plVar3) {
      plVar5 = plVar5 + -1;
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x18))();
      }
    }
    param_1[1] = plVar3;
  }
  return;
}


