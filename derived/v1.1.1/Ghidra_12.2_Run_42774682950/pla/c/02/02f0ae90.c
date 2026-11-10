/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0ae90; name: FUN_02f0ae90
 */


void FUN_02f0ae90(long param_1,undefined4 param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  long local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  if (*param_3 != 0) {
    FUN_02f0b498(param_1,param_2);
    return;
  }
  if (*(int *)(param_1 + 0x170) == 0) {
    FUN_02ef3648(DAT_0440a140,*(undefined4 *)(param_1 + 0x10),0);
    return;
  }
  puVar1 = (undefined8 *)(*DAT_0442d138)(0,*(int *)(param_1 + 0x170) << 3);
  if (puVar1 != (undefined8 *)0x0) {
    plVar3 = *(long **)(param_1 + 0x178);
    if (plVar3 != (long *)0x0) {
      if (param_4 == (undefined8 *)0x0) {
        uVar6 = 0;
        do {
          puVar1[uVar6] = plVar3[4];
          plVar3 = (long *)*plVar3;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulong)uVar5;
        } while (plVar3 != (long *)0x0);
      }
      else {
        uVar6 = 0;
        do {
          local_80 = plVar3[4];
          local_70 = 0;
          local_78 = 0;
          local_68 = 0xff;
          local_60 = 0xff;
          local_58 = 0;
          uVar2 = (**(code **)*param_4)(param_4,&local_80);
          if ((uVar2 & 1) == 0) {
            puVar1[uVar6] = plVar3[4];
            uVar6 = (ulong)((int)uVar6 + 1);
          }
          uVar5 = (uint)uVar6;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      if (uVar5 != 0) {
        uVar6 = (ulong)uVar5;
        puVar4 = puVar1;
        do {
          FUN_02f0b498(param_1,param_2,*puVar4);
          uVar6 = uVar6 - 1;
          puVar4 = puVar4 + 1;
        } while (uVar6 != 0);
      }
    }
    (*DAT_0442d150)(0,puVar1);
  }
  return;
}


