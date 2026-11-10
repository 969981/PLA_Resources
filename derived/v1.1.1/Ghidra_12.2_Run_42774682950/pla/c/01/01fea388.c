/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fea388; name: FUN_01fea388
 */


void FUN_01fea388(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar3 = FUN_001511d0(param_1,1);
  uVar7 = *(undefined8 *)(lVar3 + ((ulong)(uint)-(int)lVar3 & 7));
  if ((*PTR_DAT_04380d08 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar4 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar5 = FUN_01756c9c();
    uVar7 = (*pcVar4)(uVar7,uVar5);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  FUN_01fea500(&local_70,param_1,(long)register0x00000008 + -0x30,lVar2 + 0x80,uVar7);
  FUN_0014ff10(param_1,0);
  FUN_01755be4();
  puVar6 = (undefined8 *)FUN_01755e20(param_1);
  puVar6[2] = local_60;
  puVar6[3] = uStack_58;
  *puVar6 = local_70;
  puVar6[1] = uStack_68;
  puVar6[6] = local_40;
  puVar6[7] = uStack_38;
  puVar6[4] = local_50;
  puVar6[5] = uStack_48;
  FUN_01756034((long)register0x00000008 + -0x30);
  return;
}


