/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0571c; name: FUN_02f0571c
 */


void FUN_02f0571c(long *param_1)

{
  ushort *puVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = (long)(PTR_DAT_043887b8 + 0x10);
  puVar1 = (ushort *)param_1[4];
  if ((puVar1 != (ushort *)0x0) && ((ulong)*puVar1 != 0)) {
    lVar2 = (ulong)*puVar1 << 1;
    plVar3 = (long *)((long)puVar1 + ((ulong)((int)lVar2 + 5) & 0x3fffc) + 8);
    do {
      if (*plVar3 != 0) {
        FUN_02f0efb8(DAT_0440a150,*plVar3,param_1);
        *plVar3 = 0;
        (**(code **)(*(long *)param_1[3] + 0x18))();
      }
      plVar3 = plVar3 + 2;
      lVar2 = lVar2 + -2;
    } while (lVar2 != 0);
  }
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    (*DAT_0442d150)(0);
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  if (param_1[4] != 0) {
    (*DAT_0442d150)(0);
  }
  param_1[4] = 0;
  return;
}


