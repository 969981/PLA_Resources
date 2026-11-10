/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fdf0a0; name: FUN_01fdf0a0
 */


void FUN_01fdf0a0(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  byte *pbStack_38;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_0437d1f8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00efe95c();
    lVar2 = (*pcVar6)(lVar2,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  (*pcVar6)(&local_80);
  FUN_0014ff10(param_1,0);
  pbVar3 = (byte *)FUN_01755be4();
  pbStack_38 = *(byte **)(pbVar3 + 0x10);
  if ((*pbVar3 & 1) == 0) {
    pbStack_38 = pbVar3 + 1;
  }
  local_40 = param_1;
  puVar4 = (undefined8 *)FUN_01755e20(param_1);
  puVar4[2] = local_70;
  puVar4[3] = uStack_68;
  *puVar4 = local_80;
  puVar4[1] = uStack_78;
  puVar4[6] = local_50;
  puVar4[7] = uStack_48;
  puVar4[4] = local_60;
  puVar4[5] = uStack_58;
  FUN_01756034(&local_40);
  return;
}


