/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00877788; name: FUN_00877788
 */


void FUN_00877788(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04378520;
  uVar4 = (ulong)*(byte *)((long)param_2 + 0x25);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  if (uVar4 != 0) {
    lVar3 = *param_2;
    do {
      (**(code **)puVar1)(uVar2,lVar3);
      uVar2 = *(undefined8 *)(param_1 + 0xb0);
      lVar3 = lVar3 + 8;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  (**(code **)PTR_DAT_04378528)(uVar2,(long)param_2 + 0xc);
  (**(code **)PTR_DAT_04378530)(*(undefined8 *)(param_1 + 0xb0),param_2 + 1);
                    /* WARNING: Could not recover jumptable at 0x00877828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378538)(*(undefined8 *)(param_1 + 0xb0),param_2 + 2);
  return;
}


