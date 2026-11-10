/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e87b38; name: FUN_02e87b38
 */


int FUN_02e87b38(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar1 = param_1[1] - iVar2;
  iVar3 = 0;
  if (iVar1 != 0) {
    DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
    iVar2 = *param_1;
    iVar3 = (int)((double)(uint)((ulong)DAT_0440a190 >> 0x21) *
                  (double)iVar1 * 4.656612875245797e-10 + 0.5);
  }
  return iVar3 + iVar2;
}


