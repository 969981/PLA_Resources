/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d884f4; name: FUN_00d884f4
 */


void FUN_00d884f4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_00d87078();
  puVar1 = PTR_DAT_0437b4c8;
  DAT_043acf30 = DAT_043acf38;
  FUN_00d885d0(DAT_043acf38,*(undefined8 *)PTR_DAT_0437b4c8);
  FUN_00d88630(&local_60,param_1);
  lVar3 = local_60;
  *(undefined8 *)(local_60 + 8) = param_1;
  *(long *)(local_60 + 0x10) = local_60;
  *(undefined8 *)(local_60 + 0x18) = 0xa0;
  *(undefined8 *)(local_60 + 0x20) = 8;
  *(long *)puVar1 = local_60;
  FUN_00d87078();
  DAT_043acf30 = DAT_043acf38;
  local_70 = uStack_50;
  local_80 = local_60;
  uStack_78 = local_58;
  local_68 = local_48;
  local_60 = 0;
  lVar2 = *(long *)(DAT_043acf38 + 0x50);
  if ((ulong)(*(long *)(DAT_043acf38 + 0x58) - lVar2) <
      (ulong)(*(long *)(DAT_043acf38 + 0x60) - lVar2)) {
    FUN_00d887e8((long *)(DAT_043acf38 + 0x50),lVar2,&local_80);
    lVar3 = local_80;
  }
  local_80 = 0;
  if (lVar3 != 0) {
    FUN_00d85e08(&uStack_78,lVar3);
  }
  return;
}


