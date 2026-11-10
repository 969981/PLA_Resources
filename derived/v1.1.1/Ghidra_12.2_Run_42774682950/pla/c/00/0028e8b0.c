/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028e8b0; name: FUN_0028e8b0
 */


void FUN_0028e8b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  bVar2 = *(byte *)(param_1 + 0x4d);
  if ((ulong)bVar2 != 0) {
    uVar4 = 0;
    param_4 = (ulong)*(uint *)(param_1 + 0x48) + param_4;
    do {
      *(ulong *)(*(long *)(param_1 + 0x28) + uVar4 * 8) = *(long *)(param_1 + 0x20) + uVar4 * 0x48;
      puVar1 = (uint *)(*(long *)(param_1 + 0x30) + uVar4 * 0x10);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar4 * 8);
      FUN_008772a4(uVar3);
      puVar1[1] = 4;
      FUN_008772c0(uVar3,param_2,puVar1,param_3,param_4,*puVar1);
      FUN_0028ed80(uVar3,"g3d_vertex");
      uVar4 = uVar4 + 1;
      param_4 = ((ulong)*puVar1 + 7 & 0x1fffffff8) + param_4;
    } while (uVar4 != bVar2);
  }
  return;
}


