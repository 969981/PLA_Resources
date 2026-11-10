/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d76a90; name: FUN_00d76a90
 */


void FUN_00d76a90(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x4e0);
  uVar3 = *(undefined8 *)(param_1 + 0x4e8);
  uVar1 = FUN_02bcc75c(param_2);
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x18))(param_2,uVar2,uVar3,0x1000);
  }
  else {
    FUN_02bcc824(param_2,uVar2,uVar3,0x1000);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x4d0);
  uVar2 = *(undefined8 *)(param_1 + 0x4d8);
  uVar1 = FUN_02bcc75c(param_2);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00d76b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2,uVar3,uVar2,0x1000);
    return;
  }
  FUN_02bcc824(param_2,uVar3,uVar2,0x1000);
  return;
}


