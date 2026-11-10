/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00877ab4; name: FUN_00877ab4
 */


void FUN_00877ab4(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  (**(code **)PTR_DAT_04378590)
            ((float)(double)param_2[4],(float)(double)param_2[5],*(undefined8 *)(param_1 + 0xb0));
  puVar3 = PTR_DAT_04378598;
  (**(code **)PTR_DAT_04378598)(*(undefined8 *)(param_1 + 0xb0),0,1,param_2 + 2);
  puVar4 = PTR_DAT_043785a0;
  (**(code **)PTR_DAT_043785a0)(*(undefined8 *)(param_1 + 0xb0),0,1,param_2 + 6);
  if ((int)param_2[1] < 2) {
    return;
  }
  iVar2 = (int)param_2[1] + -1;
  lVar1 = *param_2 + (long)iVar2 * 0x10;
  (**(code **)puVar3)(*(undefined8 *)(param_1 + 0xb0),1,iVar2);
  (**(code **)PTR_DAT_043785a8)(*(undefined8 *)(param_1 + 0xb0),1,iVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00877ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)puVar4)(*(undefined8 *)(param_1 + 0xb0),1,iVar2,lVar1 + (long)iVar2 * 8);
  return;
}


