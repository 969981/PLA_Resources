/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c607cc; name: FUN_02c607cc
 */


undefined4 FUN_02c607cc(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),0);
  uVar2 = 0;
  if (iVar1 != param_2) {
    uVar2 = 1;
    iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),1);
    if (iVar1 != param_2) {
      uVar2 = 2;
      iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),2);
      if (iVar1 != param_2) {
        iVar1 = FUN_02c6b1c0(*(undefined8 *)(param_1 + 0x98),3);
        uVar2 = 3;
        if (iVar1 != param_2) {
          uVar2 = 4;
        }
        return uVar2;
      }
    }
  }
  return uVar2;
}


