/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023a284; name: FUN_0023a284
 */


void FUN_0023a284(long *param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = FUN_00229ee8(param_2);
  if (uVar1 != 0) {
    lVar4 = 0;
    do {
      lVar2 = FUN_00229f00(param_2);
      uVar3 = FUN_00230558(param_4,lVar2 + lVar4);
      (**(code **)(*param_1 + 0x58))(param_1,uVar3);
      lVar4 = lVar4 + 0x24;
    } while (((ulong)uVar1 + (ulong)uVar1 * 8) * 4 != lVar4);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  param_1[0xb] = param_3;
  param_1[0xc] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x0023a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
  return;
}


