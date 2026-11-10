/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008498fc; name: FUN_008498fc
 */


void FUN_008498fc(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = FUN_00847388();
  if (lVar2 == 0) {
    return;
  }
  if ((int)param_1[0xc] == 0) {
    *(undefined4 *)((long)param_1 + 100) = 0;
  }
  else {
    lVar2 = FUN_00847424(param_1);
    uVar1 = (*(int *)(lVar2 + 0x34) + (uint)*(ushort *)(*(long *)PTR_DAT_043773c0 + 0x50) * -2) -
            0x2a;
    uVar3 = *(uint *)((long)param_1 + 100);
    if (uVar1 < *(uint *)((long)param_1 + 100)) {
      *(uint *)((long)param_1 + 100) = uVar1;
      uVar3 = uVar1;
    }
    *(uint *)((long)param_1 + 100) = uVar3 + (int)param_1[0xc];
  }
  (**(code **)(*param_1 + 0x90))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00849988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}


