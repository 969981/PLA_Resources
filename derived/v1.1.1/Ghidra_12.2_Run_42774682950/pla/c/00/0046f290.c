/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046f290; name: FUN_0046f290
 */


undefined8 FUN_0046f290(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint local_48 [2];
  long local_40;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_004001b0(&DAT_0439e998,FUN_0046f220);
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_0439e99c == 0) {
    return 0;
  }
  FUN_00400120(DAT_0439e9a8);
  local_48[0] = param_2 & 0xffff7fff;
  local_40 = param_1;
  lVar2 = FUN_00405c90(DAT_0439e9b8,local_48);
  if (lVar2 != 0) {
    if ((param_2 >> 0xf & 1) != 0) {
LAB_0046f344:
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
      goto LAB_0046f348;
    }
    iVar1 = 0xb;
    do {
      if (*(int *)(lVar2 + 4) == 0) goto LAB_0046f344;
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) break;
      local_40 = *(long *)(lVar2 + 0x10);
      lVar2 = FUN_00405c90(DAT_0439e9b8,local_48);
    } while (lVar2 != 0);
  }
  uVar3 = 0;
LAB_0046f348:
  FUN_00400160(DAT_0439e9a8);
  return uVar3;
}


