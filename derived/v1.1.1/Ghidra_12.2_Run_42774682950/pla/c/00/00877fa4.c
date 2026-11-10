/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00877fa4; name: FUN_00877fa4
 */


void FUN_00877fa4(undefined8 param_1,long param_2,long param_3,undefined4 param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  (**(code **)PTR_DAT_043785e8)(*(undefined8 *)(param_2 + 0xb0),0,0,0x7fffffff,0x7fffffff);
  (**(code **)PTR_DAT_04378580)(*(undefined8 *)(param_2 + 0xb0),0,0,0,uVar1,uVar2);
  if (param_5 == 3) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    uVar2 = 1;
  }
  else {
    if (param_5 != 2) {
      if (param_5 != 1) {
                    /* WARNING: Subroutine does not return */
        nn::detail::UnexpectedDefaultImpl("","",0);
      }
      uVar1 = *(undefined8 *)(param_2 + 0xb0);
      uVar2 = 1;
      uVar3 = 0;
      UNRECOVERED_JUMPTABLE = *(code **)PTR_DAT_043785f0;
      goto LAB_00878094;
    }
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    uVar2 = 0;
  }
  uVar3 = 0xffffffff;
  UNRECOVERED_JUMPTABLE = *(code **)PTR_DAT_043785f0;
LAB_00878094:
                    /* WARNING: Could not recover jumptable at 0x008780a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,uVar2,param_4,uVar3);
  return;
}


