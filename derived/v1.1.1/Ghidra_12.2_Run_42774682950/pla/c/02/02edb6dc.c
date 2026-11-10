/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edb6dc; name: FUN_02edb6dc
 */


void FUN_02edb6dc(long param_1)

{
  long *plVar2;
  long *plVar1;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar1 = *(long **)(param_1 + 0x30);
    do {
      plVar2 = plVar1 + 1;
      lVar3 = *(long *)(*plVar1 + 0x160);
      fVar4 = *(float *)(param_1 + 0x60);
      fVar5 = *(float *)(param_1 + 100);
      *(float *)(lVar3 + 4) = *(float *)(param_1 + 0x5c) + *(float *)(lVar3 + 4);
      *(float *)(lVar3 + 8) = fVar4 + *(float *)(lVar3 + 8);
      *(float *)(lVar3 + 0xc) = fVar5 + *(float *)(lVar3 + 0xc);
      plVar1 = plVar2;
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 100);
  return;
}


