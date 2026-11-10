/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f48410; name: FUN_02f48410
 */


int FUN_02f48410(undefined8 param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_02f3c6c0(param_1,0);
  if (lVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(long *)(lVar1 + 0x100) + (ulong)*(uint *)(lVar1 + 0x108) * 0x10 + -0xc) -
            *(int *)(*(long *)(lVar1 + 0x100) + 4);
  }
  if (param_2 <= param_3 - iVar2) {
    param_2 = param_3 - iVar2;
  }
  return param_2;
}


