/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00877958; name: FUN_00877958
 */


void FUN_00877958(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      uVar1 = *(undefined4 *)(param_2 + 4);
      goto LAB_00877990;
    }
  }
  uVar1 = FUN_0087c028(param_3);
LAB_00877990:
                    /* WARNING: Could not recover jumptable at 0x008779ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378578)(*(undefined8 *)(param_1 + 0xb0),uVar2,uVar1);
  return;
}


