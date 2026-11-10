/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006190c8; name: FUN_006190c8
 */


void FUN_006190c8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  local_30 = 1000000;
                    /* try { // try from 006190ec to 006190f7 has its CatchHandler @ 0061913c */
  lVar1 = FUN_0061915c(&local_30,param_1 + 0x20,&local_30);
  lVar2 = (long)(*(double *)(param_1 + 0x18) * (double)*(long *)(param_1 + 0x10));
  lVar3 = *(long *)(param_1 + 8) * 1000000;
  if (lVar2 <= lVar3) {
    lVar3 = lVar2;
  }
  *(long *)(param_1 + 0x10) = lVar3;
  *(long *)(param_1 + 0x9e8) = *(long *)(param_1 + 0x9e8) + lVar1 / 1000000;
  return;
}


