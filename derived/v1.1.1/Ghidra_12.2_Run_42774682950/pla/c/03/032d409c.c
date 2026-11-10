/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d409c; name: FUN_032d409c
 */


void FUN_032d409c(long param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  
  if (0x2000 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x032d41a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),param_2,param_3);
    return;
  }
  if (param_3 != (ulong *)0x0) {
    *param_3 = param_2;
  }
  if (param_2 < 0x281) {
    uVar2 = (uint)(byte)(&DAT_03aae89c)[param_2 + 0xf >> 4];
  }
  else {
    uVar2 = *(uint *)(&DAT_038888c0 + (param_2 - 1 >> 8 & 0xfffffffffffffc));
  }
  lVar3 = (long)(int)uVar2;
  piVar4 = (int *)(param_1 + (long)(int)uVar2 * 0x48 + 0x58);
  iVar1 = *piVar4 + -1;
  if (*piVar4 < 1) {
    lVar5 = param_1 + lVar3 * 0x48;
    (**(code **)(**(long **)(param_1 + 8) + 0x28))
              (*(long **)(param_1 + 8),lVar5 + 0x18,5,*(undefined4 *)(&DAT_03aae858 + lVar3 * 4));
    *piVar4 = 4;
    lVar3 = *(long *)(lVar5 + 0x38);
  }
  else {
    *piVar4 = iVar1;
    lVar3 = *(long *)(param_1 + lVar3 * 0x48 + (long)iVar1 * 8 + 0x18);
  }
  if (param_3 != (ulong *)0x0) {
    if (lVar3 == 0) {
      param_2 = 0;
    }
    *param_3 = param_2;
  }
  return;
}


