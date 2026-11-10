/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02446708; name: FUN_02446708
 */


void FUN_02446708(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  lVar2 = FUN_001511d0(param_1,1);
  lVar2 = *(long *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7));
  if ((*PTR_DAT_04386f18 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar4 = FUN_0240a4bc();
    lVar2 = (*pcVar5)(lVar2,uVar4);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar5 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  (*pcVar5)(&local_70);
  FUN_0014ff10(param_1,0);
  FUN_0243e6a8();
  puStack_38 = DAT_043e57e0;
  if ((DAT_043e57d0 & 1) == 0) {
    puStack_38 = &DAT_043e57d1;
  }
  local_40 = param_1;
  puVar3 = (undefined8 *)FUN_0243fe90(param_1);
  *puVar3 = local_70;
  puVar3[1] = uStack_68;
  puVar3[4] = local_50;
  puVar3[5] = uStack_48;
  puVar3[2] = local_60;
  puVar3[3] = uStack_58;
  FUN_02440088(&local_40);
  return;
}


