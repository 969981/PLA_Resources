/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3ba8c; name: FUN_02f3ba8c
 */


void FUN_02f3ba8c(undefined4 param_1,long param_2,int param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  
  uVar1 = param_3 - 0x1000000U >> 0x18 | param_3 << 8;
  if (uVar1 < 8) {
    bVar3 = false;
    bVar2 = false;
    plVar4 = (long *)(param_2 + -0x28);
    switch(uVar1) {
    case 1:
      bVar3 = true;
    case 0:
      *(undefined4 *)(param_2 + 0x24) = param_1;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      if (((param_4 & 1) != 0) && (*(undefined8 *)(param_2 + 0x10) = 0, bVar3)) {
                    /* WARNING: Could not recover jumptable at 0x02f3bb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4,0xffffffff);
        return;
      }
      break;
    case 3:
      bVar2 = true;
    case 7:
      *(undefined4 *)(param_2 + 0x28) = param_1;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      if (((param_4 & 1) != 0) && (*(undefined8 *)(param_2 + 0x18) = 0, bVar2)) {
                    /* WARNING: Could not recover jumptable at 0x02f3bb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))(plVar4);
        return;
      }
    }
  }
  return;
}


