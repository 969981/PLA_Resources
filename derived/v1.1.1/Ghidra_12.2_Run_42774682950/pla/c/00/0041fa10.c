/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0041fa10; name: FUN_0041fa10
 */


ulong FUN_0041fa10(long *param_1,void *param_2,int *param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  code *pcVar5;
  uint *puVar6;
  
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (pcVar5 = *(code **)(*(long *)(param_4 + 0x20) + 0x30), pcVar5 != (code *)0x0)) {
    uVar3 = (*pcVar5)();
    return uVar3 & 0xffffffff;
  }
  if ((*param_4 != '\0') || (*(long *)(param_4 + 8) != 1)) {
    if (*param_1 == 0) {
      return 0xffffffff;
    }
    if (*param_4 == '\x05') {
      iVar1 = *(int *)(*param_1 + 4);
      *param_3 = iVar1;
      goto joined_r0x0041fa90;
    }
    if (*(long *)(param_4 + 8) == -4) {
      piVar4 = (int *)*param_1;
      param_1 = (long *)(piVar4 + 2);
      iVar1 = *piVar4;
      *param_3 = iVar1;
      goto joined_r0x0041fa90;
    }
  }
  iVar1 = *param_3;
joined_r0x0041fa90:
  if (iVar1 - 1U < 10) {
                    /* WARNING: Could not recover jumptable at 0x0041fac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(&UNK_0041fac4 + (ulong)(byte)(&DAT_03a046b7)[iVar1 - 1U] * 4))(0);
    return uVar3;
  }
  puVar6 = (uint *)*param_1;
  if ((*(long *)(param_4 + 0x28) == 0x800) && (((byte)puVar6[4] >> 4 & 1) != 0)) {
    if (param_2 == (void *)0x0) {
      return 0xfffffffe;
    }
    *(void **)(puVar6 + 2) = param_2;
    *puVar6 = 0;
    return 0xfffffffe;
  }
  uVar2 = *puVar6;
  if ((param_2 != (void *)0x0) && (uVar2 != 0)) {
    memcpy(param_2,*(void **)(puVar6 + 2),(long)(int)uVar2);
  }
  return (ulong)uVar2;
}


