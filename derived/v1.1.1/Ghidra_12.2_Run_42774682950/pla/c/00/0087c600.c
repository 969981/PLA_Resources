/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087c600; name: FUN_0087c600
 */


void FUN_0087c600(undefined8 param_1,byte *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  (**(code **)PTR_DAT_04378ca0)();
  uVar1 = *(ushort *)(param_2 + 6);
  uVar2 = uVar1 >> 4 & 3;
  if (uVar2 == 2) {
    iVar4 = 5;
    if ((uVar1 & 3) != 2) {
      iVar4 = 1;
    }
    iVar5 = 3;
  }
  else {
    if (uVar2 != 1) goto LAB_0087c7ac;
    iVar4 = (uint)((uVar1 & 3) == 2) << 2;
    iVar5 = 2;
  }
  uVar2 = uVar1 >> 2 & 3;
  if ((uVar1 & 3) != 1) {
    iVar5 = iVar4;
  }
  if (uVar2 == 1) {
    uVar3 = 0;
  }
  else {
    if (uVar2 != 2) {
LAB_0087c7ac:
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl("","",0);
    }
    uVar3 = 1;
  }
  (**(code **)PTR_DAT_04378ca8)(param_1,iVar5,uVar3);
  (**(code **)PTR_DAT_04378cb0)
            (param_1,*(undefined4 *)(&DAT_03a752b8 + (ulong)*param_2 * 4),
             *(undefined4 *)(&DAT_03a752b8 + (ulong)param_2[1] * 4),
             *(undefined4 *)(&DAT_03a752b8 + (ulong)param_2[2] * 4));
  (**(code **)PTR_DAT_04378cb8)(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_1)
  ;
  (**(code **)PTR_DAT_04378cc0)(*(undefined4 *)(param_2 + 0x10),param_1);
  (**(code **)PTR_DAT_04378cc8)
            (param_1,*(ushort *)(param_2 + 6) >> 7 & 1,
             *(undefined4 *)(&DAT_03888780 + (ulong)param_2[3] * 4));
  (**(code **)PTR_DAT_04378cd0)(param_1,&UNK_03a752f0 + (ulong)param_2[4] * 0x10);
  uVar1 = *(ushort *)(param_2 + 6);
  if ((uVar1 >> 6 & 1) != 0) {
    uVar6 = NEON_ucvtf((uint)param_2[5]);
    (**(code **)PTR_DAT_04378ce8)(uVar6,param_1);
    uVar1 = *(ushort *)(param_2 + 6);
  }
                    /* WARNING: Could not recover jumptable at 0x0087c7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04378cf0)
            (param_1,*(undefined4 *)(&DAT_03a752e4 + (ulong)(uVar1 >> 8 & 3) * 4));
  return;
}


