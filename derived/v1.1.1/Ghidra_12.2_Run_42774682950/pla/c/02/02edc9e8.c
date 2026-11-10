/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edc9e8; name: FUN_02edc9e8
 */


undefined4 FUN_02edc9e8(undefined8 param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  if (*param_2 == 0) {
    if ((char)param_2[0xb] == '\0') {
      puVar3 = param_3 + 2;
      if (*(long *)puVar3 != 0) {
        FUN_02edbd74(param_2 + 4,puVar3);
        uVar1 = *param_3;
        *(short *)(param_2 + 8) = (short)uVar1;
        *(ulong *)(param_2 + 6) = *(long *)(param_2 + 2) + ((ulong)uVar1 & 0xffff) * 0x18;
      }
      uVar2 = FUN_02edb45c(param_2,*(undefined4 *)(DAT_0440a128 + 0x78));
      if ((*(byte *)(param_2 + 10) >> 1 & 1) == 0) {
        FUN_02edb988(param_2);
        *param_3 = (uint)*(ushort *)(param_2 + 8);
        FUN_02edbd74(puVar3,param_2 + 4);
        return uVar2;
      }
      return uVar2;
    }
    FUN_02edb6dc(param_2);
  }
  return 2;
}


