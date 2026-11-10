/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f05b58; name: FUN_02f05b58
 */


void FUN_02f05b58(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = (ulong *)*param_1;
  while (puVar2 != (ulong *)0x0) {
    *param_1 = *puVar2;
    if ((ulong *)param_1[1] == puVar2) {
      param_1[1] = 0;
    }
    if ((puVar2 < param_1[3]) || (param_1[3] + (ulong)(uint)param_1[4] * 0x18 <= puVar2)) {
      (*DAT_0442d150)(0);
    }
    else {
      *puVar2 = param_1[2];
      param_1[2] = (ulong)puVar2;
    }
    puVar2 = (ulong *)*param_1;
    *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
  }
  puVar2 = (ulong *)param_1[2];
  while (puVar2 != (ulong *)0x0) {
    puVar3 = (ulong *)*puVar2;
    if ((puVar2 < param_1[3]) ||
       (bVar1 = param_1[3] + (ulong)(uint)param_1[4] * 0x18 <= puVar2, puVar2 = puVar3, bVar1)) {
      (*DAT_0442d150)(0);
      puVar2 = puVar3;
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


