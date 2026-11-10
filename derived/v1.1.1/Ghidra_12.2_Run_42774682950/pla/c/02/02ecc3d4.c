/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecc3d4; name: FUN_02ecc3d4
 */


void FUN_02ecc3d4(undefined8 *param_1,int *param_2,ulong param_3)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar1 = (uint *)((long)param_1 + 0x2a3);
  uVar5 = *puVar1;
  if ((uVar5 >> 0xe & 1) == 0) {
    if (param_1[0x44] != 0) {
      uVar2 = FUN_02f0e5a8(param_1[0x44]);
      param_3 = param_3 & 0xffffffff;
      if ((uVar2 & 1) != 0) goto LAB_02ecc428;
      uVar5 = *puVar1;
    }
    *puVar1 = uVar5 | 0x2000;
    if (*param_2 != 0) {
      FUN_02ecc8a4(param_1,1,0x2000000,*(undefined8 *)param_2,param_2[2]);
      return;
    }
    if ((*(byte *)((long)param_1 + 0x2a2) & 0x78) == 0) {
      puVar4 = (undefined8 *)*param_1;
      uVar3 = 1;
      goto LAB_02ecc434;
    }
    if (param_1[0x43] != 0) {
      FUN_02f0f0a8(0,DAT_0440a150,param_1[0x43],0x2000000,0,4,0);
      return;
    }
    if ((param_3 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x4a) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if ((uVar5 >> 0x10 & 1) == 0) {
      *puVar1 = uVar5 & 0xfff0ffff | 0x12000;
    }
  }
LAB_02ecc428:
  puVar4 = (undefined8 *)*param_1;
  uVar3 = 0;
LAB_02ecc434:
                    /* WARNING: Could not recover jumptable at 0x02ecc440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(param_1,0,uVar3);
  return;
}


