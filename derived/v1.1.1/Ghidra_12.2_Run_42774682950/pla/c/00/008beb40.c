/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008beb40; name: FUN_008beb40
 */


void FUN_008beb40(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0099c458(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28),param_1 + 0x7b);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_00923c00(**(undefined8 **)(param_1 + 0x70));
    uVar1 = FUN_00935284(uVar3,*(undefined1 *)(param_1 + 0x7b));
    FUN_00995bd0(*(undefined8 *)(**(long **)(param_1 + 0x70) + 0x28),*(undefined1 *)(param_1 + 0x7b)
                 ,uVar1,0,1,1);
    return;
  }
  return;
}


