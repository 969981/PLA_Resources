/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02550458; name: FUN_02550458
 */


void FUN_02550458(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  lVar3 = *(long *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04384aa8 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar6 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_020eee9c();
    lVar3 = (*pcVar6)(lVar3,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar6 = *(code **)(lVar2 + 0x98);
  if ((*(ulong *)(lVar2 + 0xa0) & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0xa0) >> 1)));
  }
  (*pcVar6)(&local_70);
  FUN_0014ff10(param_1,0);
  FUN_02548140();
  puStack_38 = DAT_043e9360;
  if ((DAT_043e9350 & 1) == 0) {
    puStack_38 = &DAT_043e9351;
  }
  local_40 = param_1;
  puVar4 = (undefined8 *)FUN_0254a420(param_1);
  *puVar4 = local_70;
  puVar4[1] = uStack_68;
  puVar4[4] = local_50;
  puVar4[5] = uStack_48;
  puVar4[2] = local_60;
  puVar4[3] = uStack_58;
  FUN_0254a618(&local_40);
  return;
}


