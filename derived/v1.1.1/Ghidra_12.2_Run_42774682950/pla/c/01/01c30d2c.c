/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c30d2c; name: FUN_01c30d2c
 */


void FUN_01c30d2c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  uVar3 = FUN_02bcc75c(plVar2);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01c30d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,lVar1 << 3,0x10);
    return;
  }
  FUN_02bcc824(plVar2,param_2,lVar1 << 3,0x10);
  return;
}


