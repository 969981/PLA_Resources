/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d7530; name: FUN_004d7530
 */


long FUN_004d7530(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [48];
  
  *param_2 = 0x73;
  if ((*(code **)(param_1 + 0x778) != (code *)0x0) &&
     (lVar2 = (**(code **)(param_1 + 0x778))(param_1,param_2,*(undefined8 *)(param_1 + 0x770)),
     (int)lVar2 != 0)) {
    return lVar2;
  }
  *param_2 = 0x50;
  if (((*(long *)(param_1 + 0x798) == 0) ||
      (((*(long *)(param_1 + 0x7a0) == 0 || (*(long *)(param_1 + 0x7a8) == 0)) ||
       (*(long *)(param_1 + 2000) == 0)))) || (iVar1 = FUN_00427b20(auStack_50,0x30), iVar1 < 1)) {
    return 2;
  }
  uVar3 = FUN_0040c710(auStack_50,0x30,0);
  *(undefined8 *)(param_1 + 0x7c8) = uVar3;
  FUN_004006a0(auStack_50,0x30);
  lVar2 = FUN_004d7d00(*(undefined8 *)(param_1 + 0x7c8),*(undefined8 *)(param_1 + 0x798),
                       *(undefined8 *)(param_1 + 0x7a0),*(undefined8 *)(param_1 + 2000));
  *(long *)(param_1 + 0x7b0) = lVar2;
  return (ulong)(lVar2 == 0) << 1;
}


