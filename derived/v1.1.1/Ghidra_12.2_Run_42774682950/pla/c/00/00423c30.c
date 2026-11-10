/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00423c30; name: FUN_00423c30
 */


undefined8 FUN_00423c30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t __n;
  
  if (*(int *)(param_2 + 0x11) == -1) {
    return 0;
  }
  uVar2 = FUN_0041c470(*param_1,*param_2);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_0041cbf0(*param_2);
    __n = (size_t)iVar1;
    memcpy(param_1 + 1,param_2 + 1,__n);
    memcpy(param_1 + 5,param_2 + 5,__n);
    memcpy(param_1 + 9,param_2 + 9,__n);
    memcpy(param_1 + 0xd,param_2 + 0xd,__n);
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  }
  return uVar2;
}


