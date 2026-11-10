/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fea67c; name: FUN_01fea67c
 */


void FUN_01fea67c(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_04380d08 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_01756c9c();
    uVar7 = (*pcVar5)(uVar7,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  FUN_01fea500(&uStack_70,param_1,(long)register0x00000008 + -0x30,lVar3 + 0x80,uVar7);
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


