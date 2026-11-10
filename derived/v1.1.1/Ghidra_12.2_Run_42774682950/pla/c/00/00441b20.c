/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00441b20; name: FUN_00441b20
 */


ulong FUN_00441b20(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  ulong param_5,code *param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong local_50;
  undefined8 uStack_48;
  ulong local_38;
  
  if (param_5 < 0x10) {
    return 0;
  }
  if ((param_5 & 0xffffffff80000007) != 0) {
    return 0;
  }
  if (param_5 - 0x10 == 0) {
    (*param_6)(param_4,&local_50);
    local_38 = local_50;
    *param_3 = uStack_48;
    FUN_004006a0(&local_50,0x10);
    lVar4 = 8;
  }
  else {
    lVar4 = param_5 - 8;
    lVar2 = FUN_00441660(param_1,&local_38,param_3,param_4,param_5);
    if (lVar4 != lVar2) goto LAB_00441c38;
  }
  if (param_2 == 0) {
    iVar1 = FUN_00404df0(&local_38,&DAT_03a0bc30,4);
  }
  else {
    iVar1 = FUN_00404df0(&local_38,param_2,4);
  }
  if ((((iVar1 == 0) &&
       (uVar3 = (local_38 >> 0x20 & 0xff) << 0x18 | (local_38 >> 0x28 & 0xff) << 0x10 |
                (local_38 >> 0x30 & 0xff) << 8 | local_38 >> 0x38,
       (param_5 - 0x10 & 0xfffffffffffffff8) < uVar3)) &&
      (uVar3 <= (param_5 - 8 & 0xfffffffffffffff8))) &&
     (iVar1 = FUN_00404df0((long)param_3 + uVar3,&DAT_0439e8b8,lVar4 - uVar3), iVar1 == 0)) {
    return uVar3;
  }
LAB_00441c38:
  FUN_004006a0(param_3,param_5);
  return 0;
}


