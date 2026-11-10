/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283e338; name: FUN_0283e338
 */


void FUN_0283e338(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_3;
  lVar4 = param_2[4];
  uVar1 = FUN_0283e418(param_2,param_4);
  if ((ulong)param_2[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 * 0x30,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)*param_2 + 0xb8))();
  }
  FUN_0283e484(param_2,lVar2,uVar1,lVar3,param_4,param_5);
  *param_1 = param_2[4] + (lVar3 - lVar4 >> 4) * 0x10;
  return;
}


