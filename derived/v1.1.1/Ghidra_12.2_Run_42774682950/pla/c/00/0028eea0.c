/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028eea0; name: FUN_0028eea0
 */


void FUN_0028eea0(long *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  
  *(uint *)(param_1 + 3) = param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 2;
  puVar4 = PTR_DAT_04373068;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  uVar1 = param_4 + 1;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int *)(param_1 + 8) = param_4;
  *(int *)(param_1 + 4) = param_3;
  *(uint *)((long)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar3 = uVar1;
  if (param_3 == 2) {
joined_r0x0028ef00:
    uVar5 = (ulong)uVar3;
    if (0xffff < (int)uVar3) {
      uVar6 = 2;
      goto LAB_0028ef08;
    }
  }
  else {
    uVar5 = 0;
    if (param_3 == 3) {
      uVar3 = param_4 * 3;
      goto joined_r0x0028ef00;
    }
  }
  uVar6 = 1;
LAB_0028ef08:
  *(undefined4 *)((long)param_1 + 0x1c) = uVar6;
  lVar2 = 0;
  if ((param_2 & 1) != 0) {
    lVar2 = 0xc;
  }
  *(int *)(param_1 + 5) = (int)uVar5;
  if ((param_2 & 2) != 0) {
    lVar2 = lVar2 + 0xc;
  }
  if ((param_2 & 4) != 0) {
    lVar2 = lVar2 + 8;
  }
  param_1[6] = lVar2 * (int)uVar1;
  param_1[7] = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
  return;
}


