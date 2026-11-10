/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020a1eec; name: FUN_020a1eec
 */


void FUN_020a1eec(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  lVar4 = *(long *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_04383550 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_01fd9b5c();
    lVar4 = (*pcVar5)(lVar4,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pcVar5 = *(code **)(lVar3 + 200);
  if ((*(ulong *)(lVar3 + 0xd0) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(lVar4 + ((long)*(ulong *)(lVar3 + 0xd0) >> 1)));
  }
  (*pcVar5)(&uStack_70);
  FUN_0014ff10(param_1,0);
  FUN_01755be4();
  puVar2 = (undefined8 *)FUN_01755e20(param_1);
  puVar2[2] = uStack_60;
  puVar2[3] = uStack_58;
  *puVar2 = uStack_70;
  puVar2[1] = uStack_68;
  puVar2[6] = uStack_40;
  puVar2[7] = uStack_38;
  puVar2[4] = uStack_50;
  puVar2[5] = uStack_48;
  FUN_01756034((long)register0x00000008 + -0x30);
  return;
}


