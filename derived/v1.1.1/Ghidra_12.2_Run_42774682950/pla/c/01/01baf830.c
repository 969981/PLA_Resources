/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01baf830; name: FUN_01baf830
 */


undefined8 FUN_01baf830(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 3000);
  param_2 = param_2 & 0xffffffff;
  if (param_2 < (ulong)((*(long *)(param_1 + 0xbc0) - lVar6 >> 4) * -0x5555555555555555)) {
    puVar2 = (undefined8 *)(lVar6 + param_2 * 0x30);
    *(undefined8 *)(param_1 + 0xb60) = *puVar2;
    *(undefined8 *)(param_1 + 0xb68) = puVar2[1];
    *(undefined8 *)(param_1 + 0xb70) = puVar2[2];
    plVar5 = (long *)puVar2[3];
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar1 = *(long **)(param_1 + 0xb78);
    *(long **)(param_1 + 0xb78) = plVar5;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar3 = lVar6 + param_2 * 0x30;
    puVar2 = (undefined8 *)(lVar3 + 0x20);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(param_1 + 0xb80) = *puVar2;
    *(undefined8 *)(param_1 + 0xb88) = uVar4;
    if ((*(byte *)(param_1 + 0xb50) & 1) == 0) {
      FUN_01a51334(param_1,&DAT_03a7ca60,*(undefined4 *)puVar2);
      FUN_01a51334(param_1,&DAT_03a7ca68,*(undefined4 *)(lVar6 + param_2 * 0x30 + 0x28));
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


