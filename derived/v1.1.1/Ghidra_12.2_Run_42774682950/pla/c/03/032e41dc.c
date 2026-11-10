/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e41dc; name: FUN_032e41dc
 */


void FUN_032e41dc(undefined8 *param_1,undefined8 param_2)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  ulong local_30;
  undefined8 local_28;
  
  plVar3 = (long *)*param_1;
  if (*plVar3 == 0) {
    FUN_032c4d7c(param_2,"(null Decl)",0xffffffff);
  }
  else {
    local_28 = FUN_032e2530();
    puVar1 = (ulong *)*plVar3;
    local_30 = 0;
    if (puVar1 != (ulong *)0x0) {
      do {
        uVar2 = (uint)*puVar1;
        if ((uVar2 >> 0x10 & 1) != 0) {
          uVar2 = (uVar2 & 0xffff) - (uVar2 >> 1 & 0x5555);
          uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
          local_30 = puVar1[(ulong)((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
          goto LAB_032e4260;
        }
        if ((*puVar1 & 1) != 0) {
          local_30 = 0;
          goto LAB_032e4260;
        }
        puVar1 = (ulong *)puVar1[1];
      } while (puVar1 != (ulong *)0x0);
      local_30 = 0;
    }
LAB_032e4260:
    FUN_032c6810(param_2,"{}::{}",PTR_DAT_04389208,&local_28,&local_30);
  }
  return;
}


