/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00450e90; name: FUN_00450e90
 */


undefined8 FUN_00450e90(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  size_t __n;
  
  if (param_3 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    uVar1 = (int)param_3 * 8;
    if (CARRY4(*(uint *)(param_1 + 0x20),uVar1)) {
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x24) = iVar4;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + uVar1;
    *(int *)(param_1 + 0x24) = iVar4 + (int)(param_3 >> 0x1d);
    uVar3 = (ulong)*(uint *)(param_1 + 0x68);
    if (*(uint *)(param_1 + 0x68) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x28);
      if ((uVar3 + param_3 | param_3) < 0x40) {
        memcpy((void *)((long)puVar2 + uVar3),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      __n = 0x40 - uVar3;
      memcpy((void *)((long)puVar2 + uVar3),param_2,__n);
      FUN_00451270(param_1,puVar2,1);
      param_2 = (void *)((long)param_2 + __n);
      param_3 = param_3 - __n;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    if (param_3 >> 6 != 0) {
      FUN_00451270(param_1,param_2);
      param_2 = (void *)((long)param_2 + (param_3 & 0xffffffffffffffc0));
      param_3 = param_3 - (param_3 & 0xffffffffffffffc0);
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      memcpy((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}


