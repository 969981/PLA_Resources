/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030028ec; name: FUN_030028ec
 */


void FUN_030028ec(long *param_1,undefined8 param_2,ushort *param_3,undefined4 *param_4)

{
  ushort uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_030029b0(param_1,param_2,*(int *)((long)param_1 + 0xc) * 2 + 2);
  }
  iVar3 = 1;
  *param_4 = 1;
  uVar4 = (uint)*param_3 * -0x61c8864f;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar2 = (ulong)((uVar4 >> 0x10 | uVar4 << 0x10) & *(uint *)((long)param_1 + 0xc));
  uVar1 = *(ushort *)(*param_1 + uVar2 * 0x10);
  uVar4 = (uint)uVar1;
  if (uVar1 != 0xffff) {
    do {
      if (*param_3 == uVar4) {
        iVar3 = 0;
        *param_4 = 0;
        break;
      }
      uVar2 = (ulong)((int)uVar2 + 1U & *(uint *)((long)param_1 + 0xc));
      uVar4 = (uint)*(ushort *)(*param_1 + uVar2 * 0x10);
      iVar3 = 1;
    } while (uVar4 != 0xffff);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
  return;
}


