/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee21dc; name: FUN_02ee21dc
 */


float FUN_02ee21dc(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_24;
  
  uVar1 = *(uint *)(param_2 + 0x58);
  if (uVar1 == 0) {
    fVar5 = 0.0;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x50);
    fVar5 = 0.0;
    lVar3 = lVar2;
    do {
      if (*(int *)(lVar3 + 4) == param_3) {
        local_24 = *(undefined4 *)(lVar3 + 0x18);
        fVar4 = (float)FUN_02e74568(param_1,lVar3 + 8,&local_24);
        *(undefined4 *)(lVar3 + 0x18) = local_24;
        fVar5 = fVar4 + fVar5;
        lVar2 = *(long *)(param_2 + 0x50);
        uVar1 = *(uint *)(param_2 + 0x58);
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != lVar2 + (ulong)uVar1 * 0x20);
  }
  return fVar5;
}


