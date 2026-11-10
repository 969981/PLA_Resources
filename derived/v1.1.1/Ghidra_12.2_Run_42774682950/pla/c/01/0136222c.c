/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0136222c; name: FUN_0136222c
 */


void FUN_0136222c(float param_1,float param_2,long param_3,undefined4 *param_4,undefined4 *param_5)

{
  long lVar1;
  undefined4 uVar2;
  
  if (param_4 != (undefined4 *)0x0) {
    lVar1 = 0x194;
    if (*(int *)(param_3 + 0x180) != 0) {
      lVar1 = 0x198;
    }
    uVar2 = FUN_01362160(*(float *)(param_3 + lVar1) + param_1);
    *param_4 = uVar2;
  }
  if (param_5 != (undefined4 *)0x0) {
    uVar2 = FUN_01362160(*(float *)(param_3 + 0x19c) + param_2);
    *param_5 = uVar2;
  }
  return;
}


