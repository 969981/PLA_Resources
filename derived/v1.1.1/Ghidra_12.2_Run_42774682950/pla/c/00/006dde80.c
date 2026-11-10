/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dde80; name: FUN_006dde80
 */


bool FUN_006dde80(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 006dde90 to 006dde93 has its CatchHandler @ 006ddf1c */
  lVar2 = FUN_002f6a50();
  if (*(int *)(lVar2 + 8) != param_2) {
    return false;
  }
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return *(int *)(lVar2 + 0xc) == 1;
  }
  if (iVar1 == -1) {
    if ((*(int *)(lVar2 + 0xc) != -1) && (*(int *)(lVar2 + 0xc) != -1)) {
      return false;
    }
  }
  else if (iVar1 != *(int *)(lVar2 + 0xc)) {
    return false;
  }
  return *(long *)(param_1 + 2) == *(long *)(lVar2 + 0x10);
}


