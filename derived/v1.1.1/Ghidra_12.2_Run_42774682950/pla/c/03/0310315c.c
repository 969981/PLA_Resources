/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0310315c; name: FUN_0310315c
 */


void FUN_0310315c(long *param_1)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  
  plVar7 = (long *)(*(ulong *)(*param_1 + 0x6c8) & 0xfffffffffffffffc);
  if (plVar7 != (long *)0x0) {
    puVar2 = (ulong *)(*param_1 + 0x6c8);
    puVar9 = puVar2;
    do {
      while( true ) {
        puVar4 = (ulong *)(plVar7 + 1);
        plVar8 = (long *)(*puVar4 & 0xfffffffffffffffc);
        if ((long *)plVar7[2] == param_1) break;
joined_r0x031031e4:
        plVar7 = plVar8;
        puVar9 = puVar4;
        if (plVar8 == (long *)0x0) goto LAB_031031e8;
      }
      if ((*(byte *)puVar2 & 3) == 0) {
        *puVar9 = *puVar9 & 3 | (ulong)plVar8;
        (**(code **)(*plVar7 + 8))();
        puVar4 = puVar9;
        goto joined_r0x031031e4;
      }
      *puVar4 = (ulong)plVar8 | 1;
      plVar7 = plVar8;
      puVar9 = puVar4;
    } while (plVar8 != (long *)0x0);
  }
LAB_031031e8:
  lVar5 = param_1[1];
  if ((int)param_1[5] != 0) {
    uVar1 = *(int *)((long)param_1 + 0x2c) + 1;
    uVar3 = *(uint *)(lVar5 + 8);
    uVar6 = 0;
    while( true ) {
      if ((~uVar3 & 0xffffff) != 0) {
        do {
          FUN_031032a0(param_1,uVar3);
          do {
            uVar6 = uVar6 + 1;
            if (uVar1 <= uVar6) {
              return;
            }
            uVar3 = *(uint *)(lVar5 + (ulong)uVar6 * 0x10 + 8);
          } while ((~uVar3 & 0xffffff) == 0);
        } while( true );
      }
      uVar6 = uVar6 + 1;
      if (uVar1 <= uVar6) break;
      uVar3 = *(uint *)(lVar5 + (ulong)uVar6 * 0x10 + 8);
    }
  }
  return;
}


