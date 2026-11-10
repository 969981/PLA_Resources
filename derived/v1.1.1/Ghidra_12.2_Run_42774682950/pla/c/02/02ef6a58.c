/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6a58; name: FUN_02ef6a58
 */


void FUN_02ef6a58(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  char local_28 [4];
  undefined1 auStack_24 [4];
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 != param_2) {
    if (iVar1 != 0) {
      lVar2 = FUN_02ef7dac(param_1 + 0x60,iVar1,local_28);
      if ((lVar2 != 0) && (local_28[0] != '\0')) {
        iVar1 = *(int *)(lVar2 + 4) + -1;
        *(int *)(lVar2 + 4) = iVar1;
        if (iVar1 == 0) {
          FUN_02ef6ee8(param_1 + 0x60,*(undefined4 *)(param_1 + 0xa0));
        }
      }
    }
    if ((param_2 != 0) && (lVar2 = FUN_02ef7d40(param_1 + 0x60,param_2,auStack_24), lVar2 != 0)) {
      *(int *)(lVar2 + 4) = *(int *)(lVar2 + 4) + 1;
    }
    *(int *)(param_1 + 0xa0) = param_2;
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  return;
}


