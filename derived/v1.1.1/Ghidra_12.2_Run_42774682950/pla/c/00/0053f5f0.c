/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053f5f0; name: FUN_0053f5f0
 */


void FUN_0053f5f0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = *(long *)(param_1 + 0x30);
  plVar4 = (long *)(param_1 + 0x30);
  if (lVar5 != param_1) {
    do {
      param_1 = lVar5;
      plVar6 = (long *)(param_1 + 0x30);
      *plVar4 = *plVar6;
      plVar4 = plVar6;
      lVar5 = *plVar6;
    } while (*plVar6 != param_1);
  }
  iVar2 = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    plVar4 = (long *)*(long *)(param_1 + 0x38);
    while (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      if (*(uint *)((long)plVar4 + 0xc) != 0) {
        uVar1 = *(uint *)(plVar4 + 1);
        for (puVar3 = (undefined8 *)((long)plVar4 + (ulong)uVar1) +
                      (ulong)*(uint *)((long)plVar4 + 0xc) * -2;
            puVar3 < (undefined8 *)((long)plVar4 + (ulong)uVar1); puVar3 = puVar3 + 2) {
          (*(code *)*puVar3)(puVar3[1]);
        }
      }
      puVar3 = *(undefined8 **)(param_1 + 0x20);
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("alloc","external/upb\\upb/upb.h",100,"upb_free");
      }
      (*(code *)*puVar3)(puVar3,plVar4,0,0);
      plVar4 = (long *)lVar5;
    }
  }
  return;
}


