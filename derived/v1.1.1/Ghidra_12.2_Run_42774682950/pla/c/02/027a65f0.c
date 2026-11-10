/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a65f0; name: FUN_027a65f0
 */


void FUN_027a65f0(long param_1,undefined4 param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 local_34 [2];
  
  if ((param_4 & 1) == 0) {
    uVar8 = 0;
    do {
      local_34[0] = 0;
      FUN_027a66f0(param_2,local_34,uVar8 & 0xffffffff,param_3,8,0);
      *(undefined2 *)(param_1 + uVar8 * 2) = local_34[0];
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x100);
  }
  else {
    uVar8 = 0;
    do {
      local_34[0] = 0;
      FUN_027a66f0(param_2,local_34,uVar8,param_3,8,0);
      uVar3 = FUN_027a6780(local_34[0],param_2);
      uVar4 = 0x80;
      uVar5 = 1;
      uVar7 = 1;
      uVar6 = uVar8;
      do {
        uVar7 = uVar7 | uVar4;
        uVar1 = (uint)uVar6 & uVar7 & 0xffff;
        bVar2 = uVar4 != uVar1;
        uVar4 = uVar4 >> 1;
        if (uVar5 != uVar1 && bVar2) {
          uVar7 = 0;
        }
        uVar6 = (ulong)(uVar7 ^ (uint)uVar6);
        uVar7 = uVar5 << 1;
        uVar5 = uVar7 & 0xfffe;
      } while (uVar5 < uVar4);
      uVar5 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar5;
      *(undefined2 *)(param_1 + (uVar6 & 0xffff) * 2) = uVar3;
    } while ((uVar5 & 0xffff) < 0x100);
  }
  return;
}


