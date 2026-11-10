/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205c6c; name: FUN_00205c6c
 */


undefined8 FUN_00205c6c(long param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x280) = 0xf;
    if (param_4 == (char *)0x0) {
      sVar1 = 0;
    }
    else {
      sVar1 = strlen(param_4);
    }
    uVar2 = FUN_0020b4c0(param_1,param_2,param_3,param_4,sVar1,1);
    if ((int)uVar2 == 0) {
      *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


