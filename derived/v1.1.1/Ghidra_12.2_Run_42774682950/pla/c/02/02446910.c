/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02446910; name: FUN_02446910
 */


void FUN_02446910(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  lVar3 = FUN_001511d0(param_1,2);
  uVar6 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_0437c708 != '\0') && (iVar2 = FUN_00155630(param_1,2,"class_cast"), iVar2 != 0)) {
    pcVar7 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_00ea12ac();
    uVar6 = (*pcVar7)(uVar6,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar7 = (code *)*param_2;
  plVar1 = (long *)(param_3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar7 = *(code **)(pcVar7 + *plVar1);
  }
  (*pcVar7)(&local_70,plVar1,uVar6);
  FUN_0014ff10(param_1,0);
  FUN_0243e6a8();
  puStack_38 = DAT_043e57e0;
  if ((DAT_043e57d0 & 1) == 0) {
    puStack_38 = &DAT_043e57d1;
  }
  local_40 = param_1;
  puVar4 = (undefined8 *)FUN_0243fe90(param_1);
  *puVar4 = local_70;
  puVar4[1] = uStack_68;
  puVar4[4] = local_50;
  puVar4[5] = uStack_48;
  puVar4[2] = local_60;
  puVar4[3] = uStack_58;
  FUN_02440088(&local_40);
  return;
}


