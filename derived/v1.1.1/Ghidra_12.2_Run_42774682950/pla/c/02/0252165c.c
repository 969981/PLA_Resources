/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0252165c; name: FUN_0252165c
 */


void FUN_0252165c(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [128];
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  lVar4 = FUN_001511d0(param_1,1);
  uVar7 = *(undefined8 *)(lVar4 + ((ulong)(uint)-(int)lVar4 & 7));
  if ((*PTR_DAT_04384688 != '\0') && (iVar1 = FUN_00155630(param_1,1,"class_cast"), iVar1 != 0)) {
    pcVar5 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar6 = FUN_020a01ac();
    uVar7 = (*pcVar5)(uVar7,uVar6);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  uVar7 = FUN_025215f0(param_1,lVar3 + 0x168,uVar7);
  FUN_0014ff10(param_1,0);
  FUN_00e193bc();
  puVar2 = (undefined8 *)FUN_00e337a0(param_1);
  *puVar2 = uVar7;
  FUN_00e339b4(auStack_b0 + 0x80);
  return;
}


