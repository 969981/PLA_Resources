/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eefa1c; name: FUN_02eefa1c
 */


void FUN_02eefa1c(long *param_1)

{
  bool bVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  
  lVar3 = *param_1;
  while (lVar3 != 0) {
    FUN_02ef1930(param_1,lVar3,0);
    lVar3 = *param_1;
  }
  puVar2 = (ulong *)param_1[2];
  while (puVar2 != (ulong *)0x0) {
    puVar4 = (ulong *)*puVar2;
    if ((puVar2 < (ulong)param_1[3]) ||
       (bVar1 = param_1[3] + (ulong)*(uint *)(param_1 + 4) * 0x10 <= puVar2, puVar2 = puVar4, bVar1)
       ) {
      (*DAT_0442d150)(0);
      puVar2 = puVar4;
    }
  }
  if (param_1[3] != 0) {
    (*DAT_0442d150)(0);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


