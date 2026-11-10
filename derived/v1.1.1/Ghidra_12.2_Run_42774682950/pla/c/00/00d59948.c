/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d59948; name: FUN_00d59948
 */


void FUN_00d59948(long *param_1,byte param_2,byte param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  
  if (0x30 < (uint)param_3 * (uint)param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar5 = (int)param_1[0xdb];
  *(int *)(param_1 + 0xdd) = iVar5;
  iVar1 = 0;
  if (iVar5 != 2) {
    iVar1 = iVar5;
  }
  lVar7 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  lVar7 = *(long *)(lVar7 + 0x8b0);
  uVar3 = *(undefined4 *)(lVar7 + 0x10);
  uVar4 = *(undefined4 *)(lVar7 + 0x14);
  puVar2 = (undefined4 *)(lVar7 + 0x20);
  if (*(int *)(lVar7 + 0x28) != 0) {
    puVar2 = (undefined4 *)(lVar7 + 0x24);
  }
  uVar6 = *puVar2;
  *(byte *)((long)param_1 + 0x6ee) = param_2;
  *(byte *)((long)param_1 + 0x6ef) = param_3;
  *(short *)((long)param_1 + 0x6ec) = (short)uVar4 + (short)uVar6 * (short)uVar3;
                    /* WARNING: Could not recover jumptable at 0x00d599ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c0))(param_1,(int)param_1[0xdb]);
  return;
}


