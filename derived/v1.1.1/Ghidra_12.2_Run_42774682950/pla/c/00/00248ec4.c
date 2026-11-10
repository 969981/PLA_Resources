/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00248ec4; name: FUN_00248ec4
 */


void FUN_00248ec4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  FUN_00242014();
  *param_1 = (long)(PTR_DAT_04372b18 + 0x10);
  param_1[0x1f] = 0;
  plVar4 = param_1 + 0x1e;
  *plVar4 = 0;
  if ((param_5 == 0) || (lVar7 = param_5, *(short *)(param_6 + 0x44) != 0)) {
    lVar7 = param_4;
  }
  uVar5 = (uint)*(byte *)(lVar7 + 0x66);
  bVar1 = *(byte *)(lVar7 + 0x67);
  if (2 < uVar5) {
    uVar5 = 3;
  }
  param_1[0x1b] = 0;
  param_1[0x1c] = -1;
  param_1[0x1d] = -1;
  if ((uVar5 != 0) && ((bVar1 & 1) == 0)) {
    FUN_0022cf34(param_1 + 0x1e);
    FUN_0022cf70(param_1 + 0x1e,uVar5);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar7 + 0x54);
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(lVar7 + 0x58);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar7 + 0x5c);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar7 + 0x60);
  if (uVar5 == 0) {
    uVar6 = 0x68;
  }
  else {
    if (((bVar1 & 1) == 0) && ((char)*plVar4 != '\0')) {
      FUN_0022d10c(plVar4,lVar7 + 0x68,uVar5);
    }
    uVar6 = (ulong)(uVar5 * 0x20 + 0x68);
  }
  if ((bVar1 & 1) != 0) {
    FUN_002490b0(param_1,param_2,param_3,lVar7,param_6,*(undefined4 *)(lVar7 + uVar6));
  }
  uVar2 = FUN_0022d180(*(undefined8 *)(param_6 + 0x30),*(undefined2 *)(param_4 + 100));
  uVar3 = 0;
  if (param_5 != 0) {
    uVar3 = FUN_0022d180(*(undefined8 *)(param_6 + 0x38),*(undefined2 *)(param_5 + 100));
  }
  plVar4 = (long *)FUN_00232654(0x50);
  if (plVar4 != (long *)0x0) {
    *plVar4 = (long)(PTR_DAT_04372cb0 + 0x10);
    FUN_0023aa78(plVar4,param_2,param_3,uVar2,uVar3,param_6);
  }
  param_1[0x1b] = (long)plVar4;
  FUN_0023c5a4(plVar4,param_2,param_3,param_6);
  FUN_002492ec(param_1,param_2,param_3);
  return;
}


