/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3b9a4; name: FUN_02f3b9a4
 */


void FUN_02f3b9a4(undefined4 param_1,long *param_2,int param_3,ulong param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = false;
  bVar1 = false;
  switch(param_3 - 0x1000000U >> 0x18 | param_3 << 8) {
  case 1:
    bVar2 = true;
  case 0:
    *(undefined4 *)((long)param_2 + 0x4c) = param_1;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (((param_4 & 1) != 0) && (param_2[7] = 0, bVar2)) {
                    /* WARNING: Could not recover jumptable at 0x02f3ba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2,0xffffffff);
      return;
    }
    break;
  case 3:
    bVar1 = true;
  case 7:
    *(undefined4 *)(param_2 + 10) = param_1;
    (**(code **)(*param_2 + 0x28))(param_2);
    if (((param_4 & 1) != 0) && (param_2[8] = 0, bVar1)) {
                    /* WARNING: Could not recover jumptable at 0x02f3ba60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  return;
}


