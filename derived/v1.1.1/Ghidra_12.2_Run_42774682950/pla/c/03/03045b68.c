/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03045b68; name: FUN_03045b68
 */


void FUN_03045b68(long param_1,ushort param_2)

{
  ushort *puVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  ulong *puVar6;
  long *plVar7;
  
  uVar4 = param_2;
  do {
    lVar5 = *(long *)(param_1 + 0x40);
    puVar6 = (ulong *)(lVar5 + (ulong)uVar4 * 0x10 + 8);
    plVar7 = (long *)(*puVar6 & 0xfffffffffffffffc);
    if (plVar7 != (long *)0x0) {
      if ((*puVar6 & 3) == 0) {
        *puVar6 = (ulong)plVar7 | 1;
        do {
          lVar3 = *plVar7;
          plVar7 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          (**(code **)(lVar3 + 8))();
        } while (plVar7 != (long *)0x0);
        *puVar6 = 0;
      }
      else {
        do {
          plVar2 = (long *)(plVar7[1] & 0xfffffffffffffffc);
          plVar7[1] = (ulong)plVar2 | 1;
          plVar7 = plVar2;
        } while (plVar2 != (long *)0x0);
      }
    }
    puVar1 = (ushort *)(lVar5 + (ulong)uVar4 * 0x10);
    uVar4 = *puVar1;
  } while (uVar4 != 0xffff);
  *puVar1 = *(ushort *)(param_1 + 0x38);
  *(ushort *)(param_1 + 0x38) = param_2;
  return;
}


