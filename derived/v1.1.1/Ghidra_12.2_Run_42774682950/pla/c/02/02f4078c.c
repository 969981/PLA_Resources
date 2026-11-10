/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4078c; name: FUN_02f4078c
 */


bool FUN_02f4078c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  do {
    uVar3 = FUN_02f4070c(param_1,param_2);
    *param_3 = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = FUN_02f404bc(param_1);
    uVar1 = 3;
    if ((uVar3 & 1) == 0) {
      uVar1 = ~uVar2 & 1;
    }
  } while (uVar1 == 0);
  return uVar1 != 1;
}


