/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bc2d0; name: FUN_013bc2d0
 */


void FUN_013bc2d0(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_3;
  lVar4 = param_2[4];
  uVar1 = FUN_013bc4e8();
  if ((ulong)param_2[1] < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar2 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 * 0x78,8);
  if (lVar2 == 0) {
    (**(code **)(*(long *)*param_2 + 0xb8))();
  }
  FUN_013bc554(param_2,lVar2,uVar1,lVar3,param_4);
  *param_1 = param_2[4] + (lVar3 - lVar4 >> 3) * 8;
  return;
}


