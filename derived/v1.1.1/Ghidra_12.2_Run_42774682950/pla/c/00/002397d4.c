/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002397d4; name: FUN_002397d4
 */


void FUN_002397d4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  (**(code **)(*param_1 + 0x100))();
  uVar1 = FUN_00229ee8(param_2);
  *(uint *)(param_1 + 10) = (uint)uVar1;
  param_1[9] = param_4;
  if (uVar1 != 0) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = FUN_00229f00(param_2);
      uVar3 = FUN_00230558(param_3,lVar2 + lVar4);
      *(undefined8 *)(param_1[9] + lVar5 * 8) = uVar3;
      (**(code **)(*param_1 + 0x58))(param_1,*(undefined8 *)(param_1[9] + lVar5 * 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x24;
    } while (lVar5 < (int)param_1[10]);
  }
                    /* WARNING: Could not recover jumptable at 0x00239894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
  return;
}


