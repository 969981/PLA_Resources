/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020462c; name: FUN_0020462c
 */


int FUN_0020462c(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  int local_28;
  undefined1 auStack_24 [4];
  
  local_28 = 0;
  if (param_1 == 0) {
    iVar3 = 0x62;
  }
  else {
    uVar1 = nnsslConnectionPeek(*(undefined8 *)(param_1 + 0x298),auStack_24,&local_28,1);
    uVar2 = nnResultIsFailure(uVar1);
    if ((uVar2 & 1) == 0) {
      iVar3 = 1;
      if (local_28 < 1) {
        iVar3 = -(uint)(local_28 != 0);
      }
    }
    else {
      uVar2 = FUN_00204e08(uVar1,0x1987b);
      iVar3 = -1;
      if ((uVar2 & 1) != 0) {
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}


