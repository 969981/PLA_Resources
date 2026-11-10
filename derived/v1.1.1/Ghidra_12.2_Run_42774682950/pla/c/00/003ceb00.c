/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ceb00; name: FUN_003ceb00
 */


void FUN_003ceb00(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_002ef750(*(undefined8 *)(param_1 + 0x10));
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == *(long *)(param_1 + 0x40)) {
    uVar2 = lVar3 * 2;
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    *(ulong *)(param_1 + 0x40) = uVar2;
    lVar1 = FUN_002ebdc0(*(undefined8 *)(param_1 + 0x30),uVar2 << 3);
    lVar3 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x30) = lVar1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
  }
  *(long *)(param_1 + 0x38) = lVar3 + 1;
  *(undefined8 *)(lVar1 + lVar3 * 8) = param_2;
  FUN_002ef790(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x003ceb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x28))(param_1,param_2);
  return;
}


